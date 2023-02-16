%{
#include <stdio.h>
int yyerror(char *s);
int yylex();
extern FILE *yyin;
struct node *root = NULL;

struct node{
    char* data;
    struct node* arr[10];

};
struct node* makeInternalNode(char* rule, struct node* memArr[], int mem);
struct node* makeleaf(char* node);
%}




%token B C
%type <data> B
%type <data> C
%type <exp> a
%type <exp> b
%type <exp> c

%union {
    char* data;
    struct node *exp;
}

%%

a: 
    b c {
        //printf("a -> bc");
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        root = makeInternalNode("||",memArr,2);
    }
;

b:
    B {
        //printf("b -> B");ß
        $$ = makeleaf($1);
    }
;

c : 
    c C{
        //printf("c->cC");
        struct node* memArr[2];
        memArr[1] = makeleaf($2);
        memArr[0] = $1;
       $$ = makeInternalNode("C (Non-Terminal)", memArr,2);
    }
    | C {
        //printf("c-> C");
        $$ =  makeleaf($1);
    }

;
%%

int yyerror(char *s)
{
    printf("Syntax Error on Line %s\n",s);
    return 0;
}


struct node* makeleaf(char* nodeStr){
    printf("%s\n",nodeStr);
    struct node* leaf = (struct node*)malloc(sizeof(struct node));
    leaf->data = nodeStr;
    for(int i = 0; i<10; i++){
        leaf->arr[i] = NULL;
    }
    return leaf;
}

struct node* makeInternalNode(char* rule, struct node* memArr[], int mem){
    struct node* internalNode = (struct node*)malloc(sizeof(struct node));
    internalNode->data = rule;
    for(int i = 0; i<mem; i++){
        internalNode->arr[i] = memArr[i];
    }
    for(int i = mem; i<10; i++){
        internalNode->arr[i] = NULL;
    }
    return internalNode;
}

void ast_print(struct node* root){

    if(root == NULL){
        return;
    }

    printf("%s",root->data);
    printf("\n");
    int i =0;

    while(root->arr[i]!= NULL){
        printf("\t");
        ast_print(root->arr[i]);
        i++;

    }
}


int main(int argc, char** argv)
{   
    yyin = fopen("temp.txt","r");
    yyparse();
    ast_print(root);


    return 0;
}