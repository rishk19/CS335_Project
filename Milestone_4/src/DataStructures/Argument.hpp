#ifndef ARGUMENT_H_
#define ARGUMENT_H_
#include "SymbolTable.hpp"

struct Argument
{
    int is_label; 
    int is_literal;
    int is_symbol_entry;
    
    long long int literal;
    Symbol * symbol_entry;   
    long long int label;
};


#endif