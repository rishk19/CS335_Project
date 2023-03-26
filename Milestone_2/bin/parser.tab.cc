/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/parser.y"

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
int semantic_analysis(struct node* root);
void help();
int buildTAC(struct node* E[], int n, int flag);
int buildVal(struct node* E);
// int dummy(string name, struct SymbolTable * curr, struct GlobalSymbolTable* glob_insert);
long long int line_number=1;
Value dummyVal;// do not delete needed for generating 3AC text

struct GlobalSymbolTable* glob_table = new struct GlobalSymbolTable;
struct SymbolTable* curr = loc_mktable(NULL,"RR_GLOBAL_"); //parameters are parent-pointer,  local-table-name
int class_num = 0;

struct Symbol func_params;
int symb_insert = 0;


#line 142 "bin/parser.tab.cc"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.hh"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_Exports = 3,                    /* Exports  */
  YYSYMBOL_Opens = 4,                      /* Opens  */
  YYSYMBOL_Requires = 5,                   /* Requires  */
  YYSYMBOL_Uses = 6,                       /* Uses  */
  YYSYMBOL_Module = 7,                     /* Module  */
  YYSYMBOL_Permits = 8,                    /* Permits  */
  YYSYMBOL_Sealed = 9,                     /* Sealed  */
  YYSYMBOL_Var = 10,                       /* Var  */
  YYSYMBOL_Non_sealed = 11,                /* Non_sealed  */
  YYSYMBOL_Provides = 12,                  /* Provides  */
  YYSYMBOL_To = 13,                        /* To  */
  YYSYMBOL_With = 14,                      /* With  */
  YYSYMBOL_Open = 15,                      /* Open  */
  YYSYMBOL_Record = 16,                    /* Record  */
  YYSYMBOL_Transitive = 17,                /* Transitive  */
  YYSYMBOL_Yield = 18,                     /* Yield  */
  YYSYMBOL_Abstract = 19,                  /* Abstract  */
  YYSYMBOL_Continue = 20,                  /* Continue  */
  YYSYMBOL_For = 21,                       /* For  */
  YYSYMBOL_New = 22,                       /* New  */
  YYSYMBOL_Switch = 23,                    /* Switch  */
  YYSYMBOL_Assert = 24,                    /* Assert  */
  YYSYMBOL_Default = 25,                   /* Default  */
  YYSYMBOL_If = 26,                        /* If  */
  YYSYMBOL_Package = 27,                   /* Package  */
  YYSYMBOL_Synchronized = 28,              /* Synchronized  */
  YYSYMBOL_Boolean = 29,                   /* Boolean  */
  YYSYMBOL_Do = 30,                        /* Do  */
  YYSYMBOL_Goto = 31,                      /* Goto  */
  YYSYMBOL_Private = 32,                   /* Private  */
  YYSYMBOL_This = 33,                      /* This  */
  YYSYMBOL_Break = 34,                     /* Break  */
  YYSYMBOL_Double = 35,                    /* Double  */
  YYSYMBOL_Implements = 36,                /* Implements  */
  YYSYMBOL_Protected = 37,                 /* Protected  */
  YYSYMBOL_THROW = 38,                     /* THROW  */
  YYSYMBOL_Byte = 39,                      /* Byte  */
  YYSYMBOL_Else = 40,                      /* Else  */
  YYSYMBOL_Import = 41,                    /* Import  */
  YYSYMBOL_Public = 42,                    /* Public  */
  YYSYMBOL_THROWS = 43,                    /* THROWS  */
  YYSYMBOL_Case = 44,                      /* Case  */
  YYSYMBOL_Enum = 45,                      /* Enum  */
  YYSYMBOL_Instanceof = 46,                /* Instanceof  */
  YYSYMBOL_Return = 47,                    /* Return  */
  YYSYMBOL_Transient = 48,                 /* Transient  */
  YYSYMBOL_Catch = 49,                     /* Catch  */
  YYSYMBOL_Extends = 50,                   /* Extends  */
  YYSYMBOL_Int = 51,                       /* Int  */
  YYSYMBOL_Short = 52,                     /* Short  */
  YYSYMBOL_Try = 53,                       /* Try  */
  YYSYMBOL_Char = 54,                      /* Char  */
  YYSYMBOL_Final = 55,                     /* Final  */
  YYSYMBOL_Interface = 56,                 /* Interface  */
  YYSYMBOL_Static = 57,                    /* Static  */
  YYSYMBOL_Void = 58,                      /* Void  */
  YYSYMBOL_Class = 59,                     /* Class  */
  YYSYMBOL_FINALLY = 60,                   /* FINALLY  */
  YYSYMBOL_Long = 61,                      /* Long  */
  YYSYMBOL_Strictfp = 62,                  /* Strictfp  */
  YYSYMBOL_Volatile = 63,                  /* Volatile  */
  YYSYMBOL_Const = 64,                     /* Const  */
  YYSYMBOL_Float = 65,                     /* Float  */
  YYSYMBOL_Native = 66,                    /* Native  */
  YYSYMBOL_Super = 67,                     /* Super  */
  YYSYMBOL_While = 68,                     /* While  */
  YYSYMBOL_BooleanLiteral = 69,            /* BooleanLiteral  */
  YYSYMBOL_NullLiteral = 70,               /* NullLiteral  */
  YYSYMBOL_Identifier = 71,                /* Identifier  */
  YYSYMBOL_DecimalIntegerLiteral = 72,     /* DecimalIntegerLiteral  */
  YYSYMBOL_HexIntegerLiteral = 73,         /* HexIntegerLiteral  */
  YYSYMBOL_OctalIntegerLiteral = 74,       /* OctalIntegerLiteral  */
  YYSYMBOL_FloatingPointIntegerLiteral = 75, /* FloatingPointIntegerLiteral  */
  YYSYMBOL_FloatingPointLiteral = 76,      /* FloatingPointLiteral  */
  YYSYMBOL_BooleanIntegerLiteral = 77,     /* BooleanIntegerLiteral  */
  YYSYMBOL_CharacterLiteral = 78,          /* CharacterLiteral  */
  YYSYMBOL_TextBlock = 79,                 /* TextBlock  */
  YYSYMBOL_Operator = 80,                  /* Operator  */
  YYSYMBOL_Seperator = 81,                 /* Seperator  */
  YYSYMBOL_StringLiteral = 82,             /* StringLiteral  */
  YYSYMBOL_Comma = 83,                     /* Comma  */
  YYSYMBOL_LeftCurlyBrace = 84,            /* LeftCurlyBrace  */
  YYSYMBOL_RightCurlyBrace = 85,           /* RightCurlyBrace  */
  YYSYMBOL_Semicolon = 86,                 /* Semicolon  */
  YYSYMBOL_Dot = 87,                       /* Dot  */
  YYSYMBOL_LeftParanthesis = 88,           /* LeftParanthesis  */
  YYSYMBOL_RightParanthesis = 89,          /* RightParanthesis  */
  YYSYMBOL_TripleDot = 90,                 /* TripleDot  */
  YYSYMBOL_LeftSquareBracket = 91,         /* LeftSquareBracket  */
  YYSYMBOL_RightSquareBracket = 92,        /* RightSquareBracket  */
  YYSYMBOL_AtRate = 93,                    /* AtRate  */
  YYSYMBOL_Scope = 94,                     /* Scope  */
  YYSYMBOL_EqualTo = 95,                   /* EqualTo  */
  YYSYMBOL_NotOperator = 96,               /* NotOperator  */
  YYSYMBOL_Tilde = 97,                     /* Tilde  */
  YYSYMBOL_QuestionMark = 98,              /* QuestionMark  */
  YYSYMBOL_Colon = 99,                     /* Colon  */
  YYSYMBOL_RightArrow = 100,               /* RightArrow  */
  YYSYMBOL_EqualToEqualTo = 101,           /* EqualToEqualTo  */
  YYSYMBOL_GreaterThanEqualTo = 102,       /* GreaterThanEqualTo  */
  YYSYMBOL_LessThanEqualTo = 103,          /* LessThanEqualTo  */
  YYSYMBOL_NotEqualTo = 104,               /* NotEqualTo  */
  YYSYMBOL_AndOperator = 105,              /* AndOperator  */
  YYSYMBOL_OrOperator = 106,               /* OrOperator  */
  YYSYMBOL_PlusPlus = 107,                 /* PlusPlus  */
  YYSYMBOL_MinusMinus = 108,               /* MinusMinus  */
  YYSYMBOL_Addition = 109,                 /* Addition  */
  YYSYMBOL_Substraction = 110,             /* Substraction  */
  YYSYMBOL_Product = 111,                  /* Product  */
  YYSYMBOL_Divide = 112,                   /* Divide  */
  YYSYMBOL_BitwiseAnd = 113,               /* BitwiseAnd  */
  YYSYMBOL_BitwiseOr = 114,                /* BitwiseOr  */
  YYSYMBOL_CircumFlex = 115,               /* CircumFlex  */
  YYSYMBOL_Modulo = 116,                   /* Modulo  */
  YYSYMBOL_LeftShit = 117,                 /* LeftShit  */
  YYSYMBOL_RightShift = 118,               /* RightShift  */
  YYSYMBOL_TripleGreaterThan = 119,        /* TripleGreaterThan  */
  YYSYMBOL_AdditionEqualTo = 120,          /* AdditionEqualTo  */
  YYSYMBOL_SubstractionEqualTo = 121,      /* SubstractionEqualTo  */
  YYSYMBOL_ProductEqualTo = 122,           /* ProductEqualTo  */
  YYSYMBOL_DivideEqualTo = 123,            /* DivideEqualTo  */
  YYSYMBOL_BitWiseAndEqualTo = 124,        /* BitWiseAndEqualTo  */
  YYSYMBOL_BitWiseOrEqualTo = 125,         /* BitWiseOrEqualTo  */
  YYSYMBOL_CircumFlexEqualTo = 126,        /* CircumFlexEqualTo  */
  YYSYMBOL_ModuloEqualTo = 127,            /* ModuloEqualTo  */
  YYSYMBOL_LeftShitEqualTo = 128,          /* LeftShitEqualTo  */
  YYSYMBOL_RightShiftEqualTo = 129,        /* RightShiftEqualTo  */
  YYSYMBOL_TripleGreaterThanEqualTo = 130, /* TripleGreaterThanEqualTo  */
  YYSYMBOL_GreaterThan = 131,              /* GreaterThan  */
  YYSYMBOL_LessThan = 132,                 /* LessThan  */
  YYSYMBOL___EMPTY__ = 133,                /* __EMPTY__  */
  YYSYMBOL_YYACCEPT = 134,                 /* $accept  */
  YYSYMBOL_Goal = 135,                     /* Goal  */
  YYSYMBOL_Literal = 136,                  /* Literal  */
  YYSYMBOL_IntegerLiteral = 137,           /* IntegerLiteral  */
  YYSYMBOL_Type = 138,                     /* Type  */
  YYSYMBOL_PrimitiveType = 139,            /* PrimitiveType  */
  YYSYMBOL_NumericType = 140,              /* NumericType  */
  YYSYMBOL_IntegralType = 141,             /* IntegralType  */
  YYSYMBOL_FloatingPointType = 142,        /* FloatingPointType  */
  YYSYMBOL_ReferenceType = 143,            /* ReferenceType  */
  YYSYMBOL_ClassOrInterfaceType = 144,     /* ClassOrInterfaceType  */
  YYSYMBOL_ClassType = 145,                /* ClassType  */
  YYSYMBOL_InterfaceType = 146,            /* InterfaceType  */
  YYSYMBOL_ArrayType = 147,                /* ArrayType  */
  YYSYMBOL_Name = 148,                     /* Name  */
  YYSYMBOL_SimpleName = 149,               /* SimpleName  */
  YYSYMBOL_QualifiedName = 150,            /* QualifiedName  */
  YYSYMBOL_CompilationUnit = 151,          /* CompilationUnit  */
  YYSYMBOL_ImportDeclarations_opt = 152,   /* ImportDeclarations_opt  */
  YYSYMBOL_ImportDeclarations = 153,       /* ImportDeclarations  */
  YYSYMBOL_TypeDeclarations_opt = 154,     /* TypeDeclarations_opt  */
  YYSYMBOL_TypeDeclarations = 155,         /* TypeDeclarations  */
  YYSYMBOL_PackageDeclaration_opt = 156,   /* PackageDeclaration_opt  */
  YYSYMBOL_PackageDeclaration = 157,       /* PackageDeclaration  */
  YYSYMBOL_ImportDeclaration = 158,        /* ImportDeclaration  */
  YYSYMBOL_SingleTypeImportDeclaration = 159, /* SingleTypeImportDeclaration  */
  YYSYMBOL_TypeImportOnDemandDeclaration = 160, /* TypeImportOnDemandDeclaration  */
  YYSYMBOL_TypeDeclaration = 161,          /* TypeDeclaration  */
  YYSYMBOL_Modifiers = 162,                /* Modifiers  */
  YYSYMBOL_Modifier = 163,                 /* Modifier  */
  YYSYMBOL_ClassDeclaration = 164,         /* ClassDeclaration  */
  YYSYMBOL_Modifiers_opt = 165,            /* Modifiers_opt  */
  YYSYMBOL_ClassExtend_opt = 166,          /* ClassExtend_opt  */
  YYSYMBOL_Interfaces_opt = 167,           /* Interfaces_opt  */
  YYSYMBOL_ClassExtend = 168,              /* ClassExtend  */
  YYSYMBOL_Interfaces = 169,               /* Interfaces  */
  YYSYMBOL_InterfaceTypeList = 170,        /* InterfaceTypeList  */
  YYSYMBOL_ClassBody = 171,                /* ClassBody  */
  YYSYMBOL_ClassBodyDeclarations_opt = 172, /* ClassBodyDeclarations_opt  */
  YYSYMBOL_ClassBodyDeclarations = 173,    /* ClassBodyDeclarations  */
  YYSYMBOL_ClassBodyDeclaration = 174,     /* ClassBodyDeclaration  */
  YYSYMBOL_ClassMemberDeclaration = 175,   /* ClassMemberDeclaration  */
  YYSYMBOL_FieldDeclaration = 176,         /* FieldDeclaration  */
  YYSYMBOL_VariableDeclarators = 177,      /* VariableDeclarators  */
  YYSYMBOL_VariableDeclarator = 178,       /* VariableDeclarator  */
  YYSYMBOL_VariableDeclaratorId = 179,     /* VariableDeclaratorId  */
  YYSYMBOL_VariableInitializer = 180,      /* VariableInitializer  */
  YYSYMBOL_MethodDeclaration = 181,        /* MethodDeclaration  */
  YYSYMBOL_MethodHeader = 182,             /* MethodHeader  */
  YYSYMBOL_Throws_opt = 183,               /* Throws_opt  */
  YYSYMBOL_MethodDeclarator = 184,         /* MethodDeclarator  */
  YYSYMBOL_FormalParameterList_opt = 185,  /* FormalParameterList_opt  */
  YYSYMBOL_FormalParameterList = 186,      /* FormalParameterList  */
  YYSYMBOL_FormalParameter = 187,          /* FormalParameter  */
  YYSYMBOL_Throws = 188,                   /* Throws  */
  YYSYMBOL_ClassTypeList = 189,            /* ClassTypeList  */
  YYSYMBOL_MethodBody = 190,               /* MethodBody  */
  YYSYMBOL_StaticInitializer = 191,        /* StaticInitializer  */
  YYSYMBOL_ConstructorDeclaration = 192,   /* ConstructorDeclaration  */
  YYSYMBOL_ConstructorDeclarator = 193,    /* ConstructorDeclarator  */
  YYSYMBOL_ConstructorBody = 194,          /* ConstructorBody  */
  YYSYMBOL_ExplicitConstructorInvocation_opt = 195, /* ExplicitConstructorInvocation_opt  */
  YYSYMBOL_ExplicitConstructorInvocation = 196, /* ExplicitConstructorInvocation  */
  YYSYMBOL_ArgumentList_opt = 197,         /* ArgumentList_opt  */
  YYSYMBOL_InterfaceDeclaration = 198,     /* InterfaceDeclaration  */
  YYSYMBOL_ExtendsInterfaces_opt = 199,    /* ExtendsInterfaces_opt  */
  YYSYMBOL_ExtendsInterfaces = 200,        /* ExtendsInterfaces  */
  YYSYMBOL_InterfaceBody = 201,            /* InterfaceBody  */
  YYSYMBOL_InterfaceMemberDeclarations_opt = 202, /* InterfaceMemberDeclarations_opt  */
  YYSYMBOL_InterfaceMemberDeclarations = 203, /* InterfaceMemberDeclarations  */
  YYSYMBOL_InterfaceMemberDeclaration = 204, /* InterfaceMemberDeclaration  */
  YYSYMBOL_ConstantDeclaration = 205,      /* ConstantDeclaration  */
  YYSYMBOL_AbstractMethodDeclaration = 206, /* AbstractMethodDeclaration  */
  YYSYMBOL_ArrayInitializer = 207,         /* ArrayInitializer  */
  YYSYMBOL_VariableInitializers_opt = 208, /* VariableInitializers_opt  */
  YYSYMBOL_Comma_opt = 209,                /* Comma_opt  */
  YYSYMBOL_VariableInitializers = 210,     /* VariableInitializers  */
  YYSYMBOL_Block = 211,                    /* Block  */
  YYSYMBOL_Symbol_Table_Change = 212,      /* Symbol_Table_Change  */
  YYSYMBOL_Symbol_Table_Back = 213,        /* Symbol_Table_Back  */
  YYSYMBOL_BlockStatements_opt = 214,      /* BlockStatements_opt  */
  YYSYMBOL_BlockStatements = 215,          /* BlockStatements  */
  YYSYMBOL_BlockStatement = 216,           /* BlockStatement  */
  YYSYMBOL_LocalVariableDeclarationStatement = 217, /* LocalVariableDeclarationStatement  */
  YYSYMBOL_LocalVariableDeclaration = 218, /* LocalVariableDeclaration  */
  YYSYMBOL_Statement = 219,                /* Statement  */
  YYSYMBOL_StatementNoShortIf = 220,       /* StatementNoShortIf  */
  YYSYMBOL_StatementWithoutTrailingSubstatement = 221, /* StatementWithoutTrailingSubstatement  */
  YYSYMBOL_EmptyStatement = 222,           /* EmptyStatement  */
  YYSYMBOL_LabeledStatement = 223,         /* LabeledStatement  */
  YYSYMBOL_LabeledStatementNoShortIf = 224, /* LabeledStatementNoShortIf  */
  YYSYMBOL_ExpressionStatement = 225,      /* ExpressionStatement  */
  YYSYMBOL_StatementExpression = 226,      /* StatementExpression  */
  YYSYMBOL_IfThenStatement = 227,          /* IfThenStatement  */
  YYSYMBOL_IfThenElseStatement = 228,      /* IfThenElseStatement  */
  YYSYMBOL_IfThenElseStatementNoShortIf = 229, /* IfThenElseStatementNoShortIf  */
  YYSYMBOL_WhileStatement = 230,           /* WhileStatement  */
  YYSYMBOL_WhileStatementNoShortIf = 231,  /* WhileStatementNoShortIf  */
  YYSYMBOL_ForStatement = 232,             /* ForStatement  */
  YYSYMBOL_ForStatementNoShortIf = 233,    /* ForStatementNoShortIf  */
  YYSYMBOL_ForInit_opt = 234,              /* ForInit_opt  */
  YYSYMBOL_Expression_opt = 235,           /* Expression_opt  */
  YYSYMBOL_ForUpdate_opt = 236,            /* ForUpdate_opt  */
  YYSYMBOL_ForInit = 237,                  /* ForInit  */
  YYSYMBOL_ForUpdate = 238,                /* ForUpdate  */
  YYSYMBOL_StatementExpressionList = 239,  /* StatementExpressionList  */
  YYSYMBOL_BreakStatement = 240,           /* BreakStatement  */
  YYSYMBOL_Identifier_opt = 241,           /* Identifier_opt  */
  YYSYMBOL_ContinueStatement = 242,        /* ContinueStatement  */
  YYSYMBOL_ReturnStatement = 243,          /* ReturnStatement  */
  YYSYMBOL_ThrowStatement = 244,           /* ThrowStatement  */
  YYSYMBOL_SynchronizedStatement = 245,    /* SynchronizedStatement  */
  YYSYMBOL_TryStatement = 246,             /* TryStatement  */
  YYSYMBOL_Catches_opt = 247,              /* Catches_opt  */
  YYSYMBOL_Catches = 248,                  /* Catches  */
  YYSYMBOL_CatchClause = 249,              /* CatchClause  */
  YYSYMBOL_Finally = 250,                  /* Finally  */
  YYSYMBOL_Primary = 251,                  /* Primary  */
  YYSYMBOL_PrimaryNoNewArray = 252,        /* PrimaryNoNewArray  */
  YYSYMBOL_ClassInstanceCreationExpression = 253, /* ClassInstanceCreationExpression  */
  YYSYMBOL_ArgumentList = 254,             /* ArgumentList  */
  YYSYMBOL_ArrayCreationExpression = 255,  /* ArrayCreationExpression  */
  YYSYMBOL_Dims_opt = 256,                 /* Dims_opt  */
  YYSYMBOL_DimExprs = 257,                 /* DimExprs  */
  YYSYMBOL_DimExpr = 258,                  /* DimExpr  */
  YYSYMBOL_Dims = 259,                     /* Dims  */
  YYSYMBOL_FieldAccess = 260,              /* FieldAccess  */
  YYSYMBOL_MethodInvocation = 261,         /* MethodInvocation  */
  YYSYMBOL_ArrayAccess = 262,              /* ArrayAccess  */
  YYSYMBOL_PostfixExpression = 263,        /* PostfixExpression  */
  YYSYMBOL_PostIncrementExpression = 264,  /* PostIncrementExpression  */
  YYSYMBOL_PostDecrementExpression = 265,  /* PostDecrementExpression  */
  YYSYMBOL_UnaryExpression = 266,          /* UnaryExpression  */
  YYSYMBOL_PreIncrementExpression = 267,   /* PreIncrementExpression  */
  YYSYMBOL_PreDecrementExpression = 268,   /* PreDecrementExpression  */
  YYSYMBOL_UnaryExpressionNotPlusMinus = 269, /* UnaryExpressionNotPlusMinus  */
  YYSYMBOL_CastExpression = 270,           /* CastExpression  */
  YYSYMBOL_MultiplicativeExpression = 271, /* MultiplicativeExpression  */
  YYSYMBOL_AdditiveExpression = 272,       /* AdditiveExpression  */
  YYSYMBOL_ShiftExpression = 273,          /* ShiftExpression  */
  YYSYMBOL_RelationalExpression = 274,     /* RelationalExpression  */
  YYSYMBOL_EqualityExpression = 275,       /* EqualityExpression  */
  YYSYMBOL_AndExpression = 276,            /* AndExpression  */
  YYSYMBOL_ExclusiveOrExpression = 277,    /* ExclusiveOrExpression  */
  YYSYMBOL_InclusiveOrExpression = 278,    /* InclusiveOrExpression  */
  YYSYMBOL_ConditionalAndExpression = 279, /* ConditionalAndExpression  */
  YYSYMBOL_ConditionalOrExpression = 280,  /* ConditionalOrExpression  */
  YYSYMBOL_ConditionalExpression = 281,    /* ConditionalExpression  */
  YYSYMBOL_AssignmentExpression = 282,     /* AssignmentExpression  */
  YYSYMBOL_Assignment = 283,               /* Assignment  */
  YYSYMBOL_LeftHandSide = 284,             /* LeftHandSide  */
  YYSYMBOL_AssignmentOperator = 285,       /* AssignmentOperator  */
  YYSYMBOL_Expression = 286                /* Expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1495

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  134
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  153
/* YYNRULES -- Number of rules.  */
#define YYNRULES  319
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  524

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   388


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   157,   157,   164,   167,   171,   175,   179,   183,   189,
     193,   197,   203,   206,   211,   214,   222,   225,   230,   236,
     242,   248,   254,   262,   268,   276,   279,   284,   289,   294,
     299,   306,   313,   322,   325,   330,   336,   342,   356,   359,
     366,   371,   379,   382,   394,   404,   418,   421,   426,   431,
     434,   439,   444,   449,   452,   455,   460,   465,   473,   476,
     479,   482,   485,   488,   491,   494,   497,   500,   505,   541,
     544,   550,   553,   557,   560,   565,   570,   579,   584,   592,
     600,   603,   637,   647,   660,   663,   666,   671,   674,   680,
     760,   770,   784,   794,   812,   818,   826,   829,   834,   855,
     899,   946,   949,   956,   976,   988,   991,  1003,  1013,  1026,
    1064,  1071,  1076,  1084,  1087,  1093,  1105,  1121,  1133,  1145,
    1148,  1159,  1168,  1179,  1182,  1194,  1204,  1207,  1214,  1219,
    1227,  1231,  1234,  1241,  1246,  1254,  1258,  1264,  1269,  1274,
    1278,  1281,  1291,  1294,  1299,  1308,  1321,  1327,  1332,  1336,
    1339,  1350,  1359,  1373,  1384,  1397,  1408,  1465,  1468,  1471,
    1474,  1477,  1480,  1485,  1488,  1491,  1494,  1497,  1502,  1505,
    1508,  1511,  1514,  1517,  1520,  1523,  1526,  1531,  1536,  1550,
    1564,  1569,  1572,  1575,  1578,  1581,  1584,  1587,  1592,  1605,
    1623,  1641,  1657,  1671,  1692,  1710,  1713,  1724,  1727,  1737,
    1740,  1751,  1761,  1774,  1785,  1794,  1807,  1815,  1817,  1823,
    1832,  1846,  1853,  1861,  1867,  1875,  1878,  1885,  1890,  1898,
    1906,  1913,  1916,  1921,  1924,  1927,  1930,  1933,  1936,  1939,
    1944,  1956,  1965,  1978,  1988,  1999,  2002,  2007,  2012,  2020,
    2027,  2030,  2035,  2040,  2047,  2056,  2065,  2076,  2083,  2092,
    2095,  2098,  2101,  2106,  2119,  2132,  2135,  2138,  2149,  2159,
    2164,  2178,  2192,  2195,  2205,  2215,  2220,  2230,  2240,  2252,
    2255,  2267,  2279,  2293,  2296,  2308,  2322,  2325,  2337,  2349,
    2363,  2366,  2378,  2390,  2402,  2414,  2428,  2431,  2443,  2457,
    2460,  2474,  2477,  2491,  2494,  2508,  2511,  2525,  2528,  2542,
    2545,  2560,  2563,  2568,  2583,  2586,  2589,  2594,  2597,  2600,
    2603,  2606,  2609,  2612,  2615,  2618,  2621,  2624,  2627,  2631
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "Exports", "Opens",
  "Requires", "Uses", "Module", "Permits", "Sealed", "Var", "Non_sealed",
  "Provides", "To", "With", "Open", "Record", "Transitive", "Yield",
  "Abstract", "Continue", "For", "New", "Switch", "Assert", "Default",
  "If", "Package", "Synchronized", "Boolean", "Do", "Goto", "Private",
  "This", "Break", "Double", "Implements", "Protected", "THROW", "Byte",
  "Else", "Import", "Public", "THROWS", "Case", "Enum", "Instanceof",
  "Return", "Transient", "Catch", "Extends", "Int", "Short", "Try", "Char",
  "Final", "Interface", "Static", "Void", "Class", "FINALLY", "Long",
  "Strictfp", "Volatile", "Const", "Float", "Native", "Super", "While",
  "BooleanLiteral", "NullLiteral", "Identifier", "DecimalIntegerLiteral",
  "HexIntegerLiteral", "OctalIntegerLiteral",
  "FloatingPointIntegerLiteral", "FloatingPointLiteral",
  "BooleanIntegerLiteral", "CharacterLiteral", "TextBlock", "Operator",
  "Seperator", "StringLiteral", "Comma", "LeftCurlyBrace",
  "RightCurlyBrace", "Semicolon", "Dot", "LeftParanthesis",
  "RightParanthesis", "TripleDot", "LeftSquareBracket",
  "RightSquareBracket", "AtRate", "Scope", "EqualTo", "NotOperator",
  "Tilde", "QuestionMark", "Colon", "RightArrow", "EqualToEqualTo",
  "GreaterThanEqualTo", "LessThanEqualTo", "NotEqualTo", "AndOperator",
  "OrOperator", "PlusPlus", "MinusMinus", "Addition", "Substraction",
  "Product", "Divide", "BitwiseAnd", "BitwiseOr", "CircumFlex", "Modulo",
  "LeftShit", "RightShift", "TripleGreaterThan", "AdditionEqualTo",
  "SubstractionEqualTo", "ProductEqualTo", "DivideEqualTo",
  "BitWiseAndEqualTo", "BitWiseOrEqualTo", "CircumFlexEqualTo",
  "ModuloEqualTo", "LeftShitEqualTo", "RightShiftEqualTo",
  "TripleGreaterThanEqualTo", "GreaterThan", "LessThan", "__EMPTY__",
  "$accept", "Goal", "Literal", "IntegerLiteral", "Type", "PrimitiveType",
  "NumericType", "IntegralType", "FloatingPointType", "ReferenceType",
  "ClassOrInterfaceType", "ClassType", "InterfaceType", "ArrayType",
  "Name", "SimpleName", "QualifiedName", "CompilationUnit",
  "ImportDeclarations_opt", "ImportDeclarations", "TypeDeclarations_opt",
  "TypeDeclarations", "PackageDeclaration_opt", "PackageDeclaration",
  "ImportDeclaration", "SingleTypeImportDeclaration",
  "TypeImportOnDemandDeclaration", "TypeDeclaration", "Modifiers",
  "Modifier", "ClassDeclaration", "Modifiers_opt", "ClassExtend_opt",
  "Interfaces_opt", "ClassExtend", "Interfaces", "InterfaceTypeList",
  "ClassBody", "ClassBodyDeclarations_opt", "ClassBodyDeclarations",
  "ClassBodyDeclaration", "ClassMemberDeclaration", "FieldDeclaration",
  "VariableDeclarators", "VariableDeclarator", "VariableDeclaratorId",
  "VariableInitializer", "MethodDeclaration", "MethodHeader", "Throws_opt",
  "MethodDeclarator", "FormalParameterList_opt", "FormalParameterList",
  "FormalParameter", "Throws", "ClassTypeList", "MethodBody",
  "StaticInitializer", "ConstructorDeclaration", "ConstructorDeclarator",
  "ConstructorBody", "ExplicitConstructorInvocation_opt",
  "ExplicitConstructorInvocation", "ArgumentList_opt",
  "InterfaceDeclaration", "ExtendsInterfaces_opt", "ExtendsInterfaces",
  "InterfaceBody", "InterfaceMemberDeclarations_opt",
  "InterfaceMemberDeclarations", "InterfaceMemberDeclaration",
  "ConstantDeclaration", "AbstractMethodDeclaration", "ArrayInitializer",
  "VariableInitializers_opt", "Comma_opt", "VariableInitializers", "Block",
  "Symbol_Table_Change", "Symbol_Table_Back", "BlockStatements_opt",
  "BlockStatements", "BlockStatement", "LocalVariableDeclarationStatement",
  "LocalVariableDeclaration", "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "EmptyStatement",
  "LabeledStatement", "LabeledStatementNoShortIf", "ExpressionStatement",
  "StatementExpression", "IfThenStatement", "IfThenElseStatement",
  "IfThenElseStatementNoShortIf", "WhileStatement",
  "WhileStatementNoShortIf", "ForStatement", "ForStatementNoShortIf",
  "ForInit_opt", "Expression_opt", "ForUpdate_opt", "ForInit", "ForUpdate",
  "StatementExpressionList", "BreakStatement", "Identifier_opt",
  "ContinueStatement", "ReturnStatement", "ThrowStatement",
  "SynchronizedStatement", "TryStatement", "Catches_opt", "Catches",
  "CatchClause", "Finally", "Primary", "PrimaryNoNewArray",
  "ClassInstanceCreationExpression", "ArgumentList",
  "ArrayCreationExpression", "Dims_opt", "DimExprs", "DimExpr", "Dims",
  "FieldAccess", "MethodInvocation", "ArrayAccess", "PostfixExpression",
  "PostIncrementExpression", "PostDecrementExpression", "UnaryExpression",
  "PreIncrementExpression", "PreDecrementExpression",
  "UnaryExpressionNotPlusMinus", "CastExpression",
  "MultiplicativeExpression", "AdditiveExpression", "ShiftExpression",
  "RelationalExpression", "EqualityExpression", "AndExpression",
  "ExclusiveOrExpression", "InclusiveOrExpression",
  "ConditionalAndExpression", "ConditionalOrExpression",
  "ConditionalExpression", "AssignmentExpression", "Assignment",
  "LeftHandSide", "AssignmentOperator", "Expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-470)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-307)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,   -17,   102,  -470,    36,  -470,  -470,     3,  -470,  -470,
    -470,   -17,    91,    36,  -470,  -470,  -470,  -470,    88,    63,
    -470,  -470,  -470,  -470,  -470,  -470,  -470,  -470,  -470,  -470,
    -470,  -470,   179,  -470,   252,  -470,  -470,   107,  -470,  -470,
    -470,  -470,    -5,  -470,  -470,    94,   116,    31,    47,   143,
    -470,   -17,   122,   152,   -17,   202,  -470,  -470,  -470,   160,
     211,  -470,   -17,  -470,  -470,   -17,   166,  -470,    53,  -470,
     174,   176,   642,  -470,  -470,  -470,  -470,  -470,   181,  1322,
    -470,  -470,  -470,  -470,  -470,  -470,  -470,   196,  -470,  -470,
     198,   182,  -470,  -470,  -470,  -470,  -470,   184,   -44,  -470,
    -470,  -470,   -17,   188,    53,   191,  1334,  -470,  -470,  -470,
    -470,   -48,  -470,  -470,  -470,   -29,   190,    26,  -470,   -43,
     -29,   187,   189,   193,  -470,   199,   203,   243,  -470,  -470,
     891,  -470,  -470,  -470,   204,   -17,   201,  -470,  -470,   219,
    -470,   205,  1041,  -470,  -470,  -470,  -470,  -470,   575,   214,
     224,  -470,   575,  -470,   215,  -470,   224,  1175,  1175,   199,
     212,  -470,  -470,  -470,   218,  -470,  -470,  -470,  -470,  -470,
    -470,  -470,  1175,  1175,  1175,  -470,  -470,   219,    97,  -470,
     221,   891,  -470,  -470,   226,  -470,  -470,  -470,  -470,  -470,
     227,  -470,  -470,  -470,  -470,  -470,  -470,  -470,  -470,  -470,
    -470,   223,   250,    75,  -470,   594,   100,  1329,    35,   110,
     112,  -470,  -470,  -470,  1365,   575,  -470,   261,  -470,  -470,
    -470,  -470,  1041,   949,  1175,  1175,  1175,  1175,  1307,  -470,
    -470,  -470,  -470,    35,  -470,  -470,  -470,  -470,  -470,  -470,
    -470,   -77,   119,    78,   -33,    77,   232,   235,   239,   249,
     -74,  -470,  -470,  -470,  -470,  -470,   219,   266,   275,  -470,
      11,  -470,  -470,   276,   273,   272,   272,   277,   278,  1175,
     282,   283,   284,  -470,   327,   306,   290,   777,   291,    50,
    -470,  -470,  -470,  -470,   299,  1175,  1085,  -470,  -470,  -470,
    -470,   312,  1175,  -470,  -470,  -470,  -470,  -470,  -470,  -470,
    -470,  -470,  -470,  -470,  -470,  -470,  -470,  1175,   297,   -17,
    -470,   308,   310,   298,  1318,   305,  -470,  -470,  -470,  -470,
    1175,  1175,  1175,  1175,  1175,  1175,  1175,  1175,  1175,   575,
    1175,  1175,  1175,  1175,  1175,  1175,  1175,  1175,  1175,  1175,
    1175,  1175,   304,  -470,   575,   309,   314,   891,  -470,  -470,
    1240,  1175,   307,  -470,   307,  1175,  1175,   322,  -470,  -470,
    -470,   315,   357,   -19,  -470,   330,  1175,  -470,  -470,   331,
     339,  -470,   332,   335,   334,  -470,  -470,  -470,  -470,   342,
    1041,   336,   341,   340,  1131,    41,  1264,  -470,  -470,  -470,
     -77,   -77,   119,   119,   119,   182,  -470,    78,    78,    78,
      78,   -33,   -33,    77,   232,   235,   239,   337,   249,  -470,
    1175,  1175,   348,  -470,  -470,   349,  -470,   351,   345,  1131,
    -470,  -470,  -470,   353,   356,   199,   575,   199,  -470,  -470,
    1175,   361,  -470,  1175,  -470,  1175,  -470,  -470,  -470,  -470,
    1175,   346,  1264,  -470,  1175,   362,   365,  -470,  1175,   482,
    -470,  -470,  1014,  -470,   369,  -470,   371,   777,  -470,   379,
    -470,  -470,  -470,  -470,   383,   386,   391,  -470,  -470,  -470,
    -470,   392,  -470,   441,   443,  -470,  -470,  -470,  -470,   199,
    -470,  -470,  -470,  -470,  -470,   482,   397,   398,   399,  1014,
    -470,   777,  -470,  -470,   401,  -470,   351,  1240,  1175,  1175,
    -470,  -470,   777,   402,   403,   404,  -470,  -470,  1175,  1014,
    1014,  -470,   405,   458,  -470,   482,  1014,  -470,   411,  -470,
    1014,  -470,  -470,  -470
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      46,     0,     0,     2,    38,    47,    35,     0,    33,    34,
       1,     0,    69,    39,    40,    49,    50,    48,     0,     0,
      62,    65,    60,    59,    58,    66,    63,    61,    67,    64,
      55,    37,    69,    44,    70,    56,    53,     0,    54,    41,
      36,    51,     0,    45,    57,     0,     0,     0,   126,    71,
      52,     0,     0,   127,     0,    73,    72,    29,   128,    27,
      69,   125,     0,    28,    75,     0,     0,    74,     0,   137,
       0,     0,    69,   133,   135,   136,   129,    77,    76,    69,
      68,    15,    24,    18,    20,    19,    22,     0,    21,    23,
       0,    12,    14,    16,    17,    13,    25,    26,    27,   138,
     130,   134,     0,    61,     0,     0,    69,    82,    84,    87,
      88,     0,    85,    86,   147,   101,    94,     0,    90,    92,
     101,     0,     0,     0,    78,     0,    33,   101,    79,    83,
     149,   114,    98,   113,     0,     0,     0,   100,   102,     0,
      89,     0,     0,    99,    30,    32,    31,   148,   105,     0,
     207,   147,     0,   147,     0,   224,   207,     0,   197,     0,
       0,   147,     5,     8,    35,     9,    10,    11,     4,     6,
       7,   177,     0,     0,     0,   223,     3,     0,   304,   168,
       0,   150,   151,   153,     0,   154,   157,   169,   158,   170,
       0,   159,   160,   161,   162,   171,   172,   173,   175,   174,
     176,   249,   221,   226,   222,   227,   228,   229,     0,   184,
     185,   182,   183,   181,     0,   105,   111,   110,   104,    94,
      91,    95,   140,     0,     0,     0,     0,     0,   250,    93,
      97,   226,   228,   262,   251,   252,   269,   255,   256,   259,
     265,   273,   276,   280,   286,   289,   291,   293,   295,   297,
     299,   301,   319,   302,    96,   115,     0,     0,   106,   107,
     119,   116,   208,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,   198,   215,     0,     0,     0,     0,   250,
     227,   229,   260,   261,   156,   123,     0,   146,   152,   155,
     180,     0,     0,   253,   254,   307,   311,   312,   308,   309,
     316,   318,   317,   310,   313,   314,   315,     0,     0,     0,
     144,   142,   141,   235,   250,     0,   264,   263,   257,   258,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,   117,     0,     0,     0,   149,   120,   209,
     195,     0,   235,   237,   235,   123,     0,     0,   206,   211,
     210,     0,     0,   213,   217,   243,     0,   178,   225,     0,
     124,   231,     0,   242,     0,   303,   103,   112,   143,     0,
       0,     0,     0,   236,     0,     0,   225,   270,   271,   272,
     274,   275,   277,   278,   279,     0,   285,   284,   283,   282,
     281,   287,   288,   290,   292,   294,   296,     0,   298,   108,
     123,   123,     0,   202,   204,     0,   196,   201,     0,     0,
     233,   238,   234,     0,     0,     0,     0,     0,   214,   218,
     123,     0,   244,     0,   247,   123,   248,   139,   145,   240,
       0,     0,     0,   267,     0,     0,     0,   118,   197,     0,
     239,   230,     0,   212,     0,   220,     0,     0,   232,     0,
     266,   241,   268,   300,     0,     0,     0,   205,   147,   147,
     147,    35,   148,     0,   157,   164,   165,   166,   167,     0,
     246,   148,   245,   121,   122,   199,     0,     0,     0,     0,
     188,     0,   219,   191,     0,   200,   203,   195,     0,     0,
     179,   148,     0,     0,     0,     0,   189,   148,   197,     0,
       0,   193,     0,     0,   148,   199,     0,   192,     0,   148,
       0,   190,   148,   194
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -470,  -470,  -470,  -470,   -62,  -147,  -470,  -470,  -470,   173,
     -39,  -134,   -34,  -470,    -1,   406,  -470,  -470,  -470,  -470,
    -470,  -470,  -470,  -470,   490,  -470,  -470,   473,  -470,   472,
    -470,   -23,  -470,  -470,  -470,  -470,  -470,  -470,  -470,  -470,
     407,  -470,    46,   347,   370,   255,  -220,  -470,    56,   -87,
     418,   301,  -470,  -333,  -470,  -470,  -470,  -470,  -470,  -470,
    -470,  -470,  -470,  -351,  -470,  -470,  -470,  -470,  -470,  -470,
     442,  -470,  -470,  -470,  -470,  -470,  -470,  -108,   -96,   -25,
     170,  -470,   354,  -470,  -342,  -258,  -389,  -394,  -470,  -470,
    -470,  -470,  -341,  -470,  -470,  -470,  -470,  -470,  -470,  -470,
      25,  -421,     8,  -470,  -470,  -469,  -470,   372,  -470,  -470,
    -470,  -470,  -470,  -470,  -470,   164,  -470,  -470,  -470,  -110,
    -470,  -470,  -162,   263,  -139,   228,   427,  -101,   569,   -45,
     -36,    10,  -152,    82,   171,  -361,  -470,   -70,  -118,  -130,
     -78,   207,   200,   206,   220,   197,  -470,    96,   234,   186,
    -470,  -470,   390
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   175,   176,   177,    91,    92,    93,    94,    95,
      96,    64,    58,    97,   228,     8,     9,     3,    12,    13,
      31,    32,     4,     5,    14,    15,    16,    33,    34,    35,
      36,    37,    55,    66,    56,    67,    78,    80,   105,   106,
     107,   108,    69,   117,   118,   119,   229,   110,    70,   137,
     115,   257,   258,   259,   138,   217,   132,   112,   113,   127,
     261,   347,   348,   369,    38,    52,    53,    61,    71,    72,
      73,    74,    75,   230,   311,   379,   312,   179,   134,   255,
     180,   181,   182,   183,   184,   185,   473,   186,   187,   188,
     475,   189,   190,   191,   192,   476,   193,   477,   194,   478,
     415,   272,   494,   416,   495,   417,   195,   263,   196,   197,
     198,   199,   200,   362,   363,   364,   428,   201,   202,   231,
     370,   204,   382,   352,   353,   383,   205,   232,   207,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     214,   307,   371
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   216,   310,   133,   423,   265,    90,   125,   413,   414,
      19,   409,    57,   329,   135,    63,   496,   147,   267,   367,
     203,   282,   283,    57,   340,   443,    57,   466,    76,   206,
     361,    77,   341,   143,   321,   322,   130,    68,   131,   323,
     149,  -216,    90,    18,   345,     1,   496,   123,   141,    68,
      59,   274,   142,    59,     6,   264,   104,   268,   474,   445,
     446,    59,   136,    57,    59,   276,    40,    98,   124,   330,
     331,   203,   316,   317,   318,   319,   313,    11,   346,   456,
     206,   462,    81,   104,   459,   208,   256,   512,    82,    17,
      18,   -42,    83,   454,   209,   474,    63,    51,   332,   333,
     500,    59,    10,    98,    84,    85,    47,    86,   467,   139,
      20,    87,   140,   266,    88,   474,   474,    50,    89,    21,
     513,   514,   474,    22,     6,   109,   474,   519,    23,   178,
     442,   522,   441,    24,    59,   111,   208,    18,   285,    25,
     210,   320,   293,   294,   414,   209,    26,    98,    27,    41,
      42,    59,   109,   256,    28,   413,   414,    29,  -187,    40,
     438,  -187,   111,    45,  -187,    48,    46,   203,   -27,   387,
     388,   389,   279,   279,   414,   377,   206,    30,   334,   -43,
     178,   335,   395,  -186,    18,   285,  -186,    49,   286,  -186,
     420,   210,   422,    54,   472,   326,   327,   328,    20,   481,
     397,   398,   399,   400,  -250,  -250,    60,    21,   392,   393,
     394,    22,   211,   421,    98,   421,    23,  -251,  -251,  -252,
    -252,    24,   314,   279,   279,   279,   279,    25,   324,   325,
      20,   367,   208,   501,    26,    62,    27,   203,    65,    21,
     203,   209,    28,    22,   507,    29,   206,    18,    23,   206,
      79,   472,   481,    24,   390,   391,   401,   402,   501,    25,
      99,   100,   507,   211,   102,    30,    26,   114,    27,   116,
      63,    20,  -147,   121,    28,   122,   128,    29,  -147,   144,
      21,   145,   256,   130,    22,   146,   135,   210,   460,    23,
     219,   148,   215,   218,    24,   262,  -131,   221,   260,   275,
      25,   212,   208,   269,   277,   208,   287,    26,    59,    27,
     291,   209,   289,   290,   209,    28,   213,   453,    29,   455,
     279,   279,   279,   279,   279,   279,   279,   279,    98,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   203,
     279,   292,   203,    98,   309,   336,   178,   203,   206,   178,
     337,   206,   212,   338,   339,   343,   206,   210,   344,   211,
     210,   350,   349,   351,   256,   355,   356,   213,   358,   359,
     360,   492,   486,   487,   488,   203,   361,   365,   366,   203,
     368,   203,   139,   373,   206,   279,   376,   203,   206,   381,
     206,   378,   203,   380,   386,   141,   206,   410,   419,   203,
     203,   206,   411,   426,   208,   203,   203,   208,   206,   206,
     203,   425,   208,   209,   206,   206,   209,   427,   430,   206,
     432,   209,   433,   435,   434,    98,   436,   437,   439,   211,
     440,   441,   211,   447,   449,   448,   444,   450,   461,   279,
     208,   279,   451,   279,   208,   452,   208,   490,   212,   209,
     457,   464,   208,   209,   465,   209,   493,   208,   479,   210,
     480,   209,   210,   213,   208,   208,   209,   210,   482,   483,
     208,   208,   484,   209,   209,   208,   506,   485,   489,   209,
     209,   491,   511,  -163,   209,   497,   498,   499,   508,   517,
     502,   515,   509,   510,   521,   210,   178,   523,   516,   210,
     520,   210,   396,    39,   152,    43,    44,   210,   120,   220,
     126,   342,   210,   129,   101,   155,   308,   412,   212,   210,
     210,   212,   503,   518,   284,   210,   210,   429,   270,   354,
     210,   211,   254,   213,   211,   288,   213,   404,   408,   211,
     463,   375,   385,   403,   405,     0,     0,   271,   273,   160,
       0,   162,   163,     6,   165,   166,   167,     0,   168,   406,
     169,     0,   278,     0,   170,     0,     0,   211,     0,     0,
     172,   211,     0,   211,     0,     0,     0,     0,     0,   211,
       0,     0,     0,     0,   211,     0,     0,     0,     0,   173,
     174,   211,   211,     0,     0,     0,     0,   211,   211,     0,
     280,   280,   211,     0,    81,     0,     0,     0,     0,     0,
      82,     0,   254,   315,    83,     0,     0,     0,     0,     0,
     212,     0,     0,   212,     0,     0,    84,    85,   212,    86,
       0,     0,     0,     0,     0,   213,    88,     0,   213,     0,
      89,     0,     0,   213,     0,     0,     6,     0,     0,     0,
       0,   280,   280,   280,   280,     0,   212,     0,     0,   357,
     212,    20,   212,     0,     0,     0,     0,     0,   212,     0,
      21,   213,     0,   212,    22,   213,   372,   213,     0,    23,
     212,   212,   374,   213,    24,     0,   212,   212,   213,  -305,
      25,   212,     0,     0,     0,   213,   213,    26,     0,    27,
       0,   213,   213,     0,     0,    28,   213,     0,    29,     0,
     372,     0,     0,     0,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,     0,     0,  -132,     0,     0,
     407,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   418,   281,   281,     0,     0,   424,     0,   280,   280,
     280,   280,   280,   280,   280,   280,   431,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,     0,   280,     0,
     254,     0,     0,     0,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   281,   281,   281,   281,   150,   151,   152,
       0,     0,     0,   153,     0,   154,     0,     0,     0,   418,
     155,   156,     0,   280,     0,   157,     0,     0,     0,     0,
       0,     0,     0,   458,   158,     0,     0,     0,     0,     0,
     159,     0,     0,     0,     0,     0,     0,     0,   273,     0,
       0,     0,     0,     0,   160,   161,   162,   163,   164,   165,
     166,   167,     0,   168,     0,   169,     0,     0,     0,   170,
       0,   130,     0,   171,     0,   172,     0,   280,     0,   280,
       0,   280,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   173,   174,     0,     0,   504,   505,
     281,   281,   281,   281,   281,   281,   281,   281,   273,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,     0,
     281,   150,   151,   152,     0,     0,     0,   153,     0,   154,
      81,     0,     0,     0,   155,   156,    82,     0,     0,   157,
      83,     0,     0,     0,     0,     0,     0,     0,   158,     0,
       0,     0,    84,    85,   159,    86,     0,     0,     0,     0,
       0,     0,    88,     0,     0,   281,    89,     0,   160,   161,
     162,   163,   164,   165,   166,   167,     0,   168,     0,   169,
       0,   152,     0,   170,     0,   130,     0,   171,    81,   172,
       0,     0,   155,     0,    82,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,   174,
      84,    85,     0,    86,     0,     0,     0,     0,     0,   281,
      88,   281,     0,   281,    89,     0,   160,     0,   162,   163,
       6,   165,   166,   167,     0,   168,     0,   169,     0,     0,
       0,   170,     0,     0,   150,   468,   152,   223,     0,     0,
     469,     0,   154,     0,     0,   224,   225,   155,   156,     0,
       0,     0,   157,     0,     0,     0,   173,   174,   226,   227,
       0,   158,     0,   152,     0,     0,     0,   159,     0,     0,
       0,     0,     0,     0,   155,     0,     0,     0,     0,     0,
       0,   160,   470,   162,   163,   471,   165,   166,   167,     0,
     168,     0,   169,     0,     0,     0,   170,     0,   130,     0,
     171,     0,   172,     0,     0,     0,     0,   152,   160,     0,
     162,   163,     6,   165,   166,   167,     0,   168,   155,   169,
       0,   173,   174,   170,     0,   222,     0,     0,     0,   223,
       0,     0,     0,     0,     0,     0,     0,   224,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,   174,
     226,   227,   160,   152,   162,   163,     6,   165,   166,   167,
       0,   168,     0,   169,   155,     0,     0,   170,     0,     0,
       0,     0,     0,   223,     0,     0,     0,   146,     0,     0,
       0,   224,   225,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   173,   174,   226,   227,     0,   152,   160,     0,
     162,   163,     6,   165,   166,   167,     0,   168,   155,   169,
       0,     0,     0,   170,     0,     0,     0,     0,     0,   223,
       0,     0,     0,   439,     0,     0,     0,   224,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,   174,
     226,   227,   160,     0,   162,   163,     6,   165,   166,   167,
       0,   168,     0,   169,     0,     0,     0,   170,     0,     0,
       0,     0,   152,   223,     0,     0,     0,     0,     0,    81,
       0,   224,   225,   155,     0,    82,     0,     0,     0,    83,
       0,     0,   173,   174,   226,   227,   152,     0,     0,     0,
       0,    84,    85,     0,    86,     0,     0,   155,     0,     0,
       0,    88,     0,     0,     0,    89,     0,   160,     0,   162,
     163,     6,   165,   166,   167,     0,   168,     0,   169,     0,
       0,     0,   170,     0,     0,     0,     0,     0,   172,     0,
       0,   160,     0,   162,   163,     6,   165,   166,   167,     0,
     168,    20,   169,     0,     0,     0,   170,   173,   174,     0,
      21,     0,   223,    20,    22,     0,     0,     0,     0,    23,
     224,   225,    21,     0,    24,     0,    22,     0,     0,     0,
      25,    23,     0,     0,     0,     0,    24,    26,     0,   103,
       0,     0,    25,     0,     0,    28,     0,     0,    29,    26,
       0,   103,     0,     0,    18,   285,     0,    28,   320,     0,
      29,     0,  -304,     0,     0,    18,   285,   -80,     0,   384,
       0,     0,     0,  -304,     0,     0,     0,     0,     0,   -81,
       0,     0,     0,     0,  -306,     0,     0,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -306,
    -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,
     295,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306
};

