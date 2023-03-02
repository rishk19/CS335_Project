%{
#include <stdio.h>
#include "assert.h"
#include "string.h"
#include "stdlib.h"
int yyerror(char *s);
int yylex();
extern FILE *yyin;
struct node *root = NULL;

#define N_NodeChild 100
#define N_DataSize 1000
int ctr = 0;
struct node{
    char data[100];
    int parentFlag;
    struct node* arr[N_NodeChild];

};
struct node* makeInternalNode(char* rule, struct node* memArr[], int n, int isParent);
struct node* makeleaf(char* node);
char* concatenate_string(char* s, char* s1);

%}


%token Exports Opens Requires Uses Module Permits Sealed Var Non_sealed Provides To With Open Record Transitive Yield Abstract Continue For New Switch Assert Default If Package Synchronized Boolean Do Goto Private This Break Double Implements Protected THROW Byte Else Import Public THROWS Case Enum Instanceof Return Transient Catch Extends Int Short Try Char Final Interface Static Void Class FINALLY Long Strictfp Volatile Const Float Native Super While
%token BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral FloatingPointIntegerLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
%token Comma LeftCurlyBrace RightCurlyBrace Semicolon Dot LeftParanthesis RightParanthesis TripleDot LeftSquareBracket RightSquareBracket AtRate Scope
%token EqualTo NotOperator Tilde QuestionMark Colon RightArrow EqualToEqualTo GreaterThanEqualTo LessThanEqualTo NotEqualTo AndOperator OrOperator PlusPlus MinusMinus Addition Substraction Product Divide BitwiseAnd BitwiseOr CircumFlex Modulo LeftShit RightShift TripleGreaterThan AdditionEqualTo SubstractionEqualTo ProductEqualTo DivideEqualTo BitWiseAndEqualTo BitWiseOrEqualTo CircumFlexEqualTo ModuloEqualTo LeftShitEqualTo RightShiftEqualTo TripleGreaterThanEqualTo GreaterThan LessThan
%token __EMPTY__

%union{
    char data[100];
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
    printf("Parsing was successful !\n");
    $$ = $1;
    root = $$;
}


Literal: 
    IntegerLiteral {
        $$ = $1;
    }
    | FloatingPointLiteral {
        $$ = makeleaf($1);
    }
    | BooleanLiteral {
        $$ = makeleaf($1);
    }
    | CharacterLiteral {
        $$ = makeleaf($1);
    }
    | StringLiteral {
        $$ = makeleaf($1);
    }
    | NullLiteral{
        $$ = makeleaf($1);
    }

IntegerLiteral: 
    DecimalIntegerLiteral {
        $$ = makeleaf($1);
    }
    | HexIntegerLiteral {
        $$ = makeleaf($1);
    }
    | OctalIntegerLiteral {
        $$ = makeleaf($1);
    }

Type: 
    PrimitiveType {
        $$ = $1;
    }
    | ReferenceType {
        $$ = $1;
    }

PrimitiveType: 
    NumericType {
        $$ = $1;
    }
    | Boolean {
        $$ = makeleaf($1);
    }

NumericType: 
    IntegralType {
        $$ = $1;
    }
    | FloatingPointType {
        $$ = $1;
    }

IntegralType: 
    Byte {
        $$ = makeleaf($1);
    }
    | Short {
        $$ = makeleaf($1);
    }
    | Int {
        $$ = makeleaf($1);
    }
    | Long {
        $$ = makeleaf($1);
    }
    | Char {
        $$ = makeleaf($1);
    }

FloatingPointType: 
    Float {
        $$ = makeleaf($1);
    }
    | Double {
        $$ = makeleaf($1);
    }

ReferenceType: 
    ClassOrInterfaceType  {
        $$ = $1;
    }
    | ArrayType {
        $$ = $1;
    }

ClassOrInterfaceType: 
    Name {
        $$ = $1;
    }

ClassType: 
    ClassOrInterfaceType {
        $$ = $1;
    }

InterfaceType: 
    ClassOrInterfaceType {
        $$ = $1;
    }

ArrayType: 
    PrimitiveType LeftSquareBracket RightSquareBracket {
        $$ = makeleaf(concatenate_string($1->data,"[]"));
    }
    | Name LeftSquareBracket RightSquareBracket {
        $$ = makeleaf(concatenate_string($1->data,"[]"));

    }
    | ArrayType LeftSquareBracket RightSquareBracket {
        $$ = makeleaf(concatenate_string($1->data,"[]"));

    }

Name: 
    SimpleName {
        $$ = $1;
    }
    | QualifiedName {
        $$ = $1;
    }

SimpleName: 
    Identifier {
        $$ = makeleaf($1);
    }

QualifiedName: 
    Name Dot Identifier {
        $$ = makeleaf(concatenate_string($1->data,concatenate_string($2,$3)));
    }

CompilationUnit: 
    PackageDeclaration_opt ImportDeclarations_opt TypeDeclarations_opt {

        struct node * memArr[3];
        memArr[0] = $1;
        memArr[1] = $2;
        memArr[2] = $3;
        $$ = makeInternalNode("CompilationUnit", memArr, 3, 1);
    }

ImportDeclarations_opt : 
    { 
        $$ = NULL; 
    }
    | ImportDeclarations {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Imports", memArr, 1, 1);
    }

