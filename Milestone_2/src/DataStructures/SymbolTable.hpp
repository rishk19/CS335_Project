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
        struct StructureTable * structuretable;
};

struct SymbolTable {
    string scope;
    vector< struct Symbol> entries;
    vector< struct SymbolTable*> children;
    struct SymbolTable* parent;
    map<string,int> name_hash;
};

struct StructureTable{
    vector<Type> field_type;
    vector<string> field_name;
};

struct SymbolTable* loc_mktable(struct SymbolTable*, string);
//struct SymbolTable* loc_mktable(struct SymbolTable* table, string scope)
int loc_insert (struct SymbolTable*, struct Symbol);
//int loc_insert (struct SymbolTable* table, string name, struct Type type, string source_file, long long int line_num, long long int size, long long int offset)
struct Symbol* loc_loopkup(struct SymbolTable* , string);
//struct Symbol* loc_loopkup(struct SymbolTable* curr,string name)
void view_symbol(struct Symbol);
void view_structure_table(struct StructureTable*);

#endif