static const yytype_int16 yycheck[] =
{
       1,   135,   222,   111,   355,   152,    68,   103,   350,   350,
      11,   344,    51,    46,    43,    54,   485,   125,   152,   277,
     130,   173,   174,    62,    98,   386,    65,   448,    62,   130,
      49,    65,   106,   120,   111,   112,    84,    60,    86,   116,
     127,    60,   104,    87,    33,    27,   515,    91,    91,    72,
      51,   159,    95,    54,    71,   151,    79,   153,   452,   410,
     411,    62,    91,   102,    65,   161,    71,    68,   102,   102,
     103,   181,   224,   225,   226,   227,   223,    41,    67,   430,
     181,   442,    29,   106,   435,   130,   148,   508,    35,    86,
      87,     0,    39,   426,   130,   489,   135,    50,   131,   132,
     489,   102,     0,   104,    51,    52,   111,    54,   449,    83,
      19,    58,    86,   152,    61,   509,   510,    86,    65,    28,
     509,   510,   516,    32,    71,    79,   520,   516,    37,   130,
      89,   520,    91,    42,   135,    79,   181,    87,    88,    48,
     130,    91,   107,   108,   485,   181,    55,   148,    57,    86,
      87,   152,   106,   215,    63,   497,   497,    66,    83,    71,
     380,    86,   106,    56,    89,    71,    59,   277,    71,   321,
     322,   323,   173,   174,   515,   309,   277,    86,   101,     0,
     181,   104,   329,    83,    87,    88,    86,    71,    91,    89,
     352,   181,   354,    50,   452,   117,   118,   119,    19,   457,
     330,   331,   332,   333,   107,   108,    84,    28,   326,   327,
     328,    32,   130,   352,   215,   354,    37,   107,   108,   107,
     108,    42,   223,   224,   225,   226,   227,    48,   109,   110,
      19,   489,   277,   491,    55,    83,    57,   347,    36,    28,
     350,   277,    63,    32,   502,    66,   347,    87,    37,   350,
      84,   509,   510,    42,   324,   325,   334,   335,   516,    48,
      86,    85,   520,   181,    83,    86,    55,    71,    57,    71,
     309,    19,    84,    91,    63,    91,    85,    66,    88,    92,
      28,    92,   344,    84,    32,    92,    43,   277,   440,    37,
      71,    88,    88,    92,    42,    71,    85,    92,    84,    87,
      48,   130,   347,    88,    86,   350,    85,    55,   309,    57,
      87,   347,    86,    86,   350,    63,   130,   425,    66,   427,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   449,
     341,    91,   452,   344,    83,   113,   347,   457,   449,   350,
     115,   452,   181,   114,   105,    89,   457,   347,    83,   277,
     350,    88,    86,    91,   426,    88,    88,   181,    86,    86,
      86,   479,   468,   469,   470,   485,    49,    71,    88,   489,
      89,   491,    83,    71,   485,   386,    89,   497,   489,    91,
     491,    83,   502,    83,    89,    91,   497,    88,    91,   509,
     510,   502,    88,    88,   449,   515,   516,   452,   509,   510,
     520,    89,   457,   449,   515,   516,   452,    60,    88,   520,
      89,   457,    83,    88,    92,   426,    92,    85,    92,   347,
      89,    91,   350,    85,    83,    86,    99,    92,    92,   440,
     485,   442,    89,   444,   489,    89,   491,   472,   277,   485,
      89,    89,   497,   489,    89,   491,   481,   502,    89,   449,
      89,   497,   452,   277,   509,   510,   502,   457,    89,    86,
     515,   516,    86,   509,   510,   520,   501,    86,    86,   515,
     516,    40,   507,    40,   520,    88,    88,    88,    86,   514,
      89,    86,    89,    89,   519,   485,   497,   522,    40,   489,
      89,   491,   329,    13,    22,    32,    34,   497,    90,   139,
     104,   256,   502,   106,    72,    33,   215,   347,   347,   509,
     510,   350,   497,   515,   177,   515,   516,   363,   156,   266,
     520,   449,   142,   347,   452,   181,   350,   337,   341,   457,
     444,   307,   314,   336,   338,    -1,    -1,   157,   158,    67,
      -1,    69,    70,    71,    72,    73,    74,    -1,    76,   339,
      78,    -1,   172,    -1,    82,    -1,    -1,   485,    -1,    -1,
      88,   489,    -1,   491,    -1,    -1,    -1,    -1,    -1,   497,
      -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,   107,
     108,   509,   510,    -1,    -1,    -1,    -1,   515,   516,    -1,
     173,   174,   520,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      35,    -1,   222,   223,    39,    -1,    -1,    -1,    -1,    -1,
     449,    -1,    -1,   452,    -1,    -1,    51,    52,   457,    54,
      -1,    -1,    -1,    -1,    -1,   449,    61,    -1,   452,    -1,
      65,    -1,    -1,   457,    -1,    -1,    71,    -1,    -1,    -1,
      -1,   224,   225,   226,   227,    -1,   485,    -1,    -1,   269,
     489,    19,   491,    -1,    -1,    -1,    -1,    -1,   497,    -1,
      28,   485,    -1,   502,    32,   489,   286,   491,    -1,    37,
     509,   510,   292,   497,    42,    -1,   515,   516,   502,    95,
      48,   520,    -1,    -1,    -1,   509,   510,    55,    -1,    57,
      -1,   515,   516,    -1,    -1,    63,   520,    -1,    66,    -1,
     320,    -1,    -1,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,    -1,    -1,    85,    -1,    -1,
     340,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   351,   173,   174,    -1,    -1,   356,    -1,   321,   322,
     323,   324,   325,   326,   327,   328,   366,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,    -1,   341,    -1,
     380,    -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   224,   225,   226,   227,    20,    21,    22,
      -1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,   419,
      33,    34,    -1,   386,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    47,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    -1,    78,    -1,    -1,    -1,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,   440,    -1,   442,
      -1,   444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,   108,    -1,    -1,   498,   499,
     321,   322,   323,   324,   325,   326,   327,   328,   508,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,    -1,
     341,    20,    21,    22,    -1,    -1,    -1,    26,    -1,    28,
      29,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,   386,    65,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    -1,    78,
      -1,    22,    -1,    82,    -1,    84,    -1,    86,    29,    88,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,   440,
      61,   442,    -1,   444,    65,    -1,    67,    -1,    69,    70,
      71,    72,    73,    74,    -1,    76,    -1,    78,    -1,    -1,
      -1,    82,    -1,    -1,    20,    21,    22,    88,    -1,    -1,
      26,    -1,    28,    -1,    -1,    96,    97,    33,    34,    -1,
      -1,    -1,    38,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,    47,    -1,    22,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    -1,    78,    -1,    -1,    -1,    82,    -1,    84,    -1,
      86,    -1,    88,    -1,    -1,    -1,    -1,    22,    67,    -1,
      69,    70,    71,    72,    73,    74,    -1,    76,    33,    78,
      -1,   107,   108,    82,    -1,    84,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,
     109,   110,    67,    22,    69,    70,    71,    72,    73,    74,
      -1,    76,    -1,    78,    33,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,   108,   109,   110,    -1,    22,    67,    -1,
      69,    70,    71,    72,    73,    74,    -1,    76,    33,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,
     109,   110,    67,    -1,    69,    70,    71,    72,    73,    74,
      -1,    76,    -1,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    22,    88,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    96,    97,    33,    -1,    35,    -1,    -1,    -1,    39,
      -1,    -1,   107,   108,   109,   110,    22,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    -1,    -1,    33,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    65,    -1,    67,    -1,    69,
      70,    71,    72,    73,    74,    -1,    76,    -1,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    -1,
      76,    19,    78,    -1,    -1,    -1,    82,   107,   108,    -1,
      28,    -1,    88,    19,    32,    -1,    -1,    -1,    -1,    37,
      96,    97,    28,    -1,    42,    -1,    32,    -1,    -1,    -1,
      48,    37,    -1,    -1,    -1,    -1,    42,    55,    -1,    57,
      -1,    -1,    48,    -1,    -1,    63,    -1,    -1,    66,    55,
      -1,    57,    -1,    -1,    87,    88,    -1,    63,    91,    -1,
      66,    -1,    95,    -1,    -1,    87,    88,    85,    -1,    91,
      -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    95,    -1,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    27,   135,   151,   156,   157,    71,   148,   149,   150,
       0,    41,   152,   153,   158,   159,   160,    86,    87,   148,
      19,    28,    32,    37,    42,    48,    55,    57,    63,    66,
      86,   154,   155,   161,   162,   163,   164,   165,   198,   158,
      71,    86,    87,   161,   163,    56,    59,   111,    71,    71,
      86,    50,   199,   200,    50,   166,   168,   144,   146,   148,
      84,   201,    83,   144,   145,    36,   167,   169,   165,   176,
     182,   202,   203,   204,   205,   206,   146,   146,   170,    84,
     171,    29,    35,    39,    51,    52,    54,    58,    61,    65,
     138,   139,   140,   141,   142,   143,   144,   147,   148,    86,
      85,   204,    83,    57,   165,   172,   173,   174,   175,   176,
     181,   182,   191,   192,    71,   184,    71,   177,   178,   179,
     184,    91,    91,    91,   146,   212,   149,   193,    85,   174,
      84,    86,   190,   211,   212,    43,    91,   183,   188,    83,
      86,    91,    95,   183,    92,    92,    92,   211,    88,   183,
      20,    21,    22,    26,    28,    33,    34,    38,    47,    53,
      67,    68,    69,    70,    71,    72,    73,    74,    76,    78,
      82,    86,    88,   107,   108,   136,   137,   138,   148,   211,
     214,   215,   216,   217,   218,   219,   221,   222,   223,   225,
     226,   227,   228,   230,   232,   240,   242,   243,   244,   245,
     246,   251,   252,   253,   255,   260,   261,   262,   263,   264,
     265,   267,   268,   283,   284,    88,   145,   189,    92,    71,
     178,    92,    84,    88,    96,    97,   109,   110,   148,   180,
     207,   253,   261,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   286,   213,   138,   185,   186,   187,
      84,   194,    71,   241,   212,   139,   144,   145,   212,    88,
     241,   286,   235,   286,   211,    87,   212,    86,   286,   148,
     260,   262,   266,   266,   177,    88,    91,    85,   216,    86,
      86,    87,    91,   107,   108,    95,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   285,   185,    83,
     180,   208,   210,   139,   148,   286,   266,   266,   266,   266,
      91,   111,   112,   116,   109,   110,   117,   118,   119,    46,
     102,   103,   131,   132,   101,   104,   113,   115,   114,   105,
      98,   106,   179,    89,    83,    33,    67,   195,   196,    86,
      88,    91,   257,   258,   257,    88,    88,   286,    86,    86,
      86,    49,   247,   248,   249,    71,    88,   219,    89,   197,
     254,   286,   286,    71,   286,   282,    89,   145,    83,   209,
      83,    91,   256,   259,    91,   259,    89,   266,   266,   266,
     271,   271,   272,   272,   272,   139,   143,   273,   273,   273,
     273,   274,   274,   275,   276,   277,   278,   286,   279,   187,
      88,    88,   214,   218,   226,   234,   237,   239,   286,    91,
     256,   258,   256,   197,   286,    89,    88,    60,   250,   249,
      88,   286,    89,    83,    92,    88,    92,    85,   180,    92,
      89,    91,    89,   269,    99,   197,   197,    85,    86,    83,
      92,    89,    89,   211,   187,   211,   197,    89,   286,   197,
     266,    92,   269,   281,    89,    89,   235,   226,    21,    26,
      68,    71,   219,   220,   221,   224,   229,   231,   233,    89,
      89,   219,    89,    86,    86,    86,   212,   212,   212,    86,
     213,    40,   211,   213,   236,   238,   239,    88,    88,    88,
     220,   219,    89,   234,   286,   286,   213,   219,    86,    89,
      89,   213,   235,   220,   220,    86,    40,   213,   236,   220,
      89,   213,   220,   213
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   134,   135,   136,   136,   136,   136,   136,   136,   137,
     137,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     141,   141,   141,   142,   142,   143,   143,   144,   145,   146,
     147,   147,   147,   148,   148,   149,   150,   151,   152,   152,
     153,   153,   154,   154,   155,   155,   156,   156,   157,   158,
     158,   159,   160,   161,   161,   161,   162,   162,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   164,   165,
     165,   166,   166,   167,   167,   168,   169,   170,   170,   171,
     172,   172,   173,   173,   174,   174,   174,   175,   175,   176,
     177,   177,   178,   178,   179,   179,   180,   180,   181,   182,
     182,   183,   183,   184,   184,   185,   185,   186,   186,   187,
     188,   189,   189,   190,   190,   191,   192,   193,   194,   195,
     195,   196,   196,   197,   197,   198,   199,   199,   200,   200,
     201,   202,   202,   203,   203,   204,   204,   205,   206,   207,
     208,   208,   209,   209,   210,   210,   211,   212,   213,   214,
     214,   215,   215,   216,   216,   217,   218,   219,   219,   219,
     219,   219,   219,   220,   220,   220,   220,   220,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   222,   223,   224,
     225,   226,   226,   226,   226,   226,   226,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   234,   235,   235,   236,
     236,   237,   237,   238,   239,   239,   240,   241,   241,   242,
     243,   244,   245,   246,   246,   247,   247,   248,   248,   249,
     250,   251,   251,   252,   252,   252,   252,   252,   252,   252,
     253,   254,   254,   255,   255,   256,   256,   257,   257,   258,
     259,   259,   260,   260,   261,   261,   261,   262,   262,   263,
     263,   263,   263,   264,   265,   266,   266,   266,   266,   266,
     267,   268,   269,   269,   269,   269,   270,   270,   270,   271,
     271,   271,   271,   272,   272,   272,   273,   273,   273,   273,
     274,   274,   274,   274,   274,   274,   275,   275,   275,   276,
     276,   277,   277,   278,   278,   279,   279,   280,   280,   281,
     281,   282,   282,   283,   284,   284,   284,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   286
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     1,     1,     3,     3,     0,     1,
       1,     2,     0,     1,     1,     2,     0,     1,     3,     1,
       1,     3,     5,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     0,
       1,     0,     1,     0,     1,     2,     2,     1,     3,     3,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     4,
       1,     3,     1,     3,     1,     3,     1,     1,     2,     4,
       4,     0,     1,     5,     3,     0,     1,     1,     3,     2,
       2,     1,     3,     1,     1,     4,     4,     4,     4,     0,
       1,     5,     5,     0,     1,     5,     0,     1,     2,     3,
       3,     0,     1,     1,     2,     1,     1,     1,     2,     4,
       0,     1,     0,     1,     1,     3,     3,     0,     0,     0,
       1,     1,     2,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     7,     9,
       9,     7,     7,    11,    11,     0,     1,     0,     1,     0,
       1,     1,     1,     1,     1,     3,     3,     0,     1,     3,
       3,     3,     5,     3,     4,     0,     1,     1,     2,     5,
       2,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       5,     1,     3,     4,     4,     0,     1,     1,     2,     3,
       2,     3,     3,     3,     4,     6,     6,     4,     4,     1,
       1,     1,     1,     2,     2,     1,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     5,     4,     5,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Goal: CompilationUnit  */
#line 157 "src/parser.y"
                      {
    printf("Parsing stage was successful !\n");
    (yyval.exp) = (yyvsp[0].exp);
}
#line 2068 "bin/parser.tab.cc"
    break;

  case 3: /* Literal: IntegerLiteral  */
#line 164 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2076 "bin/parser.tab.cc"
    break;

  case 4: /* Literal: FloatingPointLiteral  */
#line 167 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        buildVal((yyval.exp));
    }
