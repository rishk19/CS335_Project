#include"../Includes.hpp"

Operator str_to_op(string op){
    if(op == "+"){
        return Add;
    }
    else if(op == "-"){
        return Sub;
    }
    else if(op == "*"){
        return Mul;
    }
    else if(op == "/"){
        return Div;
    }
    else if(op == "||"){
        return Or;
    }
    else if(op == "^"){
        return Xor;
    }
    else if(op == "="){
        return Assign;
    }
    else{
        cout << op <<endl;
        return Unknown;
    }
    return Unknown;
}
string op_to_str(Operator op){
    switch (op){
        case Add:
            return "+";
            break;
        case Sub:
            return "-";
            break;
        case Mul:
            return "*";
            break;
        case Div:
            return  "/";
            break;

        case Or:
            return "||";
            break;

        case Xor:
            return "^";
            break;
            
        case Assign:
            return "=";
            break;

        default:
            break;
    }
    return "no matching operator";
}