#include"../Includes.hpp"

using namespace std;
#define ASSEMBLER_ERROR -1

string getOperator(Op op){
    switch (op){
        case NotOperator_:
            return "notq";
            break;
        case Tilde_:
            return "notq";
            break;
        case Empty_:
            return "";
            break;
        case EqualToEqualTo_:
            return "cmp";
            break;
        case GreaterThanEqualTo_:
            return "setge";
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
            return "addq";
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


vector<string> quad_to_assembly(struct Quad* quad ){
    vector<string> assembly_template;
    string r12 = "%r12";
    string r13 = "%r13";
    switch (quad->op.op)
    {
    case Addition_:
        assembly_template.push_back(load_inst(quad->arg_1, r12, quad->my_table));
        if(quad->arg_2.status != IS_EMPTY){
            assembly_template.push_back(load_inst(quad->arg_2, r13, quad->my_table));
            assembly_template.push_back("addq " + r12 + " " + r13);
            assembly_template.push_back(store_inst(quad->result, r13, quad->my_table));
        }
        else{
            assembly_template.push_back(store_inst(quad->result, r12, quad->my_table));
        }
        
    
    case Substraction_:
        assembly_template.push_back(load_inst(quad->arg_1, r12, quad->my_table));
        if(quad->arg_2.status != IS_EMPTY){
            assembly_template.push_back(load_inst(quad->arg_2, r13, quad->my_table));
            assembly_template.push_back("subq " + r12 + " " + r13);
            assembly_template.push_back(store_inst(quad->result, r13, quad->my_table));
        }
        else{
            assembly_template.push_back("negq r12" );
            assembly_template.push_back(store_inst(quad->result, r12, quad->my_table));

        }
        break;
    case NotOperator_:
        assembly_template.push_back(load_inst(quad->arg_1, r12, quad->my_table));
        


    default:
        break;
    }


    return assembly_template;
}

string load_inst(struct Argument arg, string reg, struct SymbolTable * my_table)
{
    string assembly = "movq ";
    if(arg.status= IS_LITERAL){
        assembly += "$" + arg.literal;
    }
    else if(arg.status= IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(%rbp)";
    }
    assembly += " " + reg;
    return assembly;
}

string store_inst(struct Argument arg, string reg, struct SymbolTable * my_table)
{
    string assembly = "movq " + reg + " ";
    if(arg.status= IS_LITERAL){
        assembly += "$" + arg.literal;
    }
    else if(arg.status= IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(%rbp)";
    }
    return assembly;
}