ImportDeclarations: 
    ImportDeclaration {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode($1->data, memArr, 1, 0);
    }
    | ImportDeclarations ImportDeclaration {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode("IntermediateImports", memArr, 2, 0);
    }

TypeDeclarations_opt : 
    { 
        $$ = NULL;
     }
    | TypeDeclarations {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Declarations", memArr, 1, 1);
    }

TypeDeclarations: 
    TypeDeclaration {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode($1->data, memArr, 1, 0);
    }
    | TypeDeclarations TypeDeclaration {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
    }

PackageDeclaration_opt : 
    { 
        $$ = NULL;
     }
    | PackageDeclaration {
        $$ = $1;
    }

PackageDeclaration: 
    Package Name Semicolon {
        $$ = makeleaf(concatenate_string($1,concatenate_string("_",$2->data)));
    }

ImportDeclaration: 
    SingleTypeImportDeclaration {
        $$ = $1;
    }
    | TypeImportOnDemandDeclaration {
        $$ = $1;
    }

SingleTypeImportDeclaration: 
    Import Name Semicolon {
        $$ = makeleaf(concatenate_string($1, concatenate_string("_",$2->data)));
    }

TypeImportOnDemandDeclaration: 
    Import Name Dot Product Semicolon {
        $$ = makeleaf(concatenate_string($1, concatenate_string("_",concatenate_string($2->data,".*"))));
    }

TypeDeclaration: 
    ClassDeclaration {
        $$ = $1;
    }
    | InterfaceDeclaration {
        $$ = $1;
    }
    | Semicolon {
        $$ = NULL;
    }

Modifiers: 
    Modifier {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode($1->data, memArr, 1, 0);
    }
    | Modifiers Modifier {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode("Modifier", memArr, 2, 0);
    }

Modifier: 
    Public {
        $$ = makeleaf($1);
    }
    | Protected {
        $$ = makeleaf($1);
    }
    | Private {
        $$ = makeleaf($1);
    }
    | Static {
        $$ = makeleaf($1);
    }
    | Abstract {
        $$ = makeleaf($1);
    }
    | Final {
        $$ = makeleaf($1);
    }
    | Native {
        $$ = makeleaf($1);
    }
    | Synchronized {
        $$ = makeleaf($1);
    }
    | Transient {
        $$ = makeleaf($1);
    }
    | Volatile {
        $$ = makeleaf($1);
    }

ClassDeclaration: 
    Modifiers_opt Class Identifier ClassExtend_opt Interfaces_opt ClassBody {
        struct node * memArr[6];
        memArr[0] = $1;
        memArr[1] = makeleaf($2);
        memArr[2] = makeleaf($3);
        memArr[3] = $4;
        memArr[4] = $5;
        memArr[5] = $6;
        $$ = makeInternalNode("ClassDeclaration", memArr, 6, 1);
    }

Modifiers_opt : { 
    $$ = NULL; 
    }
    | Modifiers {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Modifiers", memArr, 1, 1);
    }

ClassExtend_opt :{ 
    $$ = NULL; 
    }
    | ClassExtend {
        $$ = $1;
    }

Interfaces_opt : { 
    $$ = NULL; 
    }
    | Interfaces {
        $$ = $1;
    }

ClassExtend : 
    Extends ClassType {
        $$ = makeleaf(concatenate_string($1, concatenate_string("_",$2->data)));
    }

Interfaces: 
    Implements InterfaceTypeList {
        struct node * memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $2;
        $$ = makeInternalNode("Interface", memArr, 2, 1);

    }

InterfaceTypeList: 
    InterfaceType {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode($1->data, memArr, 1, 0);
    }
    | InterfaceTypeList Comma InterfaceType {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("InterfaceList", memArr, 2, 0);
    }

ClassBody: 
    LeftCurlyBrace ClassBodyDeclarations_opt RightCurlyBrace {
        $$ = $2;
    }

ClassBodyDeclarations_opt : { 
        $$ = NULL ;
    }
    | ClassBodyDeclarations {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ClassBody", memArr, 1, 1);
    }

ClassBodyDeclarations: 
    ClassBodyDeclaration {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ClassBody", memArr, 1, 0);
    }
    | ClassBodyDeclarations ClassBodyDeclaration {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
    }

ClassBodyDeclaration: 
    ClassMemberDeclaration {
        $$ = $1;
    }
    | StaticInitializer {
        $$ = $1;
    }
    | ConstructorDeclaration {
        $$ = $1;
    }

ClassMemberDeclaration: 
    FieldDeclaration {
        $$ = $1;
    }
    | MethodDeclaration {
        $$ = $1;
    }

FieldDeclaration: 
    Modifiers_opt Type VariableDeclarators Semicolon {
        struct node * memArr[3];
        memArr[0] = $1;
        memArr[1] = $2;
        memArr[2] = $3;
        $$ = makeInternalNode("FieldDeclaration", memArr, 3, 0);
    }

VariableDeclarators: 
    VariableDeclarator {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("VariableDeclaration", memArr, 1, 0);
    }
    | VariableDeclarators Comma VariableDeclarator {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("VariableDeclarator", memArr, 2, 0);
    }

VariableDeclarator: 
    VariableDeclaratorId {
        $$ = $1;
    }
    | VariableDeclaratorId EqualTo VariableInitializer {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("Initilization", memArr, 2, 0);
    }

