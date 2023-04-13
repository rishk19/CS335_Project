#ifndef ARGUMENT_H_
#define ARGUMENT_H_
#include "SymbolTable.hpp"
#include "Tac.hpp"

struct Argument
{
    int status; // 0-> literal, 1->symb_table_entry, 2->label
    
    long long int literal;
    Symbol * symbol_entry;   
    long long int label;
};

void fill_arg(struct Argument* arg, struct Value val);

#endif