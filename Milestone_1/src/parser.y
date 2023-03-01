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

struct node{
    char* data;
    struct node* arr[N_NodeChild];

};
struct node* makeInternalNode(char* rule, struct node* memArr[], int mem);
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
        char * str1 = concatenate_string($2, $3);
        char * str2 = concatenate_string(str1, $1->data);
        $$ = makeleaf(str2);
    }
    | Name LeftSquareBracket RightSquareBracket {
        char * str1 = concatenate_string($2, $3);
        char * str2 = concatenate_string(str1, $1->data);
        $$ = makeleaf(str2);
    }
    | ArrayType LeftSquareBracket RightSquareBracket {
        char * str1 = concatenate_string($2, $3);
        char * str2 = concatenate_string(str1, $1->data);
        $$ = makeleaf(str2);
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
        char * str1 = concatenate_string($2, $3);
        char * str2 = concatenate_string(str1, $1->data);
        $$ = makeleaf(str2);
    }

CompilationUnit: 
    PackageDeclaration_opt ImportDeclarations_opt TypeDeclarations_opt {

        struct node * memArr[3];
        memArr[0] = $1;
        memArr[1] = $2;
        memArr[2] = $3;

        $$ = makeInternalNode("Compilation_Unit", memArr, 3);
    }

ImportDeclarations_opt : { $$ = NULL; }
    | ImportDeclarations {
        $$ = $1;
    }

ImportDeclarations: 
    ImportDeclaration {
        $$ = $1;
    }
    | ImportDeclarations ImportDeclaration {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode("Import", memArr, 2);
    }

TypeDeclarations_opt : { $$ = NULL; }
    | TypeDeclarations {
        $$ = $1;
    }

TypeDeclarations: 
    TypeDeclaration {
        $$ = $1;
    }
    | TypeDeclarations TypeDeclaration

PackageDeclaration_opt : { $$ = NULL; }
    | PackageDeclaration {
        $$ = $1;
    }

PackageDeclaration: 
    Package Name Semicolon {
        char * str1 = concatenate_string($1, $2->data);
        $$ = makeleaf(str1);
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
        char * str1 = concatenate_string($1, $2->data);
        $$ = makeleaf(str1);
    }

TypeImportOnDemandDeclaration: 
    Import Name Dot Product Semicolon {
        char * str1 = concatenate_string($1, $2->data);
        char * str2 = concatenate_string(str1, $4);
        $$ = makeleaf(str2);
    }

TypeDeclaration: 
    ClassDeclaration {
        $$ = $1;
    }
    | InterfaceDeclaration {
        $$ = $1;
    }
    | Semicolon {
        $$ = makeleaf($1);
    }

Modifiers: 
    Modifier {
        $$ = $1;
    }
    | Modifiers Modifier {
        char * str1 = concatenate_string($1->data, " ");
        char * str2 = concatenate_string(str1, $2->data);
        $$ = makeleaf(str1);
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
        $$ = makeInternalNode("ClassDeclaration", memArr, 6);
    }

Modifiers_opt : { $$ = NULL; }
    | Modifiers {
        $$ = $1;
    }

ClassExtend_opt : { $$ = NULL; }
    | ClassExtend {
        $$ = $1;
    }

Interfaces_opt : { $$ = NULL; }
    | Interfaces {
        $$ = $1;
    }

ClassExtend : 
    Extends ClassType {
        char * str1 = concatenate_string($1, $2->data);
        $$ = makeleaf(str1);
    }

Interfaces: 
    Implements InterfaceTypeList {
        char * str1 = concatenate_string($1, $2->data);
        $$ = makeleaf(str1);
    }

InterfaceTypeList: 
    InterfaceType {
        $$ = $1;
    }
    | InterfaceTypeList Comma InterfaceType {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("IngerfaceDeclarator", memArr, 2);
    }

ClassBody: 
    LeftCurlyBrace ClassBodyDeclarations_opt RightCurlyBrace {
        $$ = $2;
    }

ClassBodyDeclarations_opt : { 
        $$ = NULL ;
    }
    | ClassBodyDeclarations {
        $$ = $1;
    }

