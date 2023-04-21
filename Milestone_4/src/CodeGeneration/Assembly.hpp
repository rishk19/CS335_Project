#ifndef ASSEMBLY_H_
#define ASSEMBLY_H_


vector<string> quad_to_assembly(struct Quad* quad );

string load_inst(struct Argument arg, string reg, struct SymbolTable * my_table);
string store_inst(struct Argument arg, string reg, struct SymbolTable * my_table);

#endif