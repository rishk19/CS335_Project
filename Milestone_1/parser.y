%{
#include <stdio.h>
#include "assert.h"
#define NCHILD 20
int yyerror(char *s);
int yylex();
extern FILE *yyin;
extern FILE *yyout;
struct Tree_node *root = NULL;

struct Tree_node{
    char* data;
    struct Tree_node* arr[NCHILD];

};
struct Tree_node* makeInternalTree_node(char* rule, struct Tree_node* memArr[], int mem);
struct Tree_node* makeleaf(char* Tree_node);


%}


%token Exports Opens Requires Uses Module Permits Sealed Var Non_sealed Provides To With Open Record Transitive Yield Abstract Continue For New Switch Assert Default If Package Synchronized Boolean Do Goto Private This Break Double Implements Protected Throw Byte Else Import Public Throws Case Enum Instanceof Return Transient Catch Extends Int Short Try Char Final Interface Static Void Class Finally Long Strictfp Volatile Const Float Native Super While
%token BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral FloatingPointIntegerLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
%token Comma LeftCurlyBrace RightCurlyBrace Semicolon Dot LeftParanthesis RightParanthesis TripleDot LeftSquareBracket RightSquareBracket AtRate Scope
%token EqualTo NotOperator Tilde QuestionMark Colon RightArrow EqualToEqualTo GreaterThanEqualTo LessThanEqualTo NotEqualTo AndOperator OrOperator PlusPlus MinusMinus Addition Substraction Product Divide BitwiseAnd BitwiseOr CircumFlex Modulo LeftShit RightShift TripleGreaterThan AdditionEqualTo SubstractionEqualTo ProductEqualTo DivideEqualTo BitWiseAndEqualTo BitWiseOrEqualTo CircumFlexEqualTo ModuloEqualTo LeftShitEqualTo RightShiftEqualTo TripleGreaterThanEqualTo GreaterThan LessThan
%token __EMPTY__

%type <data> Exports Opens Requires Uses Module Permits Sealed Var Non_sealed Provides To With Open Record Transitive Yield Abstract Continue For New Switch Assert Default If Package Synchronized Boolean Do Goto Private This Break Double Implements Protected Throw Byte Else Import Public Throws Case Enum Instanceof Return Transient Catch Extends Int Short Try Char Final Interface Static Void Class Finally Long Strictfp Volatile Const Float Native Super While
%type <data> BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral FloatingPointIntegerLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
%type <data> Comma LeftCurlyBrace RightCurlyBrace Semicolon Dot LeftParanthesis RightParanthesis TripleDot LeftSquareBracket RightSquareBracket AtRate Scope
%type <data> EqualTo NotOperator Tilde QuestionMark Colon RightArrow EqualToEqualTo GreaterThanEqualTo LessThanEqualTo NotEqualTo AndOperator OrOperator PlusPlus MinusMinus Addition Substraction Product Divide BitwiseAnd BitwiseOr CircumFlex Modulo LeftShit RightShift TripleGreaterThan AdditionEqualTo SubstractionEqualTo ProductEqualTo DivideEqualTo BitWiseAndEqualTo BitWiseOrEqualTo CircumFlexEqualTo ModuloEqualTo LeftShitEqualTo RightShiftEqualTo TripleGreaterThanEqualTo GreaterThan LessThan
%type <data> __EMPTY__

%union {
    char data[1000];
    struct Tree_node *exp;
}


%%
  Goal
    :   MainClass ClassDeclarationList      { $$ = new node(++cnt, "Goal"); add_nn($$, $1); add_nl($$, $2); }
    ;

MainClass
    :   Class Identifier '{' Public Static Void Main '(' String '[' ']' Identifier ')' '{' Statement '}' '}'    { $$ = new node(++cnt, "MainClass"); add_nt($$, "Class"); add_nn($$, $2); add_nt($$, "{"); add_nt($$, "Public"); add_nt($$, "Static"); add_nt($$, "Void"); add_nt($$, "Main"); add_nt($$, "("); add_nt($$, "String"); add_nt($$, "["); add_nt($$, "]"); add_nn($$, $12); add_nt($$, ")"); add_nt($$, "{"); add_nn($$, $15); add_nt($$, "}"); add_nt($$, "}"); }
    ;

ClassDeclarationList
    :   ClassDeclaration ClassDeclarationList { $$ = $2; $2->push_front($1); }
    |   { $$ = new nodes(); } /* Empty */
    ;