VariableDeclaratorId: 
    Identifier {
        $$ = makeleaf($1);
    }
    | VariableDeclaratorId LeftSquareBracket RightSquareBracket {
        $$ = makeleaf(concatenate_string($1->data,"[]"));
    }

VariableInitializer:
    Expression {
        $$ = $1;
    }
    | ArrayInitializer {
        $$ = $1;
    }

MethodDeclaration: 
    MethodHeader MethodBody {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode($1->data, memArr,2, 1);
    }

MethodHeader:
    Modifiers_opt Type MethodDeclarator Throws_opt {
        struct node * memArr[4];
        memArr[0] = $1;
        memArr[1] = $2;
        memArr[2] = $3;
        memArr[3] = $4;
        $$ = makeInternalNode($3->data, memArr, 4, 0);
    }
    | Modifiers_opt Void MethodDeclarator Throws_opt {
        struct node * memArr[4];
        memArr[0] = $1;
        memArr[1] = makeleaf($2);
        memArr[2] = $3;
        memArr[3] = $4;
        $$ = makeInternalNode($3->data, memArr, 4, 0);
    }

Throws_opt : 
    { 
        $$ = NULL;
    }
    | Throws {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Throws", memArr, 1, 1);
    }

MethodDeclarator: 
    Identifier LeftParanthesis FormalParameterList_opt RightParanthesis {
        struct node * memArr[1];
        memArr[0]  = $3;
        $$ = makeInternalNode($1, memArr,1, 0);
    }
    | MethodDeclarator LeftSquareBracket RightSquareBracket {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode(concatenate_string($1->data,"[]"), memArr, 1, 0);
    }

FormalParameterList_opt : {
        $$ = NULL;
    }
    | FormalParameterList {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Parameters", memArr, 1, 1);
    }

FormalParameterList: 
    FormalParameter {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Parameter", memArr, 1, 0);
    }
    | FormalParameterList Comma FormalParameter{
         struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("Parameter", memArr, 1, 0);
    }

FormalParameter: 
    Type VariableDeclaratorId {
        $$ = makeleaf(concatenate_string($1->data, concatenate_string("_", $2->data)));
    }

Throws: 
    THROWS ClassTypeList {
        struct node * memArr[1];
        memArr[0] = $2;
        $$ = makeInternalNode("throws", memArr, 1, 1);
    }

ClassTypeList: 
    ClassType {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("class", memArr, 1, 0);
    }
    | ClassTypeList Comma ClassType {
        struct node * memArr[2];
        memArr[0] = $1; 
        memArr[1] = $3;
        $$ = makeInternalNode("class", memArr, 2, 0);
    }

MethodBody: 
    Block {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("MethodBody", memArr, 1, 1);
    }
    | Semicolon {
        $$ = NULL;
    }

StaticInitializer: 
    Static Block {
        struct node* memArr[1];
        memArr[0] = $2;
        $$ = makeInternalNode("static", memArr, 1, 1);
    }

ConstructorDeclaration: 
    Modifiers_opt ConstructorDeclarator Throws_opt ConstructorBody {
        struct node* memArr[4];
        memArr[0] = $1;
        memArr[1] = $2;
        memArr[2] = $3;
        memArr[3] = $4;
        $$ = makeInternalNode($2->data, memArr, 4, 1);
    }

ConstructorDeclarator: 
    SimpleName LeftParanthesis FormalParameterList_opt RightParanthesis {
        struct node* memArr[1];
        memArr[0] = $3;
        $$ = makeInternalNode($1->data, memArr, 1, 0);
    }

ConstructorBody: 
    LeftCurlyBrace ExplicitConstructorInvocation_opt BlockStatements_opt RightCurlyBrace {
        struct node* memArr[2];
        memArr[0] = $2;
        memArr[1] = $3;
        $$ = makeInternalNode("ConstructorInvocation", memArr, 2, 1);
    }

ExplicitConstructorInvocation_opt : { 
    $$ = NULL; 
    }
    | ExplicitConstructorInvocation {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ExplicitConstructorInvocation", memArr, 1, 1);
    }

ExplicitConstructorInvocation: 
    This LeftParanthesis ArgumentList_opt RightParanthesis Semicolon {
        struct node* memArr[1];
        memArr[0] = $3;
        $$ = makeInternalNode("this", memArr, 1, 0);
    }
    | Super LeftParanthesis ArgumentList_opt RightParanthesis Semicolon {
        struct node* memArr[1];
        memArr[0] = $3;
        $$ = makeInternalNode("super", memArr, 1, 0);
    }

ArgumentList_opt: {
    $$ = NULL; 
    }
    | ArgumentList {
        struct node * memArr[1];
        memArr[0] =$1;
        $$ = makeInternalNode("Arguments", memArr, 1, 1);
    }

InterfaceDeclaration: 
    Modifiers_opt Interface Identifier ExtendsInterfaces_opt InterfaceBody {
        struct node* memArr[4];
        memArr[0] = $1;
        memArr[1] = makeleaf($2);
        memArr[2] = $4;
        memArr[3] = $5;
        $$ = makeInternalNode($3, memArr, 4, 1);
    }

ExtendsInterfaces_opt : {
    $$ = NULL;
    }
    | ExtendsInterfaces {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("extends", memArr, 1, 1);
    }

