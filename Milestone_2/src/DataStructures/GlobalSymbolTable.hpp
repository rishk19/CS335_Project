#ifndef GLOBALSYMBOLTABLE_H_
#define GLOBALSYMBOLTABLE_H_

#include "SymbolTable.hpp"
#include <bits/stdc++.h>
#include "Type.hpp"

using namespace std;

struct GlobalSymbol {
    string scope;           // Assuming functions have different names
    struct SymbolTable* LocalSymbolTable;
};

struct GlobalSymbolTable {
    vector<GlobalSymbol> entries;
    map<string,int> scope_hash;
};

int glob_insert(string, struct SymbolTable*, struct GlobalSymbolTable *);
struct GlobalSymbol glob_lookup(string, struct GlobalSymbolTable * );

#endif