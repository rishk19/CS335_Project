#include<bits/stdc++.h>
#include "../Includes.hpp"

string view_quad(struct Quad* qd){

    string ans = "";

    string op = "";
    switch (qd->op){
        case Add:
            op = "+";
            break;
        case Sub:
            op = "-";
            break;
        case Mul:
            op = "*";
            break;
        case Div:
            op = "/";
            break;

        case Or:
            op = "||";
            break;

        case Xor:
            op = "xor";
            break;
            
        case Assign:
            op = "=";
            break;

        default:
            op = "no matching operator";
            return op;
            break;
    }

    string res = "";
    if(qd->result.status == 2){
        res = "goto line number: " + to_string(qd->result.label);
    }
    else if(qd->result.status == 0){
        res = "bad result not possible";
        return res;
    }
    else if(qd->result.status == 1){
        res = qd->result.symbol_entry->name;
    }

    string arg_1 = "";
    if(qd->arg_1.status == 2){
        arg_1 = "bad argument not possible";
        return arg_1;
    }
    else if(qd->arg_1.status == 0){
        arg_1 = "#" + to_string(qd->arg_1.literal);
    }
    else if(qd->arg_1.status == 1){
        arg_1 = qd->arg_1.symbol_entry->name;
    }

    string arg_2 = "";
    if(qd->arg_2.status == 2){
        arg_2 = "bad argument not possible";
        return arg_2;
    }
    else if(qd->arg_2.status == 0){
        arg_2 = "#" + to_string(qd->arg_2.literal);
        
    }
    else if(qd->arg_2.status == 1){
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