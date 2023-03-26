%{
#include <cstdio>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>
#include "../src/DataStructures/Type.hpp"
#include "../src/DataStructures/GlobalSymbolTable.hpp"
#include "../src/DataStructures/SymbolTable.hpp"
#include "../src/DataStructures/Includes.hpp"
#include "../src/DataStructures/Tac.hpp"

using namespace std;

int yyerror(string s);
extern int yylex();
extern int yyparse();
extern FILE *yyin;
struct node *root = NULL;

#define DECLARATION 1
#define INITIALIZATION 2
#define NON_DECLARAION 3
#define N_NodeChild 100
#define N_DataSize 1000
#define COPY_CODE 128
#define APPEND_CODE 129
#define ASSIGN_CODE 130
#define IF_CODE 131
#define FOR_CODE 132
#define WHILE_CODE 133
#define UNARY_CODE 134
#define BINARY_CODE 135
#define METHOD_INVOCATION 136

int ctr = 0;
int newTempLabel = 0;

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

struct node* makeInternalNode(char* rule, struct node* memArr[], int n, int isParent);
struct node* makeleaf(char* node);
char* concatenate_string(char* s, char* s1);
int semantic_error(string s);
void help();
int buildTAC(struct node* E[], int n, int flag);
int buildVal(struct node* E);
// int dummy(string name, struct SymbolTable * curr, struct GlobalSymbolTable* glob_insert);
long long int line_number=1;
Value dummyVal;// do not delete needed for generating 3AC text

struct GlobalSymbolTable* glob_table = new struct GlobalSymbolTable;
struct SymbolTable* curr = loc_mktable(NULL,"global_scope"); //parameters are parent-pointer,  local-table-name
struct SymbolTable* glob_class_scope = curr;
string class_name = "";
int assign_flag = 0;
string src_file = "";

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
%type<exp> Class_Name_Extractor

%type<data> Exports Opens Requires Uses Module Permits Sealed Var Non_sealed Provides To With Open Record Transitive Yield Abstract Continue For New Switch Assert Default If Package Synchronized Boolean Do Goto Private This Break Double Implements Protected THROW Byte Else Import Public THROWS Case Enum Instanceof Return Transient Catch Extends Int Short Try Char Final Interface Static Void Class FINALLY Long Strictfp Volatile Const Float Native Super While
%type<data> BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral FloatingPointIntegerLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
%type<data> Comma LeftCurlyBrace RightCurlyBrace Semicolon Dot LeftParanthesis RightParanthesis TripleDot LeftSquareBracket RightSquareBracket AtRate Scope
%type<data> EqualTo NotOperator Tilde QuestionMark Colon RightArrow EqualToEqualTo GreaterThanEqualTo LessThanEqualTo NotEqualTo AndOperator OrOperator PlusPlus MinusMinus Addition Substraction Product Divide BitwiseAnd BitwiseOr CircumFlex Modulo LeftShit RightShift TripleGreaterThan AdditionEqualTo SubstractionEqualTo ProductEqualTo DivideEqualTo BitWiseAndEqualTo BitWiseOrEqualTo CircumFlexEqualTo ModuloEqualTo LeftShitEqualTo RightShiftEqualTo TripleGreaterThanEqualTo GreaterThan LessThan
%type<data> __EMPTY__

%%
Goal: CompilationUnit {
    printf("Parsing stage was successful !\n");
    $$ = $1;
}


Literal: 
    IntegerLiteral {
        $$ = $1;
    }
    | FloatingPointLiteral {
        $$ = makeleaf($1);
        $$->symbol.type.name = "float";
        buildVal($$);
    }
    | BooleanLiteral {
        $$ = makeleaf($1);
        $$->symbol.type.name = "boolean";
        buildVal($$);
    }
    | CharacterLiteral {
        $$ = makeleaf($1);
        $$->symbol.type.name = "character";
        buildVal($$);
    }
    | StringLiteral {
        $$ = makeleaf($1);
        $$->symbol.type.name = "string";
        buildVal($$);
    }
    | NullLiteral{
        $$ = makeleaf($1);
        $$->symbol.type.name = "null";
        buildVal($$);
    }

IntegerLiteral: 
    DecimalIntegerLiteral {
        $$ = makeleaf($1);
        $$->symbol.type.name = "int";

        buildVal($$);
    }
    | HexIntegerLiteral {
        $$ = makeleaf($1);
        $$->symbol.type.name = "int";
        buildVal($$);
    }
    | OctalIntegerLiteral {
        $$ = makeleaf($1);
        $$->symbol.type.name = "int";
        buildVal($$);
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
        $$->symbol.type.name = "boolean";
        $$->symbol.type.t = 0;
        $$->symbol.size = 1;
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
        $$->symbol.type.name = "byte";
        $$->symbol.type.t = 0;
        $$->symbol.size = 1;
    }
    | Short {
        $$ = makeleaf($1);
        $$->symbol.type.name = "short";
        $$->symbol.type.t = 0;
        $$->symbol.size = 2;
    }
    | Int {
        $$ = makeleaf($1);
        $$->symbol.type.name = "int";
        $$->symbol.type.t = 0;
        $$-> symbol.size = 4;
    }
    | Long {
        $$ = makeleaf($1);
        $$->symbol.type.name = "long";
        $$->symbol.type.t = 0;
        $$->symbol.size = 8;
    }
    | Char {
        $$ = makeleaf($1);
        $$->symbol.type.name = "char";
        $$->symbol.type.t = 0;
        $$->symbol.size = 2;
    }

FloatingPointType: 
    Float {
        $$ = makeleaf($1);
        $$->symbol.type.t = 0;
        $$->symbol.type.name = "float";
        $$->symbol.size = 4;
    }
    | Double {
        $$ = makeleaf($1);
        $$->symbol.type.name = "double";
        $$->symbol.type.t = 0;
        $$->symbol.size = 8;
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
        $$->symbol.type.t = 1;
        string temp = string($1->data)+"[]";
        $$->symbol.type.name = temp;
    }
    | Name LeftSquareBracket RightSquareBracket {
        $$ = makeleaf(concatenate_string($1->data,"[]"));
        $$->symbol.type.t = 1;
        string temp = string($1->data) + "[]";
        $$->symbol.type.name = temp;

    }
    | ArrayType LeftSquareBracket RightSquareBracket {
        $$ = makeleaf(concatenate_string($1->data,"[]"));
        $$->symbol.type.t = 1;
        string temp = string($1->data) + "[]";
        $$->symbol.type.name = temp;

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
        struct Symbol* lookup_entry = check_scope(curr,$1);      
        if(lookup_entry != NULL){
            $$->symbol = *lookup_entry;
        }buildVal($$);
    }

QualifiedName: 
    Name Dot Identifier {
        $$ = makeleaf(concatenate_string($1->data,concatenate_string($2,$3)));
        buildVal($$);
    }

CompilationUnit: 
    PackageDeclaration_opt ImportDeclarations_opt TypeDeclarations_opt {
        struct node * memArr[3];
        memArr[0] = $1;
        memArr[1] = $2;
        memArr[2] = $3;
        $$ = makeInternalNode("CompilationUnit", memArr, 3, 1);
        root = $$;
        struct node*E[2];
        E[0] = $$;
        E[1] = $3;
        buildTAC(E, 2, COPY_CODE);
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
        $$ = makeInternalNode("Declarations", memArr, 1, 0);
        
        struct node*E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }

TypeDeclarations: 
    TypeDeclaration {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode($1->data, memArr, 1, 0);
        
        struct node*E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }
    | TypeDeclarations TypeDeclaration {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
        
        struct node*E[3];
        E[0] = $$;
        E[1] = $1;
        E[2] = $2;
        buildTAC(E, 3, APPEND_CODE);
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
        $$ = makeleaf(concatenate_string($1,concatenate_string(" ",$2->data)));
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
        $$ = makeleaf(concatenate_string($1, concatenate_string(" ",$2->data)));
    }

TypeImportOnDemandDeclaration: 
    Import Name Dot Product Semicolon {
        $$ = makeleaf(concatenate_string($1, concatenate_string(" ",concatenate_string($2->data,".*"))));
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

Class_Name_Extractor : Modifiers_opt Class Identifier ClassExtend_opt Interfaces_opt{
    class_name = string($3);
    struct node * memArr[5];
    memArr[0] = $1;
    memArr[1] = makeleaf($2);
    memArr[2] = makeleaf($3);
    memArr[3] = $4;
    memArr[4] = $5;
    $$ = makeInternalNode("ClassDeclaration", memArr , 5, 1);
    if($1!=NULL){
        for(int i = 0; i<$1->arr.size(); i++){
            if($1->arr[i]!=NULL)
                $$->symbol.type.modifier.push_back(string($1->arr[i]->data));
       }
    }
    $$->symbol.name = string($3);
    if($4!=NULL)$$->symbol.type.extendClass = string($5->data);
    $$->symbol.offset = 0;
    $$->symbol.type.name = string($3);
    $$->symbol.type.t = 1;        
    $$->symbol.line_num = line_number;
    long long int x  = loc_insert(curr,$$->symbol);
    if(x < 0)
    {
        semantic_error("Declaration of class" +$$->symbol.name + " already exists at line number " + to_string(-x) + ".");
    }
}


ClassDeclaration: 
    Class_Name_Extractor Symbol_Table_Change ClassBody Symbol_Table_Back{
        
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("ClassDeclaration", memArr, 2, 0);        
        struct node* E[2];
        E[0] = $$;
        E[1] = $3;
        buildTAC(E, 2, COPY_CODE);
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
        $$ = makeleaf($2->data);
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
        struct node* E[2];
        E[0] = $$;
        E[1] = $2;
        buildTAC(E, 2, COPY_CODE);
    }

ClassBodyDeclarations_opt : { 
        $$ = NULL ;
    }
    | ClassBodyDeclarations {
        struct node * memArr[1];
        memArr[0] = $1;
        //cout << "Class Declarations Reached !" <<endl;
        $$ = makeInternalNode("ClassBody", memArr, 1, 1);
        /*
        for (int i =0; i < $1->arr.size(); i++){
            $$->symbol.size += $1->arr[i]->symbol.size;
            //cout << $1->arr[i]->symbol.type.modifier.size()<<endl;
            for (int j = 0; j < $1->arr[i]->symbol.structuretable->field_name.size(); j++)
            {   
                //cout << "Scrumptous" <<endl;
                ($$->symbol.structuretable)->field_type.push_back($1->arr[i]->symbol.structuretable->field_type[j]);
                ($$->symbol.structuretable)->field_name.push_back($1->arr[i]->symbol.structuretable->field_name[j]);
                if($1->arr[i]->symbol.type.t ==2)
                {
                    //cout << "Function Declaration of " << $1->arr[i]->symbol.name <<endl;
                    //view_symbol_table_with_children_hierarchy(&$1->arr[i]->symboltable);
                    $$->symbol.structuretable->method_map[$1->arr[i]->symbol.name] = &$1->arr[i]->symboltable;
                    //cout << "Ungabunga" <<endl <<endl;

                }
                
            }
        }
        */
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
        
    }

ClassBodyDeclarations: 
    ClassBodyDeclaration {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ClassBody", memArr, 1, 0);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);

    }
    | ClassBodyDeclarations ClassBodyDeclaration {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
        struct node* E[3];
        E[0] = $$;
        E[1] = $1;
        E[2] = $2;
        buildTAC(E, 3, APPEND_CODE);
    }

ClassBodyDeclaration: 
    ClassMemberDeclaration {
        $$ = $1;
    }
    | StaticInitializer {
        $$=$1;
    }
    | ConstructorDeclaration {
        $$=$1;
    }

ClassMemberDeclaration: 
    FieldDeclaration {
        $$ = $1;
        struct Symbol* class_entry = loc_lookup(glob_class_scope,class_name);
        if(class_entry != NULL){
            class_entry->size += $$->symbol.size;
        }
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
        $$ = makeInternalNode("FieldDeclaration", memArr, 3, 1);
        $$->isDeclaration = DECLARATION;
        $$->t = 0;

        if($1 != NULL)
        {

            for(int j = 0 ; j< $3->arr.size(); j++)
            {
                $$->symbol.size += $2->symbol.size;
                $$->symbol.type = $2->symbol.type;
                //struct Type temp = $2->symbol.type;
                string txt = $3->arr[j]->symbol.name;
                string name = "";
                int count = 0;
                for(int i=0; i<txt.size(); i++)
                {
                    if(txt[i] != '[' && count == 0){
                        name += txt[i];
                    }
                    else if(txt[i] == '['){
                        count += 1;
                    }
                }
                for(int i = 0; i < count ; i++ )
                {
                    $$->symbol.type.name += "[]";
                }

                for(int i=0 ; i< $1->arr.size();i++)
                {
                    $$->symbol.type.modifier.push_back($1->arr[i]->data);
                }
                

                $$->symbol.name = name;
                
                long long int x  = loc_insert(curr,$$->symbol);
        
                if(x < 0)
                {
                    semantic_error("Declaration of " +$$->symbol.name + " already exists at line number " + to_string(-x) + ".");
                }
            }
        }

        else{
            for(int j =0; j< $3->arr.size(); j++)
            {
                $$->symbol.size += $2->symbol.size;
                struct Type temp = $2->symbol.type;
                string txt = $3->arr[j]->symbol.name;
                string name = "";
                int count = 0;
                for(int i=0; i<txt.size(); i++)
                {
                    if(txt[i] != '[' && count == 0){
                        name += txt[i];
                    }
                    else if(txt[i] == '['){
                        count += 1;
                    }
                }
                for(int i = 0; i < count ; i++ )
                {
                    temp.name += "[]";
                }


            }
        }
        struct node* E[2];
        E[0] = $$;
        E[1] = $3;
        buildTAC(E, 2, COPY_CODE);        

    }

VariableDeclarators: 
    VariableDeclarator {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode($1->data, memArr, 1, 0);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }
    | VariableDeclarators Comma VariableDeclarator {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode($3->data, memArr, 2, 0);
        struct node* E[3];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        buildTAC(E, 2, APPEND_CODE);
    }

VariableDeclarator: 
    VariableDeclaratorId {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode($1->data, memArr, 1, 0);
        $$->isDeclaration = DECLARATION;
        $$->t = 0;
        $$->symbol.name = $1->symbol.name;


    }
    | VariableDeclaratorId EqualTo VariableInitializer {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("=", memArr, 2, 1);
        $$->isDeclaration = INITIALIZATION;
        $$->t = 0;
        $$->symbol.name = $1->symbol.name;
        struct node* E[2];
        E[0] = $1;
        E[1] = $3;
        buildTAC(E, 2, ASSIGN_CODE);
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }

VariableDeclaratorId: 
    Identifier {
        $$ = makeleaf($1);
        string temp  = string($1);
        $$->symbol.name = temp;
        buildVal($$);
    }
    | VariableDeclaratorId LeftSquareBracket RightSquareBracket {
        $$ = makeleaf(concatenate_string($1->data,"[]"));
        string temp = string($1->data) + "[]";
        $$->symbol.name = temp;
        buildVal($$);
    }

VariableInitializer:
    Expression {
        $$ = $1;
    }
    | ArrayInitializer {
        $$ = $1;
    }

MethodDeclaration: 
    MethodHeader MethodBody{
        
        
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode($1->data, memArr,2, 1);
        $$->symbol = $1->symbol;
        $$->isDeclaration = DECLARATION;

        long long int x  = loc_insert(curr,$1->symbol);
        if(x < 0)
        {
            semantic_error("Declaration of " +$1->symbol.name + " already exists at line number " + to_string(-x) + ".");
        }
        struct node* E[3];
        E[0] = $$;
        E[1] = $1;
        E[2] = $2;
        buildTAC(E, 3, APPEND_CODE);

    }

MethodHeader:
    Modifiers_opt Type MethodDeclarator Throws_opt {
        
        struct node * memArr[4];
        memArr[0] = $1;
        memArr[1] = $2;
        memArr[2] = $3;
        memArr[3] = $4;
        $$ = makeInternalNode($3->data, memArr, 4, 0);

        if($1 != NULL){
            for(int i=0; i< $1->arr.size();i ++)
            {
                string temp = string($1->arr[i]->data);
                $$->symbol.type.modifier.push_back(temp);
            }
        }
        $$->symbol.type.return_type = $2->symbol.type.name;
        $$->symbol.type.t = 2;
        $$->symbol.name = $3->symbol.name;

        
        for(int i=0; i< $3->symbol.type.parameters.size(); i++)
        {
            $$->symbol.type.parameters.push_back($3->symbol.type.parameters[i]);
            $$->symbol.type.parameters_type.push_back($3->symbol.type.parameters_type[i]);
        }


        glob_insert(line_number, class_name,$$->symbol.name,$$->symbol.type,curr,glob_table);
        /*
        func_params = $$->symbol;
        symb_insert = 1;
        */
        struct node* E[2];
        E[0] = $$;
        E[1] = $3;
        buildTAC(E, 2, COPY_CODE);
        
    }
    | Modifiers_opt Void MethodDeclarator Throws_opt {
        
        struct node * memArr[4];
        memArr[0] = $1;
        memArr[1] = makeleaf($2);
        memArr[2] = $3;
        memArr[3] = $4;
        $$ = makeInternalNode($3->data, memArr, 4, 0);
        if($1 != NULL)
        {   
            for(int i=0; i< $1->arr.size();i ++)
            {
                string temp = string($1->arr[i]->data);
                $$->symbol.type.modifier.push_back(temp);
            
            }
        }
        $$->symbol.type.return_type = "void";
        $$->symbol.type.t = 2;
        $$->symbol.name = $3->symbol.name;

        for(int i=0; i< $3->symbol.type.parameters.size(); i++)
        {
            $$->symbol.type.parameters.push_back($3->symbol.type.parameters[i]);
            $$->symbol.type.parameters_type.push_back($3->symbol.type.parameters_type[i]);
        }

        glob_insert(line_number,class_name,$$->symbol.name,$$->symbol.type,curr,glob_table);
          /*
        func_params = $$->symbol;
        symb_insert = 1;
        */
        struct node* E[2];
        E[0] = $$;
        E[1] = $3;
        buildTAC(E, 2, COPY_CODE);

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
    Identifier Symbol_Table_Change LeftParanthesis FormalParameterList_opt RightParanthesis {
        
        struct node * memArr[1];
        memArr[0]  = $4;
        $$ = makeInternalNode($1, memArr,1, 0);
        string temp = string($1);
        $$->symbol.name = temp;
        if($4 != NULL)
        {
            for(int i=0; i < $4->arr.size(); i++)
            {
                $$->symbol.type.parameters.push_back($4->arr[i]->symbol.name);
                $$->symbol.type.parameters_type.push_back($4->arr[i]->symbol.type.name);
            }
        }
        struct node* E[2];
        E[0] = $$;
        E[1] = $4;
        buildTAC(E, 2, COPY_CODE);
    }
    | MethodDeclarator LeftSquareBracket RightSquareBracket {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode(concatenate_string($1->data,"[]"), memArr, 1, 0);
        string temp = string($1->data)+ "[]";
        $$->symbol.name = temp;
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }

FormalParameterList_opt : {
        $$ = NULL;
    }
    | FormalParameterList {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Parameters", memArr, 1, 1);
        
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }

FormalParameterList: 
    FormalParameter {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Parameter", memArr, 1, 0);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
        
    }
    | FormalParameterList Comma FormalParameter{
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("Parameter", memArr, 2,0);
        struct node* E[3];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        buildTAC(E, 3, APPEND_CODE);
    }

FormalParameter: 
    Type VariableDeclaratorId {
        $$ = makeleaf(concatenate_string($1->data, concatenate_string(" ", $2->data)));
        $$->symbol.type.name = $1->symbol.type.name;
        $$->symbol.type.t = $1->symbol.type.t;
        string txt = $2->symbol.name;
        string name = "";
        int count = 0;
        for(int i=0; i<txt.size(); i++)
        {
            if(txt[i] != '[' && count == 0){
                    name += txt[i];
                }
                else if(txt[i] == '['){
                    count += 1;
                }
        }
        for(int i = 0; i < count ; i++ )
        {
            $$->symbol.type.name += "[]";
        }

        $$->symbol.name = name;
        long long int x  = loc_insert(curr,$$->symbol);
        if(x < 0)
        {
            semantic_error("Declaration of " +$$->symbol.name + " already exists at line number " + to_string(-x) + "." );
        }
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);        
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
    Block Symbol_Table_Back{
        $$ = $1;
    }
    | Semicolon Symbol_Table_Back{
        $$ = NULL;
    }
    

StaticInitializer: 
    Static Symbol_Table_Change Block Symbol_Table_Back {
        struct node* memArr[1];
        memArr[0] = $3;
        $$ = makeInternalNode("static", memArr, 1, 1);
        
        struct node* E[2];
        E[0] = $$;
        E[1] = $3;
        buildTAC(E, 2, COPY_CODE);
    }

ConstructorDeclaration: 
    Modifiers_opt ConstructorDeclarator Throws_opt ConstructorBody Symbol_Table_Back {
        struct node* memArr[4];
        memArr[0] = $1;
        memArr[1] = $2;
        memArr[2] = $3;
        memArr[3] = $4;
        $$ = makeInternalNode($2->data, memArr, 4, 1);
        $$->isDeclaration = DECLARATION;
        if($1 != NULL);
        struct node* E[3];
        E[0] = $$;
        E[1] = $1;
        E[2] = $4;
        buildTAC(E, 3, APPEND_CODE);
    }

ConstructorDeclarator: 
    SimpleName Symbol_Table_Change LeftParanthesis FormalParameterList_opt RightParanthesis {
        
        struct node* memArr[1];
        memArr[0] = $4;
        $$ = makeInternalNode($1->data, memArr, 1, 0);
        if(string($1->data) != class_name){
            semantic_error("Constructor Declaration at line number " + to_string(line_number) +  " is not declared properly." );
        }
        $$->symbol.name = $1->data;
        struct Symbol * class_scope_entry = loc_lookup(glob_class_scope,class_name);
        if(class_scope_entry !=  NULL)
        {
            $$->symbol.type = class_scope_entry->type;
        }
        
        struct node* E[2];
        E[0] = $$;
        E[1] = $4;
        buildTAC(E, 2, COPY_CODE);
        
    }

ConstructorBody: 
    LeftCurlyBrace ExplicitConstructorInvocation_opt BlockStatements_opt RightCurlyBrace {
        struct node* memArr[2];
        memArr[0] = $2;
        memArr[1] = $3;
        $$ = makeInternalNode("ConstructorInvocation", memArr, 2, 1);
        struct node* E[3];
        E[0] = $$;
        E[1] = $2;
        E[2] = $3;
        buildTAC(E, 3, APPEND_CODE);
    }

ExplicitConstructorInvocation_opt : { 
    $$ = NULL; 
    }
/*    | ExplicitConstructorInvocation {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ExplicitConstructorInvocation", memArr, 1, 1);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }

ExplicitConstructorInvocation: 
    This LeftParanthesis ArgumentList_opt RightParanthesis Semicolon {
        struct node* memArr[1];
        memArr[0] = $3;
        $$ = makeInternalNode("this", memArr, 1, 0);
        struct node* E[2];
        E[0] = $$;
        E[1] = $3;
        buildTAC(E, 2, COPY_CODE);
    }
    | Super LeftParanthesis ArgumentList_opt RightParanthesis Semicolon {
        struct node* memArr[1];
        memArr[0] = $3;
        $$ = makeInternalNode("super", memArr, 1, 0);

        struct node* E[2];
        E[0] = $$;
        E[1] = $3;
        buildTAC(E, 2, COPY_CODE);
    }
*/
ArgumentList_opt: {
    $$ = NULL; 
    }
    | ArgumentList {
        struct node * memArr[1];
        memArr[0] =$1;
        $$ = makeInternalNode("Arguments", memArr, 1, 0);

        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);        
    }

InterfaceDeclaration: 
    Modifiers_opt Interface Identifier ExtendsInterfaces_opt InterfaceBody {
        struct node* memArr[4];
        memArr[0] = $1;
        memArr[1] = makeleaf($2);
        memArr[2] = $4;
        memArr[3] = $5;
        $$ = makeInternalNode($3, memArr, 4, 1);
        $$->isDeclaration = DECLARATION;
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
        $$->isDeclaration = DECLARATION;
    }
    | AbstractMethodDeclaration {
        $$ = $1;
        $$->isDeclaration = DECLARATION;
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
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);  
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
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);  
    }
    | VariableInitializers Comma VariableInitializer {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("Initializer", memArr, 2, 0);
        struct node* E[3];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        buildTAC(E, 3, APPEND_CODE);  
    }

