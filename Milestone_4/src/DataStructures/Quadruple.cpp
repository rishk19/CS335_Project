#include<bits/stdc++.h>
#include "../Includes.hpp"

string view_quad(struct Quad* qd){
    string ans = "";

    string op = "";
    op = op_to_str(qd->op.op);

    string res = "";
    if(qd->result.status == IS_LABEL){
        res = qd->result.label;
    }
    else if(qd->result.status == IS_LITERAL){
        res = "bad result not possible";
        return res;
    }
    else if(qd->result.status == IS_VARIABLE){
        qd->result.symbol_entry = check_scope(qd->my_table,qd->result.literal);
        //view_symbol(*qd->result.symbol_entry);
        if(qd->result.symbol_entry == NULL)
        {
            cout << "Result symbol table is NULL" <<endl;
        }
        else{
            res = qd->result.symbol_entry->name;
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
        qd->arg_1.symbol_entry = check_scope(qd->my_table,qd->arg_1.literal);
        if(qd->arg_1.symbol_entry == NULL)
        {
            //cout << qd->arg_1.literal << endl;
            //view_symbol_table_with_parent_hierarchy(qd->my_table);

            cout << "Argument 1 symbol table is NULL" <<endl;
        }
        else{
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
        qd->arg_2.symbol_entry = check_scope(qd->my_table,qd->arg_2.literal);
        //view_symbol_table_with_parent_hierarchy(qd->my_table);
        if(qd->arg_2.symbol_entry == NULL)
        {
            cout << qd->arg_2.literal << endl;
            //view_symbol_table_with_parent_hierarchy(qd->my_table);

            cout << "Argument 2 symbol table is NULL" <<endl;
        }
        else{
            arg_2 = qd->arg_2.symbol_entry->name;
        }
    }

    ans = "    " + res + " = " + arg_1 + " " + op +  " "  +  arg_2 ;

    if(qd->op.op == Jmp_){
        ans  = "    " + string("jmp ") + res;
    }
    else if(qd->op.op == Label_){
        ans = res;
    }
    else if(qd->op.op == Compare_){
        ans = "    " + string("cmp ") + arg_1 + " " + arg_2 + "\n" + "    jne " + res;
    }

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
    temp_symbol->line_num = symb.line_num;
    long long int x = loc_insert(curr, *temp_symbol);
    if(x < 0)
    {
        cout << "Temporary Redeclaration for " << temp  << " for statement at line number " <<-x << endl <<endl;
    }
    return 1;
}