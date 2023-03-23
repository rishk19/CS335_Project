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

int loc_insert (struct SymbolTable* table, struct Symbol symbol)
{   
    struct Symbol* temp = loc_loopkup(table,symbol.name);
        if(temp!= NULL)
    {
        //cout << "Declaration already exists of " << symbol.name << " at line number " << symbol.line_num;
        return DECLARATION_ERROR;
    }
    table->name_hash[symbol.name] = table->entries.size();
    table->entries.push_back(symbol);
    return 0;
}

struct Symbol* loc_loopkup(struct SymbolTable* curr,string name)
{   
    if(curr->name_hash.find(name) != curr->name_hash.end()){
        return &(curr->entries[curr->name_hash[name]]);
    }
    return NULL;
}

void view_symbol(struct Symbol symbol)
{
    cout<< "Name : " << symbol.name << endl;
    cout<< "Line Number : " << symbol.line_num << endl;
    cout<< "Source File : " << symbol.source_file <<endl;
    cout<< "Size : " <<symbol.size <<endl;
    cout<< "Offset : "<<symbol.offset <<endl;
    cout<< endl;
    view_type(symbol.type);
    view_structure_table(symbol.structuretable);

}

void view_structure_table(struct StructureTable * structuretable)
{
    if(structuretable->field_type.size() > 0)
    {
    cout << "Structure Table consists of : \n\n";
    for (int i = 0; i < structuretable->field_type.size(); i++)
    {
        cout << "Field " << structuretable->field_name[i] << "     with the following type details :" <<endl;
        view_type(structuretable->field_type[i]);
        cout <<endl;
    }
    }
    cout << "--------------------------------------------" <<endl;
    
}

void view_symbol_table(struct SymbolTable symboltable)
{   

    cout << "The symbols of the symbol table are : \n\n";
    for(int i = 0; i< symboltable.entries.size(); i++)
    {
        view_symbol(symboltable.entries[i]);
    }
}