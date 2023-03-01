%{
#include <stdio.h>
#include "assert.h"
int yyerror(char *s);
int yylex();
extern FILE *yyin;
struct node *root = NULL;

#define N_NodeChild 100
#define N_DataSize 1000

struct node{
    char* data;
    struct node* arr[N_NodeChild];

};
struct node* makeInternalNode(char* rule, struct node* memArr[], int mem);
struct node* makeleaf(char* node);

%}


%token Exports Opens Requires Uses Module Permits Sealed Var Non_sealed Provides To With Open Record Transitive Yield Abstract Continue For New Switch Assert Default If Package Synchronized Boolean Do Goto Private This Break Double Implements Protected THROW Byte Else Import Public THROWS Case Enum Instanceof Return Transient Catch Extends Int Short Try Char Final Interface Static Void Class FINALLY Long Strictfp Volatile Const Float Native Super While
%token BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral FloatingPointIntegerLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
%token Comma LeftCurlyBrace RightCurlyBrace Semicolon Dot LeftParanthesis RightParanthesis TripleDot LeftSquareBracket RightSquareBracket AtRate Scope
%token EqualTo NotOperator Tilde QuestionMark Colon RightArrow EqualToEqualTo GreaterThanEqualTo LessThanEqualTo NotEqualTo AndOperator OrOperator PlusPlus MinusMinus Addition Substraction Product Divide BitwiseAnd BitwiseOr CircumFlex Modulo LeftShit RightShift TripleGreaterThan AdditionEqualTo SubstractionEqualTo ProductEqualTo DivideEqualTo BitWiseAndEqualTo BitWiseOrEqualTo CircumFlexEqualTo ModuloEqualTo LeftShitEqualTo RightShiftEqualTo TripleGreaterThanEqualTo GreaterThan LessThan
%token __EMPTY__

%union{
    char data[1000];
    struct node *exp;
}

%left PlusPlus
%left MinusMinus
%left Product
%left Divide
%left Modulo
%left Addition
%left Substraction
%left LeftShit
%left RightShift

%left LessThan 
%left LessThanEqualTo
%left GreaterThan
%left GreaterThanEqualTo

%left EqualToEqualTo
%left NotEqualTo
%left BitwiseAnd
%left CircumFlex
%left BitwiseOr
%left AndOperator
%left OrOperator

%right EqualTo
%right AdditionEqualTo
%right SubstractionEqualTo
%right ProductEqualTo
%right DivideEqualTo
%right ModuloEqualTo
%right RightShiftEqualTo
%right LeftShitEqualTo
%right BitWiseAndEqualTo
%right CircumFlexEqualTo
%right BitWiseOrEqualTo


