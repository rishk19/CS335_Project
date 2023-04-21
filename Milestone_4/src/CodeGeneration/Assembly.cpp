#include"../Includes.hpp"

using namespace std;
#define ASSEMBLER_ERROR -1

vector<string> quad_to_assembly(struct Quad* quad ){
    vector<string> assembly_template;
    assembly_template.clear();
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
            assembly_template.push_back("\taddq " + r12 + " ," + r13);
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
            assembly_template.push_back("\tsubq " + r12 + " ," + r13);
            assembly_template.push_back(store_inst(quad->result, r13, quad->my_table));
        }
        else{
            assembly_template.push_back("\tnegq r12" );
            assembly_template.push_back(store_inst(quad->result, r12, quad->my_table));

        }
        break;
    case Product_:
        assembly_template.push_back(load_inst(quad->arg_1, r12, quad->my_table));
        assembly_template.push_back(load_inst(quad->arg_2, r13, quad->my_table));
        assembly_template.push_back("\timulq " + r12 + " ," + r13);
        assembly_template.push_back(store_inst(quad->result, r13, quad->my_table));
        break;
    case Divide_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back("\tcqto");
        assembly_template.push_back(division_inst(quad->arg_2, quad->my_table ));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
        break;

    case NotOperator_:
        assembly_template.push_back(cmpq_inst(quad->arg_1, "$0", quad->my_table));
        assembly_template.push_back(set_inst("sete",al));
        assembly_template.push_back(gen_new_inst("movzbl",al,eax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
        break;
    case AndOperator_:
        assembly_template.push_back(cmpq_inst(quad->arg_1,"$0", quad->my_table));
        temp1 = makeNewLabel(newTempLabel++);
        assembly_template.push_back(jump_inst("je",temp1));
        assembly_template.push_back(cmpq_inst(quad->arg_2,"$0", quad->my_table));
        assembly_template.push_back(jump_inst("je",temp1));
        assembly_template.push_back(gen_new_inst("movl","$1",eax));
        temp2 = makeNewLabel(newTempLabel++);
        assembly_template.push_back(jump_inst("jmp",temp2));
        assembly_template.push_back("."+temp1+":");
        assembly_template.push_back(gen_new_inst("movl","$0",eax));
        assembly_template.push_back("."+temp2+":");
        assembly_template.push_back("\tcltq");
        assembly_template.push_back(store_inst(quad->result,rax,quad->my_table));
        break;
    case OrOperator_:
        assembly_template.push_back(cmpq_inst(quad->arg_1,"$0", quad->my_table));
        temp1 = makeNewLabel(newTempLabel++);
        assembly_template.push_back(jump_inst("jne",temp1));
        assembly_template.push_back(cmpq_inst(quad->arg_2,"$0", quad->my_table));
        temp2 = makeNewLabel(newTempLabel++);
        assembly_template.push_back(jump_inst("je",temp2));
        assembly_template.push_back("."+temp1+":");
        assembly_template.push_back(gen_new_inst("movl","$1",eax));
        temp3 = makeNewLabel(newTempLabel++);
        assembly_template.push_back(jump_inst("jmp",temp3));
        assembly_template.push_back("."+temp2+":");
        assembly_template.push_back(gen_new_inst("movl","$0",eax));
        assembly_template.push_back("."+temp3+":");
        assembly_template.push_back("\tcltq");
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
        break;

    case LessThan_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(cmpq_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(set_inst("setl", al));
        assembly_template.push_back(gen_new_inst("movzbl", al, eax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
        break;

    case GreaterThanEqualTo_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(cmpq_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(set_inst("setge", al));
        assembly_template.push_back(gen_new_inst("movzbl", al, eax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
        break;

    case LessThanEqualTo_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(cmpq_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(set_inst("setle", al));
        assembly_template.push_back(gen_new_inst("movzbl", al, eax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
        break;

    case EqualToEqualTo_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(cmpq_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(set_inst("sete", al));
        assembly_template.push_back(gen_new_inst("movzbl", al, eax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
        break;

    case NotEqualTo_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(cmpq_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(set_inst("setne", al));
        assembly_template.push_back(gen_new_inst("movzbl", al, eax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
        break;

    // case UnaryAddition_:
    //     assembly_template.push_back(load_inst(quad->arg_1, r12, quad->my_table));
    //     assembly_template.push_back(store_inst(quad->result, r12, quad->my_table));
    
    // case UnarySubstraction_:
    //     assembly_template.push_back(load_inst(quad->arg_1, r12, quad->my_table));
    //     assembly_template.push_back(gen_new_inst("negq", r12,""));
    //     assembly_template.push_back(store_inst(quad->result, r12, quad->my_table));

    case Modulo_:
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back("\tcqto");
        assembly_template.push_back(division_inst(quad->arg_2, quad->my_table));
        assembly_template.push_back(store_inst(quad->result, rdx, quad->my_table));
        break;

    
    case CircumFlex_:
        assembly_template.push_back(load_inst(quad->arg_1, r13, quad->my_table));
        assembly_template.push_back(xor_inst(quad->arg_2, r12, quad->my_table));
        assembly_template.push_back(store_inst(quad->result, r12, quad->my_table));
        break;
        
    
    case Tilde_:
        assembly_template.push_back(load_inst(quad->arg_1, r12, quad->my_table));
        assembly_template.push_back(gen_new_inst("notq", r12,""));
        assembly_template.push_back(store_inst(quad->result, r12, quad->my_table));
        break;

    case LeftShit_:
        assembly_template.push_back(load_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(gen_new_inst("movl",eax,edx));
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(gen_new_inst("movl",edx,ecx));
        assembly_template.push_back(gen_new_inst("salq",cl,rax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
        break;

    case RightShift_:
        assembly_template.push_back(load_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(gen_new_inst("movl",eax,edx));
        assembly_template.push_back(load_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(gen_new_inst("movl",edx,ecx));
        assembly_template.push_back(gen_new_inst("sarq",cl,rax));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
        break;

    case LeftShitEqualTo_:
        assembly_template.push_back(load_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(gen_new_inst("movl",eax,ecx));
        assembly_template.push_back(salq_inst(quad->arg_1, cl, quad->my_table));
        assembly_template.push_back(store_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
        break;


    case RightShiftEqualTo_:
        assembly_template.push_back(load_inst(quad->arg_2, rax, quad->my_table));
        assembly_template.push_back(gen_new_inst("movl",eax,ecx));
        assembly_template.push_back(sarq_inst(quad->arg_1, cl, quad->my_table));
        assembly_template.push_back(store_inst(quad->arg_1, rax, quad->my_table));
        assembly_template.push_back(store_inst(quad->result, rax, quad->my_table));
    case Empty_:
        assembly_template.push_back(load_inst(quad->arg_1, r12, quad->my_table));
        assembly_template.push_back(store_inst(quad->result, r12, quad->my_table));
        break;
    case Pushq_:
        assembly_template.push_back(pp_inst(quad->result, "pushq", quad->my_table));
        break;
    case Movq_:
        assembly_template.push_back(load_inst(quad->arg_1, r12, quad->my_table));
        assembly_template.push_back(store_inst(quad->result, r12, quad->my_table));
        break;
    case Popq_:
        assembly_template.push_back(pp_inst(quad->result, "popq", quad->my_table));
        break;
    case Jmp_:
        assembly_template.push_back(jump_inst("jmp",quad->result.label));
        break;
    case Jne_:
        assembly_template.push_back(jump_inst("jne",quad->result.label));
        break;
    case Compare_and_Je_:
        assembly_template.push_back(cmpq_inst(quad->arg_1,"$" + quad->arg_2.literal,quad->my_table));
        assembly_template.push_back(jump_inst("je",quad->result.label));
        break;
    case Compare_and_Jne_:
        assembly_template.push_back(cmpq_inst(quad->arg_1,"$" + quad->arg_2.literal,quad->my_table));
        assembly_template.push_back(jump_inst("jne",quad->result.label));
        break;
    case Retq_:
        assembly_template.push_back("\tretq");
        break;
    case Label_:
        assembly_template.push_back("." + quad->result.label + ":");
        break;
    default:
        //cout << "Default" <<endl;
        break;

    }
    // cout << "Hello";
    return assembly_template;
}
string load_inst(struct Argument arg, string reg, struct SymbolTable * my_table)
{
    string assembly = "\tmovq ";
    if(arg.status == IS_LITERAL){
        assembly += "$" + arg.literal + " ,";
    }
    else if(arg.status == IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp) ,";
    }
    else if(arg.status == IS_REGISTER){
        assembly+=arg.literal + " ,";
    }
    assembly += " " + reg;
    return assembly;
}

string store_inst(struct Argument arg, string reg, struct SymbolTable * my_table)
{
    string assembly = "\tmovq " + reg + " ,";
    if(arg.status== IS_LITERAL){
        assembly += "$" + arg.literal;
    }
    else if(arg.status== IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp)";
    }
    else if(arg.status == IS_REGISTER){
        assembly+=arg.literal;
    }
    return assembly;
}


string division_inst(struct Argument arg, struct SymbolTable *my_table){
    string assembly = "\tidivq ";
    if(arg.status= IS_LITERAL){
        assembly += "$" + arg.literal;
    }
    else if(arg.status== IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp)";
    }
    else if(arg.status == IS_REGISTER){
        assembly+=arg.literal;
    }
    return assembly;
}
string cmpq_inst(struct Argument arg, string literal, struct SymbolTable* my_table){
    string assembly = "\tcmpq "+literal + " ,";
    if(arg.status == IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset) +"(\%rbp)";
    }
    else if(arg.status == IS_LITERAL){
        assembly += " $"+arg.literal;
    }
    return assembly;
}
string jump_inst(string jump_type, string label){
    return "\t" + jump_type+" ." +label;

}

string set_inst(string set_type, string reg){
    return "\t" + set_type +" "+reg;
}

string gen_new_inst(string inst, string reg_1, string reg_2){
    return "\t" + inst+" "+reg_1+" , "+reg_2;
}
string and_inst(struct Argument arg, string reg, struct SymbolTable * my_table)
{
    string assembly = "\tandq ";
    if(arg.status== IS_LITERAL){
        assembly += "$" + arg.literal + " ,";
    }
    else if(arg.status== IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp) ,";
    }
    assembly+=reg;
    return assembly;
}
string or_inst(struct Argument arg, string reg, struct SymbolTable * my_table)
{
    string assembly = "\torq ";
    if(arg.status== IS_LITERAL){
        assembly += "$" + arg.literal + " ,";
    }
    else if(arg.status== IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp) ,";
    }
    assembly+=reg;
    return assembly;
}
string xor_inst(struct Argument arg, string reg, struct SymbolTable * my_table)
{
    string assembly = "\txorq ";
    if(arg.status== IS_LITERAL){
        assembly += "$" + arg.literal + " ,";
    }
    else if(arg.status == IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp) ,";
    }
    assembly+=reg;
    return assembly;
}

string salq_inst(struct Argument arg, string reg, struct SymbolTable * my_table)
{
    string assembly = "\tsalq "+reg;
    if(arg.status== IS_LITERAL){
        assembly += "$" + arg.literal + " ,";
    }
    else if(arg.status== IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp) ,";
    }
    return assembly;
}
string sarq_inst(struct Argument arg, string reg, struct SymbolTable * my_table)
{
    string assembly = "\tsalq "+reg;
    if(arg.status== IS_LITERAL){
        assembly += "$" + arg.literal + " ,";
    }
    else if(arg.status== IS_VARIABLE){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp) ,";
    }
    return assembly;
}

string pp_inst(struct Argument arg, string pp_type, struct SymbolTable* my_table){
    string assembly = "\t"+pp_type+" ";
    if(arg.status == IS_LITERAL && pp_type == "pushq"){
        assembly+="$"+arg.literal;
    }
    else if(arg.status == IS_VARIABLE && pp_type == "pushq"){
        struct Symbol * symb = check_scope(my_table, arg.literal);
        assembly += to_string(symb->offset)+"(\%rbp) ";
    }
    else if(arg.status == IS_REGISTER){
        assembly+=arg.literal;
    }
    else{
        return "\nError in push/pop instruction\n";
    }
    return assembly;
}

void generateAssembly(struct GlobalSymbolTable * glob_table)
{
    if(glob_table == NULL){
        cout << "Empty Global Table" << endl;
    }
    struct GlobalSymbol glob_entry;
    cout << "\t.file\t \"main.c\"" <<endl;
    cout << "\t.text" <<endl;
    for (int i = 0; i< glob_table->entries.size(); i++)
    {   
        struct Quad quad;
        vector<string>code;
        glob_entry = glob_table->entries[i];
        //view_quadruple(glob_entry.tac.quad);
        string func_name = glob_entry.methodName;
        string class_name = glob_entry.scope;
        if(func_name == "main"){
            cout << "\t.globl\t" << func_name <<endl;
            cout << "\t.type\t" << func_name << ", \@function" <<endl;
            cout << func_name + ":" <<endl;
        }
        else{
            cout << "\t.globl\t" << "__" + class_name + "__"  + func_name <<endl;
            cout << "\t.type\t" << "__" + class_name + "__"  + func_name << ", \@function" <<endl;
            cout << "__" + class_name + "__"  + func_name + ":" << endl;
        }
        for (int j = 0; j< glob_entry.tac.quad.size(); j++)
        {
            //cout << view_quad(&glob_entry.tac.quad[j]) << endl;
            // cout << glob_entry.tac.quad[j].op.op<<endl;
            code =quad_to_assembly(&glob_entry.tac.quad[j]);
            for (int k =0; k<code.size() ; k++){
                if(code[k].size() !=0)
                cout << code[k] << endl;
            }
        }
        if(func_name == "main"){
            cout << "\t.size\t" << func_name + ", .-" + func_name <<endl;
        }
        else{
            cout << "\t.size\t" << "__" + class_name + "__"  + func_name + ", .-" + "__" + class_name + "__"  + func_name <<endl;
        }
    }
    cout << ".end" <<endl;
    return;
}