#line 2085 "bin/parser.tab.cc"
    break;

  case 5: /* Literal: BooleanLiteral  */
#line 171 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        buildVal((yyval.exp));
    }
#line 2094 "bin/parser.tab.cc"
    break;

  case 6: /* Literal: CharacterLiteral  */
#line 175 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        buildVal((yyval.exp));
    }
#line 2103 "bin/parser.tab.cc"
    break;

  case 7: /* Literal: StringLiteral  */
#line 179 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        buildVal((yyval.exp));
    }
#line 2112 "bin/parser.tab.cc"
    break;

  case 8: /* Literal: NullLiteral  */
#line 183 "src/parser.y"
                 {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        buildVal((yyval.exp));
    }
#line 2121 "bin/parser.tab.cc"
    break;

  case 9: /* IntegerLiteral: DecimalIntegerLiteral  */
#line 189 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        buildVal((yyval.exp));
    }
#line 2130 "bin/parser.tab.cc"
    break;

  case 10: /* IntegerLiteral: HexIntegerLiteral  */
#line 193 "src/parser.y"
                        {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        buildVal((yyval.exp));
    }
#line 2139 "bin/parser.tab.cc"
    break;

  case 11: /* IntegerLiteral: OctalIntegerLiteral  */
#line 197 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        buildVal((yyval.exp));
    }