%type<exp> Goal Literal IntegerLiteral Type PrimitiveType 
%type<exp> NumericType IntegralType FloatingPointType ReferenceType ClassOrInterfaceType 
%type<exp> ClassType InterfaceType ArrayType Name SimpleName 
%type<exp> QualifiedName CompilationUnit ImportDeclarations_opt  ImportDeclarations TypeDeclarations_opt  
%type<exp> TypeDeclarations PackageDeclaration_opt  PackageDeclaration ImportDeclaration SingleTypeImportDeclaration 
%type<exp> TypeImportOnDemandDeclaration TypeDeclaration Modifiers Modifier ClassDeclaration 
%type<exp> Modifiers_opt  ClassExtend_opt  Interfaces_opt  ClassExtend  Interfaces 
%type<exp> InterfaceTypeList ClassBody ClassBodyDeclarations_opt  ClassBodyDeclarations ClassBodyDeclaration 
%type<exp> ClassMemberDeclaration FieldDeclaration VariableDeclarators VariableDeclarator VariableDeclaratorId 
%type<exp> VariableInitializer MethodDeclaration MethodHeader Throws_opt  MethodDeclarator 
%type<exp> FormalParameterList_opt  FormalParameterList FormalParameter Throws ClassTypeList 
%type<exp> MethodBody StaticInitializer ConstructorDeclaration ConstructorDeclarator ConstructorBody 
%type<exp> ExplicitConstructorInvocation_opt  ExplicitConstructorInvocation ArgumentList_opt InterfaceDeclaration ExtendsInterfaces_opt  
%type<exp> ExtendsInterfaces InterfaceBody InterfaceMemberDeclarations_opt InterfaceMemberDeclarations InterfaceMemberDeclaration 
%type<exp> ConstantDeclaration AbstractMethodDeclaration ArrayInitializer VariableInitializers_opt Comma_opt  
%type<exp> VariableInitializers Block BlockStatements_opt  BlockStatements BlockStatement 
%type<exp> LocalVariableDeclarationStatement LocalVariableDeclaration Statement StatementNoShortIf StatementWithoutTrailingSubstatement 
%type<exp> EmptyStatement LabeledStatement LabeledStatementNoShortIf ExpressionStatement StatementExpression 
%type<exp> IfThenStatement IfThenElseStatement IfThenElseStatementNoShortIf WhileStatement WhileStatementNoShortIf 
%type<exp> ForStatement ForStatementNoShortIf ForInit_opt Expression_opt ForUpdate_opt 
%type<exp> ForInit ForUpdate StatementExpressionList BreakStatement Identifier_opt 
%type<exp> ContinueStatement ReturnStatement ThrowStatement SynchronizedStatement TryStatement 
%type<exp> Catches_opt Catches CatchClause Finally Primary 
%type<exp> PrimaryNoNewArray ClassInstanceCreationExpression ArgumentList ArrayCreationExpression Dims_opt 
%type<exp> DimExprs DimExpr Dims FieldAccess MethodInvocation 
%type<exp> ArrayAccess PostfixExpression PostIncrementExpression PostDecrementExpression UnaryExpression 
%type<exp> PreIncrementExpression PreDecrementExpression UnaryExpressionNotPlusMinus CastExpression MultiplicativeExpression 
%type<exp> AdditiveExpression ShiftExpression RelationalExpression EqualityExpression AndExpression 
%type<exp> ExclusiveOrExpression InclusiveOrExpression ConditionalAndExpression ConditionalOrExpression ConditionalExpression 
%type<exp> AssignmentExpression Assignment LeftHandSide AssignmentOperator Expression 

%type<data> Exports Opens Requires Uses Module Permits Sealed Var Non_sealed Provides To With Open Record Transitive Yield Abstract Continue For New Switch Assert Default If Package Synchronized Boolean Do Goto Private This Break Double Implements Protected THROW Byte Else Import Public THROWS Case Enum Instanceof Return Transient Catch Extends Int Short Try Char Final Interface Static Void Class FINALLY Long Strictfp Volatile Const Float Native Super While
%type<data> BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral FloatingPointIntegerLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
%type<data> Comma LeftCurlyBrace RightCurlyBrace Semicolon Dot LeftParanthesis RightParanthesis TripleDot LeftSquareBracket RightSquareBracket AtRate Scope
%type<data> EqualTo NotOperator Tilde QuestionMark Colon RightArrow EqualToEqualTo GreaterThanEqualTo LessThanEqualTo NotEqualTo AndOperator OrOperator PlusPlus MinusMinus Addition Substraction Product Divide BitwiseAnd BitwiseOr CircumFlex Modulo LeftShit RightShift TripleGreaterThan AdditionEqualTo SubstractionEqualTo ProductEqualTo DivideEqualTo BitWiseAndEqualTo BitWiseOrEqualTo CircumFlexEqualTo ModuloEqualTo LeftShitEqualTo RightShiftEqualTo TripleGreaterThanEqualTo GreaterThan LessThan
%type<data> __EMPTY__



%%
Goal: CompilationUnit {
    printf("Reached Goal !\n");
}