ExtendsInterfaces: 
    Extends InterfaceType {
        struct node* memArr[1];
        memArr[0] = $2;
        $$ = makeInternalNode("extends", memArr, 1, 0);
    }
    | ExtendsInterfaces Comma InterfaceType {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("extends", memArr, 2, 0);
    }

InterfaceBody: 
    LeftCurlyBrace InterfaceMemberDeclarations_opt RightCurlyBrace {
        $$ = $2;
    }

InterfaceMemberDeclarations_opt: {
        $$ = NULL;
    }
    | InterfaceMemberDeclarations {
        struct node* memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Interfaces", memArr, 1, 1);
    }

InterfaceMemberDeclarations: 
    InterfaceMemberDeclaration {
        struct node* memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Interface", memArr, 1, 0);
    }
    | InterfaceMemberDeclarations InterfaceMemberDeclaration {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode("Interface", memArr, 2, 0);
    }

InterfaceMemberDeclaration: 
    ConstantDeclaration {
        $$ = $1;
    }
    | AbstractMethodDeclaration {
        $$ = $1;
    }

ConstantDeclaration: 
    FieldDeclaration {
        $$ = $1;
    }

AbstractMethodDeclaration: 
    MethodHeader Semicolon {
        $$ = $1;
    }

ArrayInitializer: 
    LeftCurlyBrace VariableInitializers_opt Comma_opt RightCurlyBrace {
        $$ = $2;
    }

VariableInitializers_opt: {
        $$ = NULL; 
    }
    | VariableInitializers {
        struct node* memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("VariableInitializers", memArr, 1, 1);
    }

Comma_opt : {
        $$ = NULL; 
    }
    | Comma {
        $$ = NULL;
    }

VariableInitializers: 
    VariableInitializer {
       struct node* memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode($1->data, memArr, 1, 0);
    }
    | VariableInitializers Comma VariableInitializer {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("Initializer", memArr, 2, 0);
    }

Block: 
    LeftCurlyBrace BlockStatements_opt RightCurlyBrace {
        $$ = $2;
    }

BlockStatements_opt : {
     $$ = NULL; 
     }
    | BlockStatements {
        struct node* memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("statements", memArr, 1, 1);
    }

BlockStatements: 
    BlockStatement {
        struct node* memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Blocks", memArr, 1, 0);
    }
    | BlockStatements BlockStatement {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode("Block", memArr, 2, 0);
    }

BlockStatement: 
    LocalVariableDeclarationStatement {
        $$ = $1;
    }
    | Statement {
        $$ = $1;
    }

LocalVariableDeclarationStatement:
    LocalVariableDeclaration Semicolon {
        $$ =$1;
    }

LocalVariableDeclaration: 
    Type VariableDeclarators {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode("Declaration", memArr, 2, 0);
    }

Statement: 
    StatementWithoutTrailingSubstatement {
        $$ = $1;
    }
    | LabeledStatement {
        $$ = $1;
    }
    | IfThenStatement{
        $$ = $1;
    }
    | IfThenElseStatement {
        $$ = $1;
    }
    | WhileStatement {
        $$ = $1;
    }
    | ForStatement {
        $$ = $1;
    }

StatementNoShortIf: 
    StatementWithoutTrailingSubstatement {
        $$ = $1;
    }
    | LabeledStatementNoShortIf {
        $$ = $1;
    }
    | IfThenElseStatementNoShortIf {
        $$ = $1;
    }
    | WhileStatementNoShortIf {
        $$ = $1;
    }
    | ForStatementNoShortIf {
        $$ = $1;
    }

StatementWithoutTrailingSubstatement: 
    Block {
        $$ = $1;
    }
    | EmptyStatement {
        $$ = NULL;
    }
    | ExpressionStatement {
        $$ = $1;
    }
    | BreakStatement {
        $$ = $1;
    }
    | ContinueStatement {
        $$ = $1;
    }
    | ReturnStatement {
        $$ = $1;
    }
    | SynchronizedStatement {
        $$ = $1;
    }
    | ThrowStatement {
        $$ = $1;
    }
    | TryStatement {
        $$ = $1;
    }

EmptyStatement: 
    Semicolon {
        $$ = NULL;
    }

LabeledStatement: 
    Identifier Semicolon Statement {
        struct node* memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $3;
        $$ = makeInternalNode("LabeledStatements", memArr, 2, 0);
    }

LabeledStatementNoShortIf: 
    Identifier Semicolon StatementNoShortIf {
        struct node* memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $3;
        $$ = makeInternalNode("IfThen", memArr, 2, 0);
    }

ExpressionStatement: 
    StatementExpression Semicolon {
        $$ = $1;
    }

StatementExpression:  
    Assignment {
        $$ = $1;
    }
    | PreIncrementExpression {
        $$ = $1;
    }
    | PreDecrementExpression {
        $$ = $1;
    }
    | PostIncrementExpression {
        $$ = $1;
    }
    | PostDecrementExpression {
        $$ = $1;
    }
    | MethodInvocation {
        $$ = $1;
    }
    | ClassInstanceCreationExpression{
        $$ = $1;
    }

IfThenStatement: 
    If LeftParanthesis Expression RightParanthesis Statement {
        struct node* memArr[2];
        memArr[0] = $3;
        memArr[1] = $5;
        $$ = makeInternalNode("IfThen", memArr, 2, 1);
    }

