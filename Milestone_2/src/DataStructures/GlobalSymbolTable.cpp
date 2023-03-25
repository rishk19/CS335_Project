#include "Includes.hpp"

using namespace std;
int glob_insert(string scope, string methodName, struct Type type, struct SymbolTable* curr, struct GlobalSymbolTable* glob)
{   
    if (glob->scope_hash.find(scope+"::"+methodName) !=  glob->scope_hash.end())
    {
        cout << "Declaration already exists of " << scope << " of derived type \n";
        return DECLARATION_ERROR;
    }

    struct GlobalSymbol entry;
    entry.scope = scope;
    entry.LocalSymbolTable = curr;
    entry.methodName = methodName;
    entry.type = type;

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
        /*
        if(glob_table->scope_hash.find(scope+"::"+methodName) !=  glob->scope_hash.end())
            return &(glob->entries[glob->scope_hash[scope+"::"+methodName]]);
        */
            temp.LocalSymbolTable = symbol.structuretable->method_map[temp.methodName];
            //temp.LocalSymbolTable = NULL;

            glob_table->entries.push_back(temp);
            glob_table->scope_hash[temp.scope+"::"+temp.methodName] = 1;
        }
    }
}

void viewGlobal(struct GlobalSymbolTable* glob_table){

    cout << "\nThe entries of global symbol table are : \n\n";
    for(int i = 0; i<glob_table->entries.size(); i++){
        cout <<glob_table->entries[i].scope << "::";
        cout <<glob_table->entries[i].methodName <<endl <<endl;
        view_type(glob_table->entries[i].type);
        cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" <<endl;
        if(glob_table->entries[i].LocalSymbolTable != NULL)
        view_symbol_table_with_children_hierarchy(glob_table->entries[i].LocalSymbolTable);
        cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" <<endl;
        cout << endl;
    }

}