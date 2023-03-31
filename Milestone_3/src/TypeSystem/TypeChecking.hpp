#ifndef _TYPE_CHECKING_H
#define _TYPE_CHECKING_H
#include "../Includes.hpp"
using namespace std;

string max_type(string, string);
int isTypeCompatible(string, string);
int isPrimitiveType(string);
int isIntegralType(string);
int isNumericType(string);

#endif