%{
#include <stdio.h>
#include "stdlib.h"
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
        root = makeInternalNode("Concat",memArr,2);
    }


b:
    B {
    $$ =  makeleaf($1);
    }


c : 
    c C {
        //printf("c->cC");
        struct node* memArr[2];
        memArr[1] = makeleaf($2);
        memArr[0] = $1;
       $$ = makeInternalNode("C_Non_Terminal", memArr,2);
    }
    | C {
        //printf("c-> C");
        $$ =  makeleaf($1);
    }


%%

int yyerror(char *s)
{
    printf("Syntax Error on Line %s\n",s);
    return 0;
}


struct node* makeleaf(char* nodeStr){
    //printf("%s\n",nodeStr);
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

void ast_print(struct node* root, int d){

    if(root == NULL){
        return;
    }

    printf("%s",root->data);
    printf("\n");
    int i =0;

    while(root->arr[i]!= NULL){
        for(int i = 0 ; i<=d+1; i++)
            printf("\t");
        ast_print(root->arr[i],d+1);
        i++;

    }
}


void neighbour_append(struct node* root,FILE* graph, int depth,int child_num){
    if(root->arr[0]!= NULL){
        fprintf(graph, "\t%s_%d_%d ->{ %s_%d_0",root->data,depth,child_num,(root->arr[0])->data, depth+1);
    }
    else{
        fprintf(graph, "\t%s_%d_%d ->{}\n",root->data,depth,child_num);
        return;
    }
    for (int i=1 ; i< 10; i++){
        if(root->arr[i] != NULL){
            fprintf(graph," ,%s_%d_%d",(root->arr[i])->data,depth+1,i);
        }
        else{
            fprintf(graph,"}\n");
            return;
        }
    }
    fprintf(graph,"}\n");
    return;
}

void graph_maker(struct node* root,FILE* graph,int depth,int child_num){
    
    if(root!=NULL){
        neighbour_append(root,graph,depth,child_num);
        for(int i = 0; i<10 && root->arr[i]!=NULL; i++){
            graph_maker(root->arr[i], graph,depth+1,i);
        }

    }
    return;
    

}




int main(int argc, char** argv)
{   


    FILE* fp;
    char * line = NULL;
    char * input_file = NULL;
    char * output_file = NULL;
    size_t len = 0;
    ssize_t read;
    fp = fopen("temp2.txt","w");
    int i;
    for(i=1; i<argc; i++){
        fprintf(fp,"%s ",argv[i]);
    }
    fclose(fp);
    system("grep -o '[-][-]verbose' temp.txt > verbose.txt");

    fp = fopen("verbose.txt","r");

    if((read = getline(&output_file, &len, fp)) != -1) {
        //printf("%s", output_file);
        if(read > 0){
            #ifdef YYDEBUG
            yydebug = 1;
            #endif
        }
    }

    #ifdef YYDEBUG
    yydebug = 0;
    #endif

    fclose(fp);
    system("rm verbose.txt");

    #ifdef YYDEBUG
    yydebug = 1;
    #endif
    yyin = fopen("temp.txt","r");
    yyparse();
    //ast_print(root,0);
    FILE* graph = fopen("AST.dot","w");
    fprintf(graph, "digraph AST{ \n");
    graph_maker(root, graph,0,0);
    fprintf(graph, "} \n");
    fclose(graph);

    return 0;
}