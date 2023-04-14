#ifndef OPERATOR_H_
#define OPERATOR_H_
#include<bits/stdc++.h>
using namespace std;

enum Op {
    Unknown,
    Add,
    Sub,
    Mul,
    Div,
    Or,
    Xor,
    Empty,
};
struct Operator {
    Op op;
    string type;
};
Operator str_to_op(string );
string op_to_str(Op );
#endif