#line 2148 "bin/parser.tab.cc"
    break;

  case 12: /* Type: PrimitiveType  */
#line 203 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2156 "bin/parser.tab.cc"
    break;

  case 13: /* Type: ReferenceType  */
#line 206 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2164 "bin/parser.tab.cc"
    break;

  case 14: /* PrimitiveType: NumericType  */
#line 211 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2172 "bin/parser.tab.cc"
    break;

  case 15: /* PrimitiveType: Boolean  */
#line 214 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "boolean";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 1;
    }
#line 2183 "bin/parser.tab.cc"
    break;

  case 16: /* NumericType: IntegralType  */
#line 222 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2191 "bin/parser.tab.cc"
    break;

  case 17: /* NumericType: FloatingPointType  */
#line 225 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2199 "bin/parser.tab.cc"
    break;

  case 18: /* IntegralType: Byte  */
#line 230 "src/parser.y"
         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "byte";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 1;
    }
#line 2210 "bin/parser.tab.cc"
    break;

  case 19: /* IntegralType: Short  */
#line 236 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "short";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 2;
    }
#line 2221 "bin/parser.tab.cc"
    break;

  case 20: /* IntegralType: Int  */
#line 242 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)-> symbol.size = 4;
    }
#line 2232 "bin/parser.tab.cc"
    break;

  case 21: /* IntegralType: Long  */
#line 248 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "long";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2243 "bin/parser.tab.cc"
    break;

  case 22: /* IntegralType: Char  */
#line 254 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "char";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 2;
    }
#line 2254 "bin/parser.tab.cc"
    break;

  case 23: /* FloatingPointType: Float  */
#line 262 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.type.name = "float";
        (yyval.exp)->symbol.size = 4;
    }
#line 2265 "bin/parser.tab.cc"
    break;

  case 24: /* FloatingPointType: Double  */
#line 268 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "double";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2276 "bin/parser.tab.cc"
    break;

  case 25: /* ReferenceType: ClassOrInterfaceType  */
#line 276 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2284 "bin/parser.tab.cc"
    break;

  case 26: /* ReferenceType: ArrayType  */
#line 279 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2292 "bin/parser.tab.cc"
    break;

  case 27: /* ClassOrInterfaceType: Name  */
#line 284 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2300 "bin/parser.tab.cc"
    break;

  case 28: /* ClassType: ClassOrInterfaceType  */
#line 289 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2308 "bin/parser.tab.cc"
    break;

  case 29: /* InterfaceType: ClassOrInterfaceType  */
