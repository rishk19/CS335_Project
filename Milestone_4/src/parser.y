%{
#include <cstdio>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>
#include "../src/Includes.hpp"

using namespace std;

int yyerror(string s);
extern int yylex();
extern int yyparse();
extern FILE *yyin;
struct node *root = NULL;

int semantic_error(string s);
void help();
long long int line_number=1;
int ret_size = 0;

int newTempLabel = 0;
Value dummyVal; // do not delete needed for generating 3AC text

struct GlobalSymbolTable* glob_table = new struct GlobalSymbolTable;
struct SymbolTable* curr = loc_mktable(NULL,"global_scope"); //parameters are parent-pointer,  local-table-name
struct SymbolTable* glob_class_scope = curr;
string class_name = "";
int assign_flag = 0;
string src_file = "";
int err = 0;
int hasReturned = 0;
int static_context = 0;

struct Value * class_declaration_code = new struct Value;

%}

%token Exports Opens Requires Uses Module Permits Sealed Var Non_sealed Provides To With Open Record Transitive Yield Abstract Continue For New Switch Assert Default If Package Synchronized Boolean Do Goto Private This Break Double Implements Protected THROW Byte Else Import Public THROWS Case Enum Instanceof Return Transient Catch Extends Int Short Try Char Final Interface Static Void Class FINALLY Long Strictfp Volatile Const Float Native Super While
%token BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral HexDecimalFloatingPointLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
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
%type<exp> ExplicitConstructorInvocation_opt ArgumentList_opt InterfaceDeclaration ExtendsInterfaces_opt  
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
%type<data> BooleanLiteral NullLiteral Identifier DecimalIntegerLiteral HexIntegerLiteral OctalIntegerLiteral HexDecimalFloatingPointLiteral FloatingPointLiteral BooleanIntegerLiteral CharacterLiteral TextBlock Operator Seperator StringLiteral
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
        $$->symbol.size = 8;
        buildVal($$,0);
    }
    | BooleanLiteral {
        $$ = makeleaf($1);
        $$->symbol.type.name = "boolean";
        $$->symbol.size = 8;
        buildVal($$,0);
        if($1[0]=='t'){
            $$->val.place = "1";
        }
        else if($1[0] =='f'){
            $$->val.place = "0";
        }
    }
    | CharacterLiteral {
        $$ = makeleaf($1);
        $$->symbol.type.name = "char";
        $$->symbol.size = 8;
        buildVal($$,0);
        $$->val.place = to_string(int($1[0]));
    }
    | StringLiteral {
        $$ = makeleaf($1);
        $$->symbol.type.name = "string";
        $$->symbol.size = 8;
        buildVal($$,0);
    }
    | NullLiteral{
        $$ = makeleaf($1);
        $$->symbol.type.name = "null";
        $$->symbol.size = 8;
        buildVal($$,0);
        $$->val.place = "0";
    }

IntegerLiteral: 
    DecimalIntegerLiteral {
        $$ = makeleaf($1);
        $$->symbol.type.name = "byte";
        $$->symbol.size = 8;

        buildVal($$,0);
    }
    | HexIntegerLiteral {
        $$ = makeleaf($1);
        $$->symbol.type.name = "byte";
        $$->symbol.size = 8;
        buildVal($$,0);
    }
    | OctalIntegerLiteral {
        $$ = makeleaf($1);
        $$->symbol.type.name = "byte";
        $$->symbol.size = 8;
        buildVal($$,0);
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
        $$->symbol.size = 8;
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
        $$->symbol.size = 8;
    }
    | Short {
        $$ = makeleaf($1);
        $$->symbol.type.name = "short";
        $$->symbol.type.t = 0;
        $$->symbol.size = 8;
    }
    | Int {
        $$ = makeleaf($1);
        $$->symbol.type.name = "int";
        $$->symbol.type.t = 0;
        $$-> symbol.size =8;
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
        $$->symbol.size = 8;
    }

FloatingPointType: 
    Float {
        $$ = makeleaf($1);
        $$->symbol.type.t = 0;
        $$->symbol.type.name = "float";
        $$->symbol.size = 8;
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
        struct Symbol * symb = loc_lookup(glob_class_scope,$1->symbol.name);
        if(symb == NULL){
            semantic_error("Incorrect declaration at line number " + to_string(line_number));
        }
        else{
            $$->symbol = *symb;
        }
        //view_symbol(*symb);
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
        }buildVal($$,1);
    }

QualifiedName: 
    Name Dot Identifier {
        $$ = makeleaf(concatenate_string($1->data,concatenate_string($2,$3)));
        buildVal($$,1);
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
            if($1->arr[i]!=NULL){
                $$->symbol.type.modifier.push_back(string($1->arr[i]->data));
            }
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
        $$ = makeInternalNode("ClassBody", memArr, 1, 1);
        struct node* E[2];
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);
        view_quadruple(class_declaration_code->quad);
        //view_quadruple($1->val.quad);
        
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
        // struct Symbol* class_entry = loc_lookup(glob_class_scope,class_name);
        // if(class_entry != NULL){
        //     $$->symbol.size = -class_entry->size;
        //     class_entry->size += $$->symbol.size;

        // }
        appendCode(*class_declaration_code,$1->val);

    }
    | MethodDeclaration {
        $$ = $1;

    }

