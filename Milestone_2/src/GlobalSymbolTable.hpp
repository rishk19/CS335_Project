#include "SymbolTable.hpp"

struct GlobalSymbol {
    string scope;
    struct SymbolTable* LocalSymbolTable;
};

struct GlobalSymbolTable {
    vector<GlobalSymbol> entries;
};

void insert(string);
struct GlobalSymbol * lookup(string);

