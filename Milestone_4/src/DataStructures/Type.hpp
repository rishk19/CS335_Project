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
    vector<string> parameters_type;
    vector<int> parameters_size;
    vector<int> dims;
    int return_size;
};

// void insert_type(string, vector<string>, string, int, string, vector<string>, vector<string>,int, struct Type*);
void view_type(struct Type);

void copy_type(struct Type* type_1, struct Type type_2);

int type_size(string type);
int is_static(struct Type &head);
//void insert_type(string, int, string, vector<string>, struct Type*);
//void insert_type(string name, int t, string return_type, vector<string> parameters, struct Type* type)
#endif