#line 294 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2316 "bin/parser.tab.cc"
    break;

  case 30: /* ArrayType: PrimitiveType LeftSquareBracket RightSquareBracket  */
#line 299 "src/parser.y"
                                                       {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        //cout << $1->data <<endl;
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data)+"[]";
        (yyval.exp)->symbol.type.name = temp;
    }
#line 2328 "bin/parser.tab.cc"
    break;

  case 31: /* ArrayType: Name LeftSquareBracket RightSquareBracket  */
#line 306 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.type.name = temp;

    }
#line 2340 "bin/parser.tab.cc"
    break;

  case 32: /* ArrayType: ArrayType LeftSquareBracket RightSquareBracket  */
#line 313 "src/parser.y"
                                                     {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.type.name = temp;

    }
#line 2352 "bin/parser.tab.cc"
    break;

  case 33: /* Name: SimpleName  */
#line 322 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2360 "bin/parser.tab.cc"
    break;

  case 34: /* Name: QualifiedName  */
#line 325 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2368 "bin/parser.tab.cc"
    break;

  case 35: /* SimpleName: Identifier  */
#line 330 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        buildVal((yyval.exp));
    }
#line 2377 "bin/parser.tab.cc"
    break;

  case 36: /* QualifiedName: Name Dot Identifier  */
#line 336 "src/parser.y"
                        {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,concatenate_string((yyvsp[-1].data),(yyvsp[0].data))));
        buildVal((yyval.exp));
    }
#line 2386 "bin/parser.tab.cc"
    break;

  case 37: /* CompilationUnit: PackageDeclaration_opt ImportDeclarations_opt TypeDeclarations_opt  */
#line 342 "src/parser.y"
                                                                       {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CompilationUnit", memArr, 3, 1);
        root = (yyval.exp);
        struct node*E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 2403 "bin/parser.tab.cc"
    break;

  case 38: /* ImportDeclarations_opt: %empty  */
#line 356 "src/parser.y"
    { 
        (yyval.exp) = NULL; 
    }
#line 2411 "bin/parser.tab.cc"
    break;

  case 39: /* ImportDeclarations_opt: ImportDeclarations  */
#line 359 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Imports", memArr, 1, 1);
    }
#line 2421 "bin/parser.tab.cc"
    break;

  case 40: /* ImportDeclarations: ImportDeclaration  */
#line 366 "src/parser.y"
                      {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2431 "bin/parser.tab.cc"
    break;

  case 41: /* ImportDeclarations: ImportDeclarations ImportDeclaration  */
#line 371 "src/parser.y"
                                           {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateImports", memArr, 2, 0);
    }
#line 2442 "bin/parser.tab.cc"
    break;

  case 42: /* TypeDeclarations_opt: %empty  */
#line 379 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2450 "bin/parser.tab.cc"
    break;

  case 43: /* TypeDeclarations_opt: TypeDeclarations  */
#line 382 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Declarations", memArr, 1, 0);
        
        struct node*E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 2465 "bin/parser.tab.cc"
    break;

  case 44: /* TypeDeclarations: TypeDeclaration  */
#line 394 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        
        struct node*E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 2480 "bin/parser.tab.cc"
    break;

  case 45: /* TypeDeclarations: TypeDeclarations TypeDeclaration  */
#line 404 "src/parser.y"
                                       {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
        
        struct node*E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);
    }
#line 2497 "bin/parser.tab.cc"
    break;

  case 46: /* PackageDeclaration_opt: %empty  */
#line 418 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2505 "bin/parser.tab.cc"
    break;

  case 47: /* PackageDeclaration_opt: PackageDeclaration  */
#line 421 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2513 "bin/parser.tab.cc"
    break;

  case 48: /* PackageDeclaration: Package Name Semicolon  */
#line 426 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),concatenate_string(" ",(yyvsp[-1].exp)->data)));
    }
#line 2521 "bin/parser.tab.cc"
    break;

  case 49: /* ImportDeclaration: SingleTypeImportDeclaration  */
#line 431 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2529 "bin/parser.tab.cc"
    break;

  case 50: /* ImportDeclaration: TypeImportOnDemandDeclaration  */
#line 434 "src/parser.y"
                                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2537 "bin/parser.tab.cc"
    break;

  case 51: /* SingleTypeImportDeclaration: Import Name Semicolon  */
#line 439 "src/parser.y"
                          {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data), concatenate_string(" ",(yyvsp[-1].exp)->data)));
    }
#line 2545 "bin/parser.tab.cc"
    break;

  case 52: /* TypeImportOnDemandDeclaration: Import Name Dot Product Semicolon  */
#line 444 "src/parser.y"
                                      {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-4].data), concatenate_string(" ",concatenate_string((yyvsp[-3].exp)->data,".*"))));
    }
#line 2553 "bin/parser.tab.cc"
    break;

  case 53: /* TypeDeclaration: ClassDeclaration  */
#line 449 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2561 "bin/parser.tab.cc"
    break;

  case 54: /* TypeDeclaration: InterfaceDeclaration  */
#line 452 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2569 "bin/parser.tab.cc"
    break;

  case 55: /* TypeDeclaration: Semicolon  */
#line 455 "src/parser.y"
                {
        (yyval.exp) = NULL;
    }
#line 2577 "bin/parser.tab.cc"
    break;

  case 56: /* Modifiers: Modifier  */
#line 460 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2587 "bin/parser.tab.cc"
    break;

  case 57: /* Modifiers: Modifiers Modifier  */
#line 465 "src/parser.y"
                         {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifier", memArr, 2, 0);
    }
#line 2598 "bin/parser.tab.cc"
    break;

  case 58: /* Modifier: Public  */
#line 473 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2606 "bin/parser.tab.cc"
    break;

  case 59: /* Modifier: Protected  */
#line 476 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2614 "bin/parser.tab.cc"
    break;

  case 60: /* Modifier: Private  */
#line 479 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2622 "bin/parser.tab.cc"
    break;

  case 61: /* Modifier: Static  */
#line 482 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2630 "bin/parser.tab.cc"
    break;

  case 62: /* Modifier: Abstract  */
#line 485 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2638 "bin/parser.tab.cc"
    break;

  case 63: /* Modifier: Final  */
#line 488 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2646 "bin/parser.tab.cc"
    break;

  case 64: /* Modifier: Native  */
#line 491 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2654 "bin/parser.tab.cc"
    break;

  case 65: /* Modifier: Synchronized  */
#line 494 "src/parser.y"
                   {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2662 "bin/parser.tab.cc"
    break;

  case 66: /* Modifier: Transient  */
#line 497 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2670 "bin/parser.tab.cc"
    break;

  case 67: /* Modifier: Volatile  */
#line 500 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2678 "bin/parser.tab.cc"
    break;

  case 68: /* ClassDeclaration: Modifiers_opt Class Identifier ClassExtend_opt Interfaces_opt ClassBody  */
#line 505 "src/parser.y"
                                                                            {
        struct node * memArr[6];
        memArr[0] = (yyvsp[-5].exp);
        memArr[1] = makeleaf((yyvsp[-4].data));
        memArr[2] = makeleaf((yyvsp[-3].data));
        memArr[3] = (yyvsp[-2].exp);
        memArr[4] = (yyvsp[-1].exp);
        memArr[5] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ClassDeclaration", memArr, 6, 1);
        
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->t = 1;
        if((yyvsp[-5].exp)!=NULL)
            for(int i = 0; i<(yyvsp[-5].exp)->arr.size(); i++){
                if((yyvsp[-5].exp)->arr[i]!=NULL)
                    (yyval.exp)->symbol.type.modifier.push_back(string((yyvsp[-5].exp)->arr[i]->data));
        }
        (yyval.exp)->symbol.name = (yyvsp[-3].data);
        if((yyvsp[-2].exp)!=NULL)
            (yyval.exp)->symbol.type.extendClass = string((yyvsp[-2].exp)->data);
        
        if((yyvsp[0].exp) != NULL){
            (yyval.exp)->symbol.size = (yyvsp[0].exp)->symbol.size;
            (yyval.exp)->symbol.structuretable = (yyvsp[0].exp)->symbol.structuretable;
        }

        (yyval.exp)->symbol.offset = 0;
        (yyval.exp)->symbol.type.name = (yyvsp[-3].data);
        (yyval.exp)->symbol.type.t = 1;        
        class_num +=1;
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 2718 "bin/parser.tab.cc"
    break;

  case 69: /* Modifiers_opt: %empty  */
#line 541 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 2726 "bin/parser.tab.cc"
    break;

  case 70: /* Modifiers_opt: Modifiers  */
#line 544 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifiers", memArr, 1, 1);
    }
#line 2736 "bin/parser.tab.cc"
    break;

  case 71: /* ClassExtend_opt: %empty  */
#line 550 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2744 "bin/parser.tab.cc"
    break;

  case 72: /* ClassExtend_opt: ClassExtend  */
#line 553 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2752 "bin/parser.tab.cc"
    break;

  case 73: /* Interfaces_opt: %empty  */
#line 557 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2760 "bin/parser.tab.cc"
    break;

  case 74: /* Interfaces_opt: Interfaces  */
#line 560 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2768 "bin/parser.tab.cc"
    break;

  case 75: /* ClassExtend: Extends ClassType  */
#line 565 "src/parser.y"
                      {
        (yyval.exp) = makeleaf((yyvsp[0].exp)->data);
    }
#line 2776 "bin/parser.tab.cc"
    break;

  case 76: /* Interfaces: Implements InterfaceTypeList  */
#line 570 "src/parser.y"
                                 {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 1);

    }
#line 2788 "bin/parser.tab.cc"
    break;

  case 77: /* InterfaceTypeList: InterfaceType  */
#line 579 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2798 "bin/parser.tab.cc"
    break;

  case 78: /* InterfaceTypeList: InterfaceTypeList Comma InterfaceType  */
#line 584 "src/parser.y"
                                            {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("InterfaceList", memArr, 2, 0);
    }
#line 2809 "bin/parser.tab.cc"
    break;

  case 79: /* ClassBody: LeftCurlyBrace ClassBodyDeclarations_opt RightCurlyBrace  */
#line 592 "src/parser.y"
                                                             {
        (yyval.exp) = (yyvsp[-1].exp);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 2821 "bin/parser.tab.cc"
    break;

  case 80: /* ClassBodyDeclarations_opt: %empty  */
#line 600 "src/parser.y"
                            { 
        (yyval.exp) = NULL ;
    }
#line 2829 "bin/parser.tab.cc"
    break;

  case 81: /* ClassBodyDeclarations_opt: ClassBodyDeclarations  */
#line 603 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        //cout << "Class Declarations Reached !" <<endl;
        (yyval.exp) = makeInternalNode("ClassBody", memArr, 1, 1);
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
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
        
    }
#line 2866 "bin/parser.tab.cc"
    break;

  case 82: /* ClassBodyDeclarations: ClassBodyDeclaration  */
#line 637 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ClassBody", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);

    }
#line 2881 "bin/parser.tab.cc"
    break;

  case 83: /* ClassBodyDeclarations: ClassBodyDeclarations ClassBodyDeclaration  */
#line 647 "src/parser.y"
                                                 {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);
    }
#line 2897 "bin/parser.tab.cc"
    break;

  case 84: /* ClassBodyDeclaration: ClassMemberDeclaration  */
#line 660 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2905 "bin/parser.tab.cc"
    break;

  case 85: /* ClassBodyDeclaration: StaticInitializer  */
#line 663 "src/parser.y"
                        {
        (yyval.exp)=(yyvsp[0].exp);
    }
#line 2913 "bin/parser.tab.cc"
    break;

  case 86: /* ClassBodyDeclaration: ConstructorDeclaration  */
#line 666 "src/parser.y"
                             {
        (yyval.exp)=(yyvsp[0].exp);
    }
#line 2921 "bin/parser.tab.cc"
    break;

  case 87: /* ClassMemberDeclaration: FieldDeclaration  */
#line 671 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2929 "bin/parser.tab.cc"
    break;

  case 88: /* ClassMemberDeclaration: MethodDeclaration  */
#line 674 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);

    }
#line 2938 "bin/parser.tab.cc"
    break;

  case 89: /* FieldDeclaration: Modifiers_opt Type VariableDeclarators Semicolon  */
#line 680 "src/parser.y"
                                                     {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("FieldDeclaration", memArr, 3, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->t = 0;

        if((yyvsp[-3].exp) != NULL)
        {

            for(int j = 0 ; j< (yyvsp[-1].exp)->arr.size(); j++)
            {
                (yyval.exp)->symbol.size += (yyvsp[-2].exp)->symbol.size;
                (yyval.exp)->symbol.type = (yyvsp[-2].exp)->symbol.type;
                //struct Type temp = $2->symbol.type;
                string txt = (yyvsp[-1].exp)->arr[j]->symbol.name;
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
                    (yyval.exp)->symbol.type.name += "[]";
                }

                for(int i=0 ; i< (yyvsp[-3].exp)->arr.size();i++)
                {
                    (yyval.exp)->symbol.type.modifier.push_back((yyvsp[-3].exp)->arr[i]->data);
                }

                (yyval.exp)->symbol.structuretable->field_type.push_back((yyval.exp)->symbol.type);
                (yyval.exp)->symbol.structuretable->field_name.push_back(name);

            }
        }

        else{
            for(int j =0; j< (yyvsp[-1].exp)->arr.size(); j++)
            {
                (yyval.exp)->symbol.size += (yyvsp[-2].exp)->symbol.size;
                struct Type temp = (yyvsp[-2].exp)->symbol.type;
                string txt = (yyvsp[-1].exp)->arr[j]->symbol.name;
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

                (yyval.exp)->symbol.structuretable->field_type.push_back(temp);
                (yyval.exp)->symbol.structuretable->field_name.push_back(name);

            }
        }
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);        

    }
#line 3021 "bin/parser.tab.cc"
    break;

  case 90: /* VariableDeclarators: VariableDeclarator  */
#line 760 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        // $$->isDeclaration = DECLARATION;
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3036 "bin/parser.tab.cc"
    break;

  case 91: /* VariableDeclarators: VariableDeclarators Comma VariableDeclarator  */
#line 770 "src/parser.y"
                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 2, 0);
        // $$->isDeclaration = DECLARATION;
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 2, APPEND_CODE);
    }
#line 3053 "bin/parser.tab.cc"
    break;

  case 92: /* VariableDeclarator: VariableDeclaratorId  */
#line 784 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->t = 0;
        (yyval.exp)->symbol.name = (yyvsp[0].exp)->symbol.name;


    }
#line 3068 "bin/parser.tab.cc"
    break;

  case 93: /* VariableDeclarator: VariableDeclaratorId EqualTo VariableInitializer  */
#line 794 "src/parser.y"
                                                       {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("=", memArr, 2, 1);
        (yyval.exp)->isDeclaration = INITIALIZATION;
        (yyval.exp)->t = 0;
        (yyval.exp)->symbol.name = (yyvsp[-2].exp)->symbol.name;
        struct node* E[2];
        E[0] = (yyvsp[-2].exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, ASSIGN_CODE);
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3089 "bin/parser.tab.cc"
    break;

  case 94: /* VariableDeclaratorId: Identifier  */
#line 812 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        string temp  = string((yyvsp[0].data));
        (yyval.exp)->symbol.name = temp;
        buildVal((yyval.exp));
    }
#line 3100 "bin/parser.tab.cc"
    break;

  case 95: /* VariableDeclaratorId: VariableDeclaratorId LeftSquareBracket RightSquareBracket  */
#line 818 "src/parser.y"
                                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.name = temp;
        buildVal((yyval.exp));
    }
#line 3111 "bin/parser.tab.cc"
    break;

  case 96: /* VariableInitializer: Expression  */
#line 826 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3119 "bin/parser.tab.cc"
    break;

  case 97: /* VariableInitializer: ArrayInitializer  */
#line 829 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3127 "bin/parser.tab.cc"
    break;

  case 98: /* MethodDeclaration: MethodHeader MethodBody  */
#line 834 "src/parser.y"
                           {
        
        
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr,2, 1);
        (yyval.exp)->symbol = (yyvsp[-1].exp)->symbol;
        (yyval.exp)->isDeclaration = DECLARATION;
        
        //glob_insert("scope",$1->symbol.name,$1->symbol.type,curr,glob_table);
        curr = curr->parent;
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);

    }
#line 3151 "bin/parser.tab.cc"
    break;

  case 99: /* MethodHeader: Modifiers_opt Type MethodDeclarator Throws_opt  */
#line 855 "src/parser.y"
                                                   {
        
        struct node * memArr[4];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 4, 0);

        if((yyvsp[-3].exp) != NULL){
            for(int i=0; i< (yyvsp[-3].exp)->arr.size();i ++)
            {
                string temp = string((yyvsp[-3].exp)->arr[i]->data);
                //cout << temp <<endl;
                (yyval.exp)->symbol.type.modifier.push_back(temp);
            }
        }
        (yyval.exp)->symbol.type.return_type = (yyvsp[-2].exp)->symbol.type.name;
        (yyval.exp)->symbol.type.t = 2;
        (yyval.exp)->symbol.name = (yyvsp[-1].exp)->symbol.name;

        
        for(int i=0; i< (yyvsp[-1].exp)->symbol.type.parameters.size(); i++)
        {
            (yyval.exp)->symbol.type.parameters.push_back((yyvsp[-1].exp)->symbol.type.parameters[i]);
            (yyval.exp)->symbol.type.parameters_type.push_back((yyvsp[-1].exp)->symbol.type.parameters_type[i]);
        }

        //glob_insert("scope",$3->symbol.name,$$->symbol.type,curr,glob_table);

        (yyval.exp)->symbol.structuretable->field_type.push_back((yyval.exp)->symbol.type);
        (yyval.exp)->symbol.structuretable->field_name.push_back((yyval.exp)->symbol.name);

        glob_insert(to_string(class_num),(yyval.exp)->symbol.name,(yyval.exp)->symbol.type,curr,glob_table);
        /*
        func_params = $$->symbol;
        symb_insert = 1;
        */
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
        
    }
#line 3200 "bin/parser.tab.cc"
    break;

  case 100: /* MethodHeader: Modifiers_opt Void MethodDeclarator Throws_opt  */