Literal: IntegerLiteral | FloatingPointLiteral | BooleanLiteral | CharacterLiteral | StringLiteral | NullLiteral

IntegerLiteral: DecimalIntegerLiteral | HexIntegerLiteral | OctalIntegerLiteral

Type: PrimitiveType | ReferenceType

PrimitiveType: NumericType | Boolean

NumericType: IntegralType| FloatingPointType

IntegralType: Byte | Short | Int | Long | Char

FloatingPointType: Float | Double

ReferenceType: ClassOrInterfaceType | ArrayType

ClassOrInterfaceType: Name

ClassType: ClassOrInterfaceType

InterfaceType: ClassOrInterfaceType

ArrayType: PrimitiveType LeftSquareBracket RightSquareBracket | Name LeftSquareBracket RightSquareBracket | ArrayType LeftSquareBracket RightSquareBracket

Name: SimpleName | QualifiedName

SimpleName: Identifier

QualifiedName: Name Dot Identifier

CompilationUnit: PackageDeclaration_opt ImportDeclarations_opt TypeDeclarations_opt

ImportDeclarations_opt : | ImportDeclarations

ImportDeclarations: ImportDeclaration | ImportDeclarations ImportDeclaration

TypeDeclarations_opt : | TypeDeclarations

TypeDeclarations: TypeDeclaration | TypeDeclarations TypeDeclaration

PackageDeclaration_opt : | PackageDeclaration

PackageDeclaration: Package Name Semicolon

ImportDeclaration: SingleTypeImportDeclaration | TypeImportOnDemandDeclaration

SingleTypeImportDeclaration: Import Name Semicolon

TypeImportOnDemandDeclaration: Import Name Dot Product Semicolon

TypeDeclaration: ClassDeclaration | InterfaceDeclaration | Semicolon

Modifiers: Modifier | Modifiers Modifier

Modifier: Public | Protected | Private | Static | Abstract | Final | Native | Synchronized | Transient Volatile

ClassDeclaration: Modifiers_opt Class Identifier ClassExtend_opt Interfaces_opt ClassBody

Modifiers_opt : | Modifiers

ClassExtend_opt : | ClassExtend

Interfaces_opt : | Interfaces

ClassExtend : Extends ClassType

Interfaces: Implements InterfaceTypeList

InterfaceTypeList: InterfaceType | InterfaceTypeList Comma InterfaceType

ClassBody: LeftCurlyBrace ClassBodyDeclarations_opt RightCurlyBrace

ClassBodyDeclarations_opt : ClassBodyDeclarations

ClassBodyDeclarations: ClassBodyDeclaration | ClassBodyDeclarations ClassBodyDeclaration

ClassBodyDeclaration: ClassMemberDeclaration | StaticInitializer | ConstructorDeclaration

ClassMemberDeclaration: FieldDeclaration | MethodDeclaration

FieldDeclaration: Modifiers_opt Type VariableDeclarators Semicolon

VariableDeclarators: VariableDeclarator | VariableDeclarators Comma VariableDeclarator

VariableDeclarator: VariableDeclaratorId | VariableDeclaratorId EqualTo VariableInitializer

VariableDeclaratorId: Identifier | VariableDeclaratorId LeftSquareBracket RightSquareBracket

VariableInitializer: Expression | ArrayInitializer

MethodDeclaration: MethodHeader MethodBody

MethodHeader: Modifiers_opt Type MethodDeclarator Throws_opt | Modifiers_opt Void MethodDeclarator Throws_opt

Throws_opt : | Throws

MethodDeclarator: Identifier LeftParanthesis FormalParameterList_opt RightParanthesis | MethodDeclarator LeftSquareBracket RightSquareBracket

FormalParameterList_opt : | FormalParameterList

FormalParameterList: FormalParameter | FormalParameterList Comma FormalParameter

