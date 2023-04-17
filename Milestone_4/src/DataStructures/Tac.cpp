#include <bits/stdc++.h>
#include "../Includes.hpp"

using namespace std;

int checkCurr(){
    if(curr!=NULL)
        view_symbol_table(*curr);
    else {
        cout << "curr was null";
    }
    return 0;
}

int pushCode(Value &val, string str){
    
    if(str.size()==0){
        return NULL_STR;
    }
    else if(str.size() > 0 ){
        val.code.push_back(str);
        return POS_STR;
    }
    
    return NEG_STR;
}

int pushQuad(Value &val, Quad &quad)
{   
    val.quad.push_back(quad);
    return 1;
}

string makeNewTemp(long int i){
    if(i < 0){
        cout << " Negative index of temporary!!!\n";
        return "T_ERROR";
    }

    string t = "%t";
    t.append(to_string(i));
    return t;
}
string makeNewLabel(long int i){
    if(i < 0){
        cout << " Negative index of Label!!!\n";
        return "L_ERROR";
    }
    
    string t = "#L";
    t.append(to_string(i));
    //t.append(":");
    return t;
}

int copyValue(Value &v1, Value &v2){
    if(v2.place.size()!=0)
    {
        v1.place = v2.place;
        v1.status = v2.status;
    }

    if(v2.label.size()!=0)
    {
        v1.label = v2.label;
        v1.status = 2;
    }   

    int n = v2.code.size();
    for(int j = 0; j<n; j++){
        if(v2.code[j].size()!=0){
            v1.code.push_back(v2.code[j]);
        }
    }

    n = v2.quad.size();
    for(int j =0; j<n; j++){
        v1.quad.push_back(v2.quad[j]);
    }

    return GOOD_CPY;
}
int appendCode(Value &v1, Value&v2){

    int n = v2.code.size();
    for(int j = 0; j<n; j++){
        if(v2.code[j].size()!=0)
            v1.code.push_back(v2.code[j]);
    }

    n = v2.quad.size();
    for(int j=0; j<n; j++)
    {
        v1.quad.push_back(v2.quad[j]);
    }

    return GOOD_APPEND;
}

int genAssignCode(Value &S, Value &E){

    appendCode(S, E);
    string s_code = S.place;
    s_code.append(" = ");
    s_code.append(E.place);

    struct Quad* quad = new struct Quad;
    quad->op.op = Empty_;
    quad->op.type = "int";
    fill_arg(&quad->result, S);
    fill_arg(&quad->arg_1, E);
    quad->arg_2.status = IS_EMPTY;
    quad->my_table = curr;
    pushQuad(S,*quad);
    
    pushCode(S, s_code);


    return 0;
}
int genBinaryOperatorCode(Value &S, Value &E1, Value &E2, string temp, string op){
        
        S.place = temp;
        appendCode(S, E1);
        appendCode(S, E2);
        string s_code = temp;
        s_code.append(" = ");
        s_code.append(E1.place);
        s_code.append(op);
        s_code.append(E2.place);
        //cout << "This is being pushed: "<<s_code<<endl;
        pushCode(S, s_code);

        struct Quad * quad = new struct Quad;

        quad->op = str_to_op(op);
        fill_arg(&quad->result, S);
        fill_arg(&quad->arg_1, E1);
        fill_arg(&quad->arg_2, E2);
        quad->my_table = curr;
        pushQuad(S,*quad);
        return 0;
}

int genUnaryOperatorCode(Value &S, Value &E, string temp, string op){
    
    S.place = temp;

    appendCode(S, E);
    string s_code = temp;
    s_code.append(" = ");
    s_code.append(op);
    s_code.append(E.place);
    pushCode(S, s_code);

    struct Quad quad;


    quad.op = str_to_op(op);
    fill_arg(&quad.result, S);
    fill_arg(&quad.arg_1, E);
    quad.arg_2.status = IS_EMPTY;
    quad.my_table = curr;
    pushQuad(S,quad);    

    return 0;

}