ClassBodyDeclarations: 
    ClassBodyDeclaration {
        $$ = $1;
    }
    | ClassBodyDeclarations ClassBodyDeclaration {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode("Class declaration", memArr, 2);
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
        memArr[0]  = $1;
        memArr[1] = $2;
        memArr[2] = $3;
         $$ = makeInternalNode("Declaration", memArr, 3);
    }

VariableDeclarators: 
    VariableDeclarator {
        $$ = $1;
    }
    | VariableDeclarators Comma VariableDeclarator {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("VariableDeclarator", memArr, 2);
    }

VariableDeclarator: 
    VariableDeclaratorId {
        $$ = $1;
    }
    | VariableDeclaratorId EqualTo VariableInitializer {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("=", memArr, 2);
    }

VariableDeclaratorId: 
    Identifier {
        $$ = makeleaf($1);
    }
    | VariableDeclaratorId LeftSquareBracket RightSquareBracket {
        char * str = concatenate_string($1->data,"[]");
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
        memArr[1]  = $2;

        $$ = makeInternalNode("Method", memArr,2);
    }

MethodHeader:
    Modifiers_opt Type MethodDeclarator Throws_opt {
        struct node * memArr[4];
        memArr[0] = $1;
        memArr[1]  = $2;
        memArr[2] = $3;
        memArr[3] = $4;
        $$ = makeInternalNode("Method_header", memArr,4);
    }
    | Modifiers_opt Void MethodDeclarator Throws_opt {
        struct node * memArr[4];
        memArr[0] = $1;
        memArr[1]  = makeleaf($2);
        memArr[2] = $3;
        memArr[3] = $4;
        $$ = makeInternalNode("Method_header", memArr,4);
    }

Throws_opt : { $$ = NULL; }
    | Throws {
        $$ = $1;
    }

MethodDeclarator: 
    Identifier LeftParanthesis FormalParameterList_opt RightParanthesis {
        struct node * memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1]  = $3;

        $$ = makeInternalNode("Method_Declarator", memArr,2);
    }
    | MethodDeclarator LeftSquareBracket RightSquareBracket {
        $$ =$1;
    }

FormalParameterList_opt : { $$ = NULL; }
    | FormalParameterList {
        $$ = $1;
    }

FormalParameterList: 
    FormalParameter {
        $$ = $1;
    }
    | FormalParameterList Comma FormalParameter{
        struct node * memArr[2];
        memArr[0] = $1; 
        memArr[1] = $3;
        $$ = makeInternalNode("Parameter_list", memArr, 2);
    }

FormalParameter: 
    Type VariableDeclaratorId {
        char * str = concatenate_string($1->data, $2->data);
        $$ =  makeleaf(str);
    }

Throws: 
    THROWS ClassTypeList {
        char * str = concatenate_string("throws", $2->data);
        $$ =  makeleaf(str);
    }

ClassTypeList: 
    ClassType {
        $$ = $1;
    }
    | ClassTypeList Comma ClassType {
        struct node * memArr[2];
        memArr[0] = $1; 
        memArr[1] = $3;
        $$ = makeInternalNode("ClassType_list", memArr, 2);
    }

MethodBody: 
    Block {
        $$ = $1;
    }
    | Semicolon {
        $$ = makeleaf($1);
    }

StaticInitializer: 
    Static Block {
        struct node* memArr[1];
        memArr[0] = $2;
        $$ = makeInternalNode("Static", memArr, 1);
    }

ConstructorDeclaration: 
    Modifiers_opt ConstructorDeclarator Throws_opt ConstructorBody {
        struct node* memArr[4];
        memArr[0] = $1;
        memArr[1] = $2;
        memArr[2] = $3;
        memArr[3] = $4;
        $$ = makeInternalNode("Constructor", memArr, 4);
    }

ConstructorDeclarator: 
    SimpleName LeftParanthesis FormalParameterList_opt RightParanthesis {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("Constructor", memArr, 2);
    }

ConstructorBody: 
    LeftCurlyBrace ExplicitConstructorInvocation_opt BlockStatements_opt RightCurlyBrace {
        struct node* memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $3;
        $$ = makeInternalNode("Constructor", memArr, 2);
    }

ExplicitConstructorInvocation_opt : { $$ = NULL; }
    | ExplicitConstructorInvocation {
        $$ = $1;
    }

