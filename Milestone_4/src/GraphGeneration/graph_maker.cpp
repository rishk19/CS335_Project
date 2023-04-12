#include "../Includes.hpp"

void ast_print(struct node* root, long long int d, long long int n){

    if(root == NULL){
        return;
    }
    cout << root->data;
    root->nodenumber = n;
    n++;
    printf("\n");

    for(long long int i=0;i<root->arr.size();i++){
        if(root->arr[i]!= NULL){
            for(long long int j = 0 ; j<=d; j++)
            {
                printf("     ");
            }
            printf("|----->");
            ast_print(root->arr[i],d+1, n);
        }
    }
}

void generateGraph(struct node* root, FILE* graph, int nnode){
    nnode = 0;
    if(root == NULL){
        return;
    }

    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        struct node * head = q.front();
        q.pop();
        fprintf(graph,"Node%d [label =\"%s\"]\n",nnode, head->data);
        for(int i = 0; i<head->arr.size(); i++){
            if(head->arr[i]!=NULL)
                q.push(head->arr[i]);
        }
        nnode++;
    }

    nnode = 0;
    int prevChild = 0;
    q.push(root);
    while(!q.empty()){
        struct node * head = q.front();
        q.pop();
        fprintf(graph,"Node%d -> {",nnode);
        int k = 0;
        int l = 0;
        for(; head!=NULL && l < head->arr.size(); l++){
            if(head->arr[l]!=NULL){
                k++;
                fprintf(graph,"Node%d",prevChild+0+1);
                q.push(head->arr[l]);
                l++;
                break;
            }
        }
        for(int i = l; head!=NULL && i<head->arr.size(); i++){
            if(head->arr[i]!=NULL){
                k++;
                fprintf(graph,",Node%d",prevChild+i+1);
                q.push(head->arr[i]);
            }
            
        }
        fprintf(graph,"}\n");
        prevChild += k;
        nnode++;
    }

}

char* concatenate_string(char* s, char* s1)
{
    char* c = new char[100];
    int i;
    
    int j = 0;

    while(s[j]!= '\0'){
        c[j] = s[j];
        j+=1;
    }

    for (i = 0; s1[i] != '\0'; i++) {
        c[i+j] = s1[i];
     }
 
    c[i + j] = '\0';
 
    return c;
}