int genIfElseCode(Value &S, Value &E1, Value &E2, Value &E3, string L1, string L2){     // Quadruple left

    S.label = L1;
    S.label.push_back(',');
    S.label.append(L2);

    appendCode(S,E1);
    
    string s_code = "if ";
    s_code.append(E1.place);
    s_code.append(" goto ");
    s_code.append(L1);
    pushCode(S, s_code);
    s_code.clear();
    

    // First Quad
    struct Value * val = new struct Value;
    val->status = IS_LABEL;
    val->label = L1;
    //cout << L1 <<endl;

    struct Quad * quad = new struct Quad;
    fill_arg(&quad->result, *val);
    fill_arg(&quad->arg_1, E1);
    //cout << E2.place <<endl;
    //cout << quad->arg_1.literal <<endl;

    val->status = IS_LITERAL;
    val->place = "0";

    fill_arg(&quad->arg_2, *val);
    
    quad->my_table = curr;
    //view_symbol_table_with_parent_hierarchy(curr);
    quad->op.op = Compare_and_Jne_;
    quad->op.type = "int";

    pushQuad(S, *quad); 

    appendCode(S,E3);


    s_code = "goto ";
    s_code.append(L2);
    pushCode(S, s_code);
    //quad for goto
    val->status = IS_LABEL;
    val->label = L2;
    struct Quad * quad1 = new struct Quad;
    quad1->op.op = Jmp_;
    quad1->op.type = "int";
    quad1->my_table = curr;
    fill_arg(&quad1->result, *val);
    quad1->arg_1.status = IS_EMPTY;
    quad1->arg_2.status = IS_EMPTY;

    pushQuad(S,*quad1);

    // s_code.clear();
    // pushCode(S,s_code);
    struct Quad * quad2 = new struct Quad;
    quad2->op.op = Label_;
    quad2->op.type = "int";
    fill_arg(&quad2->result, *val);
    quad2->arg_1.status = IS_EMPTY;
    quad2->arg_2.status = IS_EMPTY;

    quad2->my_table = curr;
    pushQuad(S,*quad2);


    pushCode(S, L1);
    
    appendCode(S,E2);
    
    val->status=IS_LABEL;
    val->label= L2;
    struct Quad * quad3 = new struct Quad;
    quad3->op.op = Label_;
    quad3->op.type = "int";
    fill_arg(&quad3->result, *val);
    quad3->arg_1.status = IS_EMPTY;
    quad3->arg_2.status = IS_EMPTY;

    quad3->my_table = curr;
    pushCode(S, L2);
    pushQuad(S,*quad3);

    

    return 0;
}


int genWhileCode(Value &S, Value &E1, Value &E2, string L1, string L2){     // Quadruple Left
    
    S.label = L1;
    S.label.push_back(',');
    S.label.append(L2);

    struct Value * val = new struct Value;
    struct Quad * quad1 = new struct Quad;

    val->status = IS_LABEL;
    val->label = L1;

    quad1->op.op = Label_;
    quad1->op.type = "int";
    fill_arg(&quad1->result, *val);
    quad1->arg_1.status = IS_EMPTY;
    quad1->arg_2.status = IS_EMPTY;
    quad1->my_table = curr;
    pushQuad(S,*quad1);

    pushCode(S, L1);
    appendCode(S, E1);

    string s_code = "if ";
    s_code.append(E1.place);
    s_code.append(" == 0 goto ");
    s_code.append(L2);
    pushCode(S, s_code);

    struct Quad * quad2 = new struct Quad;
    val->label = L2;

    fill_arg(&quad2->result, *val);
    fill_arg(&quad2->arg_1, E1);
    
    val->status = IS_LITERAL;
    val->place = "0";

    fill_arg(&quad2->arg_2, *val);
    
    quad2->my_table = curr;
    quad2->op.op = Compare_and_Je_;
    quad2->op.type = "int";

    pushQuad(S, *quad2);




    s_code.clear();

    appendCode(S, E2);
    s_code = "goto ";
    s_code.append(L1);
    pushCode(S, s_code);

    val->status=IS_LABEL;
    val->label= L1;
    struct Quad * quad3 = new struct Quad;
    quad3->op.op = Jmp_;
    quad3->op.type = "int";
    quad3->my_table = curr;
    fill_arg(&quad3->result, *val);
    quad3->arg_1.status = IS_EMPTY;
    quad3->arg_2.status = IS_EMPTY;
    pushQuad(S,*quad3);


    pushCode(S, L2);

    val->label = L2;
    struct Quad * quad4 = new struct Quad;
    quad4->op.op = Label_;
    quad4->op.type = "int";
    quad4->my_table = curr;
    fill_arg(&quad4->result, *val);
    quad4->arg_1.status = IS_EMPTY;
    quad4->arg_2.status = IS_EMPTY;
    pushQuad(S, *quad4);



    return 0;
}