FormalParameter: Type VariableDeclaratorId

Throws: THROWS ClassTypeList

ClassTypeList: ClassType | ClassTypeList Comma ClassType

MethodBody: Block | Semicolon

StaticInitializer: Static Block

ConstructorDeclaration: Modifiers_opt ConstructorDeclarator Throws_opt ConstructorBody

ConstructorDeclarator: SimpleName LeftParanthesis FormalParameterList_opt RightParanthesis

ConstructorBody: LeftCurlyBrace ExplicitConstructorInvocation_opt BlockStatements_opt RightCurlyBrace

ExplicitConstructorInvocation_opt : | ExplicitConstructorInvocation

ExplicitConstructorInvocation: This LeftParanthesis ArgumentList_opt RightParanthesis Semicolon | Super LeftParanthesis ArgumentList_opt RightParanthesis Semicolon

ArgumentList_opt: | ArgumentList

InterfaceDeclaration: Modifiers_opt Interface Identifier ExtendsInterfaces_opt InterfaceBody

ExtendsInterfaces_opt : | ExtendsInterfaces

ExtendsInterfaces: Extends InterfaceType | ExtendsInterfaces Comma InterfaceType

InterfaceBody: LeftCurlyBrace InterfaceMemberDeclarations_opt RightCurlyBrace

InterfaceMemberDeclarations_opt: | InterfaceMemberDeclarations

InterfaceMemberDeclarations: InterfaceMemberDeclaration | InterfaceMemberDeclarations InterfaceMemberDeclaration

InterfaceMemberDeclaration: ConstantDeclaration | AbstractMethodDeclaration

ConstantDeclaration: FieldDeclaration

AbstractMethodDeclaration: MethodHeader Semicolon

ArrayInitializer: LeftCurlyBrace VariableInitializers_opt Comma_opt RightCurlyBrace

VariableInitializers_opt: | VariableInitializers

Comma_opt : | Comma

VariableInitializers: VariableInitializer | VariableInitializers Comma VariableInitializer

Block: LeftCurlyBrace BlockStatements_opt RightCurlyBrace

BlockStatements_opt : | BlockStatements

BlockStatements: BlockStatement | BlockStatements BlockStatement

BlockStatement: LocalVariableDeclarationStatement | Statement

LocalVariableDeclarationStatement: LocalVariableDeclaration Semicolon

LocalVariableDeclaration: Type VariableDeclarators

Statement: StatementWithoutTrailingSubstatement
        | LabeledStatement| IfThenStatement
        | IfThenElseStatement | WhileStatement | ForStatement

StatementNoShortIf: StatementWithoutTrailingSubstatement | LabeledStatementNoShortIf | IfThenElseStatementNoShortIf | WhileStatementNoShortIf | ForStatementNoShortIf

StatementWithoutTrailingSubstatement: Block | EmptyStatement | ExpressionStatement | BreakStatement | ContinueStatement | ReturnStatement | SynchronizedStatement | ThrowStatement | TryStatement

EmptyStatement: Semicolon

LabeledStatement: Identifier Semicolon Statement

LabeledStatementNoShortIf: Identifier Semicolon StatementNoShortIf

ExpressionStatement: StatementExpression Semicolon

StatementExpression:  Assignment | PreIncrementExpression | PreDecrementExpression | PostIncrementExpression | PostDecrementExpression | MethodInvocation | ClassInstanceCreationExpression

IfThenStatement: If LeftParanthesis Expression RightParanthesis Statement

IfThenElseStatement: If LeftParanthesis Expression RightParanthesis StatementNoShortIf Else Statement

IfThenElseStatementNoShortIf: If LeftParanthesis Expression RightParanthesis StatementNoShortIf Else StatementNoShortIf

WhileStatement: While LeftParanthesis Expression RightParanthesis Statement

WhileStatementNoShortIf: While LeftParanthesis Expression RightParanthesis StatementNoShortIf

