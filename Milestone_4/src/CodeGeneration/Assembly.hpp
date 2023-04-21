#ifndef ASSEMBLY_H_
#define ASSEMBLY_H_

#include "../DataStructures/GlobalSymbolTable.hpp"
#include "../DataStructures/SymbolTable.hpp"
#include "../DataStructures/Tac.hpp"
#include<bits/stdc++.h>


vector<string> quad_to_assembly(struct Quad* quad );

string load_inst(struct Argument arg, string reg, struct SymbolTable * my_table);
string store_inst(struct Argument arg, string reg, struct SymbolTable * my_table);
void generateAssembly(struct GlobalSymbolTable * glob_table);

#endif