int genForCode(Value &S, Value &E1, Value &E2, Value &E3, Value &E4, string L1, string L2){     // Quadruple Left

        S.label = L1;
        S.label.push_back(',');
        S.label.append(L2);

        appendCode(S, E1);
        pushCode(S, L1);

        struct Value * val = new struct Value;
        val->status = IS_LABEL;
        val->label = L1;

        struct Quad * quad = new struct Quad;
        fill_arg(&quad->result,*val);
        quad->arg_1.status = IS_EMPTY;
        quad->arg_2.status = IS_EMPTY;
        quad->my_table = curr;
        quad->op.op = Label_;
        quad->op.type = "int";
        pushQuad(S,*quad);

        appendCode(S, E2);

        string s_code = "if ";
        s_code.append(E2.place);
        s_code.append(" = 0 goto ");
        s_code.append(L2);
        pushCode(S, s_code);
        s_code.clear();

        val->label = L2;
        struct Quad * quad2 = new struct Quad;
        fill_arg(&quad2->result, *val);
        fill_arg(&quad2->arg_1, E2);
        
        val->status = IS_LITERAL;
        val->place = "0";

        fill_arg(&quad2->arg_2, *val);
        quad2->my_table = curr;
        quad2->op.op = Compare_and_Je_;

        pushQuad(S, *quad2);

        appendCode(S, E4);
        appendCode(S, E3);
        
        s_code = "goto ";
        s_code.append(L1);
        pushCode(S, s_code);

        val->status = IS_LABEL;
        val->label = L1;

        fill_arg(&quad->result,*val);
        quad->arg_1.status = IS_EMPTY;
        quad->arg_2.status = IS_EMPTY;
        quad->my_table = curr;
        quad->op.op = Jmp_;
        quad->op.type = "int";
        pushQuad(S,*quad);

        s_code.clear();

        pushCode(S, L2);

        val->status = IS_LABEL;
        val->label = L2;

        fill_arg(&quad->result,*val);
        quad->arg_1.status = IS_EMPTY;
        quad->arg_2.status = IS_EMPTY;
        quad->my_table = curr;
        quad->op.op = Label_;
        quad->op.type = "int";
        pushQuad(S,*quad);


        return 0;
}

int genMethodInvocationCode(struct node* E[], int n){               // Quadruple Left
    if(E[0]==NULL || E[1]==NULL)return 1;

    string temp = makeNewTemp(newTempLabel);
    newTempLabel++;
    E[0]->val.place = temp;
    E[0]->val.place = temp;
    appendCode(E[0]->val, E[1]->val);
    long long int parameterSize = 0;
    int argSize = E[1]->arr.size();
    for(int i = 0; i< argSize ; i++){
        parameterSize+=E[1]->arr[i]->symbol.size;
    }
    pushCode(E[0]->val, "$rsp = $rsp - " + to_string(parameterSize) +  "// stack space for actual parameters ");
    int currSize = 0;
    for(int i = 0 ; i< argSize; i++){
        string param = "push ";
        if(E[1]->arr[i]->val.place.size()!=0){
            param.append(E[1]->arr[i]->val.place);
            param.append(" (" + to_string(currSize) + ")$rsp");

            currSize+=E[1]->arr[i]->symbol.size;
        }
        pushCode(E[0]->val, param);
    }
    pushCode(E[0]->val, "$rsp = $rsp - " + to_string(E[0]->symbol.size  + 8)+" // stack space for return value, pc");
    pushCode(E[0]->val, "push PC // pushin program counter ");

    string s_code = "call ";
    s_code.append(string(E[0]->data));
    s_code.append(to_string(n));
    s_code.append(" ");
    // s_code.append(temp);
    pushCode(E[0]->val, s_code);
    pushCode(E[0]->val, "$rsp = $rsp + 8");
    if(E[0]->symbol.size!=0)
        pushCode(E[0]->val, "load " +temp+" (0)$rsp "  + to_string(E[0]->symbol.size));
    pushCode(E[0]->val, "$rsp = $rsp - " + to_string(E[0]->symbol.size  + parameterSize) + "  // Popping return value and arguments");

    return 0;

}

int buildVal(struct node* E, int status){

    if(E==NULL)
        return -1;
    E->val.place = string(E->data);
    
     // cout <<"line "<<E->symbol.line_num <<" tac:buildVal: "<<E->val.place <<endl;
    E->val.code.clear();
    E->val.label.clear();
    E->val.status = status;


    return 0;
}

