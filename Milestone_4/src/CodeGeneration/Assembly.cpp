#include"../Includes.hpp"

using namespace std;
#define ASSEMBLER_ERROR -1

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
        assembly_template.push_back(load_inst(quad->arg_1, r12, quad->my_table));
        assembly_template.push_back(load_inst(quad->arg_2, r13, quad->my_table));
        assembly_template.push_back("subq " + r12 + " " + r13);
        assembly_template.push_back(store_inst(quad->result, r13, quad->my_table));
        break;


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

void generateAssembly(struct GlobalSymbolTable * glob_table)
{
    if(glob_table == NULL){
        cout << "Empty Global Table" << endl;
    }
    struct GlobalSymbol glob_entry;
    for (int i = 0; i< glob_table->entries.size(); i++)
    {   
        cout << endl;
        struct Quad quad;
        vector<string>code;
        glob_entry = glob_table->entries[i];
        for (int j = 0; j< glob_entry.tac.quad.size(); j++)
        {
            cout << view_quad(&glob_entry.tac.quad[j]);
            cout << endl;
            //quad_to_assembly(&glob_entry.tac.quad[j]);
            // for (int k =0; k<code.size() ; k++){
            //     cout << code[j] << endl;
            // }
        }
    }
    return;
}