IfThenElseStatement: 
    If LeftParanthesis Expression RightParanthesis StatementNoShortIf Else Statement {
        struct node* memArr[3];
        memArr[0] = $3;
        memArr[1] = $5;
        memArr[2] = $7;
        $$ = makeInternalNode("IfElse", memArr, 3, 1);
    }

IfThenElseStatementNoShortIf: 
    If LeftParanthesis Expression RightParanthesis StatementNoShortIf Else StatementNoShortIf {
        struct node* memArr[3];
        memArr[0] = $3;
        memArr[1] = $5;
        memArr[2] = $7;
        $$ = makeInternalNode("IfElse_If", memArr, 3, 1);
    }

WhileStatement: 
    While LeftParanthesis Expression RightParanthesis Statement {
        struct node* memArr[2];
        memArr[0] = $3;
        memArr[1] = $5;
        $$ = makeInternalNode("While", memArr, 2, 1);
    }

WhileStatementNoShortIf: 
    While LeftParanthesis Expression RightParanthesis StatementNoShortIf {
        struct node* memArr[2];
        memArr[0] = $3;
        memArr[1] = $5;
        $$ = makeInternalNode("While", memArr, 2, 1);
    }

ForStatement: 
    For LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis Statement {
        struct node* memArr[4];
        memArr[0] = $3;
        memArr[1] = $5;
        memArr[2] = $7;
        memArr[3] = $9;
        $$ = makeInternalNode("For", memArr, 4, 1);
    }

ForStatementNoShortIf: 
    For LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis StatementNoShortIf {
        struct node* memArr[4];
        memArr[0] = $3;
        memArr[1] = $5;
        memArr[2] = $7;
        memArr[3] = $9;
        $$ = makeInternalNode("For", memArr, 4, 1);
    }

ForInit_opt: { 
    $$ = NULL; 
    }
    | ForInit {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ForInit", memArr, 1, 1);
    }

Expression_opt: { 
    $$ = NULL; 
    }
    | Expression {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Expression", memArr, 1, 1);
    }

ForUpdate_opt: { 
    $$ = NULL ;
    }
    | ForUpdate {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ForUpdate", memArr, 1, 1);
    }

ForInit: 
    StatementExpressionList  {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ForInit", memArr, 1, 1);
    }
    | LocalVariableDeclaration {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ForInit", memArr, 1, 1);
    }

ForUpdate: 
    StatementExpressionList {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ForUpdate", memArr, 1, 1);
    }

StatementExpressionList: 
    StatementExpression {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("StatementExpression", memArr, 1, 0);
    }
    | StatementExpressionList Comma StatementExpression {
        struct node * memArr[2];
        memArr[0] =$1;
        memArr[1] =$3;
        $$ = makeInternalNode("StatementExpression", memArr, 2, 0);
    }

BreakStatement:
    Break Identifier_opt Semicolon {
        struct node * memArr[1];
        memArr[0] =$2;
        $$ = makeInternalNode("break", memArr, 1, 1);
    }

Identifier_opt: 
    {
        $$ = NULL;
    }| Identifier {
        $$ = makeleaf($1);
    }

ContinueStatement: 
    Continue Identifier_opt Semicolon {
        struct node * memArr[1];
        memArr[0] =$2;
        $$ = makeInternalNode("continue", memArr, 1, 1);
    }

ReturnStatement: 
    Return Expression_opt Semicolon {
        struct node * memArr[1];
        memArr[0] =$2;
        $$ = makeInternalNode("return", memArr, 1, 1);
    }

ThrowStatement: 
    THROW Expression Semicolon {
        struct node * memArr[1];
        memArr[0] = $2;
        $$ = makeInternalNode("throw", memArr, 1, 1);
    }

SynchronizedStatement: 
    Synchronized LeftParanthesis Expression RightParanthesis Block {
        struct node * memArr[2];
        memArr[0] = $3;
        memArr[1] = $5;
        $$ = makeInternalNode("synchronized", memArr, 2, 1);
    }

TryStatement: 
    Try Block Catches {
        struct node * memArr[2];
        memArr[0] = $2;
        memArr[1] = $3;
        $$ = makeInternalNode("tryCatches", memArr, 2, 1);
    }
    | Try Block Catches_opt Finally {
        struct node * memArr[3];
        memArr[0] = $2;
        memArr[1] = $3;
        memArr[2] = $4;
        $$ = makeInternalNode("tryCtachesFinally", memArr, 3, 1);
    }

Catches_opt: {
        $$ = NULL; 
    }
    | Catches {
        struct node * memArr[1];
        memArr[0] =$1;
        $$ = makeInternalNode("Catches", memArr, 1, 1);
    }

Catches: 
    CatchClause {
        struct node * memArr[1];
        memArr[0] =$1;
        $$ = makeInternalNode("catch", memArr, 1, 0);
    }
    | Catches CatchClause {
        struct node * memArr[2];
        memArr[0] =$1;
        memArr[1] =$2;
        $$ = makeInternalNode("Catch", memArr, 2, 0);
    }

CatchClause:
    Catch LeftParanthesis FormalParameter RightParanthesis Block {
        struct node * memArr[2];
        memArr[0] = $3;
        memArr[1] = $5;
        $$ = makeInternalNode("CatchClause", memArr, 2, 0);
    }

