#include "Includes.hpp"

using namespace std;
int glob_insert(string scope, struct SymbolTable* curr, struct GlobalSymbolTable* glob)
{   
    if (glob->scope_hash.find(scope) !=  glob->scope_hash.end())
    {
        cout << "Declaration already exists of " << scope << " of derived type \n";
        return DECLARATION_ERROR;
    }

    struct SymbolTable* LocalSymbolTable = loc_mktable(curr);
    struct GlobalSymbol entry;
    entry.scope = scope;
    entry.LocalSymbolTable = LocalSymbolTable;

    glob->scope_hash[scope] = glob->entries.size();
    glob->entries.push_back(entry);

    return 0;
}

struct GlobalSymbol glob_lookup(string scope, struct GlobalSymbolTable * glob)
{   
    
    return glob->entries[glob->scope_hash[scope]];
}