ClassDeclaration
    :   Class Identifier '{' VarDeclarationList MethodDeclarationList '}'    { $$ = new node(++cnt, "ClassDeclaration"); add_nt($$, "Class"); add_nn($$, $2); add_nt($$, "{"); add_nl($$, $4); add_nl($$, $5); add_nt($$, "}"); }
    |   Class Identifier '{' MethodDeclarationList '}'    {$$ = new node(++cnt, "ClassDeclaration"); add_nt($$, "Class"); add_nn($$, $2); add_nt($$, "{"); add_nl($$, $4); add_nt($$, "}"); }
    |   Class Identifier Extends Identifier '{' VarDeclarationList MethodDeclarationList '}'    {$$ = new node(++cnt, "ClassDeclaration"); add_nt($$, "Class"); add_nn($$, $2); add_nt($$, "Extends"); add_nn($$, $4); add_nt($$, "{"); add_nl($$, $6); add_nl($$, $7); add_nt($$, "}"); }
    |   Class Identifier Extends Identifier '{' MethodDeclarationList '}'    {$$ = new node(++cnt, "ClassDeclaration"); add_nt($$, "Class"); add_nn($$, $2); add_nt($$, "Extends"); add_nn($$, $4); add_nt($$, "{"); add_nl($$, $6); add_nt($$, "}"); }
    ;

VarDeclarationList
    :   VarDeclaration {$$ = new nodes(); $$ -> push_back($1); }
    |   VarDeclarationList VarDeclaration  { $$ = $1; $1->push_back($2); }
    ;

VarDeclaration
    :   Type Identifier ';' {$$ = new node(++cnt, "VarDeclaration", $2 -> _id); add_nn($$, $1); add_nn($$, $2); add_nt($$, ";"); } /* ko ko (cv 810) */
    ;

MethodDeclarationList
    :   MethodDeclaration MethodDeclarationList {$$ = $2; $2->push_front($1);}
    |   {$$ = new nodes();} /* Empty */
    ;

MethodDeclaration
    :   Public Type Identifier '(' ParameterList ')' '{' VarDeclarationList StatementList Return Expression ';' '}'    {$$ = new node(++cnt, "MethodDeclaration"); add_nt($$, "Public"); add_nn($$, $2); add_nn($$, $3); add_nt($$, "("); add_nl($$, $5); add_nt($$, ")"); add_nt($$, "{"); add_nl($$, $8); add_nl($$, $9); add_nt($$, "Return"); add_nn($$, $11); add_nt($$, ";"); add_nt($$, "}"); semantic($8, $9); }    /* ko ko (cv 810) */
    |   Public Type Identifier '(' ParameterList ')' '{' StatementList Return Expression ';' '}'    {$$ = new node(++cnt, "MethodDeclaration"); add_nt($$, "Public"); add_nn($$, $2); add_nn($$, $3); add_nt($$, "("); add_nl($$, $5); add_nt($$, ")"); add_nt($$, "{"); add_nl($$, $8); add_nt($$, "Return"); add_nn($$, $10); add_nt($$, ";"); add_nt($$, "}"); }    
    ;

ParameterList
    :   Type Identifier    {$$ = new nodes();$$->push_back($1); $$->push_back($2);}
    |   Type Identifier ',' ParameterList    {$$ = $4; $4->push_front($2); $4->push_front($1);} /* Missing the comma sign here */
    |       {$$ = new nodes();} /* Empty */
    ;

Type
    :   Integer '[' ']'    {$$ = new node(++cnt, "Type"); add_nt($$, "Integer"); add_nt($$, "["); add_nt($$, "]"); }
    |   Boolean    {$$ = new node(++cnt, "Type"); add_nt($$, "Boolean"); }
    |   Integer    {$$ = new node(++cnt, "Type"); add_nt($$, "Integer"); }
    |   Identifier    {$$ = new node(++cnt, "Type"); add_nn($$, $1); }
    ;

StatementList
    :   Statement StatementList    { $$ = $2; $2->push_front($1); }
    |       {$$ = new nodes();}    /* Empty */
    ;

Statement
    :   '{' StatementList '}'    {$$ = new node(++cnt, "Statement"); add_nt($$, "{"); add_nl($$, $2); add_nt($$, "}"); }
    |   If '(' Expression ')' Statement Else Statement    {$$ = new node(++cnt, "Statement"); add_nt($$, "If"); add_nt($$, "(");  add_nn($$, $3); add_nt($$, ")"); add_nn($$, $5); add_nt($$, "Else");  add_nn($$, $7); }
    |   While '(' Expression ')' Statement    {$$ = new node(++cnt, "Statement"); add_nt($$, "While"); add_nt($$, "("); add_nn($$, $3); add_nt($$, ")"); add_nn($$, $5); }
    |   Println '(' Expression ')' ';'    {$$ = new node(++cnt, "Statement"); add_nt($$, "Println"); add_nt($$, "("); add_nn($$, $3); add_nt($$, ")"); add_nt($$, ";"); }
    |   Identifier '=' Expression ';'    {$$ = new node(++cnt, "Statement", $1 -> _id); add_nn($$, $1); add_nt($$, "="); add_nn($$, $3); add_nt($$, ";"); } /* Check int type */
    |   Identifier '[' Expression ']' '=' Expression ';'    {$$ = new node(++cnt, "Statement", $1 -> _id); add_nn($$, $1); add_nt($$, "["); add_nn($$, $3); add_nt($$, "]"); add_nt($$, "="); add_nn($$, $6); add_nt($$, ";"); } /* Check IntArray type */
    ;

