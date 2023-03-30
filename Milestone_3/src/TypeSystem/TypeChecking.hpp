#ifndef _TYPE_CHECKING_H
#define _TYPE_CHECKING_H
#include "../Includes.hpp"
using namespace std;

string max_type(string, string);
int isTypeCompatible(string, string);
// struct Symbol widen(struct Symbol, string t, string w);
// narrow();
int isPrimitiveType(string);
int isIntegralType(string);

#endif