ForStatement: For LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis Statement

ForStatementNoShortIf: For LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis StatementNoShortIf

ForInit_opt: | ForInit

Expression_opt: | Expression

ForUpdate_opt: | ForUpdate

ForInit: StatementExpressionList | LocalVariableDeclaration

ForUpdate: StatementExpressionList

StatementExpressionList: StatementExpression | StatementExpressionList Comma StatementExpression

BreakStatement: Break Identifier_opt Semicolon

Identifier_opt: | Identifier

ContinueStatement: Continue Identifier_opt Semicolon

ReturnStatement: Return Expression_opt Semicolon

ThrowStatement: THROW Expression Semicolon

SynchronizedStatement: Synchronized LeftParanthesis Expression RightParanthesis Block

TryStatement: Try Block Catches | Try Block Catches_opt Finally

Catches_opt: | Catches

Catches: CatchClause | Catches CatchClause

CatchClause: Catch LeftParanthesis FormalParameter RightParanthesis Block

Finally: FINALLY Block

Primary: PrimaryNoNewArray | ArrayCreationExpression

PrimaryNoNewArray: 
    Literal 
    | This 
    | LeftParanthesis Expression RightParanthesis 
    | ClassInstanceCreationExpression 
    | FieldAccess 
    | MethodInvocation 
    | ArrayAccess

ClassInstanceCreationExpression: 
    New ClassType LeftParanthesis ArgumentList_opt RightParanthesis

ArgumentList: 
    Expression 
    | ArgumentList Comma Expression

ArrayCreationExpression: 
    New PrimitiveType DimExprs Dims_opt 
    | New ClassOrInterfaceType DimExprs Dims_opt

Dims_opt: 
    |Dims

DimExprs:
    DimExpr 
    | DimExprs DimExpr

DimExpr: 
    LeftSquareBracket Expression RightSquareBracket

Dims: 
    LeftSquareBracket RightSquareBracket 
    | Dims LeftSquareBracket RightSquareBracket

FieldAccess: 
    Primary Dot Identifier 
    | Super Dot Identifier

MethodInvocation: 
    Name LeftParanthesis ArgumentList_opt RightParanthesis 
    | Primary Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis 
    | Super Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis

ArrayAccess: 
    Name LeftSquareBracket Expression RightSquareBracket
    | PrimaryNoNewArray LeftSquareBracket Expression RightSquareBracket

PostfixExpression: 
    Primary 
    | Name 
    | PostIncrementExpression 
    | PostDecrementExpression

PostIncrementExpression: 
    PostfixExpression PlusPlus

PostDecrementExpression: 
    PostfixExpression MinusMinus

UnaryExpression:
    PreIncrementExpression 
    | PreDecrementExpression 
    | Addition UnaryExpression 
    | Substraction UnaryExpression 
    | UnaryExpressionNotPlusMinus

PreIncrementExpression: 
    PlusPlus UnaryExpression

PreDecrementExpression: 
    MinusMinus UnaryExpression

UnaryExpressionNotPlusMinus: 
    PostfixExpression 
    | Tilde UnaryExpression 
    | NotOperator UnaryExpression 
    | CastExpression

CastExpression: 
    LeftParanthesis PrimitiveType Dims_opt RightParanthesis UnaryExpression 
    | LeftParanthesis Expression RightParanthesis UnaryExpressionNotPlusMinus 
    | LeftParanthesis Name Dims RightParanthesis UnaryExpressionNotPlusMinus

MultiplicativeExpression: 
    UnaryExpression 
    | MultiplicativeExpression Product UnaryExpression 
    | MultiplicativeExpression Divide UnaryExpression 
    | MultiplicativeExpression Modulo UnaryExpression

AdditiveExpression: 
    MultiplicativeExpression 
    | AdditiveExpression Addition MultiplicativeExpression 
    | AdditiveExpression Substraction MultiplicativeExpression