#line 899 "src/parser.y"
                                                     {
        
        struct node * memArr[4];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = makeleaf((yyvsp[-2].data));
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 4, 0);
        if((yyvsp[-3].exp) != NULL)
        {   
            //cout << $1->arr.size() <<endl <<endl;
            for(int i=0; i< (yyvsp[-3].exp)->arr.size();i ++)
            {
                string temp = string((yyvsp[-3].exp)->arr[i]->data);
                //cout << temp <<endl;
                (yyval.exp)->symbol.type.modifier.push_back(temp);
                //cout <<$$->symbol.type.modifier[i] <<endl <<endl;
            
            }
        }
        (yyval.exp)->symbol.type.return_type = "void";
        (yyval.exp)->symbol.type.t = 2;
        (yyval.exp)->symbol.name = (yyvsp[-1].exp)->symbol.name;

        for(int i=0; i< (yyvsp[-1].exp)->symbol.type.parameters.size(); i++)
        {
            (yyval.exp)->symbol.type.parameters.push_back((yyvsp[-1].exp)->symbol.type.parameters[i]);
            (yyval.exp)->symbol.type.parameters_type.push_back((yyvsp[-1].exp)->symbol.type.parameters_type[i]);
        }

        

        (yyval.exp)->symbol.structuretable->field_type.push_back((yyval.exp)->symbol.type);
        (yyval.exp)->symbol.structuretable->field_name.push_back((yyval.exp)->symbol.name);

        /*
        func_params = $$->symbol;
        symb_insert = 1;
        */
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);

    }
#line 3250 "bin/parser.tab.cc"
    break;

  case 101: /* Throws_opt: %empty  */
#line 946 "src/parser.y"
    { 
        (yyval.exp) = NULL;
    }
#line 3258 "bin/parser.tab.cc"
    break;

  case 102: /* Throws_opt: Throws  */
#line 949 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Throws", memArr, 1, 1);
    }
#line 3268 "bin/parser.tab.cc"
    break;

  case 103: /* MethodDeclarator: Identifier Symbol_Table_Change LeftParanthesis FormalParameterList_opt RightParanthesis  */
#line 956 "src/parser.y"
                                                                                            {
        
        struct node * memArr[1];
        memArr[0]  = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-4].data), memArr,1, 0);
        string temp = string((yyvsp[-4].data));
        (yyval.exp)->symbol.name = temp;
        if((yyvsp[-1].exp) != NULL)
        {
            for(int i=0; i < (yyvsp[-1].exp)->arr.size(); i++)
            {
                (yyval.exp)->symbol.type.parameters.push_back((yyvsp[-1].exp)->arr[i]->symbol.name);
                (yyval.exp)->symbol.type.parameters_type.push_back((yyvsp[-1].exp)->arr[i]->symbol.type.name);
            }
        }
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3293 "bin/parser.tab.cc"
    break;

  case 104: /* MethodDeclarator: MethodDeclarator LeftSquareBracket RightSquareBracket  */
#line 976 "src/parser.y"
                                                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-2].exp)->data,"[]"), memArr, 1, 0);
        string temp = string((yyvsp[-2].exp)->data)+ "[]";
        (yyval.exp)->symbol.name = temp;
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3309 "bin/parser.tab.cc"
    break;

  case 105: /* FormalParameterList_opt: %empty  */
#line 988 "src/parser.y"
                          {
        (yyval.exp) = NULL;
    }
#line 3317 "bin/parser.tab.cc"
    break;

  case 106: /* FormalParameterList_opt: FormalParameterList  */
#line 991 "src/parser.y"
                          {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameters", memArr, 1, 1);
        
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3332 "bin/parser.tab.cc"
    break;

  case 107: /* FormalParameterList: FormalParameter  */
#line 1003 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameter", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
        
    }
#line 3347 "bin/parser.tab.cc"
    break;

  case 108: /* FormalParameterList: FormalParameterList Comma FormalParameter  */
#line 1013 "src/parser.y"
                                               {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameter", memArr, 2,0);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);
    }
#line 3363 "bin/parser.tab.cc"
    break;

  case 109: /* FormalParameter: Type VariableDeclaratorId  */
#line 1026 "src/parser.y"
                              {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-1].exp)->data, concatenate_string(" ", (yyvsp[0].exp)->data)));
        //cout << "Hello" <<endl;

        (yyval.exp)->symbol.type.name = (yyvsp[-1].exp)->symbol.type.name;
        (yyval.exp)->symbol.type.t = (yyvsp[-1].exp)->symbol.type.t;
        //$$->symbol.type.name = $1->symbol.type.name;
        string txt = (yyvsp[0].exp)->symbol.name;
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
            (yyval.exp)->symbol.type.name += "[]";
        }


        //cout << name;
        //cout << name<<endl;

        (yyval.exp)->symbol.name = name;
        //$$->symbol.type.name = temp.name;
        loc_insert(curr,(yyval.exp)->symbol);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);        
    }
#line 3404 "bin/parser.tab.cc"
    break;

  case 110: /* Throws: THROWS ClassTypeList  */
#line 1064 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("throws", memArr, 1, 1);
    }
#line 3414 "bin/parser.tab.cc"
    break;

  case 111: /* ClassTypeList: ClassType  */
#line 1071 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 1, 0);
    }
#line 3424 "bin/parser.tab.cc"
    break;

  case 112: /* ClassTypeList: ClassTypeList Comma ClassType  */
#line 1076 "src/parser.y"
                                    {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp); 
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 2, 0);
    }
#line 3435 "bin/parser.tab.cc"
    break;

  case 113: /* MethodBody: Block  */
#line 1084 "src/parser.y"
          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3443 "bin/parser.tab.cc"
    break;

  case 114: /* MethodBody: Semicolon  */
#line 1087 "src/parser.y"
                {
        (yyval.exp) = NULL;
    }
#line 3451 "bin/parser.tab.cc"
    break;

  case 115: /* StaticInitializer: Static Symbol_Table_Change Block Symbol_Table_Back  */
#line 1093 "src/parser.y"
                                                       {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("static", memArr, 1, 1);
        
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3466 "bin/parser.tab.cc"
    break;

  case 116: /* ConstructorDeclaration: Modifiers_opt ConstructorDeclarator Throws_opt ConstructorBody  */
#line 1105 "src/parser.y"
                                                                   {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-2].exp)->data, memArr, 4, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-3].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);
    }
#line 3485 "bin/parser.tab.cc"
    break;

  case 117: /* ConstructorDeclarator: SimpleName LeftParanthesis FormalParameterList_opt RightParanthesis  */
#line 1121 "src/parser.y"
                                                                        {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
        
    }
#line 3500 "bin/parser.tab.cc"
    break;

  case 118: /* ConstructorBody: LeftCurlyBrace ExplicitConstructorInvocation_opt BlockStatements_opt RightCurlyBrace  */
#line 1133 "src/parser.y"
                                                                                         {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ConstructorInvocation", memArr, 2, 1);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[-1].exp);
        buildTAC(E, 3, APPEND_CODE);
    }
#line 3516 "bin/parser.tab.cc"
    break;

  case 119: /* ExplicitConstructorInvocation_opt: %empty  */
#line 1145 "src/parser.y"
                                    { 
    (yyval.exp) = NULL; 
    }
#line 3524 "bin/parser.tab.cc"
    break;

  case 120: /* ExplicitConstructorInvocation_opt: ExplicitConstructorInvocation  */
#line 1148 "src/parser.y"
                                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ExplicitConstructorInvocation", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3538 "bin/parser.tab.cc"
    break;

  case 121: /* ExplicitConstructorInvocation: This LeftParanthesis ArgumentList_opt RightParanthesis Semicolon  */
#line 1159 "src/parser.y"
                                                                     {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode("this", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3552 "bin/parser.tab.cc"
    break;

  case 122: /* ExplicitConstructorInvocation: Super LeftParanthesis ArgumentList_opt RightParanthesis Semicolon  */
#line 1168 "src/parser.y"
                                                                        {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode("super", memArr, 1, 0);

        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3567 "bin/parser.tab.cc"
    break;

  case 123: /* ArgumentList_opt: %empty  */
#line 1179 "src/parser.y"
                  {
    (yyval.exp) = NULL; 
    }
#line 3575 "bin/parser.tab.cc"
    break;

  case 124: /* ArgumentList_opt: ArgumentList  */
#line 1182 "src/parser.y"
                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Arguments", memArr, 1, 0);

        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);        
    }
#line 3590 "bin/parser.tab.cc"
    break;

  case 125: /* InterfaceDeclaration: Modifiers_opt Interface Identifier ExtendsInterfaces_opt InterfaceBody  */
#line 1194 "src/parser.y"
                                                                           {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = makeleaf((yyvsp[-3].data));
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-2].data), memArr, 4, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3604 "bin/parser.tab.cc"
    break;

  case 126: /* ExtendsInterfaces_opt: %empty  */
#line 1204 "src/parser.y"
                        {
    (yyval.exp) = NULL;
    }
#line 3612 "bin/parser.tab.cc"
    break;

  case 127: /* ExtendsInterfaces_opt: ExtendsInterfaces  */
#line 1207 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 1);
    }
#line 3622 "bin/parser.tab.cc"
    break;

  case 128: /* ExtendsInterfaces: Extends InterfaceType  */
#line 1214 "src/parser.y"
                          {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 0);
    }
#line 3632 "bin/parser.tab.cc"
    break;

  case 129: /* ExtendsInterfaces: ExtendsInterfaces Comma InterfaceType  */
#line 1219 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 2, 0);
    }
#line 3643 "bin/parser.tab.cc"
    break;

  case 130: /* InterfaceBody: LeftCurlyBrace InterfaceMemberDeclarations_opt RightCurlyBrace  */
#line 1227 "src/parser.y"
                                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3651 "bin/parser.tab.cc"
    break;

  case 131: /* InterfaceMemberDeclarations_opt: %empty  */
#line 1231 "src/parser.y"
                                 {
        (yyval.exp) = NULL;
    }
#line 3659 "bin/parser.tab.cc"
    break;

  case 132: /* InterfaceMemberDeclarations_opt: InterfaceMemberDeclarations  */
#line 1234 "src/parser.y"
                                  {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interfaces", memArr, 1, 1);
    }
#line 3669 "bin/parser.tab.cc"
    break;

  case 133: /* InterfaceMemberDeclarations: InterfaceMemberDeclaration  */
#line 1241 "src/parser.y"
                               {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 1, 0);
    }
#line 3679 "bin/parser.tab.cc"
    break;

  case 134: /* InterfaceMemberDeclarations: InterfaceMemberDeclarations InterfaceMemberDeclaration  */
#line 1246 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 0);
    }
#line 3690 "bin/parser.tab.cc"
    break;

  case 135: /* InterfaceMemberDeclaration: ConstantDeclaration  */
#line 1254 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3699 "bin/parser.tab.cc"
    break;

  case 136: /* InterfaceMemberDeclaration: AbstractMethodDeclaration  */
#line 1258 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3708 "bin/parser.tab.cc"
    break;

  case 137: /* ConstantDeclaration: FieldDeclaration  */
#line 1264 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3716 "bin/parser.tab.cc"
    break;

  case 138: /* AbstractMethodDeclaration: MethodHeader Semicolon  */
#line 1269 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3724 "bin/parser.tab.cc"
    break;

  case 139: /* ArrayInitializer: LeftCurlyBrace VariableInitializers_opt Comma_opt RightCurlyBrace  */
#line 1274 "src/parser.y"
                                                                      {
        (yyval.exp) = (yyvsp[-2].exp);
    }
#line 3732 "bin/parser.tab.cc"
    break;

  case 140: /* VariableInitializers_opt: %empty  */
#line 1278 "src/parser.y"
                          {
        (yyval.exp) = NULL; 
    }
#line 3740 "bin/parser.tab.cc"
    break;

  case 141: /* VariableInitializers_opt: VariableInitializers  */
#line 1281 "src/parser.y"
                           {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("VariableInitializers", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);  
    }
#line 3754 "bin/parser.tab.cc"
    break;

  case 142: /* Comma_opt: %empty  */
#line 1291 "src/parser.y"
            {
        (yyval.exp) = NULL; 
    }
#line 3762 "bin/parser.tab.cc"
    break;

  case 143: /* Comma_opt: Comma  */
#line 1294 "src/parser.y"
            {
        (yyval.exp) = NULL;
    }
#line 3770 "bin/parser.tab.cc"
    break;

  case 144: /* VariableInitializers: VariableInitializer  */
#line 1299 "src/parser.y"
                        {
       struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);  
    }
#line 3784 "bin/parser.tab.cc"
    break;

  case 145: /* VariableInitializers: VariableInitializers Comma VariableInitializer  */
#line 1308 "src/parser.y"
                                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Initializer", memArr, 2, 0);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);  
    }
#line 3800 "bin/parser.tab.cc"
    break;

  case 146: /* Block: LeftCurlyBrace BlockStatements_opt RightCurlyBrace  */
#line 1321 "src/parser.y"
                                                       {    
        (yyval.exp) = (yyvsp[-1].exp);
        //cout << "After block !" << endl;
    }
#line 3809 "bin/parser.tab.cc"
    break;

  case 147: /* Symbol_Table_Change: %empty  */
#line 1327 "src/parser.y"
    { 
        curr = loc_mktable(curr,"local");
    }
#line 3817 "bin/parser.tab.cc"
    break;

  case 148: /* Symbol_Table_Back: %empty  */
#line 1332 "src/parser.y"
    {
        curr = curr->parent;
    }
#line 3825 "bin/parser.tab.cc"
    break;

  case 149: /* BlockStatements_opt: %empty  */
#line 1336 "src/parser.y"
                      {
     (yyval.exp) = NULL; 
     }
#line 3833 "bin/parser.tab.cc"
    break;

  case 150: /* BlockStatements_opt: BlockStatements  */
#line 1339 "src/parser.y"
                      {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("statements", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);  
    }
#line 3847 "bin/parser.tab.cc"
    break;

  case 151: /* BlockStatements: BlockStatement  */
#line 1350 "src/parser.y"
                   {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Blocks", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE); 
    }
#line 3861 "bin/parser.tab.cc"
    break;

  case 152: /* BlockStatements: BlockStatements BlockStatement  */
#line 1359 "src/parser.y"
                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Block", memArr, 2, 0);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);  
        
    }
#line 3878 "bin/parser.tab.cc"
    break;

  case 153: /* BlockStatement: LocalVariableDeclarationStatement  */
#line 1373 "src/parser.y"
                                      {
        //$$ = $1;
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("LocalVariableDeclarationStatement", memArr, 1, 1);
        //cout << "LocalVariableDeclaration" <<endl;
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3894 "bin/parser.tab.cc"
    break;

  case 154: /* BlockStatement: Statement  */
#line 1384 "src/parser.y"
                {
        //$$ = $1;
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Statement", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);

    }
#line 3910 "bin/parser.tab.cc"
    break;

  case 155: /* LocalVariableDeclarationStatement: LocalVariableDeclaration Semicolon  */
#line 1397 "src/parser.y"
                                       {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3924 "bin/parser.tab.cc"
    break;

  case 156: /* LocalVariableDeclaration: Type VariableDeclarators  */
#line 1408 "src/parser.y"
                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Declaration", memArr, 2, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
        //cout << "Local Variable Declaration" <<endl;
        for(int j = 0 ; j< (yyvsp[0].exp)->arr.size(); j++)
            {
                //cout << "Inside For Loop" <<endl;
                (yyval.exp)->symbol.type.name = (yyvsp[-1].exp)->symbol.type.name;
                (yyval.exp)-> symbol.type.t = (yyvsp[-1].exp)->symbol.type.t;
                //cout << "Type assigned" <<endl;
                //cout << $2->arr[j]->symbol.name <<endl;
                (yyval.exp)->symbol.name= (yyvsp[0].exp)->arr[j]->symbol.name;
                //cout << "Symbol assigned" <<endl;
                (yyval.exp)->symbol.size += (yyvsp[-1].exp)->symbol.size;
                (yyval.exp)->symbol.source_file = (yyvsp[0].exp)->arr[j]->symbol.source_file;
                (yyval.exp)->symbol.offset = (yyvsp[0].exp)->arr[j]->symbol.offset;
                (yyval.exp)->symbol.structuretable = (yyvsp[0].exp)->arr[j]->symbol.structuretable;
                (yyval.exp)->symbol.type.modifier.clear();
                
                string txt = (yyvsp[0].exp)->arr[j]->symbol.name;
                string name = "";
                int count = 0;
                //cout << txt.size() <<endl;
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
                    (yyval.exp)->symbol.type.name += "[]";
                }
                
                (yyval.exp)->symbol.name = name;

                if(loc_insert(curr, (yyval.exp)->symbol) == DECLARATION_ERROR)
                {
                    yyerror("\nDeclaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string((yyval.exp)->symbol.line_num) +"\nSemantic Analysis failed !");
                }
                

            }
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
        //cout << "Local Variable Declaration ended " <<endl;
    }
#line 3984 "bin/parser.tab.cc"
    break;

  case 157: /* Statement: StatementWithoutTrailingSubstatement  */
#line 1465 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3992 "bin/parser.tab.cc"
    break;

  case 158: /* Statement: LabeledStatement  */
#line 1468 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4000 "bin/parser.tab.cc"
    break;

  case 159: /* Statement: IfThenStatement  */
#line 1471 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4008 "bin/parser.tab.cc"
    break;

  case 160: /* Statement: IfThenElseStatement  */
#line 1474 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4016 "bin/parser.tab.cc"
    break;

  case 161: /* Statement: WhileStatement  */
#line 1477 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4024 "bin/parser.tab.cc"
    break;

  case 162: /* Statement: ForStatement  */
#line 1480 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4032 "bin/parser.tab.cc"
    break;

  case 163: /* StatementNoShortIf: StatementWithoutTrailingSubstatement  */
#line 1485 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4040 "bin/parser.tab.cc"
    break;

  case 164: /* StatementNoShortIf: LabeledStatementNoShortIf  */
#line 1488 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4048 "bin/parser.tab.cc"
    break;

  case 165: /* StatementNoShortIf: IfThenElseStatementNoShortIf  */
#line 1491 "src/parser.y"
                                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4056 "bin/parser.tab.cc"
    break;

  case 166: /* StatementNoShortIf: WhileStatementNoShortIf  */
#line 1494 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4064 "bin/parser.tab.cc"
    break;

  case 167: /* StatementNoShortIf: ForStatementNoShortIf  */
#line 1497 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4072 "bin/parser.tab.cc"
    break;

  case 168: /* StatementWithoutTrailingSubstatement: Block  */
#line 1502 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4080 "bin/parser.tab.cc"
    break;

  case 169: /* StatementWithoutTrailingSubstatement: EmptyStatement  */
#line 1505 "src/parser.y"
                     {
        (yyval.exp) = NULL;
    }
#line 4088 "bin/parser.tab.cc"
    break;

  case 170: /* StatementWithoutTrailingSubstatement: ExpressionStatement  */
#line 1508 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4096 "bin/parser.tab.cc"
    break;

  case 171: /* StatementWithoutTrailingSubstatement: BreakStatement  */
#line 1511 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4104 "bin/parser.tab.cc"
    break;

  case 172: /* StatementWithoutTrailingSubstatement: ContinueStatement  */
#line 1514 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4112 "bin/parser.tab.cc"
    break;

  case 173: /* StatementWithoutTrailingSubstatement: ReturnStatement  */
#line 1517 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4120 "bin/parser.tab.cc"
    break;

  case 174: /* StatementWithoutTrailingSubstatement: SynchronizedStatement  */
#line 1520 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4128 "bin/parser.tab.cc"
    break;

  case 175: /* StatementWithoutTrailingSubstatement: ThrowStatement  */
#line 1523 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4136 "bin/parser.tab.cc"
    break;

  case 176: /* StatementWithoutTrailingSubstatement: TryStatement  */
#line 1526 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4144 "bin/parser.tab.cc"
    break;

  case 177: /* EmptyStatement: Semicolon  */
#line 1531 "src/parser.y"
              {
        (yyval.exp) = NULL;
    }
#line 4152 "bin/parser.tab.cc"
    break;

  case 178: /* LabeledStatement: Identifier Semicolon Statement  */
#line 1536 "src/parser.y"
                                   {
        struct node* memArr[2];
        memArr[0] = makeleaf((yyvsp[-2].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("LabeledStatements", memArr, 2, 0);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = makeleaf((yyvsp[-2].data));
        buildVal(E[1]);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);
    }
#line 4169 "bin/parser.tab.cc"
    break;

  case 179: /* LabeledStatementNoShortIf: Identifier Semicolon StatementNoShortIf  */
#line 1550 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = makeleaf((yyvsp[-2].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfThen", memArr, 2, 0);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = makeleaf((yyvsp[-2].data));
        buildVal(E[1]);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);
    }
