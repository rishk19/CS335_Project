#ifndef GLOBALSYMBOLTABLE_H_
#define GLOBALSYMBOLTABLE_H_

#include "SymbolTable.hpp"
#include <bits/stdc++.h>
#include "Type.hpp"

using namespace std;

struct GlobalSymbol {
    string scope;
    string methodName;           // Assuming functions have different names
    struct SymbolTable* LocalSymbolTable;
};

struct GlobalSymbolTable {
    vector<GlobalSymbol> entries;
    map<string,int> scope_hash;
};

int glob_insert(string, string, struct SymbolTable*, struct GlobalSymbolTable *);
//int glob_insert(string scope, string methodName, struct SymbolTable* curr, struct GlobalSymbolTable* glob)
struct GlobalSymbol* glob_lookup(string, string, struct GlobalSymbolTable * );
//struct GlobalSymbol* glob_lookup(string scope, string methodName, struct GlobalSymbolTable * glob)

#endif