ExplicitConstructorInvocation: 
    This LeftParanthesis ArgumentList_opt RightParanthesis Semicolon {
        struct node* memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $3;
        $$ = makeInternalNode("Constructor", memArr, 2);
    }
    | Super LeftParanthesis ArgumentList_opt RightParanthesis Semicolon {
        struct node* memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $3;
        $$ = makeInternalNode("Constructor", memArr, 2);
    }

ArgumentList_opt: { $$ = NULL; }
    | ArgumentList {
        $$ = $1;
    }

InterfaceDeclaration: 
    Modifiers_opt Interface Identifier ExtendsInterfaces_opt InterfaceBody {
        struct node* memArr[5];
        memArr[0] = $1;
        memArr[1] = makeleaf($2);
        memArr[2] = makeleaf($3);
        memArr[3] = $4;
        memArr[4] = $5;
        $$ = makeInternalNode("InterfaceDeclaration", memArr, 5);
    }

ExtendsInterfaces_opt : { $$ = NULL; }
    | ExtendsInterfaces {
        $$ = $1;
    }

ExtendsInterfaces: 
    Extends InterfaceType {
        struct node* memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $2;
        $$ = makeInternalNode("ExtendInterface", memArr, 2);
    }
    | ExtendsInterfaces Comma InterfaceType {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("ExtendInterface", memArr, 2);
    }

InterfaceBody: 
    LeftCurlyBrace InterfaceMemberDeclarations_opt RightCurlyBrace {
        $$ = $2;
    }

InterfaceMemberDeclarations_opt: { $$ = NULL; }
    | InterfaceMemberDeclarations {
        $$ = $1;
    }

InterfaceMemberDeclarations: 
    InterfaceMemberDeclaration {
        $$ = $1;
    }
    | InterfaceMemberDeclarations InterfaceMemberDeclaration {
        $$ = $1;
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
        struct node* memArr[2];
        memArr[0] = $2;
        memArr[1] = $3;
        $$ = makeInternalNode("ArrayInitilizer", memArr, 2);
    }

VariableInitializers_opt: { $$ = NULL; }
    | VariableInitializers {
        $$ = $1;
    }

Comma_opt : { $$ = NULL; }
    | Comma {
        $$ = makeleaf($1);
    }

VariableInitializers: 
    VariableInitializer {
        $$ = $1;
    }
    | VariableInitializers Comma VariableInitializer {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("Initializer", memArr, 2);
    }

Block: 
    LeftCurlyBrace BlockStatements_opt RightCurlyBrace {
        $$ = $2;
    }

BlockStatements_opt : { $$ = NULL; }
    | BlockStatements {
        $$ = $1;
    }

BlockStatements: 
    BlockStatement {
        $$ = $1;
    }
    | BlockStatements BlockStatement

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
        $$ = makeInternalNode("Declaration", memArr, 2);
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
        $$ = $1;
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
        $$ = makeleaf($1);
    }

LabeledStatement: 
    Identifier Semicolon Statement {
        struct node* memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $3;
        $$ = makeInternalNode("Labeled", memArr, 2);
    }

LabeledStatementNoShortIf: 
    Identifier Semicolon StatementNoShortIf {
        struct node* memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $3;
        $$ = makeInternalNode("IfThen", memArr, 2);
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
        $$ = makeInternalNode("IfThen", memArr, 2);
    }

IfThenElseStatement: 
    If LeftParanthesis Expression RightParanthesis StatementNoShortIf Else Statement {
        struct node* memArr[3];
        memArr[0] = $3;
        memArr[1] = $5;
        memArr[2] = $7;
        $$ = makeInternalNode("IfElse", memArr, 3);
    }

IfThenElseStatementNoShortIf: 
    If LeftParanthesis Expression RightParanthesis StatementNoShortIf Else StatementNoShortIf {
        struct node* memArr[3];
        memArr[0] = $3;
        memArr[1] = $5;
        memArr[2] = $7;
        $$ = makeInternalNode("IfElse_If", memArr, 3);
    }

WhileStatement: 
    While LeftParanthesis Expression RightParanthesis Statement {
        struct node* memArr[2];
        memArr[0] = $3;
        memArr[1] = $5;

        $$ = makeInternalNode("While", memArr, 2);
    }