#line 4186 "bin/parser.tab.cc"
    break;

  case 180: /* ExpressionStatement: StatementExpression Semicolon  */
#line 1564 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4194 "bin/parser.tab.cc"
    break;

  case 181: /* StatementExpression: Assignment  */
#line 1569 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4202 "bin/parser.tab.cc"
    break;

  case 182: /* StatementExpression: PreIncrementExpression  */
#line 1572 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4210 "bin/parser.tab.cc"
    break;

  case 183: /* StatementExpression: PreDecrementExpression  */
#line 1575 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4218 "bin/parser.tab.cc"
    break;

  case 184: /* StatementExpression: PostIncrementExpression  */
#line 1578 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4226 "bin/parser.tab.cc"
    break;

  case 185: /* StatementExpression: PostDecrementExpression  */
#line 1581 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4234 "bin/parser.tab.cc"
    break;

  case 186: /* StatementExpression: MethodInvocation  */
#line 1584 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4242 "bin/parser.tab.cc"
    break;

  case 187: /* StatementExpression: ClassInstanceCreationExpression  */
#line 1587 "src/parser.y"
                                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4250 "bin/parser.tab.cc"
    break;

  case 188: /* IfThenStatement: If Symbol_Table_Change LeftParanthesis Expression RightParanthesis Statement Symbol_Table_Back  */
#line 1592 "src/parser.y"
                                                                                                   {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("IfThen", memArr, 2, 1);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-3].exp);
        E[2] = (yyvsp[-1].exp);
        buildTAC(E,3,IF_CODE);
    }
#line 4266 "bin/parser.tab.cc"
    break;

  case 189: /* IfThenElseStatement: If Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf Else Statement Symbol_Table_Back  */
#line 1605 "src/parser.y"
                                                                                                                          {
        
        struct node* memArr[3];
        memArr[0] = (yyvsp[-5].exp);
        memArr[1] = (yyvsp[-3].exp);
        memArr[2] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("IfElse", memArr, 3, 1);

        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-5].exp);
        E[2] = (yyvsp[-3].exp);
        E[3] = (yyvsp[-1].exp);
        buildTAC(E,4,IF_CODE);
        
    }
#line 4287 "bin/parser.tab.cc"
    break;

  case 190: /* IfThenElseStatementNoShortIf: If Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf Else StatementNoShortIf Symbol_Table_Back  */
#line 1623 "src/parser.y"
                                                                                                                                    {
        
        struct node* memArr[3];
        memArr[0] = (yyvsp[-5].exp);
        memArr[1] = (yyvsp[-3].exp);
        memArr[2] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("IfElseIf", memArr, 3, 1);

        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-5].exp);
        E[2] = (yyvsp[-3].exp);
        E[3] = (yyvsp[-1].exp);
        buildTAC(E,4,IF_CODE);
        
    }
#line 4308 "bin/parser.tab.cc"
    break;

  case 191: /* WhileStatement: While Symbol_Table_Change LeftParanthesis Expression RightParanthesis Statement Symbol_Table_Back  */
#line 1641 "src/parser.y"
                                                                                                      {
        
        struct node* memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("While", memArr, 2, 1);

        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-3].exp);
        E[2] = (yyvsp[-1].exp);
        buildTAC(E,3,WHILE_CODE);
        
    }
#line 4327 "bin/parser.tab.cc"
    break;

  case 192: /* WhileStatementNoShortIf: While Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf Symbol_Table_Back  */
#line 1657 "src/parser.y"
                                                                                                               {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("While", memArr, 2, 1);

        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-3].exp);
        E[2] = (yyvsp[-1].exp);
        buildTAC(E,3,WHILE_CODE);
    }
#line 4344 "bin/parser.tab.cc"
    break;

  case 193: /* ForStatement: For Symbol_Table_Change LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis Statement Symbol_Table_Back  */
#line 1671 "src/parser.y"
                                                                                                                                                     {
        
        struct node* memArr[4];
        memArr[0] = (yyvsp[-7].exp);
        memArr[1] = (yyvsp[-5].exp);
        memArr[2] = (yyvsp[-3].exp);
        memArr[3] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("For", memArr, 4, 1);
        (yyval.exp)->t = 2;

        struct node* E[5];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-7].exp);
        E[2] = (yyvsp[-5].exp);
        E[3] = (yyvsp[-3].exp);
        E[4] = (yyvsp[-1].exp);
        buildTAC(E,5,FOR_CODE);

    }
#line 4368 "bin/parser.tab.cc"
    break;

  case 194: /* ForStatementNoShortIf: For Symbol_Table_Change LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis StatementNoShortIf Symbol_Table_Back  */
#line 1692 "src/parser.y"
                                                                                                                                                              {
        
        struct node* memArr[4];
        memArr[0] = (yyvsp[-7].exp);
        memArr[1] = (yyvsp[-5].exp);
        memArr[2] = (yyvsp[-3].exp);
        memArr[3] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("For", memArr, 4, 1);

        struct node* E[5];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-7].exp);
        E[2] = (yyvsp[-5].exp);
        E[3] = (yyvsp[-3].exp);
        E[4] = (yyvsp[-1].exp);
        buildTAC(E,5,FOR_CODE);
    }
#line 4390 "bin/parser.tab.cc"
    break;

  case 195: /* ForInit_opt: %empty  */
#line 1710 "src/parser.y"
             { 
    (yyval.exp) = NULL; 
    }
#line 4398 "bin/parser.tab.cc"
    break;

  case 196: /* ForInit_opt: ForInit  */
#line 1713 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);

        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4413 "bin/parser.tab.cc"
    break;

  case 197: /* Expression_opt: %empty  */
#line 1724 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 4421 "bin/parser.tab.cc"
    break;

  case 198: /* Expression_opt: Expression  */
#line 1727 "src/parser.y"
                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Expression", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4435 "bin/parser.tab.cc"
    break;

  case 199: /* ForUpdate_opt: %empty  */
#line 1737 "src/parser.y"
               { 
    (yyval.exp) = NULL ;
    }
#line 4443 "bin/parser.tab.cc"
    break;

  case 200: /* ForUpdate_opt: ForUpdate  */
#line 1740 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4457 "bin/parser.tab.cc"
    break;

  case 201: /* ForInit: StatementExpressionList  */
#line 1751 "src/parser.y"
                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
        // $$->isDeclaration = DECLARATION;
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4472 "bin/parser.tab.cc"
    break;

  case 202: /* ForInit: LocalVariableDeclaration  */
#line 1761 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->t=1;
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4488 "bin/parser.tab.cc"
    break;

  case 203: /* ForUpdate: StatementExpressionList  */
#line 1774 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4502 "bin/parser.tab.cc"
    break;

  case 204: /* StatementExpressionList: StatementExpression  */
#line 1785 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("StatementExpression", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4516 "bin/parser.tab.cc"
    break;

  case 205: /* StatementExpressionList: StatementExpressionList Comma StatementExpression  */
#line 1794 "src/parser.y"
                                                        {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-2].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("StatementExpression", memArr, 2, 0);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);
    }
#line 4532 "bin/parser.tab.cc"
    break;

  case 206: /* BreakStatement: Break Identifier_opt Semicolon  */
#line 1807 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("break", memArr, 1, 1);
        buildVal((yyval.exp));
    }
#line 4543 "bin/parser.tab.cc"
    break;

  case 207: /* Identifier_opt: %empty  */
#line 1815 "src/parser.y"
    {
        (yyval.exp) = NULL;
    }
#line 4551 "bin/parser.tab.cc"
    break;

  case 208: /* Identifier_opt: Identifier  */
#line 1817 "src/parser.y"
                  {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        buildVal((yyval.exp));
    }
#line 4560 "bin/parser.tab.cc"
    break;

  case 209: /* ContinueStatement: Continue Identifier_opt Semicolon  */
#line 1823 "src/parser.y"
                                      {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("continue", memArr, 1, 1);
        buildVal((yyval.exp));

    }
#line 4572 "bin/parser.tab.cc"
    break;

  case 210: /* ReturnStatement: Return Expression_opt Semicolon  */
#line 1832 "src/parser.y"
                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("return", memArr, 1, 1);
        buildVal(makeleaf((yyvsp[-2].data)));
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = makeleaf((yyvsp[-2].data));
        buildVal(E[1]);
        E[2] = (yyvsp[-1].exp);
        buildTAC(E, 3, APPEND_CODE);
    }
#line 4589 "bin/parser.tab.cc"
    break;

  case 211: /* ThrowStatement: THROW Expression Semicolon  */
#line 1846 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("throw", memArr, 1, 1);
    }
#line 4599 "bin/parser.tab.cc"
    break;

  case 212: /* SynchronizedStatement: Synchronized LeftParanthesis Expression RightParanthesis Block  */
#line 1853 "src/parser.y"
                                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("synchronized", memArr, 2, 1);
    }
#line 4610 "bin/parser.tab.cc"
    break;

  case 213: /* TryStatement: Try Block Catches  */
#line 1861 "src/parser.y"
                      {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCatches", memArr, 2, 1);
    }
#line 4621 "bin/parser.tab.cc"
    break;

  case 214: /* TryStatement: Try Block Catches_opt Finally  */
#line 1867 "src/parser.y"
                                    {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCtachesFinally", memArr, 3, 1);
    }
#line 4633 "bin/parser.tab.cc"
    break;

  case 215: /* Catches_opt: %empty  */
#line 1875 "src/parser.y"
             {
        (yyval.exp) = NULL; 
    }
#line 4641 "bin/parser.tab.cc"
    break;

  case 216: /* Catches_opt: Catches  */
#line 1878 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catches", memArr, 1, 1);
    }
#line 4651 "bin/parser.tab.cc"
    break;

  case 217: /* Catches: CatchClause  */
#line 1885 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("catch", memArr, 1, 0);
    }
#line 4661 "bin/parser.tab.cc"
    break;

  case 218: /* Catches: Catches CatchClause  */
#line 1890 "src/parser.y"
                          {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catch", memArr, 2, 0);
    }
#line 4672 "bin/parser.tab.cc"
    break;

  case 219: /* CatchClause: Catch LeftParanthesis FormalParameter RightParanthesis Block  */
#line 1898 "src/parser.y"
                                                                 {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CatchClause", memArr, 2, 0);
    }
#line 4683 "bin/parser.tab.cc"
    break;

  case 220: /* Finally: FINALLY Block  */
#line 1906 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("finally", memArr, 1, 1);
    }
#line 4693 "bin/parser.tab.cc"
    break;

  case 221: /* Primary: PrimaryNoNewArray  */
#line 1913 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4701 "bin/parser.tab.cc"
    break;

  case 222: /* Primary: ArrayCreationExpression  */
#line 1916 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4709 "bin/parser.tab.cc"
    break;

  case 223: /* PrimaryNoNewArray: Literal  */
#line 1921 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4717 "bin/parser.tab.cc"
    break;

  case 224: /* PrimaryNoNewArray: This  */
#line 1924 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4725 "bin/parser.tab.cc"
    break;

  case 225: /* PrimaryNoNewArray: LeftParanthesis Expression RightParanthesis  */
#line 1927 "src/parser.y"
                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4733 "bin/parser.tab.cc"
    break;

  case 226: /* PrimaryNoNewArray: ClassInstanceCreationExpression  */
#line 1930 "src/parser.y"
                                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4741 "bin/parser.tab.cc"
    break;

  case 227: /* PrimaryNoNewArray: FieldAccess  */
#line 1933 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4749 "bin/parser.tab.cc"
    break;

  case 228: /* PrimaryNoNewArray: MethodInvocation  */
#line 1936 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4757 "bin/parser.tab.cc"
    break;

  case 229: /* PrimaryNoNewArray: ArrayAccess  */
#line 1939 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4765 "bin/parser.tab.cc"
    break;

  case 230: /* ClassInstanceCreationExpression: New ClassType LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 1944 "src/parser.y"
                                                                    {
        struct node * memArr[3];
        memArr[0] = makeleaf((yyvsp[-4].data));
        memArr[1] =(yyvsp[-3].exp);
        memArr[2] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ClassInstance", memArr, 3, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        buildVal((yyval.exp));

    }
#line 4780 "bin/parser.tab.cc"
    break;

  case 231: /* ArgumentList: Expression  */
#line 1956 "src/parser.y"
               {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArgumentList", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4794 "bin/parser.tab.cc"
    break;

  case 232: /* ArgumentList: ArgumentList Comma Expression  */
#line 1965 "src/parser.y"
                                    {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-2].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArgumentList", memArr, 2, 0);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);
    }
#line 4810 "bin/parser.tab.cc"
    break;

  case 233: /* ArrayCreationExpression: New PrimitiveType DimExprs Dims_opt  */
#line 1978 "src/parser.y"
                                        {
        struct node * memArr[4];
        memArr[0] = makeleaf((yyvsp[-3].data));
        memArr[1] =(yyvsp[-2].exp);
        memArr[2] =(yyvsp[-1].exp);
        memArr[3] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArrayCreation", memArr, 4, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
        buildVal((yyval.exp));
    }
#line 4825 "bin/parser.tab.cc"
    break;

  case 234: /* ArrayCreationExpression: New ClassOrInterfaceType DimExprs Dims_opt  */
#line 1988 "src/parser.y"
                                                 {
        struct node * memArr[4];
        memArr[0] = makeleaf((yyvsp[-3].data));
        memArr[1] =(yyvsp[-2].exp);
        memArr[2] =(yyvsp[-1].exp);
        memArr[3] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArrayCreation", memArr, 4, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
        buildVal((yyval.exp));
    }
#line 4840 "bin/parser.tab.cc"
    break;

  case 235: /* Dims_opt: %empty  */
#line 1999 "src/parser.y"
          { 
    (yyval.exp) = NULL; 
    }
#line 4848 "bin/parser.tab.cc"
    break;

  case 236: /* Dims_opt: Dims  */
#line 2002 "src/parser.y"
          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4856 "bin/parser.tab.cc"
    break;

  case 237: /* DimExprs: DimExpr  */
#line 2007 "src/parser.y"
            {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 4866 "bin/parser.tab.cc"
    break;

  case 238: /* DimExprs: DimExprs DimExpr  */
#line 2012 "src/parser.y"
                       {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]",memArr,2, 0);
    }
#line 4877 "bin/parser.tab.cc"
    break;

  case 239: /* DimExpr: LeftSquareBracket Expression RightSquareBracket  */
#line 2020 "src/parser.y"
                                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 4887 "bin/parser.tab.cc"
    break;

  case 240: /* Dims: LeftSquareBracket RightSquareBracket  */
#line 2027 "src/parser.y"
                                         {
        (yyval.exp) = makeleaf("[]");
    }
#line 4895 "bin/parser.tab.cc"
    break;

  case 241: /* Dims: Dims LeftSquareBracket RightSquareBracket  */
#line 2030 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
    }
#line 4903 "bin/parser.tab.cc"
    break;

  case 242: /* FieldAccess: Primary Dot Identifier  */
#line 2035 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,(yyvsp[0].data)));
        buildVal((yyval.exp));

    }
#line 4913 "bin/parser.tab.cc"
    break;

  case 243: /* FieldAccess: Super Dot Identifier  */
#line 2040 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),(yyvsp[0].data)));
        buildVal((yyval.exp));

    }
#line 4923 "bin/parser.tab.cc"
    break;

  case 244: /* MethodInvocation: Name LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 2047 "src/parser.y"
                                                           {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 1, 1);
        struct node * E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, METHOD_INVOCATION);
    }
#line 4937 "bin/parser.tab.cc"
    break;

  case 245: /* MethodInvocation: Primary Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 2056 "src/parser.y"
                                                                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].exp)->data,concatenate_string(" ",(yyvsp[-3].data))), memArr, 1, 1);
        struct node * E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, METHOD_INVOCATION);
    }
#line 4951 "bin/parser.tab.cc"
    break;

  case 246: /* MethodInvocation: Super Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 2065 "src/parser.y"
                                                                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].data),concatenate_string(" ",(yyvsp[-3].data))), memArr, 1, 1);
        struct node * E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, METHOD_INVOCATION);
    }
#line 4965 "bin/parser.tab.cc"
    break;

  case 247: /* ArrayAccess: Name LeftSquareBracket Expression RightSquareBracket  */
