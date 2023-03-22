#include "Includes.hpp"

using namespace std;
int glob_insert(string scope, string methodName, struct SymbolTable* curr, struct GlobalSymbolTable* glob)
{   
    if (glob->scope_hash.find(scope+"::"+methodName) !=  glob->scope_hash.end())
    {
        cout << "Declaration already exists of " << scope << " of derived type \n";
        return DECLARATION_ERROR;
    }

    struct SymbolTable* LocalSymbolTable = loc_mktable(curr, scope);
    struct GlobalSymbol entry;
    entry.scope = scope;
    entry.LocalSymbolTable = LocalSymbolTable;
    entry.methodName = methodName;

    glob->scope_hash[scope+"::"+methodName] = glob->entries.size();
    glob->entries.push_back(entry);

    return 0;
}

struct GlobalSymbol* glob_lookup(string scope, string methodName, struct GlobalSymbolTable * glob)
{   
    if(glob->scope_hash.find(scope+"::"+methodName) !=  glob->scope_hash.end())
        return &(glob->entries[glob->scope_hash[scope+"::"+methodName]]);

    return NULL;
}