Finally: 
    FINALLY Block {
        struct node * memArr[1];
        memArr[0] = $2;
        $$ = makeInternalNode("finally", memArr, 1, 1);
    }

Primary: 
    PrimaryNoNewArray {
        $$ = $1;
    }
    | ArrayCreationExpression {
        $$ = $1;
    }

PrimaryNoNewArray: 
    Literal {
        printf("InternalNode at line 1222 : %s\n", $1->data);
        $$ = $1;
    }
    | This {
        $$ = makeleaf($1);
    }
    | LeftParanthesis Expression RightParanthesis  {
        $$ = $2;
    }
    | ClassInstanceCreationExpression {
        $$ = $1;
    } 
    | FieldAccess {
        $$ = $1;
    }
    | MethodInvocation {
        $$ = $1;
    }
    | ArrayAccess {
        $$ = $1;
    }

ClassInstanceCreationExpression: 
    New ClassType LeftParanthesis ArgumentList_opt RightParanthesis {
        struct node * memArr[3];
        memArr[0] = makeleaf($1);
        memArr[1] =$2;
        memArr[2] =$4;
        $$ = makeInternalNode("ClassInstance", memArr, 3, 1);
    }

ArgumentList: 
    Expression {
        struct node * memArr[1];
        memArr[0] =$1;
        $$ = makeInternalNode("ArgumentList", memArr, 1, 0);
    }
    | ArgumentList Comma Expression {
        struct node * memArr[2];
        memArr[0] =$1;
        memArr[1] =$3;
        $$ = makeInternalNode("ArgumentList", memArr, 2, 0);
    }

ArrayCreationExpression: 
    New PrimitiveType DimExprs Dims_opt {
        struct node * memArr[4];
        memArr[0] = makeleaf($1);
        memArr[1] =$2;
        memArr[2] =$3;
        memArr[3] =$4;
        $$ = makeInternalNode("ArrayCreation", memArr, 4, 0);
    }
    | New ClassOrInterfaceType DimExprs Dims_opt {
        struct node * memArr[4];
        memArr[0] = makeleaf($1);
        memArr[1] =$2;
        memArr[2] =$3;
        memArr[3] =$4;
        $$ = makeInternalNode("ArrayCreation", memArr, 4, 0);
    }

Dims_opt: { 
    $$ = NULL; 
    }
    |Dims {
        $$ = $1;
    }

DimExprs:
    DimExpr {
        struct node * memArr[1];
        memArr[0] =$1;
        $$ = makeInternalNode("[]", memArr, 1, 0);
    }
    | DimExprs DimExpr {
        struct node * memArr[2];
        memArr[0] =$1;
        memArr[1] =$2;
        $$ = makeInternalNode("[]",memArr,2, 0);
    }

DimExpr: 
    LeftSquareBracket Expression RightSquareBracket {
        struct node * memArr[1];
        memArr[0] =$2;
        $$ = makeInternalNode("[]", memArr, 1, 0);
    }

Dims: 
    LeftSquareBracket RightSquareBracket {
        $$ = makeleaf("[]");
    } 
    | Dims LeftSquareBracket RightSquareBracket {
        $$ = makeleaf(concatenate_string($1->data,"[]"));
    }

FieldAccess: 
    Primary Dot Identifier {
        $$ = makeleaf(concatenate_string($1->data,$3));
    } 
    | Super Dot Identifier {
        $$ = makeleaf(concatenate_string($1,$3));
    }

MethodInvocation: 
    Name LeftParanthesis ArgumentList_opt RightParanthesis {
        struct node * memArr[1];
        memArr[0] = $3;
        $$ = makeInternalNode($1->data, memArr, 1, 1);
    } 
    | Primary Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis {
        struct node * memArr[1];
        memArr[0] = $5;
        $$ = makeInternalNode(concatenate_string($1->data,concatenate_string("_",$3)), memArr, 1, 1);
    }
    | Super Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis {
        struct node * memArr[1];
        memArr[0] = $5;
        $$ = makeInternalNode(concatenate_string($1,concatenate_string("_",$3)), memArr, 1, 1);
    }

ArrayAccess: 
    Name LeftSquareBracket Expression RightSquareBracket{
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("ArrayAccess", memArr, 2, 0);
    }
    | PrimaryNoNewArray LeftSquareBracket Expression RightSquareBracket {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("ArrayAccess", memArr, 2, 0);
    }

PostfixExpression: 
    Primary {
        $$ = $1;
    }
    | Name {
        $$ = $1;
    }
    | PostIncrementExpression {
        $$ = $1;
    }
    | PostDecrementExpression {
        $$ = $1;
    }

PostIncrementExpression: 
    PostfixExpression PlusPlus {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("PostIncrement", memArr, 1, 1);
    } 

PostDecrementExpression: 
    PostfixExpression MinusMinus {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("PostIncrement", memArr, 1, 1);
    } 

UnaryExpression:
    PreIncrementExpression {
        $$ = $1;
    }
    | PreDecrementExpression {
        $$ = $1;
    }
    | Addition UnaryExpression {
        struct node * memArr[1];
        memArr[0] = $2;
        $$ = makeInternalNode("UnaryAddition", memArr, 1, 1);
    }
    | Substraction UnaryExpression {
        struct node * memArr[1];
        memArr[0] = $2;
        $$ = makeInternalNode("UnarySubstraction", memArr, 1, 1);
    }
    | UnaryExpressionNotPlusMinus {
        $$ = $1;
    }

