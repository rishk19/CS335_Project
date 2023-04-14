#ifndef QUADRUPLE_H_
#define QUADRUPLE_H_

#include "Operator.hpp"
#include "Argument.hpp"
#include "SymbolTable.hpp"

struct Quad{
    enum Operator op;
    struct Argument arg_1;
    struct Argument arg_2;   
    struct Argument result;
    struct SymbolTable* my_table; 
};

string view_quad(struct Quad* qd);
vector<string> view_quadruple(vector<Quad> quad);
int insert_temp(struct Symbol symb,string temp, string op_type);
#endif