#ifndef QUADRUPLE_H_
#define QUADRUPLE_H_

#include "Operator.hpp"
#include "Argument.hpp"
struct Quad{
    enum Operator op;
    struct Argument arg_1;
    struct Argument arg_2;   
    struct Argument result;
};

string view_quad(struct Quad* qd);
vector<string> view_quadruple(vector<Quad> quad);
#endif