WhileStatementNoShortIf: 
    While LeftParanthesis Expression RightParanthesis StatementNoShortIf {
        struct node* memArr[2];
        memArr[0] = $3;
        memArr[1] = $5;

        $$ = makeInternalNode("While", memArr, 2);
    }

ForStatement: 
    For LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis Statement {
        struct node* memArr[4];
        memArr[0] = $3;
        memArr[1] = $5;
        memArr[2] = $7;
        memArr[3] = $9;
        $$ = makeInternalNode("For", memArr, 4);
    }

ForStatementNoShortIf: 
    For LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis StatementNoShortIf {
        struct node* memArr[4];
        memArr[0] = $3;
        memArr[1] = $5;
        memArr[2] = $7;
        memArr[3] = $9;
        $$ = makeInternalNode("For", memArr, 4);
    }

ForInit_opt: { $$ = NULL; }
    | ForInit {
        $$ = $1;
    }

Expression_opt: { $$ = NULL; }
    | Expression {
        $$ = $1;
    }

ForUpdate_opt: { $$ = NULL ;}
    | ForUpdate {
        $$ = $1;
    }

ForInit: 
    StatementExpressionList  {
        $$ = $1;
    }
    | LocalVariableDeclaration {
        $$ = $1;
    }

ForUpdate: 
    StatementExpressionList {
        $$ = $1;
    }

StatementExpressionList: 
    StatementExpression {
        $$ = $1;
    }
    | StatementExpressionList Comma StatementExpression {
         struct node * memArr[2];
        memArr[0] =$1;
        memArr[1] =$3;
        $$ = makeInternalNode("return", memArr, 2);
    }

BreakStatement:
    Break Identifier_opt Semicolon {
         struct node * memArr[2];
        memArr[0] =makeleaf($1);
        memArr[1] =$2;
        $$ = makeInternalNode("break", memArr, 2);
    }

Identifier_opt: 
    {
        $$ = NULL;
    }| Identifier {
        $$ = makeleaf($1);
    }

ContinueStatement: 
    Continue Identifier_opt Semicolon {
         struct node * memArr[2];
        memArr[0] =makeleaf($1);
        memArr[1] =$2;
        $$ = makeInternalNode("continue", memArr, 2);
    }

ReturnStatement: 
    Return Expression_opt Semicolon {
         struct node * memArr[2];
        memArr[0] =makeleaf($1);
        memArr[1] =$2;
        $$ = makeInternalNode("return", memArr, 2);
    }

ThrowStatement: 
    THROW Expression Semicolon {
         struct node * memArr[2];
        memArr[0] =makeleaf($1);
        memArr[1] =$2;
        $$ = makeInternalNode("ThrowSatement", memArr, 2);
    }

SynchronizedStatement: 
    Synchronized LeftParanthesis Expression RightParanthesis Block {
        struct node * memArr[3];
        memArr[0] =makeleaf($1);
        memArr[1] =$3;
        memArr[2] = $5;
        $$ = makeInternalNode("SyncSatement", memArr, 3);
    }

TryStatement: 
    Try Block Catches 
    | Try Block Catches_opt Finally

Catches_opt: { $$ = NULL; }
    | Catches {
        $$ = $1;
    }

Catches: 
    CatchClause {
        $$ = $1;
    }
    | Catches CatchClause {
         struct node * memArr[2];
        memArr[0] =$1;
        memArr[1] =$2;
        $$ = makeInternalNode("CatcheClause", memArr, 2);
    }

CatchClause:
    Catch LeftParanthesis FormalParameter RightParanthesis Block {
        struct node * memArr[3];
        memArr[0] = makeleaf($1);
        memArr[1] = $3;
        memArr[2] = $5;
        $$ = makeInternalNode("CatchClause", memArr, 3);
    }

Finally: 
    FINALLY Block {
        struct node * memArr[1];
        memArr[0] = $2;
        $$ = makeInternalNode("finally",memArr,1);
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
        $$ = $1;
    }
    | This {
        $$ = makeleaf($1);
    }
    | LeftParanthesis Expression RightParanthesis 
    | ClassInstanceCreationExpression 
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
        $$ = makeInternalNode("ClassInstance", memArr, 3);
    }

