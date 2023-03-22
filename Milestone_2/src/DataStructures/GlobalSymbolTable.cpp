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

void addGlobalEntry(struct Symbol symbol, struct GlobalSymbolTable* glob_table){
    int n = symbol.structuretable->field_name.size();
    for(int i = 0; i<n; i++){
        if(symbol.structuretable->field_type[i].t==2){
            struct GlobalSymbol temp;
            temp.scope = symbol.name;
            temp.methodName = symbol.structuretable->field_name[i];
            temp.LocalSymbolTable = NULL;
            glob_table->entries.push_back(temp);
            glob_table->scope_hash[temp.scope+"::"+temp.methodName] = 1;
        }
    }
}

void viewGlobal(struct GlobalSymbolTable* glob_table){

    cout << "The entries of global symbol table are : \n";
    for(int i = 0; i<glob_table->entries.size(); i++){
        cout <<"scope: "<<glob_table->entries[i].scope << "  ";
        cout <<"methodName: "<<glob_table->entries[i].methodName;
        cout << endl;
    }

}