int buildTAC(struct node* E[], int n, int flag){
    
    string temp; 
    string L1;
    string L2;

    switch(flag){
        case COPY_CODE:
            if(n == 2 && E[1]!=NULL){
                copyValue(E[0]->val, E[1]->val);
                copyValue(E[0]->post_fix_val, E[1]->post_fix_val);
                //cout << E[0]->post_fix_val.code.size() <<endl;
                }   // Updated
            break;

        case APPEND_CODE:

            for(int i = 1; i < n; i++){
                if(E[i]!=NULL){
                    appendCode(E[0]->val, E[i]->val); //Updated
                    appendCode(E[0]->val,E[i]->post_fix_val);
                }
            }

            break;

        case ASSIGN_CODE:
            
            if(n == 2){
                if(E[1]!= NULL){
                    genAssignCode(E[0]->val, E[1]->val); 
                    appendCode(E[0]->val, E[1]->post_fix_val);
                }
                else{
                    genAssignCode(E[0]->val, dummyVal);
                }
            }

        case BINARY_CODE:
            
            if(n == 4){
               
                //assuming semantic error has been handled for max_type()
                string op_type = max_type(E[1]->symbol.type.name,E[2]->symbol.type.name);
                
                if(op_type!=E[1]->symbol.type.name){
                    string temp2 = makeNewTemp(newTempLabel);
                    newTempLabel = newTempLabel + 1;
                    pushCode(E[0]->val, temp2 + " = " + "cast_to_" + op_type + " " + E[1]->val.place);

                    struct Value * val = new struct Value;

                    val->status = E[1]->val.status;
                    val->place = E[1]->val.place;


                    E[1]->val.place = temp2;
                    E[1]->val.status - IS_VARIABLE;

                    insert_temp(E[1]->symbol, temp2, op_type);
                    struct Quad * quad = new struct Quad;
                    fill_arg(&quad->result , E[1]->val);
                    fill_arg(&quad->arg_1, *val);
                    quad->arg_2.status = IS_EMPTY;
                    quad->my_table = curr;
                    quad->op.op = Empty_;
                    quad->op.type = E[1]->symbol.type.name;
                    pushQuad(E[0]->val, *quad);

                    //E[1]->val.status = IS_VARIABLE;
                }
                
                if(op_type!=E[2]->symbol.type.name){
                    string temp2 = makeNewTemp(newTempLabel);
                    newTempLabel = newTempLabel + 1;
                    pushCode(E[0]->val, temp2 + " = " + "cast_to_"+op_type+" "+E[2]->val.place);

                    struct Value * val = new struct Value;

                    val->status = E[2]->val.status;
                    val->place = E[2]->val.place;

                    E[2]->val.place = temp2;
                    
                    insert_temp(E[2]->symbol, temp2, op_type);
                    E[2]->val.status = IS_VARIABLE;

                    struct Quad* quad = new struct Quad;
                    quad->my_table = curr;
                    quad->arg_2.status = IS_EMPTY;
                    quad->op.op = Empty_;
                    quad->op.type = E[2]->symbol.type.name;
                    fill_arg(&quad->result, E[2]->val);
                    fill_arg(&quad->arg_1, *val);

                    pushQuad(E[0]->val, *quad);
                }

                temp = makeNewTemp(newTempLabel);
                newTempLabel = newTempLabel + 1;
                
                insert_temp(E[0]->symbol, temp, E[0]->symbol.type.name);

                E[0]->val.status = IS_VARIABLE;
                E[0]->val.place = temp;
                op_type = " "+string(E[3]->data)+op_type+" ";
                // if(isNumericType(op_type)){
                //     op_type = " "+string(E[3]->data)+op_type+" ";
                // }
                // else{
                //     op_type = " "+string(E[3]->data)+" ";
                // }
                
                genBinaryOperatorCode(E[0]->val, E[1]->val, E[2]->val, temp, op_type);
                appendCode(E[1]->post_fix_val,E[2]->post_fix_val);
                appendCode(E[0]->post_fix_val, E[1]->post_fix_val);
    
            
            }
            break;
        
        case UNARY_CODE:
                
            if(n == 3){
                temp = makeNewTemp(newTempLabel);
                newTempLabel = newTempLabel + 1;

                insert_temp(E[1]->symbol, temp, E[1]->symbol.type.name);
                E[0]->val.status = IS_VARIABLE;
                E[0]->val.place = temp;
                string op_type = " "+string(E[2]->data)+E[1]->symbol.type.name+" ";
                genUnaryOperatorCode(E[0]->val, E[1]->val, temp, op_type);\
                appendCode(E[0]->post_fix_val, E[1]->post_fix_val);
            }
            break;
        
        case IF_CODE:

            if(n == 4 || n == 3){
                L1 = makeNewLabel(newTempLabel);
                newTempLabel = newTempLabel + 1;
                L2 = makeNewLabel(newTempLabel);
                newTempLabel = newTempLabel + 1; 
                genIfElseCode(E[0]->val , ((E[1]!=NULL) ? E[1]->val : dummyVal) , ((E[2]!=NULL) ? E[2]->val : dummyVal) , ((E[3]!=NULL) ? E[3]->val : dummyVal), L1 , L2 );
            }
            break;

        case WHILE_CODE:
            
            if(n == 3){
                L1 = makeNewLabel(newTempLabel);
                newTempLabel = newTempLabel + 1;
                L2 = makeNewLabel(newTempLabel);
                newTempLabel = newTempLabel + 1;
                genWhileCode(E[0]->val, ((E[1]!=NULL) ? E[1]->val : dummyVal) , ((E[2]!=NULL) ? E[2]->val : dummyVal), L1, L2);
            }
            
            break;

        case FOR_CODE:
            
            if(n == 5){
                L1 = makeNewLabel(newTempLabel);
                newTempLabel = newTempLabel + 1;
                L2 = makeNewLabel(newTempLabel);
                newTempLabel = newTempLabel + 1;
                genForCode(E[0]->val , ((E[1]!=NULL) ? E[1]->val : dummyVal) , ((E[2]!=NULL) ? E[2]->val : dummyVal) , ((E[3]!=NULL) ? E[3]->val : dummyVal), ((E[4]!=NULL) ? E[4]->val : dummyVal), L1 , L2 );
            }
         
         break;

         
        
        break;

        default :
            cout << "No flag Matching...\nCode not pushed...\n";
            return -1;
    }

    return 0;

}