ArgumentList: 
    Expression {
        $$ = $1;
    }
    | ArgumentList Comma Expression {
        struct node * memArr[2];
        memArr[0] =$1;
        memArr[1] =$3;
        $$ = makeInternalNode("Arguement", memArr, 2);
    }

ArrayCreationExpression: 
    New PrimitiveType DimExprs Dims_opt {
        struct node * memArr[4];
        memArr[0] = makeleaf($1);
        memArr[1] =$2;
        memArr[2] =$3;
        memArr[3] =$4;
        $$ = makeInternalNode("Array", memArr, 4);
    }
    | New ClassOrInterfaceType DimExprs Dims_opt {
        struct node * memArr[4];
        memArr[0] = makeleaf($1);
        memArr[1] =$2;
        memArr[2] =$3;
        memArr[3] =$4;
        $$ = makeInternalNode("Array", memArr, 4);
    }

Dims_opt: { $$ = NULL; }
    |Dims {
        $$ = $1;
    }

DimExprs:
    DimExpr {
        $$ = $1;
    }
    | DimExprs DimExpr {

        struct node * memArr[2];
        memArr[0] =$1;
        memArr[1] =$2;
        $$ = makeInternalNode("[]",memArr,2);
    }

DimExpr: 
    LeftSquareBracket Expression RightSquareBracket {
        $$ = $2;
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

        $$ = makeInternalNode($1->data, memArr, 1);
    } 
    | Primary Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $5;

        $$ = makeInternalNode($3, memArr, 2);
    }
    | Super Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis {
        struct node * memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $5;

        $$ = makeInternalNode($3, memArr, 2);
    }

ArrayAccess: 
    Name LeftSquareBracket Expression RightSquareBracket{
        $$ = makeleaf(concatenate_string($1->data,$3->data));
    }
    | PrimaryNoNewArray LeftSquareBracket Expression RightSquareBracket {
        $$ = makeleaf(concatenate_string($1->data,$3->data));
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
        makeInternalNode("++",memArr,1);
    } 

PostDecrementExpression: 
    PostfixExpression MinusMinus {
        struct node * memArr[1];
        memArr[0] = $1;
        makeInternalNode("--",memArr,1);
    } 

UnaryExpression:
    PreIncrementExpression {
        $$ = $1;
    }
    | PreDecrementExpression {
        $$ = $1;
    }
    | Addition UnaryExpression {
        $$ = makeleaf(concatenate_string($1,$2->data));
    }
    | Substraction UnaryExpression {
                $$ = makeleaf(concatenate_string($1,$2->data));

    }
    | UnaryExpressionNotPlusMinus {
        $$ = $1;
    }

PreIncrementExpression: 
    PlusPlus UnaryExpression {
        struct node * memArr[1];
        memArr[0] = $2;
        makeInternalNode("++",memArr,1);
    } 

PreDecrementExpression: 
    MinusMinus UnaryExpression {
        struct node * memArr[1];
        memArr[0] = $2;
        makeInternalNode("--",memArr,1);
    } 

UnaryExpressionNotPlusMinus: 
    PostfixExpression {
        $$ = $1;
    }
    | Tilde UnaryExpression {
        struct node * memArr[1];
        memArr[0] = $2;
        makeInternalNode("~",memArr,1);
    } 
    | NotOperator UnaryExpression {
        struct node * memArr[1];
        memArr[0] = $2;
        makeInternalNode("!",memArr,1);
    } 
    | CastExpression {
        $$ = $1;
    }

CastExpression: 
    LeftParanthesis PrimitiveType Dims_opt RightParanthesis UnaryExpression {
        struct  node * memArr[3];
        memArr[0] = $2;
        memArr[1] = $3;
        memArr[2] = $5;
        char * str = concatenate_string($2->data, $3->data);
        $$ = makeInternalNode(str, memArr, 3);
    }
    | LeftParanthesis Expression RightParanthesis UnaryExpressionNotPlusMinus {
        struct  node * memArr[2];
        memArr[0] = $2;
        memArr[1] = $4;
        $$ = makeInternalNode($2->data, memArr, 2);
    }
    | LeftParanthesis Name Dims RightParanthesis UnaryExpressionNotPlusMinus {
        char * str = concatenate_string($2->data, $3->data);
        struct node * memArr[3];
        memArr[0] = $2;
        memArr[1] = $3;
        memArr[2] = $5;
        $$ = makeInternalNode(str, memArr, 3);
    }