PreIncrementExpression: 
    PlusPlus UnaryExpression {
        struct node * memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $2;
        $$ = makeInternalNode("PreIncrement", memArr, 2, 1);
    } 

PreDecrementExpression: 
    MinusMinus UnaryExpression {
        struct node * memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $2;
        $$ = makeInternalNode("PreDecrement", memArr, 2, 1);
    } 

UnaryExpressionNotPlusMinus: 
    PostfixExpression {
        $$ = $1;
    }
    | Tilde UnaryExpression {
        struct node * memArr[1];
        memArr[0] = $2;
        $$ = makeInternalNode("Tilde", memArr, 1, 1);
    } 
    | NotOperator UnaryExpression {
         struct node * memArr[1];
        memArr[0] = $2;
        $$ = makeInternalNode("Not", memArr, 1, 1);
    } 
    | CastExpression {
        $$ = $1;
    }

CastExpression: 
    LeftParanthesis PrimitiveType Dims_opt RightParanthesis UnaryExpression {
        struct  node * memArr[1];
        memArr[0] = $5;
        char * str = concatenate_string($2->data, $3->data);
        $$ = makeInternalNode(str, memArr, 1, 1);
    }
    | LeftParanthesis Expression RightParanthesis UnaryExpressionNotPlusMinus {
        struct  node * memArr[2];
        memArr[0] = $2;
        memArr[1] = $4;
        $$ = makeInternalNode("CastExpression", memArr, 2, 1);
    }
    | LeftParanthesis Name Dims RightParanthesis UnaryExpressionNotPlusMinus {
        struct node * memArr[1];
        memArr[0] = $5;
        char * str = concatenate_string($2->data, $3->data);
        $$ = makeInternalNode(str, memArr, 1, 1);
    }

MultiplicativeExpression: 
    UnaryExpression {
        $$ = $1;
    }
    | MultiplicativeExpression Product UnaryExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("Multiply", memArr, 2, 1); 
    } 
    | MultiplicativeExpression Divide UnaryExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("Divide", memArr, 2, 1); 
    } 
    | MultiplicativeExpression Modulo UnaryExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("Modulo", memArr, 2, 1); 
    }

AdditiveExpression: 
    MultiplicativeExpression {
        $$ = $1;
    }
    | AdditiveExpression Addition MultiplicativeExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("Addition", memArr, 2, 1); 
    }
    | AdditiveExpression Substraction MultiplicativeExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("Substraction", memArr, 2, 1); 
    }

ShiftExpression: 
    AdditiveExpression {
        $$ = $1;
    }
    | ShiftExpression LeftShit AdditiveExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("LeftShift", memArr, 2, 1); 
    }
    | ShiftExpression RightShift AdditiveExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("RightShift", memArr, 2, 1); 
    }
    | ShiftExpression TripleGreaterThan AdditiveExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("UnsignedRightShift", memArr, 2, 1); 
    }

RelationalExpression: 
    ShiftExpression {
        $$ = $1;
    }
    | RelationalExpression LessThan ShiftExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("LessThan", memArr, 2, 1); 
    } 
    | RelationalExpression GreaterThan ShiftExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("GreaterThan", memArr, 2, 1); 
    }
    | RelationalExpression LessThanEqualTo ShiftExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("LessThanEqualTo", memArr, 2, 1); 
    }
    | RelationalExpression GreaterThanEqualTo ShiftExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("GreaterThanEqualTo", memArr, 2, 1); 
    } 
    | RelationalExpression Instanceof ReferenceType {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("Instanceof", memArr, 2, 1); 
    }

EqualityExpression: 
    RelationalExpression {
        $$ = $1;
    }
    | EqualityExpression EqualToEqualTo RelationalExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("Equalto_Equalto", memArr, 2, 1); 
    } 
    | EqualityExpression NotEqualTo RelationalExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("Not_Equalto", memArr, 2, 1); 
    }

AndExpression: 
    EqualityExpression {
        $$ = $1;
    }
    | AndExpression BitwiseAnd EqualityExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("BitwiseAnd", memArr, 2 ,1); 
    }

ExclusiveOrExpression:
    AndExpression {
        $$ = $1;
    }
    | ExclusiveOrExpression CircumFlex AndExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("xor", memArr, 2 ,1); 
    }

InclusiveOrExpression:
    ExclusiveOrExpression {
        $$ = $1;
    }
    | InclusiveOrExpression BitwiseOr ExclusiveOrExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("BitwiseOR", memArr, 2, 1); 
    }

ConditionalAndExpression:
    InclusiveOrExpression {
        $$ = $1;
    }
    | ConditionalAndExpression AndOperator InclusiveOrExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("BitwiseAND", memArr, 2, 1); 
    }

ConditionalOrExpression: 
    ConditionalAndExpression {
        $$ = $1;
    }
    | ConditionalOrExpression OrOperator ConditionalAndExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("OR", memArr, 2, 1); 
    }

