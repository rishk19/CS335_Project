#include "../Includes.hpp"


struct node* makeleaf(char nodeStr[100]){
    struct node* leaf = new struct node;
    strcpy(leaf->data, nodeStr);
    leaf->parentFlag = 1;
    leaf->lineNumber = line_number;
    leaf->symbol.line_num = line_number;
    leaf->t = 0;
    leaf->arr.clear();
    leaf->symbol.type.modifier.clear();
    leaf->symbol.source_file = src_file;

    return leaf;
}

struct node* makeInternalNode(char rule[100], struct node* memArr[], int n, int isParent){
    struct node* internalNode = new struct node;
    strcpy(internalNode->data,rule);
    internalNode->arr.clear();
    int k = 0;
    for(int i = 0; i<n; i++){
        if(memArr[i]!=NULL){
            if(memArr[i]->parentFlag == 0){
                for(int j = 0; j<memArr[i]->arr.size(); j++){
                    if(memArr[i]->arr[j]!=NULL){
                        internalNode->arr.push_back(memArr[i]->arr[j]);
                        k++;
                    }
                }
            }
            else{
                internalNode->arr.push_back(memArr[i]);
                k++;
            }
        }
    }
    internalNode->parentFlag = isParent;
    internalNode->lineNumber = line_number;
    internalNode->symbol.line_num = line_number;
    internalNode->t = 0;
    internalNode->symbol.size= 0;
    internalNode->symbol.type.modifier.clear();
    internalNode->symbol.source_file = src_file;

    return internalNode;

}