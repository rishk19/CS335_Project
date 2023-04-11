#include<bits/stdc++.h>
#include "../Includes.hpp"

string view_quad(struct Quad* qd){
    string ans = "";

    string op = "";
    op = op_to_str(qd->op.op);

    string res = "";
    if(qd->result.status == IS_LABEL){
        res = "goto line number: " + qd->result.label;
    }
    else if(qd->result.status == IS_LITERAL){
        res = "bad result not possible";
        return res;
    }
    else if(qd->result.status == IS_VARIABLE){
        if(qd->result.symbol_entry == NULL)
        {
            cout << "Result symbol table is NULL" <<endl;
        }
        else{
            //cout << "I am here (res) pspsps" <<endl;
            res = qd->result.symbol_entry->name;
            //cout << res;
        }
    }

    string arg_1 = "";
    if(qd->arg_1.status == IS_LABEL){
        arg_1 = "bad argument not possible";
        return arg_1;
    }
    else if(qd->arg_1.status == IS_LITERAL){
        arg_1 = "#" + qd->arg_1.literal;
    }
    else if(qd->arg_1.status == IS_VARIABLE){
        if(qd->arg_1.symbol_entry == NULL)
        {
            cout << "Argument 1 symbol table is NULL" <<endl;
        }
        else{
            //cout << "I am here (1) pspsps" <<endl;
    
            //cout << qd->arg_1.symbol_entry->name << endl;
            arg_1 = qd->arg_1.symbol_entry->name;
        }
    }

    string arg_2 = "";
    if(qd->arg_2.status == IS_LABEL){
        arg_2 = "bad argument not possible";
        return arg_2;
    }
    else if(qd->arg_2.status == IS_LITERAL){
        arg_2 = "#" + qd->arg_2.literal;
        
    }
    else if(qd->arg_2.status == IS_VARIABLE){
        if(qd->arg_2.symbol_entry == NULL)
        {
            cout << "Argument 2 symbol table is NULL" <<endl;
        }
        else{
            //cout << "I am here (2) pspsps" <<endl;
            //cout << qd->arg_2.symbol_entry->name <<endl;
            arg_2 = qd->arg_2.symbol_entry->name;
        }
    }

    ans = res + " = " + arg_1 + " " + op +  " "  +  arg_2 ;
    return ans;


}

vector<string> view_quadruple(vector<Quad> quad){

    vector<string> printQuad;
    printQuad.clear();
    for(int i = 0; i<quad.size(); i++){
        //printQuad.push_back(view_quad(&quad[i]));
        cout << view_quad(&quad[i]) << endl;
    }
    

    return printQuad;
}

int insert_temp(struct Symbol symb,string temp, string op_type)
{
    struct Symbol * temp_symbol = new struct Symbol;
    *temp_symbol = symb;
    temp_symbol->name = temp;
    temp_symbol->type.name = op_type;
    temp_symbol->size = type_size(op_type);
    temp_symbol->type.t = 0;
    long long int x = loc_insert(curr, *temp_symbol);
    if(x < 0)
    {
        cout << "Temporary Redeclaration for " << temp  << " for statement at line number " <<-x << endl <<endl;
    }
    return 1;
}