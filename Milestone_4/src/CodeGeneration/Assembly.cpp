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
    string temp1 = "assign temp first";
    string temp2 = "assign temp first";
    string temp3 = "assign temp first";
    string r12 = "\%r12";
    string r13 = "\%r13";
    string rax = "\%rax";
    string al = "\%al";
    string eax = "\%eax";
    string rdx = "\%rdx";
    string edx = "\%edx";
    string ecx = "\%ecx";
    string cl = "\%cl";

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
        
        break;
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
    case Product_:
        assembly_template.push_back(load_inst(quad->arg_1, r12, quad->my_table));
        assembly_template.push_back(load_inst(quad->arg_2, r13, quad->my_table));
        assembly_template.push_back("imulq " + r12 + " " + r13);
        assembly_template.push_back(store_inst(quad->result, r13, quad->my_table));
        break;
    case Divide_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back("cqto");
        assembly_template.push_back(division_inst(quad->arg_2, quad->my_table ));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
        break;

    case NotOperator_:
        assembly_template.push_back(cmpq_inst(quad->arg_1, "0", quad->my_table));
        assembly_template.push_back(set_inst("sete",al));
        assembly_template.push_back(gen_new_inst("movzbl",al,eax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
        break;
    case AndOperator_:
        assembly_template.push_back(cmpq_inst(quad->arg_1,"0", quad->my_table));
        temp1 = makeNewLabel(newTempLabel++);
        assembly_template.push_back(jump_inst("je",temp1));
        assembly_template.push_back(cmpq_inst(quad->arg_2,"0", quad->my_table));
        assembly_template.push_back(jump_inst("je",temp1));
        assembly_template.push_back(gen_new_inst("movl","$1",eax));
        temp2 = makeNewLabel(newTempLabel++);
        assembly_template.push_back(jump_inst("jmp",temp2));
        assembly_template.push_back("."+temp1+":");
        assembly_template.push_back(gen_new_inst("movl","$0",eax));
        assembly_template.push_back("."+temp2+":");
        assembly_template.push_back("cltq");
        assembly_template.push_back(store_inst(quad->result,rax,quad->my_table));
        break;
    case OrOperator_:
        assembly_template.push_back(cmpq_inst(quad->arg_1,"0", quad->my_table));
        temp1 = makeNewLabel(newTempLabel++);
        assembly_template.push_back(jump_inst("jne",temp1));
        assembly_template.push_back(cmpq_inst(quad->arg_2,"0", quad->my_table));
        temp2 = makeNewLabel(newTempLabel++);
        assembly_template.push_back(jump_inst("je",temp2));
        assembly_template.push_back("."+temp1+":");
        assembly_template.push_back(gen_new_inst("movl","$1",eax));
        temp3 = makeNewLabel(newTempLabel++);
        assembly_template.push_back(jump_inst("jmp",temp3));
        assembly_template.push_back("."+temp2+":");
        assembly_template.push_back(gen_new_inst("movl","$0",eax));
        assembly_template.push_back("."+temp3+":");
        assembly_template.push_back("cltq");
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
        break;
    case BitwiseAnd_:
        assembly_template.push_back(load_inst(quad->arg_1, r13, quad->my_table));
        assembly_template.push_back(and_inst(quad->arg_2, r13, quad->my_table));
        assembly_template.push_back(store_inst(quad->result, r13, quad->my_table));
        break;
    case BitwiseOr_:
        assembly_template.push_back(load_inst(quad->arg_1, r13, quad->my_table));
        assembly_template.push_back(or_inst(quad->arg_2, r13, quad->my_table));
        assembly_template.push_back(store_inst(quad->result, r13, quad->my_table));
        break;
    case GreaterThan_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(cmpq_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(set_inst("setg", al));
        assembly_template.push_back(gen_new_inst("movzbl", al, eax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));

    case LessThan_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(cmpq_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(set_inst("setl", al));
        assembly_template.push_back(gen_new_inst("movzbl", al, eax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));

    case GreaterThanEqualTo_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(cmpq_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(set_inst("setge", al));
        assembly_template.push_back(gen_new_inst("movzbl", al, eax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));

    case LessThanEqualTo_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(cmpq_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(set_inst("setle", al));
        assembly_template.push_back(gen_new_inst("movzbl", al, eax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));

    case EqualToEqualTo_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(cmpq_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(set_inst("sete", al));
        assembly_template.push_back(gen_new_inst("movzbl", al, eax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));

    case NotEqualTo_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(cmpq_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(set_inst("setne", al));
        assembly_template.push_back(gen_new_inst("movzbl", al, eax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
    // case UnaryAddition_:
    //     assembly_template.push_back(load_inst(quad->arg_1, r12, quad->my_table));
    //     assembly_template.push_back(store_inst(quad->result, r12, quad->my_table));
    
    // case UnarySubstraction_:
    //     assembly_template.push_back(load_inst(quad->arg_1, r12, quad->my_table));
    //     assembly_template.push_back(gen_new_inst("negq", r12,""));
    //     assembly_template.push_back(store_inst(quad->result, r12, quad->my_table));

    case Modulo_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back("cqto");
        assembly_template.push_back(division_inst(quad->arg_2, quad->my_table));
        assembly_template.push_back(store_inst(quad->result, rdx, quad->my_table));
    
    case CircumFlex_:
        assembly_template.push_back(load_inst(quad->arg_1, r13, quad->my_table));
        assembly_template.push_back(xor_inst(quad->arg_2, r12, quad->my_table));
        assembly_template.push_back(store_inst(quad->result, r12, quad->my_table));
    
    case Tilde_:
        assembly_template.push_back(load_inst(quad->arg_1, r12, quad->my_table));
        assembly_template.push_back(gen_new_inst("notq", r12,""));
        assembly_template.push_back(store_inst(quad->result, r12, quad->my_table));
    case LeftShit_:
        assembly_template.push_back(load_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(gen_new_inst("movl",eax,edx));
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(gen_new_inst("movl",edx,ecx));
        assembly_template.push_back(gen_new_inst("salq",cl,rax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));

    case RightShift_:
        assembly_template.push_back(load_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(gen_new_inst("movl",eax,edx));
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(gen_new_inst("movl",edx,ecx));
        assembly_template.push_back(gen_new_inst("sarq",cl,rax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
    case LeftShitEqualTo_:
        assembly_template.push_back(load_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(gen_new_inst("movl",eax,ecx));
        assembly_template.push_back(salq_inst(quad->arg_1, cl, quad->my_table));
        assembly_template.push_back(store_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));

    case RightShiftEqualTo_:
        assembly_template.push_back(load_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(gen_new_inst("movl",eax,ecx));
        assembly_template.push_back(sarq_inst(quad->arg_1, cl, quad->my_table));
        assembly_template.push_back(store_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
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
        assembly += to_string(symb->offset)+"(\%rbp)";
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
        assembly += to_string(symb->offset)+"(\%rbp)";
    }
    return assembly;
}

string division_inst(struct Argument arg, struct SymbolTable *my_table){
    string assembly = "idivq ";
    if(arg.status= IS_LITERAL){
        assembly += "$" + arg.literal;
    }
    else if(arg.status= IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp)";
    }
    return assembly;
}
string cmpq_inst(struct Argument arg, string literal, struct SymbolTable* my_table){
    string assembly = "cmpq $"+literal;
    if(arg.status == IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset) +"(\%rbp)";
    }
    else if(arg.status == IS_LITERAL){
        assembly += "$"+arg.literal;
    }
    return assembly;
}
string jump_inst(string jump_type, string label){
    return jump_type+" ." +label;

}

string set_inst(string set_type, string reg){
    return set_type +" "+reg;
}

string gen_new_inst(string inst, string reg_1, string reg_2){
    return inst+" "+reg_1+" "+reg_2;
}
string and_inst(struct Argument arg, string reg, struct SymbolTable * my_table)
{
    string assembly = "andq ";
    if(arg.status= IS_LITERAL){
        assembly += "$" + arg.literal;
    }
    else if(arg.status= IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp) ";
    }
    assembly+=reg;
    return assembly;
}
string or_inst(struct Argument arg, string reg, struct SymbolTable * my_table)
{
    string assembly = "orq ";
    if(arg.status= IS_LITERAL){
        assembly += "$" + arg.literal;
    }
    else if(arg.status= IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp) ";
    }
    assembly+=reg;
    return assembly;
}
string xor_inst(struct Argument arg, string reg, struct SymbolTable * my_table)
{
    string assembly = "xorq ";
    if(arg.status= IS_LITERAL){
        assembly += "$" + arg.literal;
    }
    else if(arg.status= IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp) ";
    }
    assembly+=reg;
    return assembly;
}

string salq_inst(struct Argument arg, string reg, struct SymbolTable * my_table)
{
    string assembly = "salq "+reg;
    if(arg.status= IS_LITERAL){
        assembly += "$" + arg.literal;
    }
    else if(arg.status= IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp) ";
    }
    return assembly;
}
string sarq_inst(struct Argument arg, string reg, struct SymbolTable * my_table)
{
    string assembly = "salq "+reg;
    if(arg.status= IS_LITERAL){
        assembly += "$" + arg.literal;
    }
    else if(arg.status= IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp) ";
    }
    return assembly;
}