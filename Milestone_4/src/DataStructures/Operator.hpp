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
    EqualTo,
    NotOperator,
    Tilde,
    QuestionMark,
    Empty,
    Colon,
    RightArrow,
    EqualToEqualTo,
    GreaterThanEqualTo,
    LessThanEqualTo,
    NotEqualTo,
    AndOperator,
    OrOperator,
    PlusPlus,
    MinusMinus,
    Addition,
    Substraction,
    Product,
    Divide,
    BitwiseAnd,
    BitwiseOr,
    CircumFlex,
    Modulo,
    LeftShit,
    RightShift,
    TripleGreaterThan,
    AdditionEqualTo,
    SubstractionEqualTo,
    ProductEqualTo,
    DivideEqualTo,
    BitWiseAndEqualTo,
    BitWiseOrEqualTo,
    CircumFlexEqualTo,
    ModuloEqualTo,
    LeftShitEqualTo,
    RightShiftEqualTo,
    TripleGreaterThanEqualTo,
    GreaterThan,
    LessThan

};
struct Operator {
    Op op;
    string type;
};
Operator str_to_op(string );
string op_to_str(Op );
#endif