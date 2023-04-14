#include"../Includes.hpp"

Operator str_to_op(string op, string type){
    struct Operator new_operator;
    if(op == "+"){
        new_operator.op = Add;
        new_operator.type = type;
    }
    else if(op == "-"){
        new_operator.op = Sub;
        new_operator.type = type;
    }
    else if(op == "*"){
        new_operator.op = Mul;
        new_operator.type = type;
    }
    else if(op == "/"){
        new_operator.op = Div;
        new_operator.type = type;
    }
    else if(op == "||"){
        new_operator.op = Or;
        new_operator.type = type;
    }
    else if(op == "^"){
        new_operator.op = Xor;
        new_operator.type = type;
    }
    else if(op == "="){
        new_operator.op = Assign;
        new_operator.type = type;
    }
    else{
        cout << op <<endl;
        new_operator.op = Unknown;
        new_operator.type = type;
    }
    
    return new_operator;
}
string op_to_str(Op op){
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