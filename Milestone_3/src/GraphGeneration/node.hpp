#ifndef NODE_H_
#define NODE_H_

#include <bits/stdc++.h>
#include "../Includes.hpp"

using namespace std;


struct node{
    char data[100];
    long long int nodenumber;
    int parentFlag;
    int isDeclaration;
    int t;
    int lineNumber;
    vector<node*> arr;
    Symbol symbol;
    Value val;
};

struct node* makeleaf(char nodeStr[100]);
struct node* makeInternalNode(char rule[100], struct node* memArr[], int n, int isParent);

extern long long int line_number;
extern string src_file;

#endif