ShiftExpression: 
    AdditiveExpression 
    | ShiftExpression LeftShit AdditiveExpression 
    | ShiftExpression RightShift AdditiveExpression 
    | ShiftExpression TripleGreaterThan AdditiveExpression

RelationalExpression: 
    ShiftExpression {
        $$ = $1;
    }
    | RelationalExpression LessThan ShiftExpression 
    | RelationalExpression GreaterThan ShiftExpression 
    | RelationalExpression LessThanEqualTo ShiftExpression 
    | RelationalExpression GreaterThanEqualTo ShiftExpression 
    | RelationalExpression Instanceof ReferenceType

EqualityExpression: 
    RelationalExpression {
        $$ = $1;
    }
    | EqualityExpression EqualToEqualTo RelationalExpression 
    | EqualityExpression NotEqualTo RelationalExpression

AndExpression: 
    EqualityExpression {
        $$ = $1;
    }
    | AndExpression BitwiseAnd EqualityExpression

ExclusiveOrExpression:
    AndExpression {
        $$ = $1;
    }
    | ExclusiveOrExpression CircumFlex AndExpression

InclusiveOrExpression:
    ExclusiveOrExpression {
        $$ = $1;
    }
    | InclusiveOrExpression BitwiseOr ExclusiveOrExpression

ConditionalAndExpression:
    InclusiveOrExpression {
        $$ = $1;
    }
    | ConditionalAndExpression AndOperator InclusiveOrExpression

ConditionalOrExpression: 
    ConditionalAndExpression {
        $$ = $1;
    }
    | ConditionalOrExpression OrOperator ConditionalAndExpression

ConditionalExpression: 
    ConditionalOrExpression {
        $$ = $1;
    }
    | ConditionalOrExpression QuestionMark Expression Colon ConditionalExpression

AssignmentExpression: 
    ConditionalExpression {
        $$ = $1;
    }
    | Assignment{
        $$ = $1;
    }

Assignment: LeftHandSide AssignmentOperator AssignmentExpression {
    struct node * temp = $2;
    struct node* memArr[2];
    memArr[0] = $1;
    memArr[1] = $3;
    $$ = makeInternalNode(temp->data, memArr, 2);
}

LeftHandSide: Name | FieldAccess | ArrayAccess

AssignmentOperator: 
    EqualTo {
        $$ = makeleaf($1);
    }
    | ProductEqualTo {
        $$ = makeleaf($1);
    }
    | DivideEqualTo {
        $$ = makeleaf($1);
    }
    | ModuloEqualTo  {
        $$ = makeleaf($1);
    }
    | AdditionEqualTo {
        $$ = makeleaf($1);
    }
    | SubstractionEqualTo  {
        $$ = makeleaf($1);
    }
    | LeftShitEqualTo  {
        $$ = makeleaf($1);
    }
    | RightShiftEqualTo  {
        $$ = makeleaf($1);
    }
    | TripleGreaterThanEqualTo  {
        $$ = makeleaf($1);
    }
    | BitWiseAndEqualTo  {
        $$ = makeleaf($1);
    }
    | CircumFlexEqualTo  {
        $$ = makeleaf($1);
    }
    | BitWiseOrEqualTo {
        $$ = makeleaf($1);
    }

Expression: AssignmentExpression{
    $$ = $1;
}


%%


int yyerror(char* s)
{
    printf("%s\n",s);
}




struct node* makeleaf(char* nodeStr){
    //printf("%s\n",nodeStr);
    struct node* leaf = (struct node*)malloc(sizeof(struct node));
    leaf->data = nodeStr;
    for(int i = 0; i<N_NodeChild; i++){
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
    for(int i = mem; i<N_NodeChild; i++){
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
    for (int i=1 ; i< N_NodeChild; i++){
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
        for(int i = 0; i<N_NodeChild && root->arr[i]!=NULL; i++){
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