ConditionalExpression: 
    ConditionalOrExpression {
        $$ = $1;
    }
    | ConditionalOrExpression QuestionMark Expression Colon ConditionalExpression {
        struct node* memArr[3];
        memArr[0] = $1;
        memArr[1] = $3;
        memArr[2] = $5;
        $$  = makeInternalNode("?:TernaryOperator", memArr, 3, 1); 
    }

AssignmentExpression: 
    ConditionalExpression {
        $$ = $1;
    }
    | Assignment{
        $$ = $1;
    }

Assignment: 
    LeftHandSide AssignmentOperator AssignmentExpression {
    struct node* memArr[2];
    memArr[0] = $1;
    memArr[1] = $3;
    $$ = makeInternalNode("assignment", memArr, 2, 1);
}

LeftHandSide: 
    Name {
        $$ = $1;
    }
    | FieldAccess {
        $$ = $1;
    }
    | ArrayAccess {
        $$ = $1;
    }

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

Expression: AssignmentExpression {
    $$ = $1;
}


%%


int yyerror(char* s)
{
    printf("%s\n",s);
}



char* concatenate_string(char* s, char* s1)
{
    char* c = (char*) malloc(sizeof(char)*100);
    int i;
    
    int j = 0;

    while(s[j]!= '\0'){
        c[j] = s[j];
        j+=1;
    }
    c[j] = ' ';
    j++;
 
    for (i = 0; s1[i] != '\0'; i++) {
        c[i+j] = s1[i];
     }
 
    c[i + j] = '\0';
 
    return c;
}


struct node* makeleaf(char nodeStr[100]){
    //printf("%s\n",nodeStr);
    struct node* leaf = (struct node*)malloc(sizeof(struct node));
    printf("leaf: %s\n",nodeStr);
    strcpy(leaf->data, nodeStr);
    leaf->parentFlag = 1;
    for(int i = 0; i<N_NodeChild; i++){
        leaf->arr[i] = NULL;
    }
    return leaf;
}

struct node* makeInternalNode(char rule[100], struct node* memArr[], int n, int isParent){

    struct node* internalNode = (struct node*)malloc(sizeof(struct node));
    strcpy(internalNode->data,rule);

    for(int i = 0; i<N_NodeChild; i++){
        internalNode->arr[i] = NULL;
    }
    int k = 0;
    for(int i = 0; i<n; i++){
        if(memArr[i]!=NULL){
            if(memArr[i]->parentFlag == 0){
                for(int j = 0; j<N_NodeChild; j++){
                    if(memArr[i]->arr[j]!=NULL){
                        internalNode->arr[k] = memArr[i]->arr[j];
                        k++;
                    }
                }
            }
            else{
                internalNode->arr[k] = memArr[i];
                k++;
            }
        }
    }
    internalNode->parentFlag = isParent;
    return internalNode;

}


void ast_print(struct node* root, int d){

    if(root == NULL){
        return;
    }

    printf("%s",root->data);
    printf("\n");
    int i =0;

    
    for(;i<100;i++){
        if(root->arr[i]!= NULL){
            for(int i = 0 ; i<=d+1; i++)
            printf("\t");
            ast_print(root->arr[i],d+1);
        }
    }
}

// digraph D {
//   nodeA [label="Node A"];
//   nodeB [label="Node B"];
//   nodeA -> nodeB;
// }
void neighbour_append(struct node *root, FILE *graph, int depth, int child_num)
{
    int i, leaf_flag = 0;
    for (i = 0; i < N_NodeChild; i++)
    {
        if (root->arr[i] != NULL)
        {   fprintf(graph,"\ti%s_%d_%d [label= \"%s\"]",root->data, depth, child_num, root->data);
            fprintf(graph, "\ti%s_%d_%d ->{ i%s_%d_0", root->data, depth, child_num, (root->arr[i])->data, depth + 1);
            leaf_flag = 1;
            break;
        }
    }
    if (!leaf_flag)
    {
        fprintf(graph,"\ti%s_%d_%d [label= \"%s\"]",root->data, depth, child_num, root->data);
        fprintf(graph, "\ti%s_%d_%d ->{}\n", root->data, depth, child_num);
        return;
    }

    for (int j = i+1; j < N_NodeChild; j++)
    {
        if (root->arr[j] != NULL)
        {
            fprintf(graph, " ,i%s_%d_%d", (root->arr[j])->data, depth + 1, j);
        }
    }
    fprintf(graph, "}\n");
    return;
}

void graph_maker(struct node* root,FILE* graph,int depth,int child_num){
    
    if(root!=NULL){
        neighbour_append(root, graph, depth, child_num);
        for(int i = 0; i<N_NodeChild; i++){
            if(root->arr[i]!=NULL){
                graph_maker(root->arr[i], graph,depth+1,i);
            }
        }

    }
    return;
    

}





int main(int argc , char** argv)
{   
    assert(argc == 2);       // Need to add path to inputfile and output file
    #ifdef YYDEBUG
        yydebug = 0;
    #endif
    yyin = fopen(argv[1] , "r");
    if(yyin == NULL){
        printf("No such file found ! \n");
        return 0;
    }
    printf("I am in before parse call \n");

    yyparse();

    printf("I am out of parse call \n");
    FILE* graph = fopen("AST.dot","w");
    ast_print(root,0);
    fprintf(graph, "digraph AST{ \n");
    graph_maker(root, graph,0,0);
    fprintf(graph, "} \n");
    fclose(graph);
    fclose(yyin);

    return 0;

}



