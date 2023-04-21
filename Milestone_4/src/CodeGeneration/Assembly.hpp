#ifndef ASSEMBLY_H_
#define ASSEMBLY_H_

#include "../DataStructures/GlobalSymbolTable.hpp"
#include "../DataStructures/SymbolTable.hpp"
#include "../DataStructures/Tac.hpp"
#include<bits/stdc++.h>


vector<string> quad_to_assembly(struct Quad* quad );

string load_inst(struct Argument arg, string reg, struct SymbolTable * my_table);
string store_inst(struct Argument arg, string reg, struct SymbolTable * my_table);
string cmpq_inst(struct Argument arg, string reg, struct SymbolTable* my_table);
string division_inst(struct Argument arg, struct SymbolTable *my_table);
string jump_inst(string jump_type, string label);
string set_inst(string set_type, string reg);
string gen_new_inst(string inst, string reg_1, string reg_2);
string and_inst(struct Argument arg, string reg, struct SymbolTable * my_table);
string or_inst(struct Argument arg, string reg, struct SymbolTable * my_table);
string xor_inst(struct Argument arg, string reg, struct SymbolTable * my_table);
string salq_inst(struct Argument arg, string reg, struct SymbolTable * my_table);
string sarq_inst(struct Argument arg, string reg, struct SymbolTable * my_table);
string pp_inst(struct Argument arg, string pp_type, struct SymbolTable* my_table);
void generateAssembly(struct GlobalSymbolTable * glob_table);
string movsbl_inst(struct Argument arg, string reg, struct SymbolTable * my_table);
#endif