#line 2076 "src/parser.y"
                                                        {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ArrayAccess", memArr, 2, 0);
        buildVal((yyval.exp));
    }
#line 4977 "bin/parser.tab.cc"
    break;

  case 248: /* ArrayAccess: PrimaryNoNewArray LeftSquareBracket Expression RightSquareBracket  */
#line 2083 "src/parser.y"
                                                                        {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ArrayAccess", memArr, 2, 0);
        buildVal((yyval.exp));
    }
#line 4989 "bin/parser.tab.cc"
    break;

  case 249: /* PostfixExpression: Primary  */
#line 2092 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4997 "bin/parser.tab.cc"
    break;

  case 250: /* PostfixExpression: Name  */
#line 2095 "src/parser.y"
           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5005 "bin/parser.tab.cc"
    break;

  case 251: /* PostfixExpression: PostIncrementExpression  */
#line 2098 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5013 "bin/parser.tab.cc"
    break;

  case 252: /* PostfixExpression: PostDecrementExpression  */
#line 2101 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5021 "bin/parser.tab.cc"
    break;

  case 253: /* PostIncrementExpression: PostfixExpression PlusPlus  */
#line 2106 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("++", memArr, 1, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        E[2] = (yyvsp[-1].exp);
        E[3] = makeleaf("+");
        buildTAC(E,4,BINARY_CODE);
    }
#line 5037 "bin/parser.tab.cc"
    break;

  case 254: /* PostDecrementExpression: PostfixExpression MinusMinus  */
#line 2119 "src/parser.y"
                                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("--", memArr, 1, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        E[2] = (yyvsp[-1].exp);
        E[3] = makeleaf("-");
        buildTAC(E,4,BINARY_CODE);
    }
#line 5053 "bin/parser.tab.cc"
    break;

  case 255: /* UnaryExpression: PreIncrementExpression  */
#line 2132 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5061 "bin/parser.tab.cc"
    break;

  case 256: /* UnaryExpression: PreDecrementExpression  */
#line 2135 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5069 "bin/parser.tab.cc"
    break;

  case 257: /* UnaryExpression: Addition UnaryExpression  */
#line 2138 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("+", memArr, 1, 1);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        E[2] = makeleaf((yyvsp[-1].data));
        buildTAC(E,3,UNARY_CODE);

    }
#line 5085 "bin/parser.tab.cc"
    break;

  case 258: /* UnaryExpression: Substraction UnaryExpression  */
#line 2149 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("-", memArr, 1, 1);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        E[2] = makeleaf((yyvsp[-1].data));
        buildTAC(E,3,UNARY_CODE);
    }
#line 5100 "bin/parser.tab.cc"
    break;

  case 259: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 2159 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5108 "bin/parser.tab.cc"
    break;

  case 260: /* PreIncrementExpression: PlusPlus UnaryExpression  */
#line 2164 "src/parser.y"
                             {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("++", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf("+");
        buildTAC(E,4,BINARY_CODE);
    }
#line 5125 "bin/parser.tab.cc"
    break;

  case 261: /* PreDecrementExpression: MinusMinus UnaryExpression  */
#line 2178 "src/parser.y"
                               {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("--", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf("-");
        buildTAC(E,4,BINARY_CODE);
    }
#line 5142 "bin/parser.tab.cc"
    break;

  case 262: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 2192 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5150 "bin/parser.tab.cc"
    break;

  case 263: /* UnaryExpressionNotPlusMinus: Tilde UnaryExpression  */
#line 2195 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("~", memArr, 1, 1);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        E[2] = makeleaf((yyvsp[-1].data));
        buildTAC(E,3,UNARY_CODE);
    }
#line 5165 "bin/parser.tab.cc"
    break;

  case 264: /* UnaryExpressionNotPlusMinus: NotOperator UnaryExpression  */
#line 2205 "src/parser.y"
                                  {
         struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("!", memArr, 1, 1);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        E[2] = makeleaf((yyvsp[-1].data));
        buildTAC(E,3,UNARY_CODE);
    }
#line 5180 "bin/parser.tab.cc"
    break;

  case 265: /* UnaryExpressionNotPlusMinus: CastExpression  */
#line 2215 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5188 "bin/parser.tab.cc"
    break;

  case 266: /* CastExpression: LeftParanthesis PrimitiveType Dims_opt RightParanthesis UnaryExpression  */
#line 2220 "src/parser.y"
                                                                            {
        struct  node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        char * str = concatenate_string((yyvsp[-3].exp)->data, (yyvsp[-2].exp)->data);
        (yyval.exp) = makeInternalNode(str, memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E,2,COPY_CODE);
    }
#line 5203 "bin/parser.tab.cc"
    break;

  case 267: /* CastExpression: LeftParanthesis Expression RightParanthesis UnaryExpressionNotPlusMinus  */
#line 2230 "src/parser.y"
                                                                              {
        struct  node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CastExpression", memArr, 2, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E,2,COPY_CODE);
    }
#line 5218 "bin/parser.tab.cc"
    break;

  case 268: /* CastExpression: LeftParanthesis Name Dims RightParanthesis UnaryExpressionNotPlusMinus  */
#line 2240 "src/parser.y"
                                                                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        char * str = concatenate_string((yyvsp[-3].exp)->data, (yyvsp[-2].exp)->data);
        (yyval.exp) = makeInternalNode(str, memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E,2,COPY_CODE);
    }
#line 5233 "bin/parser.tab.cc"
    break;

  case 269: /* MultiplicativeExpression: UnaryExpression  */
#line 2252 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5241 "bin/parser.tab.cc"
    break;

  case 270: /* MultiplicativeExpression: MultiplicativeExpression Product UnaryExpression  */
#line 2255 "src/parser.y"
                                                       {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("*", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5258 "bin/parser.tab.cc"
    break;

  case 271: /* MultiplicativeExpression: MultiplicativeExpression Divide UnaryExpression  */
#line 2267 "src/parser.y"
                                                      {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("/", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5275 "bin/parser.tab.cc"
    break;

  case 272: /* MultiplicativeExpression: MultiplicativeExpression Modulo UnaryExpression  */
#line 2279 "src/parser.y"
                                                      {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Modulo", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5292 "bin/parser.tab.cc"
    break;

  case 273: /* AdditiveExpression: MultiplicativeExpression  */
#line 2293 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5300 "bin/parser.tab.cc"
    break;

  case 274: /* AdditiveExpression: AdditiveExpression Addition MultiplicativeExpression  */
#line 2296 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("+", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5317 "bin/parser.tab.cc"
    break;

  case 275: /* AdditiveExpression: AdditiveExpression Substraction MultiplicativeExpression  */
#line 2308 "src/parser.y"
                                                               {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("-", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5334 "bin/parser.tab.cc"
    break;

  case 276: /* ShiftExpression: AdditiveExpression  */
#line 2322 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5342 "bin/parser.tab.cc"
    break;

  case 277: /* ShiftExpression: ShiftExpression LeftShit AdditiveExpression  */
#line 2325 "src/parser.y"
                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<<", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5359 "bin/parser.tab.cc"
    break;

  case 278: /* ShiftExpression: ShiftExpression RightShift AdditiveExpression  */
#line 2337 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">>", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5376 "bin/parser.tab.cc"
    break;

  case 279: /* ShiftExpression: ShiftExpression TripleGreaterThan AdditiveExpression  */
#line 2349 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">>>", memArr, 2, 1);
       struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5393 "bin/parser.tab.cc"
    break;

  case 280: /* RelationalExpression: ShiftExpression  */
#line 2363 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5401 "bin/parser.tab.cc"
    break;

  case 281: /* RelationalExpression: RelationalExpression LessThan ShiftExpression  */
#line 2366 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">", memArr, 2, 1); 
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5418 "bin/parser.tab.cc"
    break;

  case 282: /* RelationalExpression: RelationalExpression GreaterThan ShiftExpression  */
#line 2378 "src/parser.y"
                                                       {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5435 "bin/parser.tab.cc"
    break;

  case 283: /* RelationalExpression: RelationalExpression LessThanEqualTo ShiftExpression  */
#line 2390 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<=", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5452 "bin/parser.tab.cc"
    break;

  case 284: /* RelationalExpression: RelationalExpression GreaterThanEqualTo ShiftExpression  */
#line 2402 "src/parser.y"
                                                              {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">=", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5469 "bin/parser.tab.cc"
    break;

  case 285: /* RelationalExpression: RelationalExpression Instanceof ReferenceType  */
#line 2414 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Instanceof", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5486 "bin/parser.tab.cc"
    break;

  case 286: /* EqualityExpression: RelationalExpression  */
#line 2428 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5494 "bin/parser.tab.cc"
    break;

  case 287: /* EqualityExpression: EqualityExpression EqualToEqualTo RelationalExpression  */
#line 2431 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("==", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5511 "bin/parser.tab.cc"
    break;

  case 288: /* EqualityExpression: EqualityExpression NotEqualTo RelationalExpression  */
#line 2443 "src/parser.y"
                                                         {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("!=", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5528 "bin/parser.tab.cc"
    break;

  case 289: /* AndExpression: EqualityExpression  */
#line 2457 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5536 "bin/parser.tab.cc"
    break;

  case 290: /* AndExpression: AndExpression BitwiseAnd EqualityExpression  */
#line 2460 "src/parser.y"
                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("&", memArr, 2 ,1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5553 "bin/parser.tab.cc"
    break;

  case 291: /* ExclusiveOrExpression: AndExpression  */
#line 2474 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5561 "bin/parser.tab.cc"
    break;

  case 292: /* ExclusiveOrExpression: ExclusiveOrExpression CircumFlex AndExpression  */
#line 2477 "src/parser.y"
                                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("xor", memArr, 2 ,1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5578 "bin/parser.tab.cc"
    break;

  case 293: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 2491 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5586 "bin/parser.tab.cc"
    break;

  case 294: /* InclusiveOrExpression: InclusiveOrExpression BitwiseOr ExclusiveOrExpression  */
#line 2494 "src/parser.y"
                                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("|", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5603 "bin/parser.tab.cc"
    break;

  case 295: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 2508 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5611 "bin/parser.tab.cc"
    break;

  case 296: /* ConditionalAndExpression: ConditionalAndExpression AndOperator InclusiveOrExpression  */
#line 2511 "src/parser.y"
                                                                 {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("&&", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5628 "bin/parser.tab.cc"
    break;

  case 297: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 2525 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5636 "bin/parser.tab.cc"
    break;

  case 298: /* ConditionalOrExpression: ConditionalOrExpression OrOperator ConditionalAndExpression  */
#line 2528 "src/parser.y"
                                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("||", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 5653 "bin/parser.tab.cc"
    break;

  case 299: /* ConditionalExpression: ConditionalOrExpression  */
#line 2542 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5661 "bin/parser.tab.cc"
    break;

  case 300: /* ConditionalExpression: ConditionalOrExpression QuestionMark Expression Colon ConditionalExpression  */
#line 2545 "src/parser.y"
                                                                                  {
        struct node* memArr[3];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("TernaryOperator", memArr, 3, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-4].exp);
        E[2] = (yyvsp[-2].exp);
        E[3] = (yyvsp[0].exp);
        buildTAC(E, 4, IF_CODE);
    }
#line 5679 "bin/parser.tab.cc"
    break;

  case 301: /* AssignmentExpression: ConditionalExpression  */
#line 2560 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5687 "bin/parser.tab.cc"
    break;

  case 302: /* AssignmentExpression: Assignment  */
#line 2563 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5695 "bin/parser.tab.cc"
    break;

  case 303: /* Assignment: LeftHandSide AssignmentOperator AssignmentExpression  */
#line 2568 "src/parser.y"
                                                         {
    struct node* memArr[2];
    memArr[0] = (yyvsp[-2].exp);
    memArr[1] = (yyvsp[0].exp);
    (yyval.exp) = makeInternalNode("=", memArr, 2, 1);
    struct node* E[2];
    E[0] = (yyvsp[-2].exp);
    E[1] = (yyvsp[0].exp);
    buildTAC(E, 2, ASSIGN_CODE);
    E[0] = (yyval.exp);
    E[1] = (yyvsp[-2].exp);
    buildTAC(E, 2, ASSIGN_CODE);
}
#line 5713 "bin/parser.tab.cc"
    break;

  case 304: /* LeftHandSide: Name  */
#line 2583 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5721 "bin/parser.tab.cc"
    break;

  case 305: /* LeftHandSide: FieldAccess  */
#line 2586 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5729 "bin/parser.tab.cc"
    break;

  case 306: /* LeftHandSide: ArrayAccess  */
#line 2589 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5737 "bin/parser.tab.cc"
    break;

  case 307: /* AssignmentOperator: EqualTo  */
#line 2594 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5745 "bin/parser.tab.cc"
    break;

  case 308: /* AssignmentOperator: ProductEqualTo  */
#line 2597 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5753 "bin/parser.tab.cc"
    break;

  case 309: /* AssignmentOperator: DivideEqualTo  */
#line 2600 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5761 "bin/parser.tab.cc"
    break;

  case 310: /* AssignmentOperator: ModuloEqualTo  */
#line 2603 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5769 "bin/parser.tab.cc"
    break;

  case 311: /* AssignmentOperator: AdditionEqualTo  */
#line 2606 "src/parser.y"
                      {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5777 "bin/parser.tab.cc"
    break;

  case 312: /* AssignmentOperator: SubstractionEqualTo  */
#line 2609 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5785 "bin/parser.tab.cc"
    break;

  case 313: /* AssignmentOperator: LeftShitEqualTo  */
#line 2612 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5793 "bin/parser.tab.cc"
    break;

  case 314: /* AssignmentOperator: RightShiftEqualTo  */
#line 2615 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5801 "bin/parser.tab.cc"
    break;

  case 315: /* AssignmentOperator: TripleGreaterThanEqualTo  */
#line 2618 "src/parser.y"
                                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5809 "bin/parser.tab.cc"
    break;

  case 316: /* AssignmentOperator: BitWiseAndEqualTo  */
#line 2621 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5817 "bin/parser.tab.cc"
    break;

  case 317: /* AssignmentOperator: CircumFlexEqualTo  */
#line 2624 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5825 "bin/parser.tab.cc"
    break;

  case 318: /* AssignmentOperator: BitWiseOrEqualTo  */
#line 2627 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5833 "bin/parser.tab.cc"
    break;

  case 319: /* Expression: AssignmentExpression  */
#line 2631 "src/parser.y"
                                 {
    (yyval.exp) = (yyvsp[0].exp);
}
#line 5841 "bin/parser.tab.cc"
    break;


#line 5845 "bin/parser.tab.cc"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 2636 "src/parser.y"



int yyerror(string s)
{
    //printf("Error detected ! %s at [ line number: %lld ] after removing the comments.\nExiting...\n",s,line_number);
    cout << s <<endl <<endl;
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
    /*
    c[j] = ' ';
    j++;
    */
    for (i = 0; s1[i] != '\0'; i++) {
        c[i+j] = s1[i];
     }
 
    c[i + j] = '\0';
 
    return c;
}


struct node* makeleaf(char nodeStr[100]){
    //printf("%s\n",nodeStr);
    // cout << nodeStr <<" make leaf node\n";
    struct node* leaf = new struct node;
    (leaf->symbol).structuretable = new struct StructureTable;
    strcpy(leaf->data, nodeStr);
    leaf->parentFlag = 1;
    leaf->isDeclaration = NON_DECLARAION;
    leaf->lineNumber = line_number;
    leaf->symbol.line_num = line_number;
    leaf->t = 0;
    leaf->arr.clear();
    leaf->symbol.type.modifier.clear();
    //leaf->symbol.place = 0;
    // cout << nodeStr <<" exit leaf node\n";

    return leaf;
}

struct node* makeInternalNode(char rule[100], struct node* memArr[], int n, int isParent){
    // cout << rule <<" make internal node\n";
    struct node* internalNode = new struct node;
    (internalNode->symbol).structuretable = new struct StructureTable;
    strcpy(internalNode->data,rule);
    internalNode->arr.clear();

    // for(int i = 0; i<N_NodeChild; i++){
    //     internalNode->arr[i] = NULL;
    // }
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
    //internalNode->symbol.place = 0;
    // cout << rule <<" exit internal node\n";

    return internalNode;

}


void ast_print(struct node* root, long long int d, long long int n){

    if(root == NULL){
        return;
    }

    //printf("%s",string(root->data));
    //cout <<root->arr.size() << "  ";
    cout << root->data;
    //cout << "hghg";
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
        //cout << "Graph is empty !!\n\n";
        return;
    }

    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        struct node * head = q.front();
        q.pop();
        fprintf(graph,"Node%d [label =\"%s\"]\n",nnode, head->data);
        //printf("Node%d [label =\"%s\"]\n",nnode, head->data);
        //cout<<head->data <<endl;
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
        //printf("Node%d -> {",nnode);
        int k = 0;
        int l = 0;
        for(; head!=NULL && l < head->arr.size(); l++){
            if(head->arr[l]!=NULL){
                k++;
                fprintf(graph,"Node%d",prevChild+0+1);
                //printf("Node%d",prevChild+0+1);
                q.push(head->arr[l]);
                l++;
                break;
            }
        }
        for(int i = l; head!=NULL && i<head->arr.size(); i++){
            if(head->arr[i]!=NULL){
                k++;
                fprintf(graph,",Node%d",prevChild+i+1);
                //printf(",Node%d",prevChild+i+1);
                q.push(head->arr[i]);
            }
            
        }
        fprintf(graph,"}\n");
        //printf("}\n");
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

    if(yyin == NULL){
        printf("No such Input file found ! \n");
        return 0;
    }

    yyparse();

    //viewGlobal(glob_table);

    //ast_print(root,0,0);
    int limit = root->val.code.size()/2;
    for(int iter = 0; iter < limit; iter++)
        cout << root->val.code[iter]<<endl;
    FILE* graph = fopen(output_file,"w");
    fprintf(graph, "digraph AST{ \n");
    generateGraph(root, graph);
    fprintf(graph, "} \n");
    fclose(graph);
    fclose(yyin);

    return 0;

}



