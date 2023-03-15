#include "SymbolTable.hpp"

struct SymbolTable* mktable(struct SymbolTable* table)
{
    struct SymbolTable* new_table = new struct SymbolTable;
    new_table->parent = table;
    table->children.push_back(new_table);
    return new_table;
}

void insert (struct SymbolTable* table, string name, string type, string source_file, long long int line_num, long long int size, long long int offset)
{
    struct Symbol entry;
    entry.name = name;
    entry.type = type;
    entry.source_file = source_file;
    entry.line_num = line_num;
    entry.size = size;
    entry.offset = offset;

    table->name_hash[name] = table->entries.size();
    table->entries.push_back(entry);
}

struct Symbol loopkup(struct SymbolTable* curr,string name)
{
    return curr->entries[curr->name_hash[name]];
}