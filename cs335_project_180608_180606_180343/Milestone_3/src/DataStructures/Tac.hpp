#ifndef TAC_H_
#define TAC_H_

#include <bits/stdc++.h>
using namespace std;

#define NULL_STR 0 
#define NEG_STR -1
#define POS_STR 1
#define GOOD_CPY 1
#define GOOD_APPEND 1
struct Value {

        string place;
        string label;
        
        vector<string> code;

};

string makeNewTemp(long int i);
string makeNewLabel(long int i);

int pushCode(Value &val, string str); //pushes the str to val.code vector
int copyValue(Value &v1, Value &v2); //copies value of v2 to v1   i.e., v1 <= v2
int appendCode(Value &v1, Value&v2); //appends code of v2 to v1 i.e., final_code(v1) = initial_code(v1)+initial_code(v2)

int genAssignCode(Value &S, Value &E);
int genIfElseCode(Value &S, Value &E1, Value &E2, Value &E3, string L1, string L2);
int genWhileCode(Value &S, Value &E1, Value &E2, string L1, string L2);
int genForCode(Value &S, Value &E1, Value &E2, Value &E3, Value &E4,string L1, string L2);
int genBinaryOperatorCode(Value &S, Value &E1, Value &E2, string temp, string op);
int genUnaryOperatorCode(Value &S, Value &E, string temp, string op);
int genMethodInvocationCode(struct node* E[], int n);
int genArrayAccess(struct node* E_1, struct node* E_2, struct node* E_3);
int genArrayAccess2(struct node* E_1, struct node* E_2, struct node* E_3);



int buildTAC(struct node* E[], int n, int flag);
int buildVal(struct node* E);

void printThreeAC(Value val); 

extern int newTempLabel;
extern Value dummyVal;

#endif