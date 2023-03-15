#include "GlobalSymbolTable.hpp"

void insert(string scope, struct SymbolTable* curr, struct GlobalSymbolTable* glob)
{
    struct SymbolTable* LocalSymbolTable = mktable(curr);
    struct GlobalSymbol entry;
    entry.scope = scope;
    entry.LocalSymbolTable = LocalSymbolTable;

    glob->scope_hash[scope] = glob->entries.size();
    glob->entries.push_back(entry);
}

struct GlobalSymbol lookup(string scope, struct GlobalSymbolTable * glob)
{
    return glob->entries[glob->scope_hash[scope]];
}