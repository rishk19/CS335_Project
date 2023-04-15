#ifndef GRAPH_MAKER_H_
#define GRAPH_MAKER_H_

#include <bits/stdc++.h>
#include "node.hpp"

using namespace std;

void generateGraph(struct node* root, FILE* graph, int nnode = 0);
void ast_print(struct node* root, long long int d, long long int n);
char* concatenate_string(char* s, char* s1);

#endif