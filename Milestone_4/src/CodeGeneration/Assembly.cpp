#include"../Includes.hpp"

using namespace std;
#define ASSEMBLER_ERROR -1

string getOperator(Op op){
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


int quad_to_assembly(struct Quad* quad ){
    
    switch (quad->op.op)
    {
    case Addition_:
        return binary_to_assembly(quad);
        break;
    
    default:
        break;
    }


    return 0;
}


int binary_to_assembly(struct Quad* quad){
    //op.op binary operator
    //x, y, z
    vector<string> res;
    string assemble = "";
    struct Symbol * symb = NULL;
    if(quad->arg_1.status == IS_VARIABLE){
        symb = check_scope(quad->my_table, quad->arg_1.literal);
        if(symb==NULL) return ASSEMBLER_ERROR;
        assemble ="movq " +to_string(symb->offset)+"(%rbp)" +" %r12";
    }
    else{
        assemble +="movq $" +quad->arg_1.literal+" %r12";
    }
    res.push_back(assemble);
    symb = NULL;
    assemble = "";

    if(quad->arg_2.status == IS_VARIABLE){
        
        symb = check_scope(quad->my_table, quad->arg_1.literal);
        
        if(symb==NULL) return ASSEMBLER_ERROR;
        
        assemble = "movq " +to_string(symb->offset)+"(%rbp)" +" %r13";

    }
    else{
        
        assemble +="movq $" +quad->arg_2.literal+" %r13";
    
    }
    
    res.push_back(assemble);
    symb = NULL;
    assemble = "";

    res.push_back(getOperator(quad->op.op)+" "+" %r12" +" %r13");

    if(quad->result.status == IS_VARIABLE){
        
        symb = check_scope(quad->my_table, quad->result.literal);
        
        if(symb==NULL) return ASSEMBLER_ERROR;
        
        assemble = "movq %r13 " +to_string(symb->offset)+"(%rbp)";
    
    }

    return 0;

}