FieldDeclaration: 
    Modifiers_opt Type VariableDeclarators Semicolon {
        struct Symbol* class_entry = loc_lookup(glob_class_scope,class_name);
        if(class_entry == NULL){
            semantic_error("Class entry not added to symbol table !");
        }
        struct node * memArr[3];
        memArr[0] = $1;
        memArr[1] = $2;
        memArr[2] = $3;
        $$ = makeInternalNode("FieldDeclaration", memArr, 3, 1);
        $$->isDeclaration = DECLARATION;
        $$->t = 0;

        if($1 != NULL)
        {
            int modifier_count = 0;
            int static_count = 0;
            for(int j = 0 ; j< $3->arr.size(); j++)
            {
                $$->symbol.offset = -class_entry->size;
                class_entry->size += $2->symbol.size;
                $$->symbol.size = $2->symbol.size;
                $$->symbol.type = $2->symbol.type;
                string txt = $3->arr[j]->symbol.name;
                string name = "";
                int count = 0;
                for(int i=0; i<txt.size(); i++)
                {
                    if(txt[i] != '[' && count == 0){
                        name.push_back(txt[i]);
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
                    if(string($1->arr[i]->data) != "static"){
                        modifier_count +=1;
                        
                    }
                    else{
                        static_count +=1;
                        if(static_count <= 1)
                        $$->symbol.type.modifier.push_back($1->arr[i]->data);
                    }
                    if(modifier_count > 1 || static_count > 1){
                        semantic_error("Incorrect numbert of modifiers added at line number " + to_string(line_number));
                        break;
                    }
                    else{
                        $$->symbol.type.modifier.push_back($1->arr[i]->data);
                    }

                }
                

                $$->symbol.name = name;

                if($3->arr[j]->t == 4 ){

                        if($$->symbol.type.name == $3->arr[j]->symbol.type.name)
                        {
                            //$$->symbol.type.name = $1->symbol.type.name;
                            $$->symbol.type = $3->arr[j]->symbol.type;
                            //$$->symbol.size = $3->arr[j]->symbol.size;
                            long long int x  = loc_insert(curr,$$->symbol);
                            if(x < 0)
                            {
                                semantic_error("Declaration of " +$$->symbol.name + " already exists at line number " + to_string(-x) + ".");
                            }
                        }
                        else{
                            if(isTypeCompatible($$->symbol.type.name, $3->arr[j]->symbol.type.name))
                            {
                                long long int x  = loc_insert(curr,$$->symbol);
            
                                if(x < 0)
                                {
                                    semantic_error("Declaration of " +$$->symbol.name + " already exists at line number " + to_string(-x) + ".");
                                }                            
                            }
                            else{
                                //semantic_error("Bad initialization at line number " +  to_string(line_number) + ".");
                                semantic_error("Bad initialization types ["  + $$->symbol.type.name + ", " + $3->arr[j]->symbol.type.name + "] at line number " +  to_string(line_number) + ".");
                            }
                        }

                }
                else{
                    long long int x  = loc_insert(curr,$$->symbol);
            
                    if(x < 0)
                    {
                        semantic_error("Declaration of " +$$->symbol.name + " already exists at line number " + to_string(-x) + ".");
                    }
                }

            }
        }

        else{
            //cout << $3->arr.size() <<endl;
            for(int j =0; j< $3->arr.size(); j++)
            {
                $$->symbol.offset = - class_entry->size;
                class_entry->size += $2->symbol.size;
                $$->symbol.size = $2->symbol.size;
                $$->symbol.type = $2->symbol.type;
                string txt = $3->arr[j]->symbol.name;
                string name = "";
                int count = 0;
                for(int i=0; i<txt.size(); i++)
                {
                    if(txt[i] != '[' && count == 0){
                        name.push_back(txt[i]);
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

                if($3->arr[j]->t== 4 ){
                        if($$->symbol.type.name == $3->arr[j]->symbol.type.name)
                        {   
                            $$->symbol.type= $3->arr[j]->symbol.type;
                            long long int x  = loc_insert(curr,$$->symbol);
                            if(x < 0)
                            {
                                semantic_error("Declaration of " +$$->symbol.name + " already exists at line number " + to_string(-x) + ".");
                            }
                            
                        }
                        else{
                            if(isTypeCompatible($$->symbol.type.name, $3->arr[j]->symbol.type.name))
                            {
                                //$$->symbol.type = $1->symbol.type.name;
                                long long int x  = loc_insert(curr,$$->symbol);
                                if(x < 0)
                                {
                                    semantic_error("Declaration of " +$$->symbol.name + " already exists at line number " + to_string(-x) + ".");
                                }
                            }
                            else{
                                semantic_error("Bad initialization types ["  + $$->symbol.type.name + ", " + $3->arr[j]->symbol.type.name + "] at line number " +  to_string(line_number) + ".");
                                //semantic_error("Bad initialization at line number " +  to_string(line_number) + ".");
                            }
                        }

                }
                else {
                    long long int x  = loc_insert(curr,$$->symbol);
            
                    if(x < 0)
                    {
                        semantic_error("Declaration of " +$$->symbol.name + " already exists at line number " + to_string(-x) + ".");
                    }
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
        $$->symbol.type.t = 0;


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
        if($3->t != ARRAY_ACCESS){
            E[0] = $1;
            E[1] = $3;
            buildTAC(E, 2, ASSIGN_CODE);
        }
        E[0] = $$;
        E[1] = $1;
        buildTAC(E, 2, COPY_CODE);

        // $$->symbol.type.name holds the type of variable initializer
        $$->t = 4;
        $$->symbol.type= $3->symbol.type;
        $$->symbol.size = $3->symbol.size;
        //view_type($$->symbol.type);

    }

VariableDeclaratorId: 
    Identifier {
        $$ = makeleaf($1);
        string temp  = string($1);
        $$->symbol.name = temp;
        buildVal($$, 1);
    }
    | VariableDeclaratorId LeftSquareBracket RightSquareBracket {
        $$ = makeleaf(concatenate_string($1->data,"[]"));
        string temp = string($1->data) + "[]";
        $$->symbol.name = temp;
        buildVal($$, 1);
    }

VariableInitializer:
    Expression {
        $$ = $1;
    }
    | ArrayInitializer {
        $$ = $1;
        $$->t = ARRAY_ACCESS;
    }

MethodDeclaration: 
    MethodHeader MethodBody{
        
        if(hasReturned != 1){
            if($1->symbol.type.return_type != "void"){
                semantic_error("Non-Void Function " + $1->symbol.name + " must return some value!");
            }
        }
        else{
            if($1->symbol.type.return_type == "void"){
                semantic_error("Void Function " + $1->symbol.name + " cannot return any value!");
            }
        }
        
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
        string str = "#"+class_name + "::" + string(E[0]->symbol.name) +" : ";

        struct Quad * quad = new struct Quad;
        struct Value * val = new struct Value;
        // quad->my_table = curr;
        // quad->op.op = Label_;
        // quad->op.type = "int";
        // val->status = IS_LABEL;
        // if(string(E[0]->symbol.name) != "main")
        //     val->label = "__" + class_name + "__" + string(E[0]->symbol.name);
        // else{
        //     val->label = string(E[0]->symbol.name);
        // }
        // fill_arg(&quad->result, *val);
        // quad->arg_1.status = IS_EMPTY;
        // quad->arg_2.status = IS_EMPTY;
        // pushQuad($$->val, *quad);
        //view_quad(quad);

        pushCode(E[0]->val,str);
        pushCode(E[0]->val,"begin_func");
        pushCode(E[0]->val,"pushq \%rbp");

        val->status = IS_REGISTER;

        val->place = "\%rbp";

        quad->my_table = curr;
        quad->op.op = Pushq_;
        quad->op.type = "int";

        fill_arg(&quad->result, *val);
        //cout << val->place <<endl;

        quad->arg_1.status = IS_EMPTY;
        quad->arg_2.status = IS_EMPTY;

        pushQuad(E[0]->val,*quad);

        pushCode(E[0]->val,"movq \%rsp \%rbp");

        quad->op.op = Movq_;
        quad->op.type = "int";
        val->status = IS_REGISTER;
        val->place = "\%rsp";
        fill_arg(&quad->arg_1,*val);
        val->status = IS_REGISTER;
        val->place = "\%rbp";
        fill_arg(&quad->result, *val);
        quad->arg_2.status = IS_EMPTY;

        pushQuad(E[0]->val, *quad);
        struct SymbolTable * symb_table ;
        symb_table = glob_lookup(class_name,$1->symbol.name, glob_table)->LocalSymbolTable;
        long long int stackOffset = 0;
        for(int  i = 0; i<$1->symbol.type.parameters_size.size(); i++){
            stackOffset -= $1->symbol.type.parameters_size[i];
        }
        stackOffset += getTotalStackOffset(symb_table,stackOffset);
        if(stackOffset %16 != 0){
            stackOffset += (16 - (stackOffset%16));
        }
        if(stackOffset!=0){
            pushCode(E[0]->val, "$rsp = $rsp - " + to_string(stackOffset));
            val->status = IS_REGISTER;
            val->place = "\%rsp";
            quad->op.op = Substraction_;
            quad->op.type = "long";

            fill_arg(&quad->arg_1, *val);
            fill_arg(&quad->result, *val);
            val->status = IS_LITERAL;
            val->place = to_string(stackOffset);
            fill_arg(&quad->arg_2,*val);

            pushQuad(E[0]->val, *quad);
        }
        int controlOffset = 16 + $1->symbol.type.return_size;
        for(int i  = 0; i<$1->symbol.type.parameters.size(); i++){
            //pushCode(E[0]->val, "load " + $1->symbol.type.parameters[i] +" (" + to_string(controlOffset) + ")$rbp " + to_string($1->symbol.type.parameters_size[i]));
            controlOffset += $1->symbol.type.parameters_size[i];
        }


        E[1] = $1;
        E[2] = $2;
        buildTAC(E, 3, APPEND_CODE);

        // if(hasReturned == 0){
        //     pushCode(E[0]->val, "movq \%rbp \%rsp");

        //     quad->op.op = Movq_;
        //     quad->op.type = "int";
            
        //     val->place = "\%rbp";
        //     val->status = IS_VARIABLE;
        //     fill_arg(&quad->arg_1, *val);
        //     val->place = "\%rsp";
        //     fill_arg(&quad->result, *val);
        //     quad->arg_2.status = IS_EMPTY;

        //     pushQuad(E[0]->val, *quad);
            
            
        //     pushCode(E[0]->val, "retq");

        //     quad->op.op = Retq_;
        //     quad->result.status = IS_EMPTY;
        //     quad->arg_1.status = IS_EMPTY;
        //     quad->arg_2.status = IS_EMPTY;

        //     pushQuad(E[0]->val, *quad);
        // }

        pushCode(E[0]->val, "end_func");
        struct GlobalSymbol* globEntry =  glob_lookup(class_name, $1->symbol.name, glob_table);
        if(globEntry == NULL){
            semantic_error("Uncaught error!!!");
        }
        globEntry->tac = $$->val;

        //view_quadruple($$->val.quad);
        static_context = 0;
        hasReturned = 0;
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
            int static_count = 0;
            int modifier_count = 0;
            for(int i=0; i< $1->arr.size();i ++)
            {
                string temp = string($1->arr[i]->data);
                if(temp == "static"){
                    static_count += 1;
                    static_context =1;
                    if(static_count <= 1){
                        $$->symbol.type.modifier.push_back(temp);
                    }
                }
                else{
                    modifier_count +=1;
                    if(modifier_count <= 1){
                        $$->symbol.type.modifier.push_back(temp);
                    }
                }
                if(modifier_count > 1 || static_count > 1){
                    semantic_error("Incorrect numbert of modifiers added at line number " + to_string(line_number));
                    break;
                }
                
            }
        }
        $$->symbol.type.return_type = $2->symbol.type.name;
        $$->symbol.type.return_size = $2->symbol.size;
        $$->symbol.type.t = 2;
        $$->symbol.name = $3->symbol.name;
        ret_size = $2->symbol.size;
        
        for(int i=0; i< $3->symbol.type.parameters.size(); i++)
        {
            $$->symbol.type.parameters.push_back($3->symbol.type.parameters[i]);
            $$->symbol.type.parameters_type.push_back($3->symbol.type.parameters_type[i]);
            $$->symbol.type.parameters_size.push_back($3->symbol.type.parameters_size[i]);
        }


        struct node* E[2];
        E[0] = $$;
        E[1] = $3;
        buildTAC(E, 2, COPY_CODE);
       long long int x = glob_insert(line_number, class_name,$$->symbol.name,$$->symbol.type,curr,glob_table,$$->val);

       if(x < 0){
        semantic_error("Method declaration at line number " + to_string(line_number)+ " is invalid as constructor already with same name declared at line number " + to_string(-x) +".");
       }
        
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
            int static_count = 0;
            int modifier_count = 0;
            for(int i=0; i< $1->arr.size();i ++)
            {
                string temp = string($1->arr[i]->data);


                if(temp == "static"){
                    static_count += 1;
                    static_context = 1;
                    if(static_count <= 1){
                        $$->symbol.type.modifier.push_back(temp);
                    }
                }
                else{
                    modifier_count +=1;
                    if(modifier_count <= 1){
                        $$->symbol.type.modifier.push_back(temp);
                    }
                }
                if(modifier_count > 1 || static_count > 1){
                    semantic_error("Incorrect numbert of modifiers added at line number " + to_string(line_number));
                    break;
                }
                
            }
        }
        $$->symbol.type.return_type = "void";
        $$->symbol.type.return_size = 0;
        $$->symbol.type.t = 2;
        $$->symbol.name = $3->symbol.name;
        ret_size = 0;

        for(int i=0; i< $3->symbol.type.parameters.size(); i++)
        {
            $$->symbol.type.parameters.push_back($3->symbol.type.parameters[i]);
            $$->symbol.type.parameters_type.push_back($3->symbol.type.parameters_type[i]);
            $$->symbol.type.parameters_size.push_back($3->symbol.type.parameters_size[i]);

        }

        struct node* E[2];
        E[0] = $$;
        E[1] = $3;
        buildTAC(E, 2, COPY_CODE);
        long long int x = glob_insert(line_number,class_name,$$->symbol.name,$$->symbol.type,curr,glob_table, $$->val);
        if(x < 0){
            semantic_error("Method declaration at line number " + to_string(line_number)+ " is invalid as constructor already with same name declared at line number " + to_string(-x) +".");
        }

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
                $$->symbol.type.parameters_size.push_back($4->arr[i]->symbol.size);

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
        $$->symbol.size = $1->symbol.size;
        $$->symbol.type.name = $1->symbol.type.name;
        //cout << $1->symbol.type.name << endl;
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
        $$->symbol = $2->symbol;

        if($1 != NULL)
        {
            for(int i = 0; i<$1->arr.size(); i++)
            {
                $$->symbol.type.modifier.push_back($1->arr[i]->data);
            }
            
        }

        struct node* E[3];
        E[0] = $$;
        E[1] = $1;
        E[2] = $4;
        buildTAC(E, 3, APPEND_CODE);
        long long int x = glob_insert(line_number,class_name,$$->symbol.name,$$->symbol.type,curr,glob_table, $$->val);
        if(x < 0){
            semantic_error("Constructor declaration at line number " + to_string(line_number)+ " is invalid as constructor already defined at line number " + to_string(-x) +".");
        }
    }

ConstructorDeclarator: 
    SimpleName Symbol_Table_Change LeftParanthesis FormalParameterList_opt RightParanthesis {
        
        struct node* memArr[1];
        memArr[0] = $4;
        $$ = makeInternalNode($1->data, memArr, 1, 0);
        if(string($1->data) != class_name){
            semantic_error("Constructor Declaration at line number " + to_string(line_number) +  " is not declared properly as no class of name " + $1->data + " delared in the scope."  );
        }
        $$->symbol.name = $1->data;
        struct Symbol * class_scope_entry = loc_lookup(glob_class_scope,class_name);
        if(class_scope_entry !=  NULL)
        {
            $$->symbol.type = class_scope_entry->type;
        }
        $$->symbol.type.t = 2;

        if($4 != NULL){
            //cout << $4->arr.size() <<endl;
            for(int i=0; i< $4->arr.size(); i++)
            {
                $$->symbol.type.parameters.push_back($4->arr[i]->symbol.name);
                $$->symbol.type.parameters_type.push_back($4->arr[i]->symbol.type.name);
            }
            
        
        }
        $$->symbol.line_num = line_number;
        //glob_insert(line_number,class_name,$$->symbol.name,$$->symbol.type,curr,glob_table);
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
        // cout << "ArgumentList: \n";
        // printThreeAC($1->val) ;       
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
        curr = loc_mktable(curr,class_name);
    }

Symbol_Table_Back :
    {
        curr = curr->parent;
        //cout << "Symbol Table Changed" <<endl;
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
                //view_symbol($2->arr[j]->symbol);
                //view_symbol($1->symbol);
                $$->symbol.type = $1->symbol.type;
                $$->symbol.name= $2->arr[j]->symbol.name;
                $$->symbol.size = $1->symbol.size;
                $$->symbol.source_file = $2->arr[j]->symbol.source_file;
                $$->symbol.offset = $2->arr[j]->symbol.offset;
                $$->symbol.type.modifier.clear();
                //cout << $$->symbol.size << endl;
                
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

                //Type Checking if initialization
                if($2->arr[j]->t == 4){
                    //view_symbol($2->arr[j]);
                    if($$->symbol.type.name == $2->arr[j]->symbol.type.name){
                        $$->symbol.type = $2->arr[j]->symbol.type;
                        //$$->symbol.size = $2->arr[j]->symbol.size;
                        //view_symbol($$->symbol);
                        long long int x = loc_insert(curr,$$->symbol);
                        if(x<0)
                        {
                            semantic_error("Declaration of " +$$->symbol.name + " already exists at line number " + to_string(-x));
                        }
                    }

                    else{
                            if(isAssignmentCompatible($$->symbol.type.name, $2->arr[j]->arr[1]->symbol.type.name)){
                                long long int x = loc_insert(curr,$$->symbol);
                                if(x<0)
                                {
                                    semantic_error("Declaration of " +$$->symbol.name + " already exists at line number " + to_string(-x));
                                }
                            }
                            else{
                                semantic_error("Bad initialization types ["  + $$->symbol.type.name + ", " + $2->arr[j]->symbol.type.name + "] at line number " +  to_string(line_number) + ".");
                            }
                        }
                }
                else{
                    long long int x = loc_insert(curr,$$->symbol);
                    if(x<0)
                        {
                            semantic_error("Declaration of " +$$->symbol.name + " already exists at line number " + to_string(-x));
                        }
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
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 1576 "<<$$->val.code[i] << " "<<endl;
        // }
    }
    | LabeledStatement {
        $$ = $1;
    }
    | IfThenStatement Symbol_Table_Back{
        $$ = $1;
    }
    | IfThenElseStatement Symbol_Table_Back{
        $$ = $1;
    }
    | WhileStatement Symbol_Table_Back{
        $$ = $1;
    }
    | ForStatement Symbol_Table_Back{
        $$ = $1;
    }

StatementNoShortIf: 
    StatementWithoutTrailingSubstatement {
        $$ = $1;
    }
    | LabeledStatementNoShortIf {
        $$ = $1;
    }
    | IfThenElseStatementNoShortIf Symbol_Table_Back{
        $$ = $1;
    }
    | WhileStatementNoShortIf Symbol_Table_Back{
        $$ = $1;
    }
    | ForStatementNoShortIf Symbol_Table_Back{
        $$ = $1;
    }

StatementWithoutTrailingSubstatement: 
    Block{
        $$ = $1;
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 1616 "<<$$->val.code[i] << " "<<endl;
        // }
    }
    | EmptyStatement {
        $$ = NULL;
    }
    | ExpressionStatement {
        $$ = $1;

        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 1625 "<<$$->val.code[i] << " "<<endl;
        // }
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
        buildVal(E[1], 1);
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
        buildVal(E[1], 1);
        E[2] = $3;
        buildTAC(E, 3, APPEND_CODE);
    }

ExpressionStatement: 
    StatementExpression Semicolon {
        $$ = $1;
        appendCode($$->val, $$->post_fix_val);
        $$->post_fix_val.code.clear();
        $$->post_fix_val.quad.clear();
    }

StatementExpression:  
    Assignment {
        $$ = $1;
        //cout << "Hmmm" << endl;
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
    If Symbol_Table_Change LeftParanthesis Expression RightParanthesis Statement {
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
    If Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf Else Statement{
        
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
    If Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf Else StatementNoShortIf {
        
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
    While Symbol_Table_Change LeftParanthesis Expression RightParanthesis Statement {
        
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
    While Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf{
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
    For Symbol_Table_Change LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis Statement{
        
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
    For Symbol_Table_Change LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis StatementNoShortIf{
        
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
        //cout << $$->val.place <<endl;
        // printThreeAC($1->val);
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
        appendCode($$->val,$$->post_fix_val);
        $$->post_fix_val.code.clear();
        $$->post_fix_val.quad.clear();
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
        buildVal($$, 1);
    }

Identifier_opt: 
    {
        $$ = NULL;
    }| Identifier {
        $$ = makeleaf($1);
        buildVal($$,1);
    }

ContinueStatement: 
    Continue Identifier_opt Semicolon {
        struct node * memArr[1];
        memArr[0] =$2;
        $$ = makeInternalNode("continue", memArr, 1, 1);
        buildVal($$, 1);

    }

ReturnStatement: 
    Return Expression_opt Semicolon {
        struct node * memArr[1];
        memArr[0] =$2;
        $$ = makeInternalNode("return", memArr, 1, 1);
        // buildVal(makeleaf($1));
        // printThreeAC($2->val);
        struct node* E[3];
        E[0] = $$;
        E[1] = makeleaf($1);
        buildVal(E[1], 1);
        E[2] = $2;
        buildTAC(E, 3, APPEND_CODE);


        if($2 != NULL){
            hasReturned = 1;
            if(ret_size == 0){
                semantic_error("Function of type void returning value at line number " + to_string(line_number));
            }
            else{
                struct Quad* quad = new struct Quad;
                quad->op.op = Movq_;
                quad->op.type = "int";
                struct Value * val = new struct Value;
                val->place = "\%rax";
                val->status = IS_REGISTER;
                fill_arg(&quad->result, *val);
                fill_arg(&quad->arg_1, $2->val);
                quad->arg_2.status = IS_EMPTY;
                pushQuad($$->val, *quad);
                pushCode($$->val, "push " + $2->val.place + " (" + to_string(ret_size) + ")$rbp");
                

                pushCode($$->val, "popq \%rbp");

                quad->op.op = Popq_;
                val->status = IS_REGISTER;

                val->place = "\%rbp";
                fill_arg(&quad->result, *val);
                quad->arg_1.status = IS_EMPTY;
                quad->arg_2.status = IS_EMPTY;

                //pushQuad($$->val, *quad);

                
                quad->arg_1.status = IS_EMPTY;
                quad->arg_2.status = IS_EMPTY;
                quad->result.status = IS_EMPTY;
                quad->op.op = Retq_;
                quad->op.type = "int";
                pushQuad($$->val, *quad);
                pushCode($$->val,"retq");
            }
        }
        else{
            hasReturned = 0;
            struct Quad* quad = new struct Quad;
            quad->op.op = Movq_;
            quad->op.type = "int";
            struct Value * val = new struct Value;
            val->place = "\%rax";
            val->status = IS_REGISTER;
            pushCode($$->val, "popq \%rbp");

            quad->op.op = Popq_;
            val->status = IS_REGISTER;

            val->place = "\%rbp";
            fill_arg(&quad->result, *val);
            quad->arg_1.status = IS_EMPTY;
            quad->arg_2.status = IS_EMPTY;

            //pushQuad($$->val, *quad);

            
            quad->arg_1.status = IS_EMPTY;
            quad->arg_2.status = IS_EMPTY;
            quad->result.status = IS_EMPTY;
            quad->op.op = Retq_;
            quad->op.type = "int";
            pushQuad($$->val, *quad);
            pushCode($$->val,"retq");

            string str = "ret";
            pushCode($$->val,str);
        }
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
        string temp = makeNewTemp(newTempLabel);
        newTempLabel++;
        $$->symbol.type.name = class_name;
        $$->val.place = temp;
        pushCode($$->val,temp + " = poparam");
        if(static_context == 1){
            semantic_error("Non-static variable this cannot be referenced from a static context at line number " + to_string(line_number));
        }
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
        string temp = makeNewTemp(newTempLabel);
        insert_temp($$->symbol, temp, $$->symbol.type.name);
        newTempLabel++;
        pushCode($$->val,string(temp + " = " + $1->symbol.name + "[" + $1->val.place + "]") );
        // $$->val.place = $1->symbol.name + "[" + $1->val.place + "]";

        struct Value * val = new struct Value;
        struct Quad * quad = new struct Quad;
        quad->my_table = curr;
        quad->op.op = LoadArray_;
        quad->op.type = $1->symbol.type.name;

        fill_arg(&quad->arg_2, $1->val);

        $$->val.place = temp;
        $$->val.status = IS_VARIABLE;

        fill_arg(&quad->result, $$->val);
        val->place = $1->symbol.name;
        val->status = IS_VARIABLE;
        fill_arg(&quad->arg_1, *val);

        pushQuad($$->val, *quad);

    }

ClassInstanceCreationExpression: 
    New ClassType LeftParanthesis ArgumentList_opt RightParanthesis {
        struct node * memArr[3];
        memArr[0] = makeleaf($1);
        memArr[1] =$2;
        memArr[2] =$4;
        $$ = makeInternalNode("ClassInstance", memArr, 3, 1);
        $$->isDeclaration = DECLARATION;
        $$->symbol.type.name = $2->symbol.name;

        struct GlobalSymbol * glob_entry = glob_lookup($2->symbol.name,$2->symbol.name,glob_table);

        if(glob_entry == NULL){
            buildVal($$, 1);
        }

        else{
            if($4 == NULL){
                //cout << glob_entry->type.parameters_type.size() <<endl;
                view_type(glob_entry->type);
                if(glob_entry->type.parameters_type.size() != 0){
                    semantic_error("Constructor " + string($2->data) +  " invocation at line number " + to_string(line_number) + " has wrong number of parameters passed.");
                }

            }
            else{
                if($4->arr.size()!= glob_entry->type.parameters_type.size()){
                    semantic_error("Constructor " + string($2->data) +  " invocation at line number " + to_string(line_number) + " has wrong number of parameters passed.");
                }
                else{
                    //cout << "Hello good sir " << $3->arr.size() << endl;
                    for (int i = 0; i< $4->arr.size(); i++)
                    {   
                        //view_symbol($3->arr[i]->symbol);

                        if(!isAssignmentCompatible(glob_entry->type.parameters_type[i], $4->arr[i]->symbol.type.name))
                        {
                            semantic_error("Constructor " + string($2->data) +  " invocation at line number " + to_string(line_number) + " has wrong type of parameter passed at position " + to_string(i+1) + "." );          
                        }
                    }
                }
            }

        }

        buildVal($$, 1);

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

        struct node * memArr2[1];
        memArr2[0] = $3;
        $3 = makeInternalNode("Dimension", memArr2,1,1);

        struct node * memArr[4];
        memArr[0] = makeleaf($1);
        memArr[1] =$2;
        memArr[2] =$3;
        memArr[3] =$4;

        $$ = makeInternalNode("ArrayCreation", memArr, 4, 1);
        $$->isDeclaration = DECLARATION;
        $$->symbol.type.name = $2->symbol.type.name;
        $$->symbol.size = $2->symbol.size;

        for(int i = 0 ; i < $3->arr.size(); i++){
            $$->symbol.type.name += "[]";
            $$->symbol.type.dims.push_back(atoi($3->arr[i]->data));
            $$->symbol.size *= $$->symbol.type.dims[i];
        }

        //view_type($$->symbol.type);

        // buildVal($$);
        $$->t = ARRAY_ACCESS;
    }
    | New ClassOrInterfaceType DimExprs Dims_opt {

        struct node * memArr2[1];
        memArr2[0] = $3;
        $3 = makeInternalNode("Dimension", memArr2,1,1);

        struct node * memArr[4];
        memArr[0] = makeleaf($1);
        memArr[1] =$2;
        memArr[2] =$3;
        memArr[3] =$4;
        $$ = makeInternalNode("ArrayCreation", memArr, 4, 1);
        $$->isDeclaration = DECLARATION;
        // buildVal($$);
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
        for (int i =0; i<glob_class_scope->children.size(); i++)
        {
            if(glob_class_scope->children[i]->scope == $1->symbol.type.name)
            {
                struct Symbol* symb = loc_lookup(glob_class_scope->children[i],string($3));
                if(symb == NULL)
                {
                    semantic_error("No such modifier for the class " + $1->symbol.type.name);
                }
                else{
                    $$->symbol.type = symb->type;
                }
            }
        }
        

        struct node * E[3];
        E[0] = $$;
        E[1] = $1;
        E[2] = makeleaf($3);
        buildVal(E[2], 1);
        string temp = makeNewTemp(newTempLabel);
        newTempLabel++;
        E[2]->val.place = temp;
        pushCode(E[2]->val, temp + " = " + string($3)); 
        buildTAC(E, 3, APPEND_CODE);
        temp = makeNewTemp(newTempLabel);
        newTempLabel++;
        E[0]->val.place = temp;
        pushCode(E[0]->val,E[0]->val.place  + " = *(" +(E[1]->val.place +" + " +E[2]->val.place)+")");
    } 
    | Super Dot Identifier {
        $$ = makeleaf(concatenate_string($1,$3));

    }

MethodInvocation: 
    Name LeftParanthesis ArgumentList_opt RightParanthesis {
        struct node * memArr[1];
        memArr[0] = $3;
        $$ = makeInternalNode($1->data, memArr, 1, 1);

        // Checking If function has been define
        if(string($1->data) == "System.out.println"){
            if($3 != NULL){
                for(int i = 0; i< $3->arr.size(); i++)
                {
                    struct Quad * quad = new struct Quad;
                    quad->my_table = curr;

                    if(isPrimitiveType($3->arr[i]->symbol.type.name) != 1){
                        semantic_error("System.out.println is not supported for type " + $3->arr[i]->symbol.type.name + " at line number " + to_string(line_number));
                    }
                    else{
                        if($3->arr[i]->symbol.type.name == "int"|| $3->arr[i]->symbol.type.name == "boolean" || $3->arr[i]->symbol.type.name == "byte" || $3->arr[i]->symbol.type.name == "short")
                        {
                            quad->op.op = Printint_;
                            quad->op.type = "int";
                        }
                        else if($3->arr[i]->symbol.type.name == "char")
                        {
                            quad->op.op = Printchar_;
                            quad->op.type = "int";
                        }
                        else{
                            quad->op.op = Printlong_;
                            quad->op.type = "int";
                        }
                        fill_arg(&quad->result, $3->arr[i]->val);
                        quad->arg_1.status = IS_EMPTY;
                        quad->arg_2.status = IS_EMPTY;
                        appendCode($$->val, $3->val);
                        pushQuad($$->val,*quad);
                    }
                }
            }
        }
        else{
            struct GlobalSymbol * glob_entry = glob_lookup(class_name, $1->data, glob_table);
            if(glob_entry ==  NULL){
                // Function not defined before 
                semantic_error("Function " + string($1->data) + " at line number " + to_string(line_number) + " not declared." );
            }
            else{
                // Checking if Arguments are filled in properly
                if($3 == NULL){
                    if(glob_entry->type.parameters_type.size() != 0){
                        semantic_error("Function " + string($1->data) +  " invocation at line number " + to_string(line_number) + " has wrong number of parameters passed.");
                    }
                }
                else{
                    if($3->arr.size()!= glob_entry->type.parameters_type.size()){
                        semantic_error("Function " + string($1->data) +  " invocation at line number " + to_string(line_number) + " has wrong number of parameters passed.");
                    }
                    else{
                        for (int i = 0; i< $3->arr.size(); i++)
                        {   
                            if(!isAssignmentCompatible(glob_entry->type.parameters_type[i],$3->arr[i]->symbol.type.name))
                            {
                                semantic_error("Function " + string($1->data) +  " invocation at line number " + to_string(line_number) + " has wrong type of parameter passed at position " + to_string(i+1) + "." );          
                            }
                        }
                        $$->symbol.type.name = glob_entry->type.return_type;
                        $$->symbol.size = glob_entry->type.return_size;
                        $$->symbol.name = glob_entry->type.name;
                    }
                    
                }



                if( (static_context== 1) && (is_static(glob_entry->type) == 0)){
                    semantic_error("Calling a non-static function from a static context at line number " + to_string(line_number));
                }
                else {
                    struct node * E[2];
                    E[0] = $$;
                    E[1] = $3;
                    genMethodInvocationCode(E, 2);
                }
            }
        }


        // cout << "three ac for method invocation: \n";
        // printThreeAC($3->val);
    } 
    | Primary Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis {
        struct node * memArr[1];
        memArr[0] = $5;
        $$ = makeInternalNode(concatenate_string($1->data,concatenate_string(".",$3)), memArr, 1, 1);
        $$->symbol.name = string($3);
        struct node * E[2];
        E[0] = $$;
        E[1] = $5;
        genMethodInvocationCode(E, 2);
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
        //cout << $$->symbol.type.name << endl;

        if($3->symbol.type.name != "byte" && $3->symbol.type.name != "short" && $3->symbol.type.name != "int" && $3->symbol.type.name != "char"  )
        {
            semantic_error("Invalid array access at line number " + to_string(line_number) + " as the expression is of type " + $3->symbol.type.name);
        }
        if($$->symbol.type.dims.size() != 0){
            $$->symbol.size = $$->symbol.size/$$->symbol.type.dims[0];
            $$->symbol.type.dims.erase($$->symbol.type.dims.begin());
        }   

        genArrayAccess($$,$1,$3);
        // buildTAC(E, 3, ARRAY_ACCESS);

    }
    | ArrayAccess LeftSquareBracket Expression RightSquareBracket {
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
        if($3->symbol.type.name != "byte" && $3->symbol.type.name != "short" && $3->symbol.type.name != "int" && $3->symbol.type.name != "char"  )
        {
            semantic_error("Invalid array access at line number " + to_string(line_number) + " as the expression is of type " + $3->symbol.type.name);
        }

        if($$->symbol.type.dims.size() != 0){
            $$->symbol.size = $$->symbol.size/$$->symbol.type.dims[0];
            $$->symbol.type.dims.erase($$->symbol.type.dims.begin());
        } 

        genArrayAccess2($$,$1,$3);

        //buildVal($$);
    }

PostfixExpression: 
    Primary {
        $$ = $1;
    }
    | Name {
        $$ = $1;
        struct Symbol * lookup_entry = check_scope(curr , string($1->data));
        if(lookup_entry == NULL){
            semantic_error("The identifier " + string($1->data) + " at line number " + to_string(line_number) +  " has not been declared in the scope." );
        }
        else{
            $$->symbol.type = lookup_entry->type;
        }
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
        struct node tempNode = *makeleaf("1");
        tempNode.symbol.type.name = $1->symbol.type.name;
        tempNode.symbol.size = $1->symbol.size;
        tempNode.val.place = "1";
        buildVal(&tempNode, 0);
        E[2] = &tempNode;
        E[3] = makeleaf("+");


        if(isPrimitiveType($1->symbol.type.name) && $1->symbol.type.name != "boolean")
        {
            $$->symbol.type.name = $1->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + "] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }
        if($1->val.status == IS_VARIABLE){
            buildTAC(E,4,BINARY_CODE);
            pushCode($$->post_fix_val, E[0]->val.code.back());
            E[0]->val.code.pop_back();
            pushQuad($$->post_fix_val, E[0]->val.quad.back());
            E[0]->val.quad.pop_back();

            pushCode($$->post_fix_val, string($1->data) + " = " + $$->val.place);
            


            struct Quad* quad = new struct Quad;
            quad->op.op = Empty_;
            quad->op.type = $1->symbol.type.name;
            quad->my_table = curr;
            fill_arg(&quad->arg_1,$$->val);
            fill_arg(&quad->result,$1->val);
            quad->arg_2.status = IS_EMPTY;
            pushQuad($$->post_fix_val, *quad);

            $$->post_fix_val.place = $1->val.place;
            $$->val.place = $1->val.place;
        }
        //cout <<  $$->post_fix_val.code.size() <<endl;
        else{
            semantic_error("Unexpected type for post-increment at line number "+ to_string(line_number) + " .");
        }
        
    } 

PostDecrementExpression: 
    PostfixExpression MinusMinus {
        struct node * memArr[1];
        memArr[0] = $1;
        $$ = makeInternalNode("--", memArr, 1, 1);
        struct node* E[4];
        E[0] = $$;
        E[1] = $1;
        struct node tempNode = *makeleaf("1");
        tempNode.symbol.type.name = $1->symbol.type.name;
        tempNode.symbol.size = $1->symbol.size;
        tempNode.val.place = "1";
        buildVal(&tempNode, 0);
        E[2] = &tempNode;
        E[3] = makeleaf("-");

        if(isPrimitiveType($1->symbol.type.name) && $1->symbol.type.name != "boolean")
        {
            $$->symbol.type.name = $1->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + "] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }

        if($1->val.status == IS_VARIABLE)
        {
        buildTAC(E,4,BINARY_CODE);


        pushCode($$->post_fix_val, E[0]->val.code.back());
        E[0]->val.code.pop_back();
        pushQuad($$->post_fix_val, E[0]->val.quad.back());
        E[0]->val.quad.pop_back();

        pushCode($$->post_fix_val, string($1->data) + " = " + $$->val.place);

        struct Quad* quad = new struct Quad;
        quad->op.op = Empty_;
        quad->op.type = $1->symbol.type.name;
        quad->my_table = curr;
        fill_arg(&quad->arg_1,$$->val);
        fill_arg(&quad->result,$1->val);
        quad->arg_2.status = IS_EMPTY;
        pushQuad($$->post_fix_val, *quad);

        $$->post_fix_val.place = $1->val.place;
        $$->val.place = $1->val.place;
        }
    else{
            semantic_error("Unexpected type for post-decrement at line number "+ to_string(line_number) + " .");
        }
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

        if(isPrimitiveType($2->symbol.type.name) && $2->symbol.type.name != "boolean")
        {
            $$->symbol.type.name = $2->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + $2->symbol.type.name + "] for operator " + string($1) + " at line number " +  to_string(line_number) + ".");
        }

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
    
        if(isPrimitiveType($2->symbol.type.name) && $2->symbol.type.name != "boolean")
        {
            $$->symbol.type.name = $2->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + $2->symbol.type.name + "] for operator " + string($1) + " at line number " +  to_string(line_number) + ".");
        }

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
        struct node tempNode = *makeleaf("1");
        tempNode.symbol.type.name = $2->symbol.type.name;
        tempNode.symbol.size = $2->symbol.size;
        tempNode.val.place = "1";
        buildVal(&tempNode, 0);
        E[2] = &tempNode;
        E[3] = makeleaf("+");

        if(isPrimitiveType($2->symbol.type.name) && $2->symbol.type.name != "boolean")
        {
            $$->symbol.type.name = $2->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + $2->symbol.type.name + "] for operator " + string($1) + " at line number " +  to_string(line_number) + ".");
        }

        if($2->val.status == IS_VARIABLE){
            buildTAC(E,4,BINARY_CODE);
            
            pushCode($$->val, string($2->data) + " = " + $$->val.place);
            
            struct Quad* quad = new struct Quad;
            quad->op.op = Empty_;
            quad->op.type = $2->symbol.type.name;
            quad->my_table = curr;
            fill_arg(&quad->arg_1,$$->val);
            fill_arg(&quad->result,$2->val);
            quad->arg_2.status = IS_EMPTY;
            pushQuad($$->val, *quad);
            $$->val.place = $2->val.place;
        }
        else{
            semantic_error("Unexpected type for pre-increment at line number "+ to_string(line_number) + " .");
        }
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
        struct node tempNode = *makeleaf("1");
        tempNode.symbol.type.name = $2->symbol.type.name;
        tempNode.symbol.size = $2->symbol.size;
        tempNode.val.place = "1";
        buildVal(&tempNode, 0);
        E[2] = &tempNode;
        E[3] = makeleaf("-");

        if(isPrimitiveType($2->symbol.type.name) && $2->symbol.type.name != "boolean")
        {
            $$->symbol.type.name = $2->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + $2->symbol.type.name + "] for operator " + string($1) + " at line number " +  to_string(line_number) + ".");
        }
        if($2->val.status == IS_VARIABLE){
            buildTAC(E,4,BINARY_CODE);
            
            pushCode($$->val, string($2->data) + " = " + $$->val.place);
            
            
            struct Quad* quad = new struct Quad;
            quad->op.op = Empty_;
            quad->op.type = $2->symbol.type.name;
            quad->my_table = curr;
            fill_arg(&quad->arg_1,$$->val);
            fill_arg(&quad->result,$2->val);
            quad->arg_2.status = IS_EMPTY;
            pushQuad($$->val, *quad);

            $$->val.place = $2->val.place;
        }
        else{
            semantic_error("Unexpected type for pre-decrement at line number "+ to_string(line_number) + " .");
        }
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
        if(isIntegralType($2->symbol.type.name))
        {
            $$->symbol.type.name = $2->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + $2->symbol.type.name + "] for operator " + string($1) + " at line number " +  to_string(line_number) + ".");
        }
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

        if($2->symbol.type.name == "boolean")
        {
            $$->symbol.type.name = "boolean";
        }
        else{
            semantic_error("Bad operand types ["  + $2->symbol.type.name + "] for operator " + string($1) + " at line number " +  to_string(line_number) + ".");
        }
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

        if($1->symbol.type.name != "boolean" && $3->symbol.type.name != "boolean")
        {
            if(isTypeCompatible($1->symbol.type.name, $3->symbol.type.name))
            {
                $$->symbol.type.name = max_type($1->symbol.type.name, $3->symbol.type.name);
                
            }
            else{
                semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }


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

        if($1->symbol.type.name != "boolean" && $3->symbol.type.name != "boolean")
        {
            if(isTypeCompatible($1->symbol.type.name, $3->symbol.type.name))
            {
                $$->symbol.type.name = max_type($1->symbol.type.name, $3->symbol.type.name);
                
            }
            else{
                semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }


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

        if($1->symbol.type.name != "boolean" && $3->symbol.type.name != "boolean")
        {
            if(isTypeCompatible($1->symbol.type.name, $3->symbol.type.name))
            {
                $$->symbol.type.name = max_type($1->symbol.type.name, $3->symbol.type.name);
                
            }
            else{
                semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }


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

        if($1->symbol.type.name != "boolean" && $3->symbol.type.name != "boolean")
        {
            if(isTypeCompatible($1->symbol.type.name, $3->symbol.type.name))
            {
                $$->symbol.type.name = max_type($1->symbol.type.name, $3->symbol.type.name);
                
            }
            else{
                semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }

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

        if($1->symbol.type.name != "boolean" && $3->symbol.type.name != "boolean")
        {
            if(isTypeCompatible($1->symbol.type.name, $3->symbol.type.name))
            {
                $$->symbol.type.name = max_type($1->symbol.type.name, $3->symbol.type.name);
                
            }
            else{
                semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }

        buildTAC(E,4,BINARY_CODE);

    }

ShiftExpression: 
    AdditiveExpression {
        $$ = $1;
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 2753 "<<$$->val.code[i] << " "<<endl;
        // }
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

        //cout << $1->symbol.type.name <<endl;
        if(isIntegralType($1->symbol.type.name)&& isIntegralType($3->symbol.type.name))
        {
            $$->symbol.type.name = max_type($1->symbol.type.name, $3->symbol.type.name);
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }

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

        if(isIntegralType($1->symbol.type.name)&& isIntegralType($3->symbol.type.name))
        {
            $$->symbol.type.name = max_type($1->symbol.type.name, $3->symbol.type.name);
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }

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

        if(isIntegralType($1->symbol.type.name)&& isIntegralType($3->symbol.type.name))
        {
            $$->symbol.type.name = max_type($1->symbol.type.name, $3->symbol.type.name);
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }

        buildTAC(E,4,BINARY_CODE);
    }

RelationalExpression: 
    ShiftExpression {
        $$ = $1;
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 2826 "<<$$->val.code[i] << " "<<endl;
        // }
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
        if($1->symbol.type.name != "boolean" && $3->symbol.type.name != "boolean")
        {
            if(isTypeCompatible($1->symbol.type.name, $3->symbol.type.name))
            {
                $$->symbol.type.name = "boolean";
                //cout << $1->symbol.type.name <<endl;
                //cout << $3->symbol.type.name <<endl;
                
            }
            else{
                semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }
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

        if($1->symbol.type.name != "boolean" && $3->symbol.type.name != "boolean")
        {
            if(isTypeCompatible($1->symbol.type.name, $3->symbol.type.name))
            {
                $$->symbol.type.name = "boolean";
                //cout << $1->symbol.type.name <<endl;
                //cout << $3->symbol.type.name <<endl;
                
            }
            else{
                semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }
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

        if($1->symbol.type.name != "boolean" && $3->symbol.type.name != "boolean")
        {
            if(isTypeCompatible($1->symbol.type.name, $3->symbol.type.name))
            {
                $$->symbol.type.name = "boolean";
                //cout << $1->symbol.type.name <<endl;
                //cout << $3->symbol.type.name <<endl;
                
            }
            else{
                semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }
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

        if($1->symbol.type.name != "boolean" && $3->symbol.type.name != "boolean")
        {
            if(isTypeCompatible($1->symbol.type.name, $3->symbol.type.name))
            {
                $$->symbol.type.name = "boolean";
                //cout << $1->symbol.type.name <<endl;
                //cout << $3->symbol.type.name <<endl;
                
            }
            else{
                semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }
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
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 2961 "<<$$->val.code[i] << " "<<endl;
        // }
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
        
        if(isTypeCompatible($1->symbol.type.name,$3->symbol.type.name))
        {
            $$->symbol.type.name = "boolean";
        }
        else
        {
            if($1->symbol.type.name == $3->symbol.type.name)
            {
                $$->symbol.type.name = "boolean";
            }
            else{
                semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
            }
        }
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

        if(isTypeCompatible($1->symbol.type.name,$3->symbol.type.name))
        {
            $$->symbol.type.name = "boolean";
        }
        else
        {
            if($1->symbol.type.name == $3->symbol.type.name)
            {
                $$->symbol.type.name = "boolean";
            }
            else{
                semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
            }
        }
    }

AndExpression: 
    EqualityExpression {
        $$ = $1;
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 3023 "<<$$->val.code[i] << " "<<endl;
        // }
    }
    | AndExpression BitwiseAnd EqualityExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("&", memArr, 2 ,1);

        if(isTypeCompatible($1->symbol.type.name,$3->symbol.type.name))
        {
            $$->symbol.type.name = "boolean";
        }
        else
        {
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }

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

        if(isTypeCompatible($1->symbol.type.name,$3->symbol.type.name))
        {
            $$->symbol.type.name = "boolean";
        }
        else
        {
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }


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

        if(isTypeCompatible($1->symbol.type.name,$3->symbol.type.name))
        {   
            //cout << "Hello Type compatible" <<endl;
            $$->symbol.type.name = "boolean";
        }
        else
        {
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }

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
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 3109 "<<$$->val.code[i] << " "<<endl;
        // }
    }
    | ConditionalAndExpression AndOperator InclusiveOrExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("&&", memArr, 2, 1);

        if($1->symbol.type.name == "boolean" && $3->symbol.type.name == "boolean")
        {
            $$->symbol.type.name = "boolean";
        }
        else
        {
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }

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
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 3142 "<<$$->val.code[i] << " "<<endl;
        // }
    }
    | ConditionalOrExpression OrOperator ConditionalAndExpression {
        struct node* memArr[2];
        memArr[0] = $1;
        memArr[1] = $3;
        $$  = makeInternalNode("||", memArr, 2, 1);

        if($1->symbol.type.name == "boolean" && $3->symbol.type.name == "boolean")
        {
            $$->symbol.type.name = "boolean";
        }
        else
        {
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name  +"] for operator " + string($2) + " at line number " +  to_string(line_number) + ".");
        }

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
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 3174 "<<$$->val.code[i] << " "<<endl;
        // }
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
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 3186 "<<$$->val.code[i] << " "<<endl;
        // }
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

    if($1->symbol.type.name == $3->symbol.type.name)
    {
        $$->symbol.type.name = $1->symbol.type.name;
    }
    else{
        if(isTypeCompatible($1->symbol.type.name, $3->symbol.type.name))
        {
            $$->symbol.type.name = $1->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + $1->symbol.type.name + ", " + $3->symbol.type.name + "] for operator " + string($2->symbol.name) + " at line number " +  to_string(line_number) + ".");
        }
    }
    if(isAssignmentCompatible($1->symbol.type.name, $3->symbol.type.name) == 0){
            semantic_error("Possible lossy conversion from "  + $3->symbol.type.name + " to " + $1->symbol.type.name +" at line number " +  to_string(line_number) + ".");
    }
    if($1->t != ARRAY_ACCESS){
        struct node* E[2];
        E[0] = $1;
        E[1] = $3;
        buildTAC(E, 2, ASSIGN_CODE);
        $$ = $1;
    }
    else{
        struct Quad * quad = new struct Quad;
        struct Value * val = new struct Value;

        fill_arg(&quad->arg_1, $1->val);
        val->place = $1->symbol.name;
        val->status = IS_VARIABLE;
        fill_arg(&quad->result, *val);
        fill_arg(&quad->arg_2, $3->val);

        quad->my_table = curr;
        quad->op.op = ArrayAccess_;
        quad->op.type = $$->symbol.type.name;
        appendCode($$->val, $1->val);
        appendCode($$->val, $3->val);
        pushQuad($$->val, *quad);
        pushCode($$->val, $1->symbol.name + "[" + $1->val.place + "]" + " = " + $3->val.place);
        appendCode($$->val, $1->post_fix_val);
        appendCode($$->val, $3->post_fix_val);
    }

    

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
        $$->t = ARRAY_ACCESS;
        struct Symbol * lookup_entry = check_scope(curr , string($1->symbol.name));
        if(lookup_entry == NULL){
            semantic_error("The identifier " + string($1->symbol.name) + " at line number " + to_string(line_number) +  " has not been declared in the scope." );
        }
        else{
            //cout << "The identifier "  <<  $1->symbol.name <<" at line number " << line_number << " has been declared at line number "<< lookup_entry->line_num << endl <<endl;
            //$$->symbol.type = lookup_entry->type;
        }
        //appendCode($$->val)
        $$->symbol.type.name = $1->symbol.type.name;        
        $$->symbol.name = $1->symbol.name;
        //$$->val.place = $1->symbol.name + "[" + $1->val.place + "]";
        $$->val.place = $1->val.place;


        // struct Quad * quad = new struct Quad;
        // struct Value * val = new struct Value;

        // val->status = IS_VARIABLE;
        // val->place = $1->symbol.name;
        // quad->my_table = curr;

        // fill_arg(&quad->result, *val);
        // fill_arg(&quad->arg_1, $1->val);
        // fill_arg(&quad->arg_2, )

        //cout << $$->symbol.type.name <<endl;
    }

AssignmentOperator: 
    EqualTo {
        $$ = makeleaf($1);
        $$->symbol.name = string($1);
    }
    | ProductEqualTo {
        $$ = makeleaf($1);
        $$->symbol.name = string($1);
    }
    | DivideEqualTo {
        $$ = makeleaf($1);
        $$->symbol.name = string($1);
    }
    | ModuloEqualTo  {
        $$ = makeleaf($1);
        $$->symbol.name = string($1);
    }
    | AdditionEqualTo {
        $$ = makeleaf($1);
        $$->symbol.name = string($1);
    }
    | SubstractionEqualTo  {
        $$ = makeleaf($1);
        $$->symbol.name = string($1);
    }
    | LeftShitEqualTo  {
        $$ = makeleaf($1);
        $$->symbol.name = string($1);
    }
    | RightShiftEqualTo  {
        $$ = makeleaf($1);
        $$->symbol.name = string($1);
    }
    | TripleGreaterThanEqualTo  {
        $$ = makeleaf($1);
        $$->symbol.name = string($1);
    }
    | BitWiseAndEqualTo  {
        $$ = makeleaf($1);
        $$->symbol.name = string($1);
    }
    | CircumFlexEqualTo  {
        $$ = makeleaf($1);
        $$->symbol.name = string($1);
    }
    | BitWiseOrEqualTo {
        $$ = makeleaf($1);
        $$->symbol.name = string($1);
    }

Expression: AssignmentExpression {
        $$ = $1;
    }


%%


int yyerror(string s)
{
    cout << s << " at [ line number: " << line_number << " ] \nExiting...\n";
    err = 1;
    return 1;
    //exit(1);
}

int semantic_error(string s)
{
    cout << s <<endl <<endl;
    err = 1;
    return 1;
    //exit(1);
}

int main(int argc , char** argv)
{   
    // Need to add path to inputfile and output file
    #ifdef YYDEBUG
        yydebug = 0;
    #endif

    char * input_file = NULL;
    char * output_file = NULL;
    int help_flag = 0;

    flag_extractor(argc, argv, &input_file, &output_file,&help_flag);

    /* Parsing Algorithm */
    yyin = fopen(input_file,"r");
    src_file = string(input_file);

    if(yyin == NULL){
        printf("No such Input file found ! \n");
        return 0;
    }

    //freopen(output_file,"w", stdout);
    // yyout = fopen(output_file,"w");
    yyparse();
    
    
    // if(err == 0){
    //     // No syntax or semantic error
    //     int limit = root->val.code.size();
    //     for(int iter = 0; iter < limit/2; iter++)
    //         cout << root->val.code[iter]<<endl; 
    // }
    
    //view_symbol_table_with_children_hierarchy(glob_class_scope);
    //viewGlobal(glob_table);
    //viewGlobalTac(glob_table);
    // view_symbol_table_with_children_hierarchy(glob_class_scope);


    FILE* graph = fopen(output_file,"w");
    // if(err == 0){
    //     freopen(output_file,"w", stdout);
    //     //cout <<"//// The 3AC is the following : ";
    //     // ofseam cout(output_file);
    //     generateTac(graph, glob_table);
    // }
    // else{
    //     freopen(output_file,"w", stdout);
    //     cout <<"//// There are errors in the code and thus 3AC generation failed";
    //     // ofseam cout(output_file);
    // }
    // char * assembly_file = NULL;
    // assembly_file = "output/output.s";

    if(err ==0){
        freopen(output_file,"w",stdout);
        cout << endl;
        //cout << "Beginning Code Generation" <<endl;
        if(glob_table != NULL);
        generateAssembly(glob_table);
    }

    // fprintf(graph, "digraph AST{ \n");
    // if(err == 0){
    //     generateGraph(root, graph);
    // }
    // fprintf(graph, "} \n");
    fclose(graph);
    fclose(yyin);

    return 0;

}



