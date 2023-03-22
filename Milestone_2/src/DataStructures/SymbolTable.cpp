#include "Includes.hpp"

using namespace std;
struct SymbolTable* loc_mktable(struct SymbolTable* table, string scope)
{   
    struct SymbolTable* new_table = new struct SymbolTable;
    new_table->parent = table;
    new_table->scope = scope;
    if(table != NULL) table->children.push_back(new_table);
    return new_table;
}

int loc_insert (struct SymbolTable* table, string name, struct Type type, string source_file, long long int line_num, long long int size, long long int offset, struct StructureTable * structuretable)
{   
    struct Symbol* temp = loc_loopkup(table,name);
    if(temp!= NULL)
    {
        cout << "Declaration already exists of " << name << "\n";
        return DECLARATION_ERROR;
    }

    struct Symbol entry;
    entry.name = name;

    entry.type.name = type.name;
    entry.type.t = type.t;
    entry.type.return_type = type.return_type;
    for (int i=0; i < type.parameters.size(); i++)
    {
           entry.type.parameters.push_back(type.parameters[i]);
     }

    entry.source_file = source_file;
    entry.line_num = line_num;
    entry.size = size;
    entry.offset = offset;
    entry.structuretable = structuretable;

    table->name_hash[name] = table->entries.size();
    table->entries.push_back(entry);
    return 0;
}

struct Symbol* loc_loopkup(struct SymbolTable* curr,string name)
{   
    if(curr->name_hash.find(name) != curr->name_hash.end()){
        return &(curr->entries[curr->name_hash[name]]);
    }
    return NULL;
}