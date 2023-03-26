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

long long int loc_insert (struct SymbolTable* table, struct Symbol symbol)
{   
    struct Symbol* temp = loc_lookup(table,symbol.name);
        if(temp!= NULL)
    {
        return -(temp->line_num);
    }
    table->name_hash[symbol.name] = table->entries.size();
    table->entries.push_back(symbol);
    return 0;
}

struct Symbol* loc_lookup(struct SymbolTable* curr,string name)
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
    cout << "--------------------------------------------" << endl;
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
    //cout << "--------------------------------------------" << endl;
    
}

void view_symbol_table(struct SymbolTable symboltable)
{   
    cout << "#########################################################" <<endl;
    if(symboltable.entries.size() == 0)
    {
        cout << "The symbol table is empty !" <<endl <<endl;
        return;
    }
    cout << "The symbols of the symbol table are : \n\n";
    for(int i = 0; i< symboltable.entries.size(); i++)
    {
        view_symbol(symboltable.entries[i]);
    }
    cout << "#########################################################" <<endl;
}

void view_symbol_table_with_children_hierarchy(struct SymbolTable *symboltable )
{
    if(symboltable == NULL)
    {
        return;
    }
    view_symbol_table(*symboltable);
    for (int i =0;i< symboltable->children.size();i++)
    {
        if(symboltable->children[i]!= NULL){
            view_symbol_table_with_children_hierarchy(symboltable->children[i]);
        }
    }
    return;
}

void view_symbol_table_with_parent_hierarchy(struct SymbolTable *symboltable )
{
    if(symboltable == NULL)
    {
        return;
    }
    view_symbol_table(*symboltable);

    if(symboltable->parent != NULL)
    {
        view_symbol_table_with_parent_hierarchy(symboltable->parent);
    }
    return;
}

struct Symbol* check_scope(struct SymbolTable* curr, string name)
{
    if(curr == NULL){
        return NULL;
    }
    struct Symbol* sym = loc_lookup(curr, name);
    if(sym == NULL){
        return(check_scope(curr->parent,name));
    }
    else{
        return sym;
    }
}