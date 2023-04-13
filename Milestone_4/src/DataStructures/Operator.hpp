#ifndef OPERATOR_H_
#define OPERATOR_H_
#include<bits/stdc++.h>
using namespace std;

enum Operator {
    Unknown,
    Add,
    Sub,
    Mul,
    Div,
    Or,
    Xor,
    Assign,
};
Operator str_to_op(string );
string op_to_str(Operator );
#endif