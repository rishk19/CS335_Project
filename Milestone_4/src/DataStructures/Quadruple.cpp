#include<bits/stdc++.h>
#include "../Includes.hpp"

string view_quad(struct Quad* qd){

    string ans = "";

    string op = "";
    op = op_to_str(qd->op);

    string res = "";
    if(qd->result.status == IS_LABEL){
        res = "goto line number: " + qd->result.label;
    }
    else if(qd->result.status == IS_LITERAL){
        res = "bad result not possible";
        return res;
    }
    else if(qd->result.status == IS_VARIABLE){
        res = qd->result.symbol_entry->name;
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
        arg_1 = qd->arg_1.symbol_entry->name;
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
        arg_2 = qd->arg_2.symbol_entry->name;
    }

    ans = op + " " + arg_1 + " " + arg_2 + " " + res;
    return ans;

}

vector<string> view_quadruple(vector<Quad> quad){

    vector<string> printQuad;
    printQuad.clear();
    for(int i = 0; i<quad.size(); i++){
        printQuad.push_back(view_quad(&quad[i]));
    }

    return printQuad;
}