#ifndef GLOBALSYMBOLTABLE_H_
#define GLOBALSYMBOLTABLE_H_
#include <bits/stdc++.h>
#include "Type.hpp"
#include "Tac.hpp"
#include "SymbolTable.hpp"
using namespace std;

struct GlobalSymbol {
    long long int line_num;
    string scope;
    string methodName; 
    struct Type type;          // Assuming functions have different names
    struct SymbolTable* LocalSymbolTable;
    struct Value tac;
};

struct GlobalSymbolTable {
    vector<GlobalSymbol> entries;
    map<string,int> scope_hash;
};

long long int glob_insert(long long int,string, string,struct Type, struct SymbolTable*, struct GlobalSymbolTable *, struct Value);
//int glob_insert(string scope, string methodName, struct SymbolTable* curr, struct GlobalSymbolTable* glob)
struct GlobalSymbol* glob_lookup(string, string, struct GlobalSymbolTable * );
//void addGlobalEntry(struct Symbol symbol, struct GlobalSymbolTable* glob_table);
void viewGlobal(struct GlobalSymbolTable* glob_table);
//struct GlobalSymbol* glob_lookup(string scope, string methodName, struct GlobalSymbolTable * glob)
void viewGlobalTac(struct GlobalSymbolTable* glob_table);
void generateTac(FILE* graph, struct GlobalSymbolTable* glob_table);



#endif