Block: 
    LeftCurlyBrace BlockStatements_opt RightCurlyBrace {    
        $$ = $2;
    }

Symbol_Table_Change :
    { 
        curr = loc_mktable(curr,"local");
    }

Symbol_Table_Back :
    {
        curr = curr->parent;
    }

BlockStatements_opt : {
     $$ = NULL; 
     }
    | BlockStatements {
        struct node* memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("statements", memArr, 1, 1);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);  
    }

BlockStatements: 
    BlockStatement {
        struct node* memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Blocks", memArr, 1, 0);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE); 
    }
    | BlockStatements BlockStatement {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode("Block", memArr, 2, 0);
        struct node* E[3];
        E[0] = $$;
        E[1] = $1;
        E[2] = $2;
        buildTAC(E, 3, APPEND_CODE);  
        
    }

BlockStatement: 
    LocalVariableDeclarationStatement {
        struct node* memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("LocalVariableDeclarationStatement", memArr, 1, 1);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }
    | Statement {
        struct node* memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Statement", memArr, 1, 1);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);

    }

LocalVariableDeclarationStatement:
    LocalVariableDeclaration Semicolon {
        struct node* memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode($1->data, memArr, 1, 0);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }

LocalVariableDeclaration: 
    Type VariableDeclarators {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $2;
        $$ = makeInternalNode("Declaration", memArr, 2, 0);
        $$->isDeclaration = DECLARATION;
        for(int j = 0 ; j< $2->arr.size(); j++)
            {
                $$->symbol.type.name = $1->symbol.type.name;
                $$-> symbol.type.t = $1->symbol.type.t;
                $$->symbol.name= $2->arr[j]->symbol.name;
                $$->symbol.size += $1->symbol.size;
                $$->symbol.source_file = $2->arr[j]->symbol.source_file;
                $$->symbol.offset = $2->arr[j]->symbol.offset;
                $$->symbol.type.modifier.clear();
                
                string txt = $2->arr[j]->symbol.name;
                string name = "";
                int count = 0;
                for(int i=0; i<txt.size(); i++)
                {
                    if(txt[i] != '[' && count == 0){
                        name += txt[i];
                    }
                    else if(txt[i] == '['){
                        count += 1;
                    }
                }
                for(int i = 0; i < count ; i++ )
                {
                    $$->symbol.type.name += "[]";
                }
                
                $$->symbol.name = name;
                
                long long int x = loc_insert(curr, $$->symbol);

                if(x<0)
                {
                    semantic_error("Declaration of " +$$->symbol.name + " already exists at line number " + to_string(-x));
                }
                

            }
        struct node* E[2];
        E[0] = $$;
        E[1] = $2;
        buildTAC(E, 2, COPY_CODE);
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
    Block{
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
        struct node* E[3];
        E[0] = $$;
        E[1] = makeleaf($1);
        buildVal(E[1]);
        E[2] = $3;
        buildTAC(E, 3, APPEND_CODE);
    }

LabeledStatementNoShortIf: 
    Identifier Semicolon StatementNoShortIf {
        struct node* memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $3;
        $$ = makeInternalNode("IfThen", memArr, 2, 0);
        struct node* E[3];
        E[0] = $$;
        E[1] = makeleaf($1);
        buildVal(E[1]);
        E[2] = $3;
        buildTAC(E, 3, APPEND_CODE);
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
    If Symbol_Table_Change LeftParanthesis Expression RightParanthesis Statement Symbol_Table_Back {
        struct node* memArr[2];
        memArr[0] = $4;
        memArr[1] = $6;
        $$ = makeInternalNode("IfThen", memArr, 2, 1);
        struct node* E[3];
        E[0] = $$;
        E[1] = $4;
        E[2] = $6;
        buildTAC(E,3,IF_CODE);
    }

IfThenElseStatement: 
    If Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf Else Statement Symbol_Table_Back{
        
        struct node* memArr[3];
        memArr[0] = $4;
        memArr[1] = $6;
        memArr[2] = $8;
        $$ = makeInternalNode("IfElse", memArr, 3, 1);

        struct node* E[4];
        E[0] = $$;
        E[1] = $4;
        E[2] = $6;
        E[3] = $8;
        buildTAC(E,4,IF_CODE);
        
    }

IfThenElseStatementNoShortIf: 
    If Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf Else StatementNoShortIf Symbol_Table_Back {
        
        struct node* memArr[3];
        memArr[0] = $4;
        memArr[1] = $6;
        memArr[2] = $8;
        $$ = makeInternalNode("IfElseIf", memArr, 3, 1);

        struct node* E[4];
        E[0] = $$;
        E[1] = $4;
        E[2] = $6;
        E[3] = $8;
        buildTAC(E,4,IF_CODE);
        
    }

WhileStatement: 
    While Symbol_Table_Change LeftParanthesis Expression RightParanthesis Statement Symbol_Table_Back {
        
        struct node* memArr[2];
        memArr[0] = $4;
        memArr[1] = $6;
        $$ = makeInternalNode("While", memArr, 2, 1);

        struct node* E[3];
        E[0] = $$;
        E[1] = $4;
        E[2] = $6;
        buildTAC(E,3,WHILE_CODE);
        
    }

WhileStatementNoShortIf: 
    While Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf Symbol_Table_Back {
        struct node* memArr[2];
        memArr[0] = $4;
        memArr[1] = $6;
        $$ = makeInternalNode("While", memArr, 2, 1);

        struct node* E[3];
        E[0] = $$;
        E[1] = $4;
        E[2] = $6;
        buildTAC(E,3,WHILE_CODE);
    }

ForStatement: 
    For Symbol_Table_Change LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis Statement Symbol_Table_Back{
        
        struct node* memArr[4];
        memArr[0] = $4;
        memArr[1] = $6;
        memArr[2] = $8;
        memArr[3] = $10;
        $$ = makeInternalNode("For", memArr, 4, 1);
        $$->t = 2;

        struct node* E[5];
        E[0] = $$;
        E[1] = $4;
        E[2] = $6;
        E[3] = $8;
        E[4] = $10;
        buildTAC(E,5,FOR_CODE);

    }

ForStatementNoShortIf: 
    For Symbol_Table_Change LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis StatementNoShortIf Symbol_Table_Back{
        
        struct node* memArr[4];
        memArr[0] = $4;
        memArr[1] = $6;
        memArr[2] = $8;
        memArr[3] = $10;
        $$ = makeInternalNode("For", memArr, 4, 1);

        struct node* E[5];
        E[0] = $$;
        E[1] = $4;
        E[2] = $6;
        E[3] = $8;
        E[4] = $10;
        buildTAC(E,5,FOR_CODE);
    }

ForInit_opt: { 
    $$ = NULL; 
    }
    | ForInit {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ForInit", memArr, 1, 1);

        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }

Expression_opt: { 
    $$ = NULL; 
    }
    | Expression {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("Expression", memArr, 1, 1);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }

ForUpdate_opt: { 
    $$ = NULL ;
    }
    | ForUpdate {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ForUpdate", memArr, 1, 1);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }

ForInit: 
    StatementExpressionList  {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ForInit", memArr, 1, 1);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }
    | LocalVariableDeclaration {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ForInit", memArr, 1, 1);
        $$->isDeclaration = DECLARATION;
        $$->t=1;
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }

ForUpdate: 
    StatementExpressionList {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("ForUpdate", memArr, 1, 1);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }

StatementExpressionList: 
    StatementExpression {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("StatementExpression", memArr, 1, 0);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }
    | StatementExpressionList Comma StatementExpression {
        struct node * memArr[2];
        memArr[0] =$1;
        memArr[1] =$3;
        $$ = makeInternalNode("StatementExpression", memArr, 2, 0);
        struct node* E[3];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        buildTAC(E, 3, APPEND_CODE);
    }

BreakStatement:
    Break Identifier_opt Semicolon {
        struct node * memArr[1];
        memArr[0] =$2;
        $$ = makeInternalNode("break", memArr, 1, 1);
        buildVal($$);
    }

Identifier_opt: 
    {
        $$ = NULL;
    }| Identifier {
        $$ = makeleaf($1);
        buildVal($$);
    }

ContinueStatement: 
    Continue Identifier_opt Semicolon {
        struct node * memArr[1];
        memArr[0] =$2;
        $$ = makeInternalNode("continue", memArr, 1, 1);
        buildVal($$);

    }

ReturnStatement: 
    Return Expression_opt Semicolon {
        struct node * memArr[1];
        memArr[0] =$2;
        $$ = makeInternalNode("return", memArr, 1, 1);
        buildVal(makeleaf($1));
        struct node* E[3];
        E[0] = $$;
        E[1] = makeleaf($1);
        buildVal(E[1]);
        E[2] = $2;
        buildTAC(E, 3, APPEND_CODE);
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
        $$->isDeclaration = DECLARATION;
        buildVal($$);

    }

ArgumentList: 
    Expression {
        struct node * memArr[1];
        memArr[0] =$1;
        $$ = makeInternalNode("ArgumentList", memArr, 1, 0);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
    }
    | ArgumentList Comma Expression {
        struct node * memArr[2];
        memArr[0] =$1;
        memArr[1] =$3;
        $$ = makeInternalNode("ArgumentList", memArr, 2, 0);
        struct node* E[3];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        buildTAC(E, 3, APPEND_CODE);
    }

ArrayCreationExpression: 
    New PrimitiveType DimExprs Dims_opt {
        struct node * memArr[4];
        memArr[0] = makeleaf($1);
        memArr[1] =$2;
        memArr[2] =$3;
        memArr[3] =$4;
        $$ = makeInternalNode("ArrayCreation", memArr, 4, 0);
        $$->isDeclaration = DECLARATION;
        buildVal($$);
    }
    | New ClassOrInterfaceType DimExprs Dims_opt {
        struct node * memArr[4];
        memArr[0] = makeleaf($1);
        memArr[1] =$2;
        memArr[2] =$3;
        memArr[3] =$4;
        $$ = makeInternalNode("ArrayCreation", memArr, 4, 0);
        $$->isDeclaration = DECLARATION;
        buildVal($$);
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
        buildVal($$);

    } 
    | Super Dot Identifier {
        $$ = makeleaf(concatenate_string($1,$3));
        buildVal($$);

    }

MethodInvocation: 
    Name LeftParanthesis ArgumentList_opt RightParanthesis {
        struct node * memArr[1];
        memArr[0] = $3;
        $$ = makeInternalNode($1->data, memArr, 1, 1);

        // Checking If function has been defined
        struct GlobalSymbol * glob_entry = glob_lookup(class_name, $1->data, glob_table);
        if(glob_entry ==  NULL){
            semantic_error("Function " + string($1->data) + " at line number " + to_string(line_number) + " not declared." );
            //cout << "Function at line number "<< line_number << " not declared" <<endl ;
        }
        else{
            // Checking if Arguments are filled in properly
            if($3 == NULL){
                if(glob_entry->type.parameters_type.size() != 0){
                    semantic_error("Function " + string($1->data) +  " invocation at line number " + to_string(line_number) + " has wrong number of parameters passed.");
                }
            }
            else{
                //cout << $3->arr.size() <<endl;
                if($3->arr.size()!= glob_entry->type.parameters_type.size()){
                    semantic_error("Function " + string($1->data) +  " invocation at line number " + to_string(line_number) + " has wrong number of parameters passed.");
                }
                else{
                    //cout << "Hello good sir " << $3->arr.size() << endl;
                    for (int i = 0; i< $3->arr.size(); i++)
                    {   
                        //view_symbol($3->arr[i]->symbol);
                        if(glob_entry->type.parameters_type[i] != $3->arr[i]->symbol.type.name)
                        {
                            semantic_error("Function " + string($1->data) +  " invocation at line number " + to_string(line_number) + " has wrong type of parameter passed at position " + to_string(i+1) + "." );          
                        }
                    }
                }
            }


            //cout << "Function at line number "<< line_number << " declared at line number " << glob_entry->line_num <<endl<<endl;
        }

        //Checking if ArgumentList_opt is valid


        struct node * E[2];
        E[0] = $$;
        E[1] = $3;
        buildTAC(E, 2, METHOD_INVOCATION);
    } 
    | Primary Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis {
        struct node * memArr[1];
        memArr[0] = $5;
        $$ = makeInternalNode(concatenate_string($1->data,concatenate_string(" ",$3)), memArr, 1, 1);
        struct node * E[2];
        E[0] = $$;
        E[1] = $5;
        buildTAC(E, 2, METHOD_INVOCATION);
    }
    | Super Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis {
        struct node * memArr[1];
        memArr[0] = $5;
        $$ = makeInternalNode(concatenate_string($1,concatenate_string(" ",$3)), memArr, 1, 1);
        struct node * E[2];
        E[0] = $$;
        E[1] = $5;
        buildTAC(E, 2, METHOD_INVOCATION);
    }

ArrayAccess: 
    Name LeftSquareBracket Expression RightSquareBracket{
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("ArrayAccess", memArr, 2, 1);
        $$->symbol = $1->symbol;

        string txt = $$->symbol.type.name;
        string name = "";
        int count = 0;
        for(int i=0; i<txt.size(); i++)
        {
            if(txt[i] != '[' && count == 0){
                name += txt[i];
            }
            if(txt[i] == '['){
                count += 1;
            }
        }


        if(count == 0){
            semantic_error("Array dimension mismatch at line number " + to_string(line_number) + ".");
        }
        else{
            for(int i = 0; i < count-1 ; i++)
            {
                name += "[]";
            }
        }

        $$->symbol.type.name = name;

        if($3->symbol.type.name != "byte" && $3->symbol.type.name != "short" && $3->symbol.type.name != "int" && $3->symbol.type.name != "long"  )
        {
            semantic_error("Invalid array access at line number " + to_string(line_number) + " as the expression " + $3->symbol.name + " is not of type int.");
        }
        buildVal($$);
    }
    | PrimaryNoNewArray LeftSquareBracket Expression RightSquareBracket {
        struct node * memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$ = makeInternalNode("PrimaryNoNewArrayAccess", memArr, 2, 1);
        $$->symbol = $1->symbol;

        string txt = $$->symbol.type.name;
        string name = "";
        int count = 0;
        for(int i=0; i<txt.size(); i++)
        {
            if(txt[i] != '[' && count == 0){
                name += txt[i];
            }
            if(txt[i] == '['){
                count += 1;
            }
        }

        if(count == 0){
            semantic_error("Array dimension mismatch at line number " + to_string(line_number) + ".");
        }
        else{
            for(int i = 0; i < count-1 ; i++)
            {
                name += "[]";
            }
        }

        $$->symbol.type.name = name;

        // Checking if Expression is a Integer
        if($3->symbol.type.name != "byte" && $3->symbol.type.name != "short" && $3->symbol.type.name != "int" && $3->symbol.type.name != "long"  )
        {
            semantic_error("Invalid array access at line number " + to_string(line_number) + " as the expression " + $3->symbol.name + " is not of type int.");
        }
        buildVal($$);
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
        $$ = makeInternalNode("++", memArr, 1, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $1;
        E[3] = makeleaf("+");
        buildTAC(E,4,BINARY_CODE);
    } 

PostDecrementExpression: 
    PostfixExpression MinusMinus {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("--", memArr, 1, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $1;
        E[3] = makeleaf("-");
        buildTAC(E,4,BINARY_CODE);
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
        $$ = makeInternalNode("+", memArr, 1, 1);
        struct node* E[3];
        E[0] = $$;
        E[1] = $2;
        E[2] = makeleaf($1);
        buildTAC(E,3,UNARY_CODE);

    }
    | Substraction UnaryExpression {
        struct node * memArr[1];
        memArr[0] = $2;
        $$ = makeInternalNode("-", memArr, 1, 1);
        struct node* E[3];
        E[0] = $$;
        E[1] = $2;
        E[2] = makeleaf($1);
        buildTAC(E,3,UNARY_CODE);
    }
    | UnaryExpressionNotPlusMinus {
        $$ = $1;
    }

PreIncrementExpression: 
    PlusPlus UnaryExpression {
        struct node * memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $2;
        $$ = makeInternalNode("++", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $2;
        E[2] = $2;
        E[3] = makeleaf("+");
        buildTAC(E,4,BINARY_CODE);
    } 

PreDecrementExpression: 
    MinusMinus UnaryExpression {
        struct node * memArr[2];
        memArr[0] = makeleaf($1);
        memArr[1] = $2;
        $$ = makeInternalNode("--", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $2;
        E[2] = $2;
        E[3] = makeleaf("-");
        buildTAC(E,4,BINARY_CODE);
    } 

UnaryExpressionNotPlusMinus: 
    PostfixExpression {
        $$ = $1;
    }
    | Tilde UnaryExpression {
        struct node * memArr[1];
        memArr[0] = $2;
        $$ = makeInternalNode("~", memArr, 1, 1);
        struct node* E[3];
        E[0] = $$;
        E[1] = $2;
        E[2] = makeleaf($1);
        buildTAC(E,3,UNARY_CODE);
    } 
    | NotOperator UnaryExpression {
         struct node * memArr[1];
        memArr[0] = $2;
        $$ = makeInternalNode("!", memArr, 1, 1);
        struct node* E[3];
        E[0] = $$;
        E[1] = $2;
        E[2] = makeleaf($1);
        buildTAC(E,3,UNARY_CODE);
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
        struct node* E[2];
        E[0] = $$;
        E[1] = $5;
        buildTAC(E,2,COPY_CODE);
    }
    | LeftParanthesis Expression RightParanthesis UnaryExpressionNotPlusMinus {
        struct  node * memArr[2];
        memArr[0] = $2;
        memArr[1] = $4;
        $$ = makeInternalNode("CastExpression", memArr, 2, 1);
        struct node* E[2];
        E[0] = $$;
        E[1] = $4;
        buildTAC(E,2,COPY_CODE);
    }
    | LeftParanthesis Name Dims RightParanthesis UnaryExpressionNotPlusMinus {
        struct node * memArr[1];
        memArr[0] = $5;
        char * str = concatenate_string($2->data, $3->data);
        $$ = makeInternalNode(str, memArr, 1, 1);
        struct node* E[2];
        E[0] = $$;
        E[1] = $5;
        buildTAC(E,2,COPY_CODE);
    }

MultiplicativeExpression: 
    UnaryExpression {
        $$ = $1;
    }
    | MultiplicativeExpression Product UnaryExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("*", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    } 
    | MultiplicativeExpression Divide UnaryExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("/", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    } 
    | MultiplicativeExpression Modulo UnaryExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("Modulo", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    }

AdditiveExpression: 
    MultiplicativeExpression {
        $$ = $1;
    }
    | AdditiveExpression Addition MultiplicativeExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("+", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    }
    | AdditiveExpression Substraction MultiplicativeExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("-", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    }

ShiftExpression: 
    AdditiveExpression {
        $$ = $1;
    }
    | ShiftExpression LeftShit AdditiveExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("<<", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    }
    | ShiftExpression RightShift AdditiveExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode(">>", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    }
    | ShiftExpression TripleGreaterThan AdditiveExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode(">>>", memArr, 2, 1);
       struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    }

RelationalExpression: 
    ShiftExpression {
        $$ = $1;
    }
    | RelationalExpression LessThan ShiftExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode(">", memArr, 2, 1); 
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    } 
    | RelationalExpression GreaterThan ShiftExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("<", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    }
    | RelationalExpression LessThanEqualTo ShiftExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("<=", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    }
    | RelationalExpression GreaterThanEqualTo ShiftExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode(">=", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    } 
    | RelationalExpression Instanceof ReferenceType {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("Instanceof", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    }

EqualityExpression: 
    RelationalExpression {
        $$ = $1;
    }
    | EqualityExpression EqualToEqualTo RelationalExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("==", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    } 
    | EqualityExpression NotEqualTo RelationalExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("!=", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    }

AndExpression: 
    EqualityExpression {
        $$ = $1;
    }
    | AndExpression BitwiseAnd EqualityExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("&", memArr, 2 ,1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
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
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    }

InclusiveOrExpression:
    ExclusiveOrExpression {
        $$ = $1;
    }
    | InclusiveOrExpression BitwiseOr ExclusiveOrExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("|", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    }

ConditionalAndExpression:
    InclusiveOrExpression {
        $$ = $1;
    }
    | ConditionalAndExpression AndOperator InclusiveOrExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("&&", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
    }

ConditionalOrExpression: 
    ConditionalAndExpression {
        $$ = $1;
    }
    | ConditionalOrExpression OrOperator ConditionalAndExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("||", memArr, 2, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = makeleaf($2);
        buildTAC(E,4,BINARY_CODE);
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
        $$  = makeInternalNode("TernaryOperator", memArr, 3, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        E[2] = $3;
        E[3] = $5;
        buildTAC(E, 4, IF_CODE);
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
    $$ = makeInternalNode("=", memArr, 2, 1);

    struct node* E[2];
    E[0] = $1;
    E[1] = $3;
    buildTAC(E, 2, ASSIGN_CODE);
    E[0] = $$;
    E[1] = $1;
    buildTAC(E, 2, ASSIGN_CODE);
}

LeftHandSide: 
    Name {
        $$ = $1;
        struct Symbol * lookup_entry = check_scope(curr , string($1->data));
        if(lookup_entry == NULL){
            semantic_error("The identifier " + string($1->data) + " at line number " + to_string(line_number) +  " has not been declared in the scope." );
        }
        else{
            $$->symbol.type = lookup_entry->type;
        }
    }
    | FieldAccess {
        $$ = $1;
    }
    | ArrayAccess {
        $$ = $1;
        struct Symbol * lookup_entry = check_scope(curr , string($1->symbol.name));
        if(lookup_entry == NULL){
            semantic_error("The identifier " + string($1->symbol.name) + " at line number " + to_string(line_number) +  " has not been declared in the scope." );
        }
        else{
            //cout << "The identifier "  <<  $1->symbol.name <<" at line number " << line_number << " has been declared at line number "<< lookup_entry->line_num << endl <<endl;
            $$->symbol.type = lookup_entry->type;
        }
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


int yyerror(string s)
{
    cout << "Error detected !" << s << " at [ line number: " << line_number << " ] after removing the comments.\nExiting...\n";
    return 0;
}

int semantic_error(string s)
{
    cout << s <<endl <<endl;
    return 0;
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


struct node* makeleaf(char nodeStr[100]){
    struct node* leaf = new struct node;
    strcpy(leaf->data, nodeStr);
    leaf->parentFlag = 1;
    leaf->isDeclaration = NON_DECLARAION;
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
    internalNode->isDeclaration = NON_DECLARAION;
    internalNode->lineNumber = line_number;
    internalNode->symbol.line_num = line_number;
    internalNode->t = 0;
    internalNode->symbol.size= 0;
    internalNode->symbol.type.modifier.clear();
    internalNode->symbol.source_file = src_file;

    return internalNode;

}


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

void generateGraph(struct node* root, FILE* graph, int nnode = 0){
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
void help()
{
    system("clear");
    system("cat ../doc/Help.txt");
}

int buildVal(struct node* E){
    if(E==NULL)
        return -1;
    E->val.place = string(E->data);
    E->val.code.clear();
    E->val.label.clear();

    return 0;
}

int buildTAC(struct node* E[], int n, int flag){
    
    string temp; 
    string L1;
    string L2;

    switch(flag){
        case COPY_CODE:
            if(n == 2 && E[1]!=NULL)
                copyValue(E[0]->val, E[1]->val);
            
            break;

        case APPEND_CODE:

            for(int i = 1; i < n; i++){
                if(E[i]!=NULL){
                    appendCode(E[0]->val, E[i]->val);
                }
            }

            break;

        case ASSIGN_CODE:
            
            if(n == 2){
                temp = makeNewTemp(newTempLabel);
                newTempLabel = newTempLabel + 1;
                genAssignCode(E[0]->val, ((E[1]!=NULL)? E[1]->val : dummyVal), temp);
            }

        case BINARY_CODE:
            
            if(n == 4){
                temp = makeNewTemp(newTempLabel);
                newTempLabel = newTempLabel + 1;
                genBinaryOperatorCode(E[0]->val, E[1]->val, E[2]->val, temp, string(E[3]->data));
            }
            break;
        
        case UNARY_CODE:
                
            if(n == 3){
                temp = makeNewTemp(newTempLabel);
                newTempLabel = newTempLabel + 1;
                genUnaryOperatorCode(E[0]->val, E[1]->val, temp, string(E[2]->data));
            }
            break;
        
        case IF_CODE:

            if(n == 4 || n == 3){
                L1 = makeNewLabel(newTempLabel);
                newTempLabel = newTempLabel + 1;
                L2 = makeNewLabel(newTempLabel);
                newTempLabel = newTempLabel + 1; 
                genIfElseCode(E[0]->val , ((E[1]!=NULL) ? E[1]->val : dummyVal) , ((E[2]!=NULL) ? E[2]->val : dummyVal) , ((E[3]!=NULL) ? E[3]->val : dummyVal), L1 , L2 );
            }
            break;

        case WHILE_CODE:
            
            if(n == 3){
                L1 = makeNewLabel(newTempLabel);
                newTempLabel = newTempLabel + 1;
                L2 = makeNewLabel(newTempLabel);
                newTempLabel = newTempLabel + 1;
                genWhileCode(E[0]->val, ((E[1]!=NULL) ? E[1]->val : dummyVal) , ((E[2]!=NULL) ? E[2]->val : dummyVal), L1, L2);
            }
            
            break;

        case FOR_CODE:
            
            if(n == 5){
                L1 = makeNewLabel(newTempLabel);
                newTempLabel = newTempLabel + 1;
                L2 = makeNewLabel(newTempLabel);
                newTempLabel = newTempLabel + 1;
                genForCode(E[0]->val , ((E[1]!=NULL) ? E[1]->val : dummyVal) , ((E[2]!=NULL) ? E[2]->val : dummyVal) , ((E[3]!=NULL) ? E[3]->val : dummyVal), ((E[4]!=NULL) ? E[4]->val : dummyVal), L1 , L2 );
            }
         
         break;

         case METHOD_INVOCATION:
            if(n==2){
                temp = makeNewTemp(newTempLabel);
                newTempLabel = newTempLabel + 1;
                genMethodInvocationCode(((E[0]!=NULL)?E[0]->val:dummyVal), ((E[0]!=NULL)?E[0]->val:dummyVal), string(((E[0]!=NULL)?E[0]->data:"method")), temp);
            }
        
        break;

        default :
            cout << "No flag Matching...\nCode not pushed...\n";
            return -1;
    }

    return 0;

}


int main(int argc , char** argv)
{   
    // Need to add path to inputfile and output file
    #ifdef YYDEBUG
        yydebug = 0;
    #endif
    int z = 0;
    FILE* fp;
    char * line = NULL;
    char * input_file = NULL;
    char * output_file = NULL;
    size_t len = 0;
    ssize_t read;
    int help_flag = 0;

    //dummy val initialization used to generate 3AC code for null elements
    dummyVal.place = "";
    dummyVal.code.clear();
    dummyVal.label = "";
    
    fp = fopen("temp.txt","w");
    int i;
    for(i=1; i<argc; i++){
        fprintf(fp,"%s ",argv[i]);
    }
    fclose(fp);



    /* Help Mode */
    system("grep -o '[-][-]help' temp.txt > help.txt");

    fp = fopen("help.txt","r");

    if((read = getline(&output_file, &len, fp)) != -1) {
        if(read > 0){
            help_flag = 1;
        }
    }

    fclose(fp);
    system("rm help.txt");

    if(help_flag){
        help();
        return 0;
    }

    /* Verbose Mode */

    system("grep -o '[-][-]verbose' temp.txt > verbose.txt");

    fp = fopen("verbose.txt","r");

    if((read = getline(&output_file, &len, fp)) != -1) {
        if(read > 0){
            #ifdef YYDEBUG
                yydebug =  1;
            #endif
        }
    }

    fclose(fp);
    system("rm verbose.txt");

    /* Finding Input File */

    system("grep -o '[-][-]input[ ]*=[ ]*[a-zA-Z0-9._/]*' temp.txt > output1.txt");



    fp = fopen("output1.txt","r");
    if((read = getline(&input_file, &len, fp)) != -1) {
        if(read > 0){
            while(input_file[0]!= '='){
                input_file += 1;
            }
            input_file +=1;
            while(input_file[0] == ' '){
                input_file +=1;
            }
            int k = 0;
            while(input_file[k]!='\n')k++;
            input_file[k]='\0';
        }
        else{
            printf("No input file specified.\n");
            return 0;
        }
    }
    system("rm output1.txt");

    /* Finding Output File */

    system("grep -o '[-][-]output[ ]*=[ ]*[a-zA-Z0-9._/]*' temp.txt > output2.txt");

    fp = fopen("output2.txt","r");
    if((read = getline(&output_file, &len, fp)) != -1) {
        if(read > 0){
            while(output_file[0]!= '='){
                output_file += 1;
            }
            output_file +=1;
            while(output_file[0] == ' '){
                output_file +=1;
            }
            int k = 0;
            while(output_file[k]!='\n')k++;
            output_file[k]='\0';

        }
        else{
            printf("No output file specified.\n");
            return 0;
        }
    }


    system("rm output2.txt");
    system("rm temp.txt");

    /* Parsing Algorithm */
    yyin = fopen(input_file,"r");
    src_file = string(input_file);

    if(yyin == NULL){
        printf("No such Input file found ! \n");
        return 0;
    }

    yyparse();

    //viewGlobal(glob_table);

    //ast_print(root,0,0);
    int limit = root->val.code.size();
    for(int iter = 0; iter < limit; iter++)
        cout << root->val.code[iter]<<endl;
    // view_symbol_table(*glob_class_scope);
    FILE* graph = fopen(output_file,"w");
    fprintf(graph, "digraph AST{ \n");
    generateGraph(root, graph);
    fprintf(graph, "} \n");
    fclose(graph);
    fclose(yyin);

    return 0;

}