void printThreeAC(Value val){
    int n = val.code.size();
    for(int i = 0; i<n; i++){
        cout << val.code[i] <<endl;
    }

    return ;
}

int genArrayAccess(struct node* E_1, struct node* E_2, struct node* E_3)
{
    appendCode(E_1->val, E_3->val);
    string temp1 = makeNewTemp(newTempLabel);
    newTempLabel++;
    E_1->val.status = IS_VARIABLE;

    E_1->val.place=temp1;
    string s_code = temp1 + " = " + E_3->val.place + " * " + to_string(E_1->symbol.size);

    struct Value val;
    val.status = IS_LITERAL;
    val.place = to_string(E_1->symbol.size);

    insert_temp(E_1->symbol, temp1, E_3->symbol.type.name);
    struct Quad quad;
    quad.op.op = Product_;
    quad.op.type = "int";
    fill_arg(&quad.result, E_1->val);
    fill_arg(&quad.arg_1, E_3->val);
    fill_arg(&quad.arg_2, val);

    quad.my_table = curr;
    pushQuad(E_1->val,quad);

    //cout << E_3->symbol.type.name << endl; 
    pushCode(E_1->val, s_code);
    //appendCode(E_1->val, E_1->post_fix_val);
    appendCode(E_1->post_fix_val, E_2->post_fix_val);
    appendCode(E_1->post_fix_val, E_3->post_fix_val);

    return 0;
}

int genArrayAccess2(struct node* E_1, struct node* E_2, struct node* E_3)
{
    appendCode(E_1->val, E_2->val);
    appendCode(E_1->val, E_3->val);
    string temp1 = makeNewTemp(newTempLabel);
    newTempLabel++;

    string s_code1 = temp1 + " = " + E_3->val.place + " * " +  to_string(E_1->symbol.size);
    pushCode(E_1->val,s_code1);
    E_1->val.place = temp1;
    E_1->val.status = IS_VARIABLE;

    struct Value val;
    val.status = IS_LITERAL;
    val.place = to_string(E_1->symbol.size); 

    insert_temp(E_1->symbol, temp1, E_3->symbol.type.name);
    struct Quad quad;
    quad.op.op = Product_;
    quad.op.type = "int";
    fill_arg(&quad.result, E_1->val);
    fill_arg(&quad.arg_1, E_3->val);
    fill_arg(&quad.arg_2, val);

    quad.my_table = curr;
    pushQuad(E_1->val,quad);


    string temp2 = makeNewTemp(newTempLabel);
    newTempLabel++;
    val = E_1->val;
    E_1->val.place = temp2;

    string s_code2 = temp2 + " = " +  E_2->val.place + " + " +  temp1;
    pushCode(E_1->val,s_code2);

    insert_temp(E_1->symbol, temp2, max_type(E_2->symbol.type.name, E_3->symbol.type.name));
    quad.op.op = Addition_;
    quad.op.type = "int";
    fill_arg(&quad.result, E_1->val);
    fill_arg(&quad.arg_1, E_2->val);
    fill_arg(&quad.arg_2, val);

    quad.my_table = curr;
    pushQuad(E_1->val,quad);
    appendCode(E_1->post_fix_val, E_2->post_fix_val);
    appendCode(E_1->post_fix_val, E_3->post_fix_val);


    return 0;
}