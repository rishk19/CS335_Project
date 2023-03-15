#ifndef SYMBOLTABLE_H_
#define SYMBOLTABLE_H_


#include <string>
#include <vector>
#include <map>

using namespace std;

struct Symbol{
        string name;
        string type;
        string source_file;
        long long int line_num;
        long long int size;
        long long int offset;
};

struct SymbolTable {
    vector< struct Symbol> entries;
    vector< struct SymbolTable*> children;
    struct SymbolTable* parent;
    map<string,int> name_hash;
};

struct SymbolTable* mktable(struct SymbolTable*);
void insert (struct SymbolTable*, string , string ,string, long long int, long long int, long long int);
struct Symbol loopkup(struct SymbolTable* , string);

#endif