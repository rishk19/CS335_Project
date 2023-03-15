#ifndef GLOBALSYMBOLTABLE_H_
#define GLOBALSYMBOLTABLE_H_

#include "SymbolTable.hpp"

struct GlobalSymbol {
    string scope;           // Assuming functions have different names
    struct SymbolTable* LocalSymbolTable;
};

struct GlobalSymbolTable {
    vector<GlobalSymbol> entries;
    map<string,int> scope_hash;
};

void insert(string, struct SymbolTable*, struct GlobalSymbolTable *);
struct GlobalSymbol lookup(string, struct GlobalSymbolTable * );

#endif