MultiplicativeExpression: 
    UnaryExpression {
        $$ = $1;
    }
    | MultiplicativeExpression Product UnaryExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    } 
    | MultiplicativeExpression Divide UnaryExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    } 
    | MultiplicativeExpression Modulo UnaryExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    }

AdditiveExpression: 
    MultiplicativeExpression {
        $$ = $1;
    }
    | AdditiveExpression Addition MultiplicativeExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    }
    | AdditiveExpression Substraction MultiplicativeExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    }

ShiftExpression: 
    AdditiveExpression {
        $$ = $1;
    }
    | ShiftExpression LeftShit AdditiveExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    }
    | ShiftExpression RightShift AdditiveExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    }
    | ShiftExpression TripleGreaterThan AdditiveExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    }

RelationalExpression: 
    ShiftExpression {
        $$ = $1;
    }
    | RelationalExpression LessThan ShiftExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    } 
    | RelationalExpression GreaterThan ShiftExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    }
    | RelationalExpression LessThanEqualTo ShiftExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    }
    | RelationalExpression GreaterThanEqualTo ShiftExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    } 
    | RelationalExpression Instanceof ReferenceType {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    }

EqualityExpression: 
    RelationalExpression {
        $$ = $1;
    }
    | EqualityExpression EqualToEqualTo RelationalExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    } 
    | EqualityExpression NotEqualTo RelationalExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    }

AndExpression: 
    EqualityExpression {
        $$ = $1;
    }
    | AndExpression BitwiseAnd EqualityExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    }

ExclusiveOrExpression:
    AndExpression {
        $$ = $1;
    }
    | ExclusiveOrExpression CircumFlex AndExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    }

InclusiveOrExpression:
    ExclusiveOrExpression {
        $$ = $1;
    }
    | InclusiveOrExpression BitwiseOr ExclusiveOrExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    }

ConditionalAndExpression:
    InclusiveOrExpression {
        $$ = $1;
    }
    | ConditionalAndExpression AndOperator InclusiveOrExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
    }

ConditionalOrExpression: 
    ConditionalAndExpression {
        $$ = $1;
    }
    | ConditionalOrExpression OrOperator ConditionalAndExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode($2, memArr, 2); 
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
        $$  = makeInternalNode("?:TernaryOperator", memArr, 3); 
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
    $$ = makeInternalNode($2->data, memArr, 2);
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

    
    for(;i<100;i++){
        if(root->arr[i]!= NULL){
            for(int i = 0 ; i<=d+1; i++)
            printf("\t");
        ast_print(root->arr[i],d+1);
        }
    }
}


void neighbour_append(struct node* root,FILE* graph, int depth,int child_num){
int i , leaf_flag =0;
for(i =0 ; i<N_NodeChild; i++){
if(root->arr[i]!= NULL){
fprintf(graph, "\t%s_%d_%d ->{ %s_%d_0",root->data,depth,child_num,(root->arr[i])->data, depth+1);
leaf_flag =1;
break;
}
}
if(!leaf_flag){
fprintf(graph, "\t%s_%d_%d ->{}\n",root->data,depth,child_num);
return;
}

for (int i=1 ; i< N_NodeChild; i++){
if(root->arr[i] != NULL){
fprintf(graph," ,%s_%d_%d",(root->arr[i])->data,depth+1,i);
}
}
fprintf(graph,"}\n");
return;
}

void graph_maker(struct node* root,FILE* graph,int depth,int child_num){
    
    if(root!=NULL){
        neighbour_append(root,graph,depth,child_num);
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

    yyin = fopen(argv[1] , "r");
    if(yyin == NULL){
        printf("No such file found ! \n");
        return 0;
    }
    printf("I am in before parse call \n");

    yyparse();

    printf("I am out of parse call \n");
    ast_print(root,0);
    FILE* graph = fopen("AST.dot","w");
    fprintf(graph, "digraph AST{ \n");
    graph_maker(root, graph,0,0);
    fprintf(graph, "} \n");
    fclose(graph);
    fclose(yyin);

    return 0;

}



