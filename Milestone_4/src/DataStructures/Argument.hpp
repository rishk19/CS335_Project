#ifndef ARGUMENT_H_
#define ARGUMENT_H_
#include "SymbolTable.hpp"
#include "Tac.hpp"
#include <string>

using namespace std;

struct Argument
{
    int status; //-1-> Empty 0-> literal, 1->symb_table_entry, 2->label 3-> Register
    
    string literal;
    Symbol * symbol_entry;   
    string label;
};

void fill_arg(struct Argument* arg, struct Value &val);

#endif