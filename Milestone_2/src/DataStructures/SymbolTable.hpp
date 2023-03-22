#ifndef SYMBOLTABLE_H_
#define SYMBOLTABLE_H_

#include "Type.hpp"
#include <bits/stdc++.h>

using namespace std;

struct Symbol{
        string name;
        struct Type type;
        string source_file;
        long long int line_num;
        long long int size;
        long long int offset;
};

struct SymbolTable {
    string scope;
    vector< struct Symbol> entries;
    vector< struct SymbolTable*> children;
    struct SymbolTable* parent;
    map<string,int> name_hash;
};

struct SymbolTable* loc_mktable(struct SymbolTable*, string);
//struct SymbolTable* loc_mktable(struct SymbolTable* table, string scope)
int loc_insert (struct SymbolTable*, string , struct Type ,string, long long int, long long int, long long int);
//int loc_insert (struct SymbolTable* table, string name, struct Type type, string source_file, long long int line_num, long long int size, long long int offset)
struct Symbol* loc_loopkup(struct SymbolTable* , string);
//struct Symbol* loc_loopkup(struct SymbolTable* curr,string name)

#endif