#include"../Includes.hpp"

Operator str_to_op(string op_appended){

    int i =1;
    string op = "";
    string type = "";
    while(op_appended[i]-'a' < 0 || op_appended[i] - 'z' > 0){
        op.push_back(op_appended[i]);
        i+=1;
    }
    //op.push_back('\0');
    while(op_appended.size()-1 >= i){
        type.push_back(op_appended[i]);
        i+=1;
    }
    //cout << op << "  " << type <<endl;

    struct Operator new_operator;
    if(op == "+"){
        new_operator.op = Addition_;
        new_operator.type = type;
    }
    else if(op == "-"){
        new_operator.op = Substraction_;
        new_operator.type = type;
    }
    else if(op == "*"){
        new_operator.op = Product_ ;
        new_operator.type = type;
    }
    else if(op == "/"){
        new_operator.op = Divide_;
        new_operator.type = type;
    }
    else if(op == "||"){
        new_operator.op = OrOperator_;
        new_operator.type = type;
    }
    else if(op == "^"){
        new_operator.op = CircumFlex_;
        new_operator.type = type;
    }
    else if(op == "!"){
        new_operator.op = NotOperator_;
        new_operator.type = type;
    }
    else if(op == "~"){
        new_operator.op = Tilde_;
        new_operator.type = type;
    }
    else if(op == "?"){
        new_operator.op = QuestionMark_;
        new_operator.type = type;
    }
    else if(op == ":"){
        new_operator.op = Colon_;
        new_operator.type = type;
    }
    else if(op == "->"){
        new_operator.op = RightArrow_;
        new_operator.type = type;
    }
    else if(op == "=="){
        new_operator.op = EqualToEqualTo_;
        new_operator.type = type;
    }
    else if(op == ">="){
        new_operator.op = GreaterThanEqualTo_;
        new_operator.type = type;
    }
    else if(op == "<="){
        new_operator.op = LessThanEqualTo_;
        new_operator.type = type;
    }
    else if(op == "!="){
        new_operator.op = NotEqualTo_;
        new_operator.type = type;
    }
    else if(op == "&&"){
        new_operator.op = AndOperator_;
        new_operator.type = type;
    }
    else if(op == "||"){
        new_operator.op = OrOperator_;
        new_operator.type = type;
    }
    else if(op == "++"){
        new_operator.op = PlusPlus_;
        new_operator.type = type;
    }
    else if(op == "--"){
        new_operator.op = MinusMinus_;
        new_operator.type = type;
    }
    else if(op == "&"){
        new_operator.op = BitwiseAnd_;
        new_operator.type = type;
    }
    else if(op == "|"){
        new_operator.op = BitwiseOr_;
        new_operator.type = type;
    }
    else if(op == "%"){
        new_operator.op = Modulo_;
        new_operator.type = type;
    }
    else if(op == "<<"){
        new_operator.op = LeftShit_;
        new_operator.type = type;
    }
    else if(op == ">>"){
        new_operator.op = RightShift_;
        new_operator.type = type;
    }
    else if(op == ">>>"){
        new_operator.op = TripleGreaterThan_;
        new_operator.type = type;
    }
    else if(op == "+="){
        new_operator.op = AdditionEqualTo_;
        new_operator.type = type;
    }
    else if(op == "-="){
        new_operator.op = SubstractionEqualTo_;
        new_operator.type = type;
    }
    else if(op == "*="){
        new_operator.op = ProductEqualTo_;
        new_operator.type = type;
    }
    else if(op == "/="){
        new_operator.op = DivideEqualTo_;
        new_operator.type = type;
    }
    else if(op == "&="){
        new_operator.op = BitWiseAndEqualTo_;
        new_operator.type = type;
    }
    else if(op == "|="){
        new_operator.op = BitWiseOrEqualTo_;
        new_operator.type = type;
    }
    else if(op == "^="){
        new_operator.op = CircumFlexEqualTo_;
        new_operator.type = type;
    }
    else if(op == "%="){
        new_operator.op = ModuloEqualTo_;
        new_operator.type = type;
    }
    else if(op == "<<="){
        new_operator.op = LeftShitEqualTo_;
        new_operator.type = type;
    }
    else if(op == ">>="){
        new_operator.op = RightShiftEqualTo_;
        new_operator.type = type;
    }
    else if(op == ">>>="){
        new_operator.op = TripleGreaterThanEqualTo_;
        new_operator.type = type;
    }
    else if(op == ">"){
        new_operator.op = GreaterThan_;
        new_operator.type = type;
    }
    else if(op == "<"){
        new_operator.op = LessThan_;
        new_operator.type = type;
    }
    else if(op == ""){
        new_operator.op = Empty_;
        new_operator.type = type;
    }
    else{
        cout << op <<endl;
        new_operator.op = Unknown_;
        new_operator.type = type;
    }
    
    return new_operator;
}
string op_to_str(Op op){
    switch (op){
        case NotOperator_:
            return "!";
            break;
        case Tilde_:
            return "~";
            break;
        case QuestionMark_:
            return "?";
            break;
        case Empty_:
            return "";
            break;
        case Colon_:
            return ":";
            break;
        case RightArrow_:
            return "->";
            break;
        case EqualToEqualTo_:
            return "==";
            break;
        case GreaterThanEqualTo_:
            return ">=";
            break;
        case LessThanEqualTo_:
            return "<=";
            break;
        case NotEqualTo_:
            return "!=";
            break;
        case AndOperator_:
            return "&&";
            break;
        case OrOperator_:
            return "||";
            break;
        case PlusPlus_:
            return "++";
            break;
        case MinusMinus_:
            return "--";
            break;
        case Addition_:
            return "+";
            break;
        case Substraction_:
            return "-";
            break;
        case Product_:
            return "*";
            break;
        case Divide_:
            return "/";
            break;
        case BitwiseAnd_:
            return "&";
            break;
        case BitwiseOr_:
            return "|";
            break;
        case CircumFlex_:
            return "^";
            break;
        case Modulo_:
            return "%";
            break;
        case LeftShit_:
            return "<<";
            break;
        case RightShift_:
            return ">>";
            break;
        case TripleGreaterThan_:
            return ">>>";
            break;
        case AdditionEqualTo_:
            return "+=";
            break;
        case SubstractionEqualTo_:
            return "-=";
            break;
        case ProductEqualTo_:
            return "*=";
            break;
        case DivideEqualTo_:
            return "/=";
            break;
        case BitWiseAndEqualTo_:
            return "&=";
            break;
        case BitWiseOrEqualTo_:
            return "|=";
            break;
        case CircumFlexEqualTo_:
            return "^=";
            break;
        case ModuloEqualTo_:
            return "%=";
            break;
        case LeftShitEqualTo_:
            return "<<=";
            break;
        case RightShiftEqualTo_:
            return ">>=";
            break;
        case TripleGreaterThanEqualTo_:
            return ">>>=";
            break;
        case GreaterThan_:
            return ">";
            break;
        case LessThan_:
            return "<";
            break;
        case Compare_and_Jne_:
            return "cmp";
            break;
        case Compare_and_Je_:
            return "cmp";
            break;
        case Jne_:
            return "Jne";
            break;
        case Jmp_:
            return "Jmp";
            break;
        case Label_:
            return "Label";
            break;
        case ArrayAccess_:
            return "ArrayAccess";
            break;
        case LoadArray_:
            return "LoadArray";
            break;
        case Pushq_:
            return "Pushq";
            break;
        case Movq_:
            return "Movq";
            break;
        case Popq_:
            return "Popq";
            break;
        case Push_:
            return "Push";
            break;
        case Mov_:
            return "Mov";
            break;
        case Pop_:
            return "Pop";
            break;
        case Retq_:
            return "retq";
            break;
        case Addq_:
            return "addq";
            break;
        case Subq_:
            return "subq";
            break;
        case Callq_:
            return "callq";
            break;
        default:
            break;
    }
    return "no matching operator";
}

