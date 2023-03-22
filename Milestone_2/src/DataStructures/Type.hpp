#ifndef TYPE_H_
#define TYPE_H_

#include<bits/stdc++.h>

using namespace std;

struct Type{
    string name;
    vector<string> modifier;
    string extendClass;
    int t;          //t->0 means Basic Data Type     t->1 means Derived Data Type    t->2 means Function 
    string return_type;
    vector<string> parameters;
};

void insert_type(string, vector<string>, string, int, string, vector<string>, struct Type*);

#endif