ExpressionList
    :   Expression    {$$ = new nodes(); $$ -> push_back($1); }
    |   Expression ',' ExpressionList    {$$ = $3; $3 -> push_front($1); }
    |       {$$ = new nodes();}/* Empty */
    ;

Expression
    :   Expression And Expression    {$$ = new node(++cnt, "Expression"); add_nn($$, $1); add_nt($$, "And"); add_nn($$, $3);}  /* Every identifier in expressions shall be checked, like the correction . */
    |   Expression '<' Expression    {$$ = new node(++cnt, "Expression"); add_nn($$, $1); add_nt($$, "<"); add_nn($$, $3);}
    |   Expression '+' Expression    {$$ = new node(++cnt, "Expression"); add_nn($$, $1); add_nt($$, "+"); add_nn($$, $3);}
    |   Expression '-' Expression    {$$ = new node(++cnt, "Expression"); add_nn($$, $1); add_nt($$, "-"); add_nn($$, $3); }
    |   Expression '*' Expression    {$$ = new node(++cnt, "Expression"); add_nn($$, $1); add_nt($$, "*"); add_nn($$, $3);  }
    |   Expression '[' Expression ']'    {$$ = new node(++cnt, "Expression"); add_nn($$, $1); add_nt($$, "["); add_nn($$, $3); add_nt($$, "]"); } /* check class or func coherence, varlist to explist */
    |   Expression '.' ArrayLength    {$$ = new node(++cnt, "Expression"); add_nn($$, $1); add_nt($$, "."); add_nt($$, "ArrayLength"); }
    |   Expression '.' Identifier '(' ExpressionList ')'    {$$ = new node(++cnt, "Expression"); add_nn($$, $1); add_nt($$, "."); add_nn($$, $3); add_nt($$, "("); add_nl($$, $5); add_nt($$, ")"); }
    |   Number    {$$ = new node(++cnt, "Expression"); char tmpstr[20]; sprintf(tmpstr, "%g", $1); add_nt($$, string(tmpstr)); }
    |   True    {$$ = new node(++cnt, "Expression");  add_nt($$, "True"); }
    |   False    {$$ = new node(++cnt, "Expression"); add_nt($$, "False"); }
    |   Identifier    {$$ = new node(++cnt, "Expression"); add_nn($$, $1); }
    |   This    {$$ = new node(++cnt, "Expression"); add_nt($$, "This"); }
    |   New Integer '[' Expression ']'    {$$ = new node(++cnt, "Expression"); add_nt($$, "New"); add_nt($$, "Integer"); add_nt($$, "["); add_nn($$, $4); add_nt($$, "]");  }
    |   New Identifier '(' ')'    {$$ = new node(++cnt, "Expression"); add_nt($$, "New"); add_nn($$, $2); add_nt($$, "("); add_nt($$, ")"); }
    |   '!' Expression    {$$ = new node(++cnt, "Expression"); add_nt($$, "!"); add_nn($$, $2); }
    |   '(' Expression ')'    {$$ = new node(++cnt, "Expression"); add_nt($$, "("); add_nn($$, $2); add_nt($$, ")"); }
    ;

Identifier
    :   Id    {$$ = new node(++cnt, "Identifier", $1); add_nt($$, string($1));  } /* add_nt($$, string($1)); */
    ;  

%%

int yyerror(char *s)
{
    printf("%s\n",s);
    return 0;
}

struct Tree_node* makeleaf(char* Tree_nodeStr){
    //printf("%s\n",Tree_nodeStr);
    struct Tree_node* leaf = (struct Tree_node*)malloc(sizeof(struct Tree_node));
    leaf->data = Tree_nodeStr;
    for(int i = 0; i<10; i++){
        leaf->arr[i] = NULL;
    }
    return leaf;
}

struct Tree_node* makeInternalnode(char* rule, struct Tree_node* memArr[], int mem){
    struct Tree_node* internalTree_node = (struct Tree_node*)malloc(sizeof(struct Tree_node));
    internalTree_node->data = rule;
    for(int i = 0; i<mem; i++){
        internalTree_node->arr[i] = memArr[i];
    }
    for(int i = mem; i<10; i++){
        internalTree_node->arr[i] = NULL;
    }
    return internalTree_node;
}

void ast_print(struct Tree_node* root, int d){

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


void neighbour_append(struct Tree_node* root,FILE* graph, int depth,int child_num){
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

void graph_maker(struct Tree_node* root,FILE* graph,int depth,int child_num){
    
    if(root!=NULL){
        neighbour_append(root,graph,depth,child_num);
        for(int i = 0; i<10 && root->arr[i]!=NULL; i++){
            graph_maker(root->arr[i], graph,depth+1,i);
        }

    }
    return;
    

}


int main(int argc , char** argv)
{   
    assert(argc == 2);       // Need to add path to inputfile and output file

    yyin = fopen(argv[1] , "r");
    if(yyin == NULL){
        printf("No such file found ! \n");
        return 0;
    }
    printf("I am in before parse call \n");

    yyparse();

    printf("I am out of parse call \n");
    fclose(yyin);

    return 0;

}
