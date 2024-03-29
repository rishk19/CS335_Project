#ifndef OPERATOR_H_
#define OPERATOR_H_
#include<bits/stdc++.h>
using namespace std;

enum Op {
    Unknown_,
    NotOperator_,
    Tilde_,
    QuestionMark_,
    Empty_,
    Colon_,
    RightArrow_,
    EqualToEqualTo_,
    GreaterThanEqualTo_,
    LessThanEqualTo_,
    NotEqualTo_,
    AndOperator_,
    OrOperator_,
    PlusPlus_,
    MinusMinus_,
    Addition_,
    Substraction_,
    Product_,
    Divide_,
    BitwiseAnd_,
    BitwiseOr_,
    CircumFlex_,
    Modulo_,
    LeftShit_,
    RightShift_,
    TripleGreaterThan_,
    AdditionEqualTo_,
    SubstractionEqualTo_,
    ProductEqualTo_,
    DivideEqualTo_,
    BitWiseAndEqualTo_,
    BitWiseOrEqualTo_,
    CircumFlexEqualTo_,
    ModuloEqualTo_,
    LeftShitEqualTo_,
    RightShiftEqualTo_,
    TripleGreaterThanEqualTo_,
    GreaterThan_,
    LessThan_,
    Compare_and_Jne_,
    Compare_and_Je_,
    Jne_,
    Jmp_,
    Label_,
    ArrayAccess_,
    LoadArray_,
    Pushq_,
    Movq_,
    Popq_,
    Push_,
    Mov_,
    Pop_,
    Retq_,
    Addq_,
    Subq_,
    Callq_,
    Printint_,
    Printchar_,
    Printlong_,
    Leave_
};
struct Operator {
    Op op;
    string type;
};
Operator str_to_op(string );
string op_to_str(Op );
#endif