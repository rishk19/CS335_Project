#include "../Includes.hpp"

using namespace std;
long long int glob_insert(long long int line_num, string scope, string methodName, struct Type type, struct SymbolTable* curr, struct GlobalSymbolTable* glob, struct Value tac)
{   

    struct GlobalSymbol * glob_entry = glob_lookup(scope, methodName,glob);
    if(glob_entry != NULL){
        return -glob_entry->line_num;
    }
    struct GlobalSymbol entry;
    entry.line_num = line_num;
    entry.scope = scope;
    entry.LocalSymbolTable = curr;
    entry.methodName = methodName;
    entry.type = type;
    entry.tac = tac;

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

void viewGlobal(struct GlobalSymbolTable* glob_table){

    cout << "\nThe entries of global symbol table are : \n\n";
    for(int i = 0; i<glob_table->entries.size(); i++){
        cout <<glob_table->entries[i].scope << "::";
        cout <<glob_table->entries[i].methodName <<endl <<endl;
        view_type(glob_table->entries[i].type);
        cout << "xxxxxxxxxxxxxxxxxx 3 A C xxxxxxxxxxxxxxxx" <<endl;
        printThreeAC(glob_table->entries[i].tac);
        cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" <<endl;
        if(glob_table->entries[i].LocalSymbolTable != NULL)
        view_symbol_table_with_children_hierarchy(glob_table->entries[i].LocalSymbolTable);
        cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" <<endl;
        cout << endl;
    }

}

void viewGlobalTac(struct GlobalSymbolTable* glob_table){

    for(int i = 0; i<glob_table->entries.size(); i++){
        cout << "xxxxxxxxxxxxxxxxxx 3 A C xxxxxxxxxxxxxxxx" <<endl;
        printThreeAC(glob_table->entries[i].tac);
        cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" <<endl;
        cout << endl;
    }

}

void generateTac(FILE* graph, struct GlobalSymbolTable* glob_table){
    for(int i = 0; i<glob_table->entries.size(); i++){
        cout<<endl;
        Value tac = glob_table->entries[i].tac;
        for(int j = 0; j<tac.code.size(); j++){
            cout <<tac.code[j]<<endl;
            // fprintf(graph,"%s\n",&tac.code[j]);
        }
        cout<<endl;
    }
}