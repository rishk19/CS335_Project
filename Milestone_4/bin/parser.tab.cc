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


#line 110 "bin/parser.tab.cc"

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
  YYSYMBOL_HexDecimalFloatingPointLiteral = 75, /* HexDecimalFloatingPointLiteral  */
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
  YYSYMBOL_Class_Name_Extractor = 164,     /* Class_Name_Extractor  */
  YYSYMBOL_ClassDeclaration = 165,         /* ClassDeclaration  */
  YYSYMBOL_Modifiers_opt = 166,            /* Modifiers_opt  */
  YYSYMBOL_ClassExtend_opt = 167,          /* ClassExtend_opt  */
  YYSYMBOL_Interfaces_opt = 168,           /* Interfaces_opt  */
  YYSYMBOL_ClassExtend = 169,              /* ClassExtend  */
  YYSYMBOL_Interfaces = 170,               /* Interfaces  */
  YYSYMBOL_InterfaceTypeList = 171,        /* InterfaceTypeList  */
  YYSYMBOL_ClassBody = 172,                /* ClassBody  */
  YYSYMBOL_ClassBodyDeclarations_opt = 173, /* ClassBodyDeclarations_opt  */
  YYSYMBOL_ClassBodyDeclarations = 174,    /* ClassBodyDeclarations  */
  YYSYMBOL_ClassBodyDeclaration = 175,     /* ClassBodyDeclaration  */
  YYSYMBOL_ClassMemberDeclaration = 176,   /* ClassMemberDeclaration  */
  YYSYMBOL_FieldDeclaration = 177,         /* FieldDeclaration  */
  YYSYMBOL_VariableDeclarators = 178,      /* VariableDeclarators  */
  YYSYMBOL_VariableDeclarator = 179,       /* VariableDeclarator  */
  YYSYMBOL_VariableDeclaratorId = 180,     /* VariableDeclaratorId  */
  YYSYMBOL_VariableInitializer = 181,      /* VariableInitializer  */
  YYSYMBOL_MethodDeclaration = 182,        /* MethodDeclaration  */
  YYSYMBOL_MethodHeader = 183,             /* MethodHeader  */
  YYSYMBOL_Throws_opt = 184,               /* Throws_opt  */
  YYSYMBOL_MethodDeclarator = 185,         /* MethodDeclarator  */
  YYSYMBOL_FormalParameterList_opt = 186,  /* FormalParameterList_opt  */
  YYSYMBOL_FormalParameterList = 187,      /* FormalParameterList  */
  YYSYMBOL_FormalParameter = 188,          /* FormalParameter  */
  YYSYMBOL_Throws = 189,                   /* Throws  */
  YYSYMBOL_ClassTypeList = 190,            /* ClassTypeList  */
  YYSYMBOL_MethodBody = 191,               /* MethodBody  */
  YYSYMBOL_StaticInitializer = 192,        /* StaticInitializer  */
  YYSYMBOL_ConstructorDeclaration = 193,   /* ConstructorDeclaration  */
  YYSYMBOL_ConstructorDeclarator = 194,    /* ConstructorDeclarator  */
  YYSYMBOL_ConstructorBody = 195,          /* ConstructorBody  */
  YYSYMBOL_ExplicitConstructorInvocation_opt = 196, /* ExplicitConstructorInvocation_opt  */
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
#define YYLAST   1444

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  134
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  153
/* YYNRULES -- Number of rules.  */
#define YYNRULES  317
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  520

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
       0,   127,   127,   134,   137,   143,   155,   162,   168,   177,
     184,   190,   198,   201,   206,   209,   217,   220,   225,   231,
     237,   243,   249,   257,   263,   271,   274,   279,   292,   297,
     302,   308,   315,   324,   327,   332,   341,   347,   361,   364,
     371,   376,   384,   387,   399,   409,   423,   426,   431,   436,
     439,   444,   449,   454,   457,   460,   465,   470,   478,   481,
     484,   487,   490,   493,   496,   499,   502,   505,   509,   540,
     552,   555,   561,   564,   568,   571,   576,   581,   590,   595,
     603,   611,   614,   628,   638,   651,   654,   657,   662,   673,
     679,   861,   871,   884,   895,   923,   929,   937,   940,   946,
    1088,  1148,  1211,  1214,  1221,  1243,  1255,  1258,  1270,  1280,
    1293,  1329,  1336,  1341,  1350,  1353,  1359,  1371,  1402,  1438,
    1450,  1484,  1487,  1501,  1511,  1514,  1521,  1526,  1534,  1538,
    1541,  1548,  1553,  1561,  1565,  1571,  1576,  1581,  1585,  1588,
    1598,  1601,  1606,  1615,  1628,  1633,  1638,  1643,  1646,  1657,
    1666,  1680,  1689,  1701,  1712,  1793,  1799,  1802,  1805,  1808,
    1811,  1816,  1819,  1822,  1825,  1828,  1833,  1839,  1842,  1849,
    1852,  1855,  1858,  1861,  1864,  1869,  1874,  1888,  1902,  1910,
    1914,  1917,  1920,  1923,  1926,  1929,  1934,  1947,  1965,  1983,
    1999,  2013,  2034,  2052,  2055,  2066,  2069,  2081,  2084,  2095,
    2104,  2117,  2128,  2140,  2153,  2161,  2163,  2169,  2178,  2236,
    2243,  2251,  2257,  2265,  2268,  2275,  2280,  2288,  2296,  2303,
    2306,  2311,  2314,  2325,  2328,  2331,  2334,  2337,  2366,  2415,
    2425,  2438,  2466,  2482,  2485,  2490,  2495,  2503,  2510,  2513,
    2518,  2551,  2557,  2611,  2621,  2632,  2679,  2728,  2731,  2741,
    2744,  2749,  2804,  2857,  2860,  2863,  2883,  2902,  2907,  2952,
    2998,  3001,  3018,  3036,  3041,  3051,  3061,  3073,  3076,  3105,
    3134,  3165,  3168,  3197,  3228,  3234,  3257,  3279,  3302,  3308,
    3336,  3365,  3394,  3423,  3437,  3443,  3470,  3499,  3505,  3529,
    3532,  3557,  3560,  3585,  3591,  3615,  3621,  3647,  3653,  3668,
    3674,  3679,  3734,  3744,  3747,  3780,  3784,  3788,  3792,  3796,
    3800,  3804,  3808,  3812,  3816,  3820,  3824,  3829
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
  "HexDecimalFloatingPointLiteral", "FloatingPointLiteral",
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
  "Modifier", "Class_Name_Extractor", "ClassDeclaration", "Modifiers_opt",
  "ClassExtend_opt", "Interfaces_opt", "ClassExtend", "Interfaces",
  "InterfaceTypeList", "ClassBody", "ClassBodyDeclarations_opt",
  "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "VariableDeclarators",
  "VariableDeclarator", "VariableDeclaratorId", "VariableInitializer",
  "MethodDeclaration", "MethodHeader", "Throws_opt", "MethodDeclarator",
  "FormalParameterList_opt", "FormalParameterList", "FormalParameter",
  "Throws", "ClassTypeList", "MethodBody", "StaticInitializer",
  "ConstructorDeclaration", "ConstructorDeclarator", "ConstructorBody",
  "ExplicitConstructorInvocation_opt", "ArgumentList_opt",
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

#define YYPACT_NINF (-452)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-305)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      82,    47,   128,  -452,    89,  -452,  -452,   -10,  -452,  -452,
    -452,    47,   707,    89,  -452,  -452,  -452,  -452,    64,    13,
    -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,  -452,  1256,  -452,  1351,  -452,  -452,  -452,     6,  -452,
    -452,  -452,  -452,   -39,  -452,  -452,    53,    69,    76,    79,
     161,  -452,   119,   135,  -452,   104,   116,    93,   601,  -452,
    -452,  -452,  -452,   -47,  -452,  -452,  -452,    47,   107,   125,
      47,   178,  -452,   133,  -452,  -452,  -452,  -452,  -452,  -452,
     148,  -452,  -452,   152,   134,  -452,  -452,  -452,  -452,  -452,
     137,   -27,   138,   191,  -452,  -452,   856,  -452,  -452,  -452,
    -452,  -452,   150,  1302,  -452,    47,  -452,  -452,    47,  -452,
    -452,  -452,  -452,   -16,   138,    25,  -452,    15,   -16,   143,
     146,   151,   157,    47,   160,  -452,   177,  -452,   948,  -452,
     162,  -452,   177,  1144,  1144,   133,   168,  -452,  -452,  -452,
     163,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  1144,  1144,
    1144,  -452,  -452,   185,    75,  -452,   172,   856,  -452,  -452,
     173,  -452,  -452,  -452,  -452,  -452,   176,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,  -452,  -452,  -452,   171,  -452,   -59,
    -452,   442,   -49,   385,    36,    65,    68,  -452,  -452,  -452,
     555,  -452,  -452,   116,  -452,   179,   183,  1319,  -452,  -452,
    -452,  -452,  -452,   180,  -452,   182,   187,  -452,   185,  -452,
     190,   214,  -452,  -452,  -452,  -452,   948,  -452,   181,  -452,
    -452,  -452,   186,   189,   198,   198,   203,   205,  1144,   188,
     919,  1144,  1144,  1144,  1144,  1303,  -452,  -452,    36,  -452,
    -452,  -452,  -452,  -452,  -452,  -452,   -69,    95,   -34,    -6,
      -3,   158,   184,   195,   192,   -62,  -452,  -452,  -452,   208,
     209,  -452,   251,   230,   224,   984,   225,    29,  -452,   227,
    -452,  -452,  -452,   232,  1144,  1054,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,   248,  1144,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    1144,  -452,  -452,  -452,    47,   948,  -452,  -452,  -452,   214,
    -452,  -452,  -452,   185,   236,   245,  -452,    47,   856,  -452,
    -452,  1209,  1144,   238,  -452,   238,  1144,  1144,   241,  -452,
     242,  1314,   247,  -452,  -452,  -452,  -452,  1144,  1144,  1144,
    1144,  1144,  1144,  1144,  1144,  1144,   948,  1144,  1144,  1144,
    1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,  -452,
    -452,   246,   296,   -14,  -452,   274,  1144,  -452,  -452,   276,
     285,  -452,   277,   282,   280,  -452,  -452,   284,  -452,   291,
     293,   286,  -452,   948,  -452,   294,  -452,  -452,   292,  -452,
     298,   299,  1100,  -452,  -452,   295,  -452,   301,   303,   133,
     302,   304,  1100,    32,  1236,  -452,  -452,  -452,   -69,   -69,
      95,    95,    95,   134,  -452,   -34,   -34,   -34,   -34,    -6,
      -6,    -3,   158,   184,   195,   300,   192,   948,   133,  -452,
    -452,  1144,   306,  -452,  1144,  -452,  1144,  -452,  -452,  -452,
     312,   214,  -452,  -452,  1144,   554,  -452,  -452,   309,  -452,
    1012,  -452,  1144,  1236,  -452,  1144,   315,  -452,   319,   984,
    -452,   320,  -452,  -452,   297,  -452,  -452,  -452,  -452,  -452,
     327,  -452,   344,   345,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,   133,  -452,  -452,  -452,   554,   310,   329,   330,  1012,
     984,  -452,  -452,  -452,  -452,   331,  -452,   298,  1209,  1144,
    1144,  -452,  -452,   984,   336,   334,   338,  -452,  1144,  1012,
    1012,   342,   389,  -452,   554,  1012,   348,  -452,  1012,  -452
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      46,     0,     0,     2,    38,    47,    35,     0,    33,    34,
       1,     0,    70,    39,    40,    49,    50,    48,     0,     0,
      62,    65,    60,    59,    58,    66,    63,    61,    67,    64,
      55,    37,    70,    44,    71,    56,   145,    53,     0,    54,
      41,    36,    51,     0,    45,    57,     0,     0,     0,     0,
      70,   146,   124,    72,    52,    61,     0,     0,    70,    83,
      85,    88,    89,     0,    86,    87,    69,     0,     0,   125,
       0,    74,    73,     0,    15,    24,    18,    20,    19,    22,
       0,    21,    23,     0,    12,    14,    16,    17,    13,    25,
      26,    27,    33,   102,    80,    84,   147,   146,    99,   146,
      29,   126,    27,    70,   123,     0,    28,    76,     0,    68,
      75,   146,   145,   102,    95,     0,    91,    93,   102,     0,
       0,     0,     0,     0,     0,   103,   205,   145,     0,   145,
       0,   222,   205,     0,   195,     0,     0,   145,     5,     8,
      35,     9,    10,    11,     4,     6,     7,   175,     0,     0,
       0,   221,     3,     0,   302,   166,     0,   148,   149,   151,
       0,   152,   155,   167,   156,   168,     0,   146,   146,   146,
     146,   169,   170,   171,   173,   172,   174,   247,   219,   185,
     220,   225,   184,   227,     0,   182,   183,   180,   181,   179,
       0,   115,   114,     0,   135,     0,     0,    70,   131,   133,
     134,   127,    78,    77,   116,     0,     0,   101,     0,    90,
       0,     0,   100,    30,    32,    31,   106,   112,   111,   120,
     146,   206,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,   224,   226,   260,   249,
     250,   267,   253,   254,   257,   263,   271,   274,   278,   284,
     287,   289,   291,   293,   295,   297,   299,   317,   300,     0,
       0,   196,   213,     0,     0,     0,     0,   248,   225,   227,
     258,   259,    95,   154,   121,     0,   144,   150,   153,   178,
     157,   158,   159,   160,     0,     0,   251,   252,   305,   309,
     310,   306,   307,   314,   316,   315,   308,   311,   312,   313,
       0,   136,   128,   132,     0,   106,   105,    92,    96,   138,
      94,    98,    97,     0,     0,   107,   108,     0,   147,   117,
     207,   193,     0,   233,   235,   233,   121,     0,     0,   204,
     233,   248,     0,   262,   261,   255,   256,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   209,
     208,     0,     0,   211,   215,   241,     0,   176,   223,     0,
     122,   229,     0,   240,     0,   301,    79,     0,   142,   140,
     139,   110,   118,     0,   113,     0,   200,   202,     0,   194,
     199,     0,     0,   231,   236,   234,   232,     0,     0,     0,
       0,     0,     0,     0,   223,   268,   269,   270,   272,   273,
     275,   276,   277,     0,   283,   282,   281,   280,   279,   285,
     286,   288,   290,   292,   294,     0,   296,     0,     0,   212,
     216,   121,     0,   242,     0,   245,   121,   246,   104,   141,
       0,     0,   109,   119,   195,     0,   237,   238,     0,   228,
       0,   210,     0,     0,   265,     0,     0,   218,     0,     0,
     230,     0,   137,   143,     0,   203,   239,   145,   145,   145,
      35,   186,     0,   155,   162,   146,   146,   146,   264,   266,
     298,     0,   244,   189,   243,   197,     0,     0,     0,     0,
       0,   163,   164,   165,   217,     0,   198,   201,   193,     0,
       0,   177,   187,     0,     0,     0,     0,   191,   195,     0,
       0,     0,     0,   190,   197,     0,     0,   188,     0,   192
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -452,  -452,  -452,  -452,   -52,  -125,  -452,  -452,  -452,    92,
     -37,  -115,   -93,  -452,    -1,   387,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,   428,  -452,  -452,   416,  -452,   422,
    -452,  -452,   -36,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,   392,  -452,   -82,   308,   249,   149,  -291,  -452,   -78,
     -68,   376,   174,  -452,  -357,  -452,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,  -307,  -452,  -452,  -452,  -452,  -452,  -452,
     266,  -452,  -452,  -452,  -452,  -452,  -452,   -32,   -35,   -88,
     164,  -452,   311,  -452,  -319,  -249,  -183,  -376,  -452,  -452,
    -452,  -452,  -314,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
     -20,  -415,   -33,  -452,  -452,  -451,  -452,   351,  -452,  -452,
    -452,  -452,  -452,  -452,  -452,   121,  -452,  -452,  -452,   -79,
    -452,  -452,  -269,   261,  -271,   165,   461,   -45,   498,   -43,
      40,    42,  -144,    94,   156,  -380,  -452,  -135,  -191,  -190,
    -139,   136,   139,   140,   132,   142,  -452,    39,   202,   268,
    -452,  -452,   388
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   151,   152,   153,    84,    85,    86,    87,    88,
      89,   107,   101,    90,   235,     8,     9,     3,    12,    13,
      31,    32,     4,     5,    14,    15,    16,    33,    34,    35,
      36,    37,    38,    71,   109,    72,   110,   203,    51,    57,
      58,    59,    60,    61,   115,   116,   117,   310,    62,    63,
     124,   113,   314,   315,   316,   125,   218,    98,    64,    65,
      93,   220,   318,   369,    39,    68,    69,   104,   196,   197,
     198,   199,   200,   311,   379,   440,   380,   155,   205,    66,
     156,   157,   158,   159,   160,   161,   472,   162,   163,   164,
     474,   165,   166,   167,   168,   475,   169,   476,   170,   477,
     388,   260,   495,   389,   496,   390,   171,   222,   172,   173,
     174,   175,   176,   362,   363,   364,   429,   177,   178,   236,
     370,   180,   393,   323,   324,   395,   181,   237,   183,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     190,   300,   371
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    46,   386,   224,    83,   270,   271,   387,   217,   191,
      19,   192,   201,   226,    56,   202,   367,   179,   378,   397,
      73,   194,    56,   204,   454,   195,   442,   123,  -224,   464,
     100,    99,    41,   106,   497,   361,   357,    96,  -226,    97,
     346,   111,   338,   339,   358,   207,  -214,   340,  -224,  -224,
     212,   182,   394,   184,   394,    91,   396,   122,  -226,  -226,
      18,   401,    47,   497,   121,    48,   102,   193,   100,   102,
     456,   100,    49,   479,   473,   206,    17,    18,   179,   280,
     281,   282,   283,   343,   344,   345,   106,   333,   334,   335,
     336,   225,   223,   511,   227,   154,   347,   348,   351,    42,
      43,   352,   264,   262,   102,   330,   210,   102,   208,     1,
     211,   209,   182,   473,   184,   194,    18,   274,     6,   195,
     337,   453,   102,   448,   458,   349,   350,   102,    10,   461,
      11,   465,   319,   473,   473,    41,   185,    50,   186,   473,
      52,    83,   473,   286,   287,    74,   -27,    53,   267,   267,
     463,    75,   410,   411,   412,    76,   154,   415,   416,   417,
     418,   193,    18,   274,   313,    54,   275,    77,    78,    67,
      79,   387,  -249,  -249,    80,  -250,  -250,    81,    94,   386,
      20,    82,  -248,  -248,   387,    70,   179,     6,  -145,    21,
     187,   103,    91,    22,   405,   406,   407,   185,    23,   186,
     387,   471,   384,    24,   341,   342,   408,   409,   105,    25,
     483,   376,   419,   420,   108,    91,    26,    96,    55,   112,
     182,   413,   184,   114,    28,   119,  -145,    29,   120,   331,
     267,   267,   267,   267,   123,   213,   128,    18,   214,   179,
     367,   502,   179,   215,   219,   216,   -81,   131,   221,   265,
     228,   187,   188,   313,   507,   263,   272,   276,   284,   278,
     471,   483,   279,   304,   317,   301,   502,   100,   302,   507,
     305,   353,   320,   182,   329,   184,   182,   321,   184,   306,
     106,   136,   308,   138,   139,     6,   141,   142,   143,   322,
     144,   326,   145,   327,   359,   360,   146,   356,   309,   354,
     361,   365,   230,   102,    91,   185,   501,   186,   478,   355,
     231,   232,   366,   188,   368,   208,   102,   154,   285,   373,
     154,   149,   150,   233,   234,   382,   512,   513,   383,   392,
     399,   313,   517,   400,   427,   519,   404,   267,   267,   267,
     267,   267,   267,   267,   267,    91,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   428,   267,   185,   187,
     186,   185,   431,   186,   189,   433,   179,   451,   434,   435,
     436,   179,   437,   438,   439,   313,   441,   210,   444,   443,
     179,   445,    91,   485,   490,  -161,   448,   491,   492,   493,
     449,   446,   450,   452,   447,   459,   457,   462,   498,   455,
     182,   466,   184,   267,   481,   182,   179,   184,   482,   484,
     179,   179,   187,   489,   182,   187,   184,   499,   500,   179,
     503,   188,   508,   509,   179,   189,    91,   510,   514,   515,
     179,   179,   486,   487,   488,   179,   179,   518,   414,   179,
     182,    40,   184,    92,   182,   182,   184,   184,    44,   494,
      95,   267,   267,   182,   267,   184,    45,   307,   182,   118,
     184,   273,   381,   303,   182,   182,   184,   184,   277,   182,
     182,   184,   184,   182,   188,   184,   285,   188,   504,   377,
    -304,   516,   385,   229,   430,   185,   325,   186,   424,   421,
     185,     0,   186,   422,   480,   423,   403,   154,     0,   185,
     426,   186,   375,     0,     0,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,     0,     0,     0,     0,
       0,   259,   261,     0,     0,   185,     0,   186,     0,   185,
     185,   186,   186,   189,     0,     0,   266,  -303,   185,   187,
     186,     0,     0,   185,   187,   186,     0,     0,     0,   185,
     185,   186,   186,   187,   185,   185,   186,   186,   185,     0,
     186,     0,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,     0,     0,     0,   128,     0,     0,   187,
       0,     0,     0,   187,   187,     0,   189,   131,     0,   189,
       0,     0,   187,     0,     0,     0,     0,   187,     0,   312,
       0,   188,     0,   187,   187,     0,   188,     0,   187,   187,
     268,   268,   187,     0,     0,   188,   328,     0,   332,     0,
      20,   136,     0,   138,   139,     6,   141,   142,   143,    21,
     144,     0,   145,    22,     0,     0,   146,     0,    23,     0,
       0,   188,   148,    24,     0,   188,   188,   269,   269,    25,
     288,     0,     0,     0,   188,     0,    26,     0,    55,   188,
       0,   149,   150,   372,    28,   188,   188,    29,     0,     0,
     188,   188,     0,   374,   188,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   -82,     0,     0,     0,
       0,     0,   268,   268,   268,   268,     0,   312,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -42,     0,     0,
     391,     0,     0,   189,     0,   398,     0,     0,   189,     0,
       0,     0,     0,     0,     0,   372,    20,   189,     0,   269,
     269,   269,   269,     0,     0,    21,     0,     0,     0,    22,
       0,     0,     0,     0,    23,   425,     0,     0,     0,    24,
       0,     0,     0,   189,   432,    25,     0,   189,   189,     0,
       0,     0,    26,     0,    27,     0,   189,     0,     0,     0,
      28,   189,     0,    29,     0,     0,     0,   189,   189,     0,
     391,     0,   189,   189,     0,     0,   189,     0,     0,     0,
     372,     0,     0,    30,     0,     0,     0,     0,     0,   268,
     268,   268,   268,   268,   268,   268,   268,     0,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,     0,   268,
       0,     0,   460,     0,     0,     0,     0,     0,     0,   312,
       0,     0,   261,     0,     0,     0,   269,   269,   269,   269,
     269,   269,   269,   269,     0,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,     0,   269,     0,     0,     0,
       0,     0,     0,     0,     0,   268,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,   127,   128,     0,
       0,     0,   129,     0,   130,    74,     0,   505,   506,   131,
     132,    75,     0,     0,   133,    76,   261,     0,     0,     0,
       0,     0,   269,   134,     0,     0,     0,    77,    78,   135,
      79,     0,     0,   268,   268,     0,   268,    81,     0,     0,
       0,    82,     0,   136,   137,   138,   139,   140,   141,   142,
     143,     0,   144,     0,   145,     0,     0,     0,   146,     0,
      96,   128,   147,     0,   148,     0,     0,     0,    74,     0,
     269,   269,   131,   269,    75,     0,     0,     0,    76,     0,
       0,     0,     0,   149,   150,     0,     0,     0,     0,     0,
      77,    78,     0,    79,     0,     0,     0,    74,     0,     0,
      81,     0,     0,    75,    82,     0,   136,    76,   138,   139,
       6,   141,   142,   143,     0,   144,     0,   145,     0,    77,
      78,   146,    79,     0,   126,   127,   128,   230,     0,    81,
     129,     0,   130,    82,     0,   231,   232,   131,   132,     6,
       0,     0,   133,     0,     0,     0,   149,   150,   233,   234,
       0,   134,   126,   467,   128,     0,     0,   135,   468,     0,
     130,     0,     0,     0,     0,   131,   132,     0,     0,     0,
     133,   136,   137,   138,   139,   140,   141,   142,   143,   134,
     144,     0,   145,     0,     0,   135,   146,     0,    96,     0,
     147,     0,   148,     0,     0,     0,   128,     0,     0,   136,
     469,   138,   139,   470,   141,   142,   143,   131,   144,     0,
     145,   149,   150,     0,   146,     0,    96,     0,   147,     0,
     148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
     150,   136,   128,   138,   139,     6,   141,   142,   143,     0,
     144,     0,   145,   131,     0,     0,   146,     0,     0,     0,
       0,     0,   230,     0,     0,     0,   215,     0,     0,     0,
     231,   232,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   149,   150,   233,   234,     0,   128,   136,     0,   138,
     139,     6,   141,   142,   143,     0,   144,   131,   145,     0,
       0,     0,   146,     0,     0,     0,     0,     0,   230,     0,
       0,     0,   447,     0,     0,     0,   231,   232,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   149,   150,   233,
     234,   136,     0,   138,   139,     6,   141,   142,   143,     0,
     144,     0,   145,     0,     0,     0,   146,     0,     0,     0,
       0,   128,   230,     0,     0,     0,     0,     0,    74,     0,
     231,   232,   131,     0,    75,     0,     0,     0,    76,     0,
       0,   149,   150,   233,   234,     0,   -43,     0,   128,     0,
      77,    78,     0,    79,     0,     0,     0,     0,     0,   131,
      81,     0,     0,     0,    82,    20,   136,     0,   138,   139,
       6,   141,   142,   143,    21,   144,     0,   145,    22,     0,
       0,   146,     0,    23,     0,     0,     0,   148,    24,     0,
       0,     0,     0,   136,    25,   138,   139,     6,   141,   142,
     143,    26,   144,    27,   145,     0,   149,   150,   146,    28,
       0,    20,    29,     0,   230,     0,     0,     0,     0,     0,
      21,     0,   231,   232,    22,     0,     0,     0,    20,    23,
       0,     0,    30,     0,    24,     0,     0,    21,     0,     0,
      25,    22,     0,     0,     0,     0,    23,    26,     0,    27,
       0,    24,     0,     0,     0,    28,     0,    25,    29,     0,
      20,     0,     0,     0,    26,     0,    27,     0,     0,    21,
       0,     0,    28,    22,     0,    29,     0,  -129,    23,     0,
      18,   274,     0,    24,   337,     0,     0,     0,  -302,    25,
       0,    18,   274,     0,  -130,   402,    26,     0,    27,  -302,
       0,     0,     0,     0,    28,     0,     0,    29,     0,     0,
       0,     0,     0,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302
};

static const yytype_int16 yycheck[] =
{
       1,    36,   321,   128,    56,   149,   150,   321,   123,    97,
      11,    99,   105,   128,    50,   108,   265,    96,   309,   326,
      55,   103,    58,   111,   404,   103,   383,    43,    87,   444,
      67,    63,    71,    70,   485,    49,    98,    84,    87,    86,
      46,    73,   111,   112,   106,   113,    60,   116,   107,   108,
     118,    96,   323,    96,   325,    56,   325,    92,   107,   108,
      87,   330,    56,   514,    91,    59,    67,   103,   105,    70,
     427,   108,   111,   453,   450,    91,    86,    87,   157,   167,
     168,   169,   170,   117,   118,   119,   123,   231,   232,   233,
     234,   128,   127,   508,   129,    96,   102,   103,   101,    86,
      87,   104,   137,   135,   105,   230,    91,   108,    83,    27,
      95,    86,   157,   489,   157,   197,    87,    88,    71,   197,
      91,    89,   123,    91,   431,   131,   132,   128,     0,   436,
      41,   445,   220,   509,   510,    71,    96,    84,    96,   515,
      71,   193,   518,   107,   108,    29,    71,    71,   149,   150,
     441,    35,   343,   344,   345,    39,   157,   347,   348,   349,
     350,   197,    87,    88,   216,    86,    91,    51,    52,    50,
      54,   485,   107,   108,    58,   107,   108,    61,    85,   498,
      19,    65,   107,   108,   498,    50,   265,    71,    84,    28,
      96,    84,   193,    32,   338,   339,   340,   157,    37,   157,
     514,   450,   317,    42,   109,   110,   341,   342,    83,    48,
     459,   304,   351,   352,    36,   216,    55,    84,    57,    71,
     265,   346,   265,    71,    63,    91,    88,    66,    91,   230,
     231,   232,   233,   234,    43,    92,    22,    87,    92,   318,
     489,   490,   321,    92,    84,    88,    85,    33,    71,    86,
      88,   157,    96,   305,   503,    87,    71,    85,    87,    86,
     509,   510,    86,    83,    83,    86,   515,   304,    85,   518,
      88,   113,    86,   318,    86,   318,   321,    88,   321,    92,
     317,    67,    92,    69,    70,    71,    72,    73,    74,    91,
      76,    88,    78,    88,    86,    86,    82,   105,    84,   115,
      49,    71,    88,   304,   305,   265,   489,   265,   452,   114,
      96,    97,    88,   157,    89,    83,   317,   318,    91,    71,
     321,   107,   108,   109,   110,    89,   509,   510,    83,    91,
      89,   383,   515,    91,    88,   518,    89,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,    60,   358,   318,   265,
     318,   321,    88,   321,    96,    89,   445,   399,    83,    92,
      88,   450,    92,    89,    83,   427,    83,    91,    86,    85,
     459,    83,   383,    86,    40,    40,    91,   475,   476,   477,
      89,    92,    89,    89,    92,    89,   428,    85,    88,    99,
     445,    92,   445,   404,    89,   450,   485,   450,    89,    89,
     489,   490,   318,    86,   459,   321,   459,    88,    88,   498,
      89,   265,    86,    89,   503,   157,   427,    89,    86,    40,
     509,   510,   467,   468,   469,   514,   515,    89,   346,   518,
     485,    13,   485,    56,   489,   490,   489,   490,    32,   481,
      58,   452,   453,   498,   455,   498,    34,   208,   503,    83,
     503,   153,   313,   197,   509,   510,   509,   510,   157,   514,
     515,   514,   515,   518,   318,   518,    91,   321,   498,   305,
      95,   514,   318,   132,   363,   445,   225,   445,   356,   353,
     450,    -1,   450,   354,   455,   355,   331,   498,    -1,   459,
     358,   459,   300,    -1,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,    -1,    -1,    -1,    -1,
      -1,   133,   134,    -1,    -1,   485,    -1,   485,    -1,   489,
     490,   489,   490,   265,    -1,    -1,   148,    95,   498,   445,
     498,    -1,    -1,   503,   450,   503,    -1,    -1,    -1,   509,
     510,   509,   510,   459,   514,   515,   514,   515,   518,    -1,
     518,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,    -1,    -1,    -1,    22,    -1,    -1,   485,
      -1,    -1,    -1,   489,   490,    -1,   318,    33,    -1,   321,
      -1,    -1,   498,    -1,    -1,    -1,    -1,   503,    -1,   211,
      -1,   445,    -1,   509,   510,    -1,   450,    -1,   514,   515,
     149,   150,   518,    -1,    -1,   459,   228,    -1,   230,    -1,
      19,    67,    -1,    69,    70,    71,    72,    73,    74,    28,
      76,    -1,    78,    32,    -1,    -1,    82,    -1,    37,    -1,
      -1,   485,    88,    42,    -1,   489,   490,   149,   150,    48,
      95,    -1,    -1,    -1,   498,    -1,    55,    -1,    57,   503,
      -1,   107,   108,   275,    63,   509,   510,    66,    -1,    -1,
     514,   515,    -1,   285,   518,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,    85,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,   234,    -1,   309,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,    -1,
     322,    -1,    -1,   445,    -1,   327,    -1,    -1,   450,    -1,
      -1,    -1,    -1,    -1,    -1,   337,    19,   459,    -1,   231,
     232,   233,   234,    -1,    -1,    28,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    37,   357,    -1,    -1,    -1,    42,
      -1,    -1,    -1,   485,   366,    48,    -1,   489,   490,    -1,
      -1,    -1,    55,    -1,    57,    -1,   498,    -1,    -1,    -1,
      63,   503,    -1,    66,    -1,    -1,    -1,   509,   510,    -1,
     392,    -1,   514,   515,    -1,    -1,   518,    -1,    -1,    -1,
     402,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,   338,
     339,   340,   341,   342,   343,   344,   345,    -1,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,    -1,   358,
      -1,    -1,   434,    -1,    -1,    -1,    -1,    -1,    -1,   441,
      -1,    -1,   444,    -1,    -1,    -1,   338,   339,   340,   341,
     342,   343,   344,   345,    -1,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,    -1,   358,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   404,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      -1,    -1,    26,    -1,    28,    29,    -1,   499,   500,    33,
      34,    35,    -1,    -1,    38,    39,   508,    -1,    -1,    -1,
      -1,    -1,   404,    47,    -1,    -1,    -1,    51,    52,    53,
      54,    -1,    -1,   452,   453,    -1,   455,    61,    -1,    -1,
      -1,    65,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    -1,    78,    -1,    -1,    -1,    82,    -1,
      84,    22,    86,    -1,    88,    -1,    -1,    -1,    29,    -1,
     452,   453,    33,   455,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    -1,    -1,    -1,    29,    -1,    -1,
      61,    -1,    -1,    35,    65,    -1,    67,    39,    69,    70,
      71,    72,    73,    74,    -1,    76,    -1,    78,    -1,    51,
      52,    82,    54,    -1,    20,    21,    22,    88,    -1,    61,
      26,    -1,    28,    65,    -1,    96,    97,    33,    34,    71,
      -1,    -1,    38,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,    47,    20,    21,    22,    -1,    -1,    53,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,
      38,    67,    68,    69,    70,    71,    72,    73,    74,    47,
      76,    -1,    78,    -1,    -1,    53,    82,    -1,    84,    -1,
      86,    -1,    88,    -1,    -1,    -1,    22,    -1,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    33,    76,    -1,
      78,   107,   108,    -1,    82,    -1,    84,    -1,    86,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
     108,    67,    22,    69,    70,    71,    72,    73,    74,    -1,
      76,    -1,    78,    33,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,    22,    67,    -1,    69,
      70,    71,    72,    73,    74,    -1,    76,    33,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,
     110,    67,    -1,    69,    70,    71,    72,    73,    74,    -1,
      76,    -1,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    22,    88,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      96,    97,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,   107,   108,   109,   110,    -1,     0,    -1,    22,    -1,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    33,
      61,    -1,    -1,    -1,    65,    19,    67,    -1,    69,    70,
      71,    72,    73,    74,    28,    76,    -1,    78,    32,    -1,
      -1,    82,    -1,    37,    -1,    -1,    -1,    88,    42,    -1,
      -1,    -1,    -1,    67,    48,    69,    70,    71,    72,    73,
      74,    55,    76,    57,    78,    -1,   107,   108,    82,    63,
      -1,    19,    66,    -1,    88,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    96,    97,    32,    -1,    -1,    -1,    19,    37,
      -1,    -1,    86,    -1,    42,    -1,    -1,    28,    -1,    -1,
      48,    32,    -1,    -1,    -1,    -1,    37,    55,    -1,    57,
      -1,    42,    -1,    -1,    -1,    63,    -1,    48,    66,    -1,
      19,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    28,
      -1,    -1,    63,    32,    -1,    66,    -1,    85,    37,    -1,
      87,    88,    -1,    42,    91,    -1,    -1,    -1,    95,    48,
      -1,    87,    88,    -1,    85,    91,    55,    -1,    57,    95,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    27,   135,   151,   156,   157,    71,   148,   149,   150,
       0,    41,   152,   153,   158,   159,   160,    86,    87,   148,
      19,    28,    32,    37,    42,    48,    55,    57,    63,    66,
      86,   154,   155,   161,   162,   163,   164,   165,   166,   198,
     158,    71,    86,    87,   161,   163,   212,    56,    59,   111,
      84,   172,    71,    71,    86,    57,   166,   173,   174,   175,
     176,   177,   182,   183,   192,   193,   213,    50,   199,   200,
      50,   167,   169,   212,    29,    35,    39,    51,    52,    54,
      58,    61,    65,   138,   139,   140,   141,   142,   143,   144,
     147,   148,   149,   194,    85,   175,    84,    86,   191,   211,
     144,   146,   148,    84,   201,    83,   144,   145,    36,   168,
     170,   211,    71,   185,    71,   178,   179,   180,   185,    91,
      91,    91,   212,    43,   184,   189,    20,    21,    22,    26,
      28,    33,    34,    38,    47,    53,    67,    68,    69,    70,
      71,    72,    73,    74,    76,    78,    82,    86,    88,   107,
     108,   136,   137,   138,   148,   211,   214,   215,   216,   217,
     218,   219,   221,   222,   223,   225,   226,   227,   228,   230,
     232,   240,   242,   243,   244,   245,   246,   251,   252,   253,
     255,   260,   261,   262,   263,   264,   265,   267,   268,   283,
     284,   213,   213,   166,   177,   183,   202,   203,   204,   205,
     206,   146,   146,   171,   213,   212,    91,   184,    83,    86,
      91,    95,   184,    92,    92,    92,    88,   145,   190,    84,
     195,    71,   241,   212,   139,   144,   145,   212,    88,   241,
      88,    96,    97,   109,   110,   148,   253,   261,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   286,
     235,   286,   211,    87,   212,    86,   286,   148,   260,   262,
     266,   266,    71,   178,    88,    91,    85,   216,    86,    86,
     213,   213,   213,   213,    87,    91,   107,   108,    95,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     285,    86,    85,   204,    83,    88,    92,   179,    92,    84,
     181,   207,   286,   138,   186,   187,   188,    83,   196,   213,
      86,    88,    91,   257,   258,   257,    88,    88,   286,    86,
     139,   148,   286,   266,   266,   266,   266,    91,   111,   112,
     116,   109,   110,   117,   118,   119,    46,   102,   103,   131,
     132,   101,   104,   113,   115,   114,   105,    98,   106,    86,
      86,    49,   247,   248,   249,    71,    88,   219,    89,   197,
     254,   286,   286,    71,   286,   282,   146,   186,   181,   208,
     210,   180,    89,    83,   145,   214,   218,   226,   234,   237,
     239,   286,    91,   256,   258,   259,   256,   197,   286,    89,
      91,   256,    91,   259,    89,   266,   266,   266,   271,   271,
     272,   272,   272,   139,   143,   273,   273,   273,   273,   274,
     274,   275,   276,   277,   278,   286,   279,    88,    60,   250,
     249,    88,   286,    89,    83,    92,    88,    92,    89,    83,
     209,    83,   188,    85,    86,    83,    92,    92,    91,    89,
      89,   211,    89,    89,   269,    99,   188,   211,   197,    89,
     286,   197,    85,   181,   235,   226,    92,    21,    26,    68,
      71,   219,   220,   221,   224,   229,   231,   233,   266,   269,
     281,    89,    89,   219,    89,    86,   212,   212,   212,    86,
      40,   213,   213,   213,   211,   236,   238,   239,    88,    88,
      88,   220,   219,    89,   234,   286,   286,   219,    86,    89,
      89,   235,   220,   220,    86,    40,   236,   220,    89,   220
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
     166,   166,   167,   167,   168,   168,   169,   170,   171,   171,
     172,   173,   173,   174,   174,   175,   175,   175,   176,   176,
     177,   178,   178,   179,   179,   180,   180,   181,   181,   182,
     183,   183,   184,   184,   185,   185,   186,   186,   187,   187,
     188,   189,   190,   190,   191,   191,   192,   193,   194,   195,
     196,   197,   197,   198,   199,   199,   200,   200,   201,   202,
     202,   203,   203,   204,   204,   205,   206,   207,   208,   208,
     209,   209,   210,   210,   211,   212,   213,   214,   214,   215,
     215,   216,   216,   217,   218,   219,   219,   219,   219,   219,
     219,   220,   220,   220,   220,   220,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   222,   223,   224,   225,   226,
     226,   226,   226,   226,   226,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   234,   235,   235,   236,   236,   237,
     237,   238,   239,   239,   240,   241,   241,   242,   243,   244,
     245,   246,   246,   247,   247,   248,   248,   249,   250,   251,
     251,   252,   252,   252,   252,   252,   252,   252,   253,   254,
     254,   255,   255,   256,   256,   257,   257,   258,   259,   259,
     260,   260,   261,   261,   261,   262,   262,   263,   263,   263,
     263,   264,   265,   266,   266,   266,   266,   266,   267,   268,
     269,   269,   269,   269,   270,   270,   270,   271,   271,   271,
     271,   272,   272,   272,   273,   273,   273,   273,   274,   274,
     274,   274,   274,   274,   275,   275,   275,   276,   276,   277,
     277,   278,   278,   279,   279,   280,   280,   281,   281,   282,
     282,   283,   284,   284,   284,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   286
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
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       0,     1,     0,     1,     0,     1,     2,     2,     1,     3,
       3,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       4,     1,     3,     1,     3,     1,     3,     1,     1,     2,
       4,     4,     0,     1,     5,     3,     0,     1,     1,     3,
       2,     2,     1,     3,     2,     2,     4,     5,     5,     4,
       0,     0,     1,     5,     0,     1,     2,     3,     3,     0,
       1,     1,     2,     1,     1,     1,     2,     4,     0,     1,
       0,     1,     1,     3,     3,     0,     0,     0,     1,     1,
       2,     1,     1,     2,     2,     1,     1,     2,     2,     2,
       2,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     6,     8,     8,     6,
       6,    10,    10,     0,     1,     0,     1,     0,     1,     1,
       1,     1,     1,     3,     3,     0,     1,     3,     3,     3,
       5,     3,     4,     0,     1,     1,     2,     5,     2,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     5,     1,
       3,     4,     4,     0,     1,     1,     2,     3,     2,     3,
       3,     3,     4,     6,     6,     4,     4,     1,     1,     1,
       1,     2,     2,     1,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     5,     4,     5,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 127 "src/parser.y"
                      {
    printf("Parsing stage was successful !\n");
    (yyval.exp) = (yyvsp[0].exp);
}
#line 2023 "bin/parser.tab.cc"
    break;

  case 3: /* Literal: IntegerLiteral  */
#line 134 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2031 "bin/parser.tab.cc"
    break;

  case 4: /* Literal: FloatingPointLiteral  */
#line 137 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "float";
        (yyval.exp)->symbol.size = 8;
        buildVal((yyval.exp),0);
    }
#line 2042 "bin/parser.tab.cc"
    break;

  case 5: /* Literal: BooleanLiteral  */
#line 143 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "boolean";
        (yyval.exp)->symbol.size = 8;
        buildVal((yyval.exp),0);
        if((yyvsp[0].data)[0]=='t'){
            (yyval.exp)->val.place = "1";
        }
        else if((yyvsp[0].data)[0] =='f'){
            (yyval.exp)->val.place = "0";
        }
    }
#line 2059 "bin/parser.tab.cc"
    break;

  case 6: /* Literal: CharacterLiteral  */
#line 155 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "char";
        (yyval.exp)->symbol.size = 8;
        buildVal((yyval.exp),0);
        (yyval.exp)->val.place = to_string(int((yyvsp[0].data)[0]));
    }
#line 2071 "bin/parser.tab.cc"
    break;

  case 7: /* Literal: StringLiteral  */
#line 162 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "string";
        (yyval.exp)->symbol.size = 8;
        buildVal((yyval.exp),0);
    }
#line 2082 "bin/parser.tab.cc"
    break;

  case 8: /* Literal: NullLiteral  */
#line 168 "src/parser.y"
                 {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "null";
        (yyval.exp)->symbol.size = 8;
        buildVal((yyval.exp),0);
        (yyval.exp)->val.place = "0";
    }
#line 2094 "bin/parser.tab.cc"
    break;

  case 9: /* IntegerLiteral: DecimalIntegerLiteral  */
#line 177 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "byte";
        (yyval.exp)->symbol.size = 8;

        buildVal((yyval.exp),0);
    }
#line 2106 "bin/parser.tab.cc"
    break;

  case 10: /* IntegerLiteral: HexIntegerLiteral  */
#line 184 "src/parser.y"
                        {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "byte";
        (yyval.exp)->symbol.size = 8;
        buildVal((yyval.exp),0);
    }
#line 2117 "bin/parser.tab.cc"
    break;

  case 11: /* IntegerLiteral: OctalIntegerLiteral  */
#line 190 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "byte";
        (yyval.exp)->symbol.size = 8;
        buildVal((yyval.exp),0);
    }
#line 2128 "bin/parser.tab.cc"
    break;

  case 12: /* Type: PrimitiveType  */
#line 198 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2136 "bin/parser.tab.cc"
    break;

  case 13: /* Type: ReferenceType  */
#line 201 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2144 "bin/parser.tab.cc"
    break;

  case 14: /* PrimitiveType: NumericType  */
#line 206 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2152 "bin/parser.tab.cc"
    break;

  case 15: /* PrimitiveType: Boolean  */
#line 209 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "boolean";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2163 "bin/parser.tab.cc"
    break;

  case 16: /* NumericType: IntegralType  */
#line 217 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2171 "bin/parser.tab.cc"
    break;

  case 17: /* NumericType: FloatingPointType  */
#line 220 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2179 "bin/parser.tab.cc"
    break;

  case 18: /* IntegralType: Byte  */
#line 225 "src/parser.y"
         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "byte";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2190 "bin/parser.tab.cc"
    break;

  case 19: /* IntegralType: Short  */
#line 231 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "short";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2201 "bin/parser.tab.cc"
    break;

  case 20: /* IntegralType: Int  */
#line 237 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)-> symbol.size =8;
    }
#line 2212 "bin/parser.tab.cc"
    break;

  case 21: /* IntegralType: Long  */
#line 243 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "long";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2223 "bin/parser.tab.cc"
    break;

  case 22: /* IntegralType: Char  */
#line 249 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "char";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2234 "bin/parser.tab.cc"
    break;

  case 23: /* FloatingPointType: Float  */
#line 257 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.type.name = "float";
        (yyval.exp)->symbol.size = 8;
    }
#line 2245 "bin/parser.tab.cc"
    break;

  case 24: /* FloatingPointType: Double  */
#line 263 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "double";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2256 "bin/parser.tab.cc"
    break;

  case 25: /* ReferenceType: ClassOrInterfaceType  */
#line 271 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2264 "bin/parser.tab.cc"
    break;

  case 26: /* ReferenceType: ArrayType  */
#line 274 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2272 "bin/parser.tab.cc"
    break;

  case 27: /* ClassOrInterfaceType: Name  */
#line 279 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
        struct Symbol * symb = loc_lookup(glob_class_scope,(yyvsp[0].exp)->symbol.name);
        if(symb == NULL){
            semantic_error("Incorrect declaration at line number " + to_string(line_number));
        }
        else{
            (yyval.exp)->symbol = *symb;
        }
        //view_symbol(*symb);
    }
#line 2288 "bin/parser.tab.cc"
    break;

  case 28: /* ClassType: ClassOrInterfaceType  */
#line 292 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2296 "bin/parser.tab.cc"
    break;

  case 29: /* InterfaceType: ClassOrInterfaceType  */
#line 297 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2304 "bin/parser.tab.cc"
    break;

  case 30: /* ArrayType: PrimitiveType LeftSquareBracket RightSquareBracket  */
#line 302 "src/parser.y"
                                                       {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data)+"[]";
        (yyval.exp)->symbol.type.name = temp;
    }
#line 2315 "bin/parser.tab.cc"
    break;

  case 31: /* ArrayType: Name LeftSquareBracket RightSquareBracket  */
#line 308 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.type.name = temp;

    }
#line 2327 "bin/parser.tab.cc"
    break;

  case 32: /* ArrayType: ArrayType LeftSquareBracket RightSquareBracket  */
#line 315 "src/parser.y"
                                                     {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.type.name = temp;

    }
#line 2339 "bin/parser.tab.cc"
    break;

  case 33: /* Name: SimpleName  */
#line 324 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2347 "bin/parser.tab.cc"
    break;

  case 34: /* Name: QualifiedName  */
#line 327 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2355 "bin/parser.tab.cc"
    break;

  case 35: /* SimpleName: Identifier  */
#line 332 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));  
        struct Symbol* lookup_entry = check_scope(curr,(yyvsp[0].data));      
        if(lookup_entry != NULL){
            (yyval.exp)->symbol = *lookup_entry;
        }buildVal((yyval.exp),1);
    }
#line 2367 "bin/parser.tab.cc"
    break;

  case 36: /* QualifiedName: Name Dot Identifier  */
#line 341 "src/parser.y"
                        {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,concatenate_string((yyvsp[-1].data),(yyvsp[0].data))));
        buildVal((yyval.exp),1);
    }
#line 2376 "bin/parser.tab.cc"
    break;

  case 37: /* CompilationUnit: PackageDeclaration_opt ImportDeclarations_opt TypeDeclarations_opt  */
#line 347 "src/parser.y"
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
#line 2393 "bin/parser.tab.cc"
    break;

  case 38: /* ImportDeclarations_opt: %empty  */
#line 361 "src/parser.y"
    { 
        (yyval.exp) = NULL; 
    }
#line 2401 "bin/parser.tab.cc"
    break;

  case 39: /* ImportDeclarations_opt: ImportDeclarations  */
#line 364 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Imports", memArr, 1, 1);
    }
#line 2411 "bin/parser.tab.cc"
    break;

  case 40: /* ImportDeclarations: ImportDeclaration  */
#line 371 "src/parser.y"
                      {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2421 "bin/parser.tab.cc"
    break;

  case 41: /* ImportDeclarations: ImportDeclarations ImportDeclaration  */
#line 376 "src/parser.y"
                                           {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateImports", memArr, 2, 0);
    }
#line 2432 "bin/parser.tab.cc"
    break;

  case 42: /* TypeDeclarations_opt: %empty  */
#line 384 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2440 "bin/parser.tab.cc"
    break;

  case 43: /* TypeDeclarations_opt: TypeDeclarations  */
#line 387 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Declarations", memArr, 1, 0);
        
        struct node*E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 2455 "bin/parser.tab.cc"
    break;

  case 44: /* TypeDeclarations: TypeDeclaration  */
#line 399 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        
        struct node*E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 2470 "bin/parser.tab.cc"
    break;

  case 45: /* TypeDeclarations: TypeDeclarations TypeDeclaration  */
#line 409 "src/parser.y"
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
#line 2487 "bin/parser.tab.cc"
    break;

  case 46: /* PackageDeclaration_opt: %empty  */
#line 423 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2495 "bin/parser.tab.cc"
    break;

  case 47: /* PackageDeclaration_opt: PackageDeclaration  */
#line 426 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2503 "bin/parser.tab.cc"
    break;

  case 48: /* PackageDeclaration: Package Name Semicolon  */
#line 431 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),concatenate_string(" ",(yyvsp[-1].exp)->data)));
    }
#line 2511 "bin/parser.tab.cc"
    break;

  case 49: /* ImportDeclaration: SingleTypeImportDeclaration  */
#line 436 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2519 "bin/parser.tab.cc"
    break;

  case 50: /* ImportDeclaration: TypeImportOnDemandDeclaration  */
#line 439 "src/parser.y"
                                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2527 "bin/parser.tab.cc"
    break;

  case 51: /* SingleTypeImportDeclaration: Import Name Semicolon  */
#line 444 "src/parser.y"
                          {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data), concatenate_string(" ",(yyvsp[-1].exp)->data)));
    }
#line 2535 "bin/parser.tab.cc"
    break;

  case 52: /* TypeImportOnDemandDeclaration: Import Name Dot Product Semicolon  */
#line 449 "src/parser.y"
                                      {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-4].data), concatenate_string(" ",concatenate_string((yyvsp[-3].exp)->data,".*"))));
    }
#line 2543 "bin/parser.tab.cc"
    break;

  case 53: /* TypeDeclaration: ClassDeclaration  */
#line 454 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2551 "bin/parser.tab.cc"
    break;

  case 54: /* TypeDeclaration: InterfaceDeclaration  */
#line 457 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2559 "bin/parser.tab.cc"
    break;

  case 55: /* TypeDeclaration: Semicolon  */
#line 460 "src/parser.y"
                {
        (yyval.exp) = NULL;
    }
#line 2567 "bin/parser.tab.cc"
    break;

  case 56: /* Modifiers: Modifier  */
#line 465 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2577 "bin/parser.tab.cc"
    break;

  case 57: /* Modifiers: Modifiers Modifier  */
#line 470 "src/parser.y"
                         {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifier", memArr, 2, 0);
    }
#line 2588 "bin/parser.tab.cc"
    break;

  case 58: /* Modifier: Public  */
#line 478 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2596 "bin/parser.tab.cc"
    break;

  case 59: /* Modifier: Protected  */
#line 481 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2604 "bin/parser.tab.cc"
    break;

  case 60: /* Modifier: Private  */
#line 484 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2612 "bin/parser.tab.cc"
    break;

  case 61: /* Modifier: Static  */
#line 487 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2620 "bin/parser.tab.cc"
    break;

  case 62: /* Modifier: Abstract  */
#line 490 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2628 "bin/parser.tab.cc"
    break;

  case 63: /* Modifier: Final  */
#line 493 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2636 "bin/parser.tab.cc"
    break;

  case 64: /* Modifier: Native  */
#line 496 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2644 "bin/parser.tab.cc"
    break;

  case 65: /* Modifier: Synchronized  */
#line 499 "src/parser.y"
                   {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2652 "bin/parser.tab.cc"
    break;

  case 66: /* Modifier: Transient  */
#line 502 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2660 "bin/parser.tab.cc"
    break;

  case 67: /* Modifier: Volatile  */
#line 505 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2668 "bin/parser.tab.cc"
    break;

  case 68: /* Class_Name_Extractor: Modifiers_opt Class Identifier ClassExtend_opt Interfaces_opt  */
#line 509 "src/parser.y"
                                                                                    {
    class_name = string((yyvsp[-2].data));
    struct node * memArr[5];
    memArr[0] = (yyvsp[-4].exp);
    memArr[1] = makeleaf((yyvsp[-3].data));
    memArr[2] = makeleaf((yyvsp[-2].data));
    memArr[3] = (yyvsp[-1].exp);
    memArr[4] = (yyvsp[0].exp);
    (yyval.exp) = makeInternalNode("ClassDeclaration", memArr , 5, 1);
    if((yyvsp[-4].exp)!=NULL){
        for(int i = 0; i<(yyvsp[-4].exp)->arr.size(); i++){
            if((yyvsp[-4].exp)->arr[i]!=NULL){
                (yyval.exp)->symbol.type.modifier.push_back(string((yyvsp[-4].exp)->arr[i]->data));
            }
       }
    }
    (yyval.exp)->symbol.name = string((yyvsp[-2].data));
    if((yyvsp[-1].exp)!=NULL)(yyval.exp)->symbol.type.extendClass = string((yyvsp[0].exp)->data);
    (yyval.exp)->symbol.offset = 0;
    (yyval.exp)->symbol.type.name = string((yyvsp[-2].data));
    (yyval.exp)->symbol.type.t = 1;        
    (yyval.exp)->symbol.line_num = line_number;
    long long int x  = loc_insert(curr,(yyval.exp)->symbol);
    if(x < 0)
    {
        semantic_error("Declaration of class" +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x) + ".");
    }
}
#line 2701 "bin/parser.tab.cc"
    break;

  case 69: /* ClassDeclaration: Class_Name_Extractor Symbol_Table_Change ClassBody Symbol_Table_Back  */
#line 540 "src/parser.y"
                                                                        {
        
        struct node * memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ClassDeclaration", memArr, 2, 0);        
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 2717 "bin/parser.tab.cc"
    break;

  case 70: /* Modifiers_opt: %empty  */
#line 552 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 2725 "bin/parser.tab.cc"
    break;

  case 71: /* Modifiers_opt: Modifiers  */
#line 555 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifiers", memArr, 1, 1);
    }
#line 2735 "bin/parser.tab.cc"
    break;

  case 72: /* ClassExtend_opt: %empty  */
#line 561 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2743 "bin/parser.tab.cc"
    break;

  case 73: /* ClassExtend_opt: ClassExtend  */
#line 564 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2751 "bin/parser.tab.cc"
    break;

  case 74: /* Interfaces_opt: %empty  */
#line 568 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2759 "bin/parser.tab.cc"
    break;

  case 75: /* Interfaces_opt: Interfaces  */
#line 571 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2767 "bin/parser.tab.cc"
    break;

  case 76: /* ClassExtend: Extends ClassType  */
#line 576 "src/parser.y"
                      {
        (yyval.exp) = makeleaf((yyvsp[0].exp)->data);
    }
#line 2775 "bin/parser.tab.cc"
    break;

  case 77: /* Interfaces: Implements InterfaceTypeList  */
#line 581 "src/parser.y"
                                 {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 1);

    }
#line 2787 "bin/parser.tab.cc"
    break;

  case 78: /* InterfaceTypeList: InterfaceType  */
#line 590 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2797 "bin/parser.tab.cc"
    break;

  case 79: /* InterfaceTypeList: InterfaceTypeList Comma InterfaceType  */
#line 595 "src/parser.y"
                                            {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("InterfaceList", memArr, 2, 0);
    }
#line 2808 "bin/parser.tab.cc"
    break;

  case 80: /* ClassBody: LeftCurlyBrace ClassBodyDeclarations_opt RightCurlyBrace  */
#line 603 "src/parser.y"
                                                             {
        (yyval.exp) = (yyvsp[-1].exp);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 2820 "bin/parser.tab.cc"
    break;

  case 81: /* ClassBodyDeclarations_opt: %empty  */
#line 611 "src/parser.y"
                            { 
        (yyval.exp) = NULL ;
    }
#line 2828 "bin/parser.tab.cc"
    break;

  case 82: /* ClassBodyDeclarations_opt: ClassBodyDeclarations  */
#line 614 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ClassBody", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
        view_quadruple(class_declaration_code->quad);
        //view_quadruple($1->val.quad);
        
    }
#line 2845 "bin/parser.tab.cc"
    break;

  case 83: /* ClassBodyDeclarations: ClassBodyDeclaration  */
#line 628 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ClassBody", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);

    }
#line 2860 "bin/parser.tab.cc"
    break;

  case 84: /* ClassBodyDeclarations: ClassBodyDeclarations ClassBodyDeclaration  */
#line 638 "src/parser.y"
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
#line 2876 "bin/parser.tab.cc"
    break;

  case 85: /* ClassBodyDeclaration: ClassMemberDeclaration  */
#line 651 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2884 "bin/parser.tab.cc"
    break;

  case 86: /* ClassBodyDeclaration: StaticInitializer  */
#line 654 "src/parser.y"
                        {
        (yyval.exp)=(yyvsp[0].exp);
    }
#line 2892 "bin/parser.tab.cc"
    break;

  case 87: /* ClassBodyDeclaration: ConstructorDeclaration  */
#line 657 "src/parser.y"
                             {
        (yyval.exp)=(yyvsp[0].exp);
    }
#line 2900 "bin/parser.tab.cc"
    break;

  case 88: /* ClassMemberDeclaration: FieldDeclaration  */
#line 662 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
        // struct Symbol* class_entry = loc_lookup(glob_class_scope,class_name);
        // if(class_entry != NULL){
        //     $$->symbol.size = -class_entry->size;
        //     class_entry->size += $$->symbol.size;

        // }
        appendCode(*class_declaration_code,(yyvsp[0].exp)->val);

    }
#line 2916 "bin/parser.tab.cc"
    break;

  case 89: /* ClassMemberDeclaration: MethodDeclaration  */
#line 673 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);

    }
#line 2925 "bin/parser.tab.cc"
    break;

  case 90: /* FieldDeclaration: Modifiers_opt Type VariableDeclarators Semicolon  */
#line 679 "src/parser.y"
                                                     {
        struct Symbol* class_entry = loc_lookup(glob_class_scope,class_name);
        if(class_entry == NULL){
            semantic_error("Class entry not added to symbol table !");
        }
        struct node * memArr[3];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("FieldDeclaration", memArr, 3, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->t = 0;

        if((yyvsp[-3].exp) != NULL)
        {
            int modifier_count = 0;
            int static_count = 0;
            for(int j = 0 ; j< (yyvsp[-1].exp)->arr.size(); j++)
            {
                (yyval.exp)->symbol.offset = -class_entry->size;
                class_entry->size += (yyvsp[-2].exp)->symbol.size;
                (yyval.exp)->symbol.size = (yyvsp[-2].exp)->symbol.size;
                (yyval.exp)->symbol.type = (yyvsp[-2].exp)->symbol.type;
                string txt = (yyvsp[-1].exp)->arr[j]->symbol.name;
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
                    (yyval.exp)->symbol.type.name += "[]";
                }

                for(int i=0 ; i< (yyvsp[-3].exp)->arr.size();i++)
                {
                    if(string((yyvsp[-3].exp)->arr[i]->data) != "static"){
                        modifier_count +=1;
                        
                    }
                    else{
                        static_count +=1;
                        if(static_count <= 1)
                        (yyval.exp)->symbol.type.modifier.push_back((yyvsp[-3].exp)->arr[i]->data);
                    }
                    if(modifier_count > 1 || static_count > 1){
                        semantic_error("Incorrect numbert of modifiers added at line number " + to_string(line_number));
                        break;
                    }
                    else{
                        (yyval.exp)->symbol.type.modifier.push_back((yyvsp[-3].exp)->arr[i]->data);
                    }

                }
                

                (yyval.exp)->symbol.name = name;

                if((yyvsp[-1].exp)->arr[j]->t == 4 ){

                        if((yyval.exp)->symbol.type.name == (yyvsp[-1].exp)->arr[j]->symbol.type.name)
                        {
                            //$$->symbol.type.name = $1->symbol.type.name;
                            (yyval.exp)->symbol.type = (yyvsp[-1].exp)->arr[j]->symbol.type;
                            //$$->symbol.size = $3->arr[j]->symbol.size;
                            long long int x  = loc_insert(curr,(yyval.exp)->symbol);
                            if(x < 0)
                            {
                                semantic_error("Declaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x) + ".");
                            }
                        }
                        else{
                            if(isTypeCompatible((yyval.exp)->symbol.type.name, (yyvsp[-1].exp)->arr[j]->symbol.type.name))
                            {
                                long long int x  = loc_insert(curr,(yyval.exp)->symbol);
            
                                if(x < 0)
                                {
                                    semantic_error("Declaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x) + ".");
                                }                            
                            }
                            else{
                                //semantic_error("Bad initialization at line number " +  to_string(line_number) + ".");
                                semantic_error("Bad initialization types ["  + (yyval.exp)->symbol.type.name + ", " + (yyvsp[-1].exp)->arr[j]->symbol.type.name + "] at line number " +  to_string(line_number) + ".");
                            }
                        }

                }
                else{
                    long long int x  = loc_insert(curr,(yyval.exp)->symbol);
            
                    if(x < 0)
                    {
                        semantic_error("Declaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x) + ".");
                    }
                }

            }
        }

        else{
            //cout << $3->arr.size() <<endl;
            for(int j =0; j< (yyvsp[-1].exp)->arr.size(); j++)
            {
                (yyval.exp)->symbol.offset = - class_entry->size;
                class_entry->size += (yyvsp[-2].exp)->symbol.size;
                (yyval.exp)->symbol.size = (yyvsp[-2].exp)->symbol.size;
                (yyval.exp)->symbol.type = (yyvsp[-2].exp)->symbol.type;
                string txt = (yyvsp[-1].exp)->arr[j]->symbol.name;
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
                    (yyval.exp)->symbol.type.name += "[]";
                }

                (yyval.exp)->symbol.name = name;

                if((yyvsp[-1].exp)->arr[j]->t== 4 ){
                        if((yyval.exp)->symbol.type.name == (yyvsp[-1].exp)->arr[j]->symbol.type.name)
                        {   
                            (yyval.exp)->symbol.type= (yyvsp[-1].exp)->arr[j]->symbol.type;
                            long long int x  = loc_insert(curr,(yyval.exp)->symbol);
                            if(x < 0)
                            {
                                semantic_error("Declaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x) + ".");
                            }
                            
                        }
                        else{
                            if(isTypeCompatible((yyval.exp)->symbol.type.name, (yyvsp[-1].exp)->arr[j]->symbol.type.name))
                            {
                                //$$->symbol.type = $1->symbol.type.name;
                                long long int x  = loc_insert(curr,(yyval.exp)->symbol);
                                if(x < 0)
                                {
                                    semantic_error("Declaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x) + ".");
                                }
                            }
                            else{
                                semantic_error("Bad initialization types ["  + (yyval.exp)->symbol.type.name + ", " + (yyvsp[-1].exp)->arr[j]->symbol.type.name + "] at line number " +  to_string(line_number) + ".");
                                //semantic_error("Bad initialization at line number " +  to_string(line_number) + ".");
                            }
                        }

                }
                else {
                    long long int x  = loc_insert(curr,(yyval.exp)->symbol);
            
                    if(x < 0)
                    {
                        semantic_error("Declaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x) + ".");
                    }
                }

            }

        }

        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);  

    }
#line 3110 "bin/parser.tab.cc"
    break;

  case 91: /* VariableDeclarators: VariableDeclarator  */
#line 861 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);

    }
#line 3125 "bin/parser.tab.cc"
    break;

  case 92: /* VariableDeclarators: VariableDeclarators Comma VariableDeclarator  */
#line 871 "src/parser.y"
                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 2, 0);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 2, APPEND_CODE);
    }
#line 3141 "bin/parser.tab.cc"
    break;

  case 93: /* VariableDeclarator: VariableDeclaratorId  */
#line 884 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->t = 0;
        (yyval.exp)->symbol.name = (yyvsp[0].exp)->symbol.name;
        (yyval.exp)->symbol.type.t = 0;


    }
#line 3157 "bin/parser.tab.cc"
    break;

  case 94: /* VariableDeclarator: VariableDeclaratorId EqualTo VariableInitializer  */
#line 895 "src/parser.y"
                                                       {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("=", memArr, 2, 1);
        (yyval.exp)->isDeclaration = INITIALIZATION;
        (yyval.exp)->t = 0;
        (yyval.exp)->symbol.name = (yyvsp[-2].exp)->symbol.name;
        
        struct node* E[2];
        if((yyvsp[0].exp)->t != ARRAY_ACCESS){
            E[0] = (yyvsp[-2].exp);
            E[1] = (yyvsp[0].exp);
            buildTAC(E, 2, ASSIGN_CODE);
        }
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        buildTAC(E, 2, COPY_CODE);

        // $$->symbol.type.name holds the type of variable initializer
        (yyval.exp)->t = 4;
        (yyval.exp)->symbol.type= (yyvsp[0].exp)->symbol.type;
        (yyval.exp)->symbol.size = (yyvsp[0].exp)->symbol.size;
        //view_type($$->symbol.type);

    }
#line 3188 "bin/parser.tab.cc"
    break;

  case 95: /* VariableDeclaratorId: Identifier  */
#line 923 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        string temp  = string((yyvsp[0].data));
        (yyval.exp)->symbol.name = temp;
        buildVal((yyval.exp), 1);
    }
#line 3199 "bin/parser.tab.cc"
    break;

  case 96: /* VariableDeclaratorId: VariableDeclaratorId LeftSquareBracket RightSquareBracket  */
#line 929 "src/parser.y"
                                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.name = temp;
        buildVal((yyval.exp), 1);
    }
#line 3210 "bin/parser.tab.cc"
    break;

  case 97: /* VariableInitializer: Expression  */
#line 937 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3218 "bin/parser.tab.cc"
    break;

  case 98: /* VariableInitializer: ArrayInitializer  */
#line 940 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
        (yyval.exp)->t = ARRAY_ACCESS;
    }
#line 3227 "bin/parser.tab.cc"
    break;

  case 99: /* MethodDeclaration: MethodHeader MethodBody  */
#line 946 "src/parser.y"
                           {
        
        if(hasReturned == 0){
            if((yyvsp[-1].exp)->symbol.type.return_type != "void"){
                semantic_error("Non-Void Function " + (yyvsp[-1].exp)->symbol.name + " must return some value!");
            }
        }
        else{
            if((yyvsp[-1].exp)->symbol.type.return_type == "void"){
                semantic_error("Void Function " + (yyvsp[-1].exp)->symbol.name + " cannot return any value!");
            }
        }
        hasReturned = 0;
        
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr,2, 1);
        (yyval.exp)->symbol = (yyvsp[-1].exp)->symbol;
        (yyval.exp)->isDeclaration = DECLARATION;

        long long int x  = loc_insert(curr,(yyvsp[-1].exp)->symbol);
        if(x < 0)
        {
            semantic_error("Declaration of " +(yyvsp[-1].exp)->symbol.name + " already exists at line number " + to_string(-x) + ".");
        }
        struct node* E[3];
        E[0] = (yyval.exp);
        string str = "#"+class_name + "::" + string(E[0]->symbol.name) +" : ";

        struct Quad * quad = new struct Quad;
        struct Value * val = new struct Value;
        quad->my_table = curr;
        quad->op.op = Label_;
        quad->op.type = "int";
        val->status = IS_LABEL;
        val->label = "__" + class_name + "__" + string(E[0]->symbol.name);
        fill_arg(&quad->result, *val);
        quad->arg_1.status = IS_EMPTY;
        quad->arg_2.status = IS_EMPTY;
        pushQuad((yyval.exp)->val, *quad);
        //view_quad(quad);

        pushCode(E[0]->val,str);
        pushCode(E[0]->val,"begin_func");
        pushCode(E[0]->val,"pushq \%rbp");

        val->status = IS_VARIABLE;
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

        val->place = "\%rsp";
        fill_arg(&quad->arg_1,*val);
        val->place = "\%rbp";
        fill_arg(&quad->result, *val);
        quad->arg_2.status = IS_EMPTY;

        pushQuad(E[0]->val, *quad);
        struct SymbolTable * symb_table ;
        symb_table = glob_lookup(class_name,(yyvsp[-1].exp)->symbol.name, glob_table)->LocalSymbolTable;
        long long int stackOffset = 0;
        for(int  i = 0; i<(yyvsp[-1].exp)->symbol.type.parameters_size.size(); i++){
            stackOffset -= (yyvsp[-1].exp)->symbol.type.parameters_size[i];
        }
        stackOffset += getTotalStackOffset(symb_table,stackOffset);
        if(stackOffset!=0){
            pushCode(E[0]->val, "$rsp = $rsp - " + to_string(stackOffset));
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
        int controlOffset = 16 + (yyvsp[-1].exp)->symbol.type.return_size;
        for(int i  = 0; i<(yyvsp[-1].exp)->symbol.type.parameters.size(); i++){
            //pushCode(E[0]->val, "load " + $1->symbol.type.parameters[i] +" (" + to_string(controlOffset) + ")$rbp " + to_string($1->symbol.type.parameters_size[i]));
            controlOffset += (yyvsp[-1].exp)->symbol.type.parameters_size[i];
        }


        E[1] = (yyvsp[-1].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);

        // pushCode(E[0]->val, "movq \%rbp \%rsp");

        // quad->op.op = Movq_;
        // quad->op.type = "int";
        
        // val->place = "\%rbp";
        // val->status = IS_VARIABLE;
        // fill_arg(&quad->arg_1, *val);
        // val->place = "\%rsp";
        // fill_arg(&quad->result, *val);
        // quad->arg_2.status = IS_EMPTY;

        // pushQuad(E[0]->val, *quad);
        
        
        // pushCode(E[0]->val, "retq");

        // quad->op.op = Retq_;
        // quad->result.status = IS_EMPTY;
        // quad->arg_1.status = IS_EMPTY;
        // quad->arg_2.status = IS_EMPTY;

        // pushQuad(E[0]->val, *quad);

        pushCode(E[0]->val, "end_func");
        struct GlobalSymbol* globEntry =  glob_lookup(class_name, (yyvsp[-1].exp)->symbol.name, glob_table);
        if(globEntry == NULL){
            semantic_error("Uncaught error!!!");
        }
        globEntry->tac = (yyval.exp)->val;

        //view_quadruple($$->val.quad);
        static_context = 0;
    }
#line 3372 "bin/parser.tab.cc"
    break;

  case 100: /* MethodHeader: Modifiers_opt Type MethodDeclarator Throws_opt  */
#line 1088 "src/parser.y"
                                                   {
        
        struct node * memArr[4];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 4, 0);

        if((yyvsp[-3].exp) != NULL){
            int static_count = 0;
            int modifier_count = 0;
            for(int i=0; i< (yyvsp[-3].exp)->arr.size();i ++)
            {
                string temp = string((yyvsp[-3].exp)->arr[i]->data);
                if(temp == "static"){
                    static_count += 1;
                    static_context =1;
                    if(static_count <= 1){
                        (yyval.exp)->symbol.type.modifier.push_back(temp);
                    }
                }
                else{
                    modifier_count +=1;
                    if(modifier_count <= 1){
                        (yyval.exp)->symbol.type.modifier.push_back(temp);
                    }
                }
                if(modifier_count > 1 || static_count > 1){
                    semantic_error("Incorrect numbert of modifiers added at line number " + to_string(line_number));
                    break;
                }
                
            }
        }
        (yyval.exp)->symbol.type.return_type = (yyvsp[-2].exp)->symbol.type.name;
        (yyval.exp)->symbol.type.return_size = (yyvsp[-2].exp)->symbol.size;
        (yyval.exp)->symbol.type.t = 2;
        (yyval.exp)->symbol.name = (yyvsp[-1].exp)->symbol.name;
        ret_size = (yyvsp[-2].exp)->symbol.size;
        
        for(int i=0; i< (yyvsp[-1].exp)->symbol.type.parameters.size(); i++)
        {
            (yyval.exp)->symbol.type.parameters.push_back((yyvsp[-1].exp)->symbol.type.parameters[i]);
            (yyval.exp)->symbol.type.parameters_type.push_back((yyvsp[-1].exp)->symbol.type.parameters_type[i]);
            (yyval.exp)->symbol.type.parameters_size.push_back((yyvsp[-1].exp)->symbol.type.parameters_size[i]);
        }


        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
       long long int x = glob_insert(line_number, class_name,(yyval.exp)->symbol.name,(yyval.exp)->symbol.type,curr,glob_table,(yyval.exp)->val);

       if(x < 0){
        semantic_error("Method declaration at line number " + to_string(line_number)+ " is invalid as constructor already with same name declared at line number " + to_string(-x) +".");
       }
        
    }
#line 3437 "bin/parser.tab.cc"
    break;

  case 101: /* MethodHeader: Modifiers_opt Void MethodDeclarator Throws_opt  */
#line 1148 "src/parser.y"
                                                     {
        
        struct node * memArr[4];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = makeleaf((yyvsp[-2].data));
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 4, 0);
        if((yyvsp[-3].exp) != NULL)
        {   
            int static_count = 0;
            int modifier_count = 0;
            for(int i=0; i< (yyvsp[-3].exp)->arr.size();i ++)
            {
                string temp = string((yyvsp[-3].exp)->arr[i]->data);


                if(temp == "static"){
                    static_count += 1;
                    static_context = 1;
                    if(static_count <= 1){
                        (yyval.exp)->symbol.type.modifier.push_back(temp);
                    }
                }
                else{
                    modifier_count +=1;
                    if(modifier_count <= 1){
                        (yyval.exp)->symbol.type.modifier.push_back(temp);
                    }
                }
                if(modifier_count > 1 || static_count > 1){
                    semantic_error("Incorrect numbert of modifiers added at line number " + to_string(line_number));
                    break;
                }
                
            }
        }
        (yyval.exp)->symbol.type.return_type = "void";
        (yyval.exp)->symbol.type.return_size = 0;
        (yyval.exp)->symbol.type.t = 2;
        (yyval.exp)->symbol.name = (yyvsp[-1].exp)->symbol.name;
        ret_size = 0;

        for(int i=0; i< (yyvsp[-1].exp)->symbol.type.parameters.size(); i++)
        {
            (yyval.exp)->symbol.type.parameters.push_back((yyvsp[-1].exp)->symbol.type.parameters[i]);
            (yyval.exp)->symbol.type.parameters_type.push_back((yyvsp[-1].exp)->symbol.type.parameters_type[i]);
            (yyval.exp)->symbol.type.parameters_size.push_back((yyvsp[-1].exp)->symbol.type.parameters_size[i]);

        }

        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
        long long int x = glob_insert(line_number,class_name,(yyval.exp)->symbol.name,(yyval.exp)->symbol.type,curr,glob_table, (yyval.exp)->val);
        if(x < 0){
            semantic_error("Method declaration at line number " + to_string(line_number)+ " is invalid as constructor already with same name declared at line number " + to_string(-x) +".");
        }

    }
#line 3503 "bin/parser.tab.cc"
    break;

  case 102: /* Throws_opt: %empty  */
#line 1211 "src/parser.y"
    { 
        (yyval.exp) = NULL;
    }
#line 3511 "bin/parser.tab.cc"
    break;

  case 103: /* Throws_opt: Throws  */
#line 1214 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Throws", memArr, 1, 1);
    }
#line 3521 "bin/parser.tab.cc"
    break;

  case 104: /* MethodDeclarator: Identifier Symbol_Table_Change LeftParanthesis FormalParameterList_opt RightParanthesis  */
#line 1221 "src/parser.y"
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
                (yyval.exp)->symbol.type.parameters_size.push_back((yyvsp[-1].exp)->arr[i]->symbol.size);

            }
        }
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3548 "bin/parser.tab.cc"
    break;

  case 105: /* MethodDeclarator: MethodDeclarator LeftSquareBracket RightSquareBracket  */
#line 1243 "src/parser.y"
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
#line 3564 "bin/parser.tab.cc"
    break;

  case 106: /* FormalParameterList_opt: %empty  */
#line 1255 "src/parser.y"
                          {
        (yyval.exp) = NULL;
    }
#line 3572 "bin/parser.tab.cc"
    break;

  case 107: /* FormalParameterList_opt: FormalParameterList  */
#line 1258 "src/parser.y"
                          {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameters", memArr, 1, 1);
        
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3587 "bin/parser.tab.cc"
    break;

  case 108: /* FormalParameterList: FormalParameter  */
#line 1270 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameter", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
        
    }
#line 3602 "bin/parser.tab.cc"
    break;

  case 109: /* FormalParameterList: FormalParameterList Comma FormalParameter  */
#line 1280 "src/parser.y"
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
#line 3618 "bin/parser.tab.cc"
    break;

  case 110: /* FormalParameter: Type VariableDeclaratorId  */
#line 1293 "src/parser.y"
                              {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-1].exp)->data, concatenate_string(" ", (yyvsp[0].exp)->data)));
        (yyval.exp)->symbol.size = (yyvsp[-1].exp)->symbol.size;
        (yyval.exp)->symbol.type.name = (yyvsp[-1].exp)->symbol.type.name;
        //cout << $1->symbol.type.name << endl;
        (yyval.exp)->symbol.type.t = (yyvsp[-1].exp)->symbol.type.t;
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

        (yyval.exp)->symbol.name = name;
        long long int x  = loc_insert(curr,(yyval.exp)->symbol);
        if(x < 0)
        {
            semantic_error("Declaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x) + "." );
        }
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);        
    }
#line 3657 "bin/parser.tab.cc"
    break;

  case 111: /* Throws: THROWS ClassTypeList  */
#line 1329 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("throws", memArr, 1, 1);
    }
#line 3667 "bin/parser.tab.cc"
    break;

  case 112: /* ClassTypeList: ClassType  */
#line 1336 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 1, 0);
    }
#line 3677 "bin/parser.tab.cc"
    break;

  case 113: /* ClassTypeList: ClassTypeList Comma ClassType  */
#line 1341 "src/parser.y"
                                    {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp); 
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 2, 0);
    }
#line 3688 "bin/parser.tab.cc"
    break;

  case 114: /* MethodBody: Block Symbol_Table_Back  */
#line 1350 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3696 "bin/parser.tab.cc"
    break;

  case 115: /* MethodBody: Semicolon Symbol_Table_Back  */
#line 1353 "src/parser.y"
                                 {
        (yyval.exp) = NULL;
    }
#line 3704 "bin/parser.tab.cc"
    break;

  case 116: /* StaticInitializer: Static Symbol_Table_Change Block Symbol_Table_Back  */
#line 1359 "src/parser.y"
                                                       {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("static", memArr, 1, 1);
        
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3719 "bin/parser.tab.cc"
    break;

  case 117: /* ConstructorDeclaration: Modifiers_opt ConstructorDeclarator Throws_opt ConstructorBody Symbol_Table_Back  */
#line 1371 "src/parser.y"
                                                                                     {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-3].exp);
        memArr[2] = (yyvsp[-2].exp);
        memArr[3] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 4, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->symbol = (yyvsp[-3].exp)->symbol;

        if((yyvsp[-4].exp) != NULL)
        {
            for(int i = 0; i<(yyvsp[-4].exp)->arr.size(); i++)
            {
                (yyval.exp)->symbol.type.modifier.push_back((yyvsp[-4].exp)->arr[i]->data);
            }
            
        }

        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-4].exp);
        E[2] = (yyvsp[-1].exp);
        buildTAC(E, 3, APPEND_CODE);
        long long int x = glob_insert(line_number,class_name,(yyval.exp)->symbol.name,(yyval.exp)->symbol.type,curr,glob_table, (yyval.exp)->val);
        if(x < 0){
            semantic_error("Constructor declaration at line number " + to_string(line_number)+ " is invalid as constructor already defined at line number " + to_string(-x) +".");
        }
    }
#line 3753 "bin/parser.tab.cc"
    break;

  case 118: /* ConstructorDeclarator: SimpleName Symbol_Table_Change LeftParanthesis FormalParameterList_opt RightParanthesis  */
#line 1402 "src/parser.y"
                                                                                            {
        
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-4].exp)->data, memArr, 1, 0);
        if(string((yyvsp[-4].exp)->data) != class_name){
            semantic_error("Constructor Declaration at line number " + to_string(line_number) +  " is not declared properly as no class of name " + (yyvsp[-4].exp)->data + " delared in the scope."  );
        }
        (yyval.exp)->symbol.name = (yyvsp[-4].exp)->data;
        struct Symbol * class_scope_entry = loc_lookup(glob_class_scope,class_name);
        if(class_scope_entry !=  NULL)
        {
            (yyval.exp)->symbol.type = class_scope_entry->type;
        }
        (yyval.exp)->symbol.type.t = 2;

        if((yyvsp[-1].exp) != NULL){
            //cout << $4->arr.size() <<endl;
            for(int i=0; i< (yyvsp[-1].exp)->arr.size(); i++)
            {
                (yyval.exp)->symbol.type.parameters.push_back((yyvsp[-1].exp)->arr[i]->symbol.name);
                (yyval.exp)->symbol.type.parameters_type.push_back((yyvsp[-1].exp)->arr[i]->symbol.type.name);
            }
            
        
        }
        (yyval.exp)->symbol.line_num = line_number;
        //glob_insert(line_number,class_name,$$->symbol.name,$$->symbol.type,curr,glob_table);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
        
    }
#line 3792 "bin/parser.tab.cc"
    break;

  case 119: /* ConstructorBody: LeftCurlyBrace ExplicitConstructorInvocation_opt BlockStatements_opt RightCurlyBrace  */
#line 1438 "src/parser.y"
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
#line 3808 "bin/parser.tab.cc"
    break;

  case 120: /* ExplicitConstructorInvocation_opt: %empty  */
#line 1450 "src/parser.y"
                                    { 
    (yyval.exp) = NULL; 
    }
#line 3816 "bin/parser.tab.cc"
    break;

  case 121: /* ArgumentList_opt: %empty  */
#line 1484 "src/parser.y"
                  {
    (yyval.exp) = NULL; 
    }
#line 3824 "bin/parser.tab.cc"
    break;

  case 122: /* ArgumentList_opt: ArgumentList  */
#line 1487 "src/parser.y"
                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Arguments", memArr, 1, 0);

        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
        // cout << "ArgumentList: \n";
        // printThreeAC($1->val) ;       
    }
#line 3841 "bin/parser.tab.cc"
    break;

  case 123: /* InterfaceDeclaration: Modifiers_opt Interface Identifier ExtendsInterfaces_opt InterfaceBody  */
#line 1501 "src/parser.y"
                                                                           {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = makeleaf((yyvsp[-3].data));
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-2].data), memArr, 4, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3855 "bin/parser.tab.cc"
    break;

  case 124: /* ExtendsInterfaces_opt: %empty  */
#line 1511 "src/parser.y"
                        {
    (yyval.exp) = NULL;
    }
#line 3863 "bin/parser.tab.cc"
    break;

  case 125: /* ExtendsInterfaces_opt: ExtendsInterfaces  */
#line 1514 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 1);
    }
#line 3873 "bin/parser.tab.cc"
    break;

  case 126: /* ExtendsInterfaces: Extends InterfaceType  */
#line 1521 "src/parser.y"
                          {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 0);
    }
#line 3883 "bin/parser.tab.cc"
    break;

  case 127: /* ExtendsInterfaces: ExtendsInterfaces Comma InterfaceType  */
#line 1526 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 2, 0);
    }
#line 3894 "bin/parser.tab.cc"
    break;

  case 128: /* InterfaceBody: LeftCurlyBrace InterfaceMemberDeclarations_opt RightCurlyBrace  */
#line 1534 "src/parser.y"
                                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3902 "bin/parser.tab.cc"
    break;

  case 129: /* InterfaceMemberDeclarations_opt: %empty  */
#line 1538 "src/parser.y"
                                 {
        (yyval.exp) = NULL;
    }
#line 3910 "bin/parser.tab.cc"
    break;

  case 130: /* InterfaceMemberDeclarations_opt: InterfaceMemberDeclarations  */
#line 1541 "src/parser.y"
                                  {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interfaces", memArr, 1, 1);
    }
#line 3920 "bin/parser.tab.cc"
    break;

  case 131: /* InterfaceMemberDeclarations: InterfaceMemberDeclaration  */
#line 1548 "src/parser.y"
                               {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 1, 0);
    }
#line 3930 "bin/parser.tab.cc"
    break;

  case 132: /* InterfaceMemberDeclarations: InterfaceMemberDeclarations InterfaceMemberDeclaration  */
#line 1553 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 0);
    }
#line 3941 "bin/parser.tab.cc"
    break;

  case 133: /* InterfaceMemberDeclaration: ConstantDeclaration  */
#line 1561 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3950 "bin/parser.tab.cc"
    break;

  case 134: /* InterfaceMemberDeclaration: AbstractMethodDeclaration  */
#line 1565 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3959 "bin/parser.tab.cc"
    break;

  case 135: /* ConstantDeclaration: FieldDeclaration  */
#line 1571 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3967 "bin/parser.tab.cc"
    break;

  case 136: /* AbstractMethodDeclaration: MethodHeader Semicolon  */
#line 1576 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3975 "bin/parser.tab.cc"
    break;

  case 137: /* ArrayInitializer: LeftCurlyBrace VariableInitializers_opt Comma_opt RightCurlyBrace  */
#line 1581 "src/parser.y"
                                                                      {
        (yyval.exp) = (yyvsp[-2].exp);
    }
#line 3983 "bin/parser.tab.cc"
    break;

  case 138: /* VariableInitializers_opt: %empty  */
#line 1585 "src/parser.y"
                          {
        (yyval.exp) = NULL; 
    }
#line 3991 "bin/parser.tab.cc"
    break;

  case 139: /* VariableInitializers_opt: VariableInitializers  */
#line 1588 "src/parser.y"
                           {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("VariableInitializers", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);  
    }
#line 4005 "bin/parser.tab.cc"
    break;

  case 140: /* Comma_opt: %empty  */
#line 1598 "src/parser.y"
            {
        (yyval.exp) = NULL; 
    }
#line 4013 "bin/parser.tab.cc"
    break;

  case 141: /* Comma_opt: Comma  */
#line 1601 "src/parser.y"
            {
        (yyval.exp) = NULL;
    }
#line 4021 "bin/parser.tab.cc"
    break;

  case 142: /* VariableInitializers: VariableInitializer  */
#line 1606 "src/parser.y"
                        {
       struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);  
    }
#line 4035 "bin/parser.tab.cc"
    break;

  case 143: /* VariableInitializers: VariableInitializers Comma VariableInitializer  */
#line 1615 "src/parser.y"
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
#line 4051 "bin/parser.tab.cc"
    break;

  case 144: /* Block: LeftCurlyBrace BlockStatements_opt RightCurlyBrace  */
#line 1628 "src/parser.y"
                                                       {    
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4059 "bin/parser.tab.cc"
    break;

  case 145: /* Symbol_Table_Change: %empty  */
#line 1633 "src/parser.y"
    { 
        curr = loc_mktable(curr,class_name);
    }
#line 4067 "bin/parser.tab.cc"
    break;

  case 146: /* Symbol_Table_Back: %empty  */
#line 1638 "src/parser.y"
    {
        curr = curr->parent;
        //cout << "Symbol Table Changed" <<endl;
    }
#line 4076 "bin/parser.tab.cc"
    break;

  case 147: /* BlockStatements_opt: %empty  */
#line 1643 "src/parser.y"
                      {
     (yyval.exp) = NULL; 
     }
#line 4084 "bin/parser.tab.cc"
    break;

  case 148: /* BlockStatements_opt: BlockStatements  */
#line 1646 "src/parser.y"
                      {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("statements", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);  
    }
#line 4098 "bin/parser.tab.cc"
    break;

  case 149: /* BlockStatements: BlockStatement  */
#line 1657 "src/parser.y"
                   {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Blocks", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE); 
    }
#line 4112 "bin/parser.tab.cc"
    break;

  case 150: /* BlockStatements: BlockStatements BlockStatement  */
#line 1666 "src/parser.y"
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
#line 4129 "bin/parser.tab.cc"
    break;

  case 151: /* BlockStatement: LocalVariableDeclarationStatement  */
#line 1680 "src/parser.y"
                                      {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("LocalVariableDeclarationStatement", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4143 "bin/parser.tab.cc"
    break;

  case 152: /* BlockStatement: Statement  */
#line 1689 "src/parser.y"
                {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Statement", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);

    }
#line 4158 "bin/parser.tab.cc"
    break;

  case 153: /* LocalVariableDeclarationStatement: LocalVariableDeclaration Semicolon  */
#line 1701 "src/parser.y"
                                       {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4172 "bin/parser.tab.cc"
    break;

  case 154: /* LocalVariableDeclaration: Type VariableDeclarators  */
#line 1712 "src/parser.y"
                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Declaration", memArr, 2, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
        for(int j = 0 ; j< (yyvsp[0].exp)->arr.size(); j++)
            {   
                //view_symbol($2->arr[j]->symbol);
                //view_symbol($1->symbol);
                (yyval.exp)->symbol.type = (yyvsp[-1].exp)->symbol.type;
                (yyval.exp)->symbol.name= (yyvsp[0].exp)->arr[j]->symbol.name;
                (yyval.exp)->symbol.size = (yyvsp[-1].exp)->symbol.size;
                (yyval.exp)->symbol.source_file = (yyvsp[0].exp)->arr[j]->symbol.source_file;
                (yyval.exp)->symbol.offset = (yyvsp[0].exp)->arr[j]->symbol.offset;
                (yyval.exp)->symbol.type.modifier.clear();
                //cout << $$->symbol.size << endl;
                
                string txt = (yyvsp[0].exp)->arr[j]->symbol.name;
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
                
                (yyval.exp)->symbol.name = name;

                //Type Checking if initialization
                if((yyvsp[0].exp)->arr[j]->t == 4){
                    //view_symbol($2->arr[j]);
                    if((yyval.exp)->symbol.type.name == (yyvsp[0].exp)->arr[j]->symbol.type.name){
                        (yyval.exp)->symbol.type = (yyvsp[0].exp)->arr[j]->symbol.type;
                        //$$->symbol.size = $2->arr[j]->symbol.size;
                        //view_symbol($$->symbol);
                        long long int x = loc_insert(curr,(yyval.exp)->symbol);
                        if(x<0)
                        {
                            semantic_error("Declaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x));
                        }
                    }

                    else{
                            if(isAssignmentCompatible((yyval.exp)->symbol.type.name, (yyvsp[0].exp)->arr[j]->arr[1]->symbol.type.name)){
                                long long int x = loc_insert(curr,(yyval.exp)->symbol);
                                if(x<0)
                                {
                                    semantic_error("Declaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x));
                                }
                            }
                            else{
                                semantic_error("Bad initialization types ["  + (yyval.exp)->symbol.type.name + ", " + (yyvsp[0].exp)->arr[j]->symbol.type.name + "] at line number " +  to_string(line_number) + ".");
                            }
                        }
                }
                else{
                    long long int x = loc_insert(curr,(yyval.exp)->symbol);
                    if(x<0)
                        {
                            semantic_error("Declaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x));
                        }
                }
                

            }
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4256 "bin/parser.tab.cc"
    break;

  case 155: /* Statement: StatementWithoutTrailingSubstatement  */
#line 1793 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 1576 "<<$$->val.code[i] << " "<<endl;
        // }
    }
#line 4267 "bin/parser.tab.cc"
    break;

  case 156: /* Statement: LabeledStatement  */
#line 1799 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4275 "bin/parser.tab.cc"
    break;

  case 157: /* Statement: IfThenStatement Symbol_Table_Back  */
#line 1802 "src/parser.y"
                                       {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4283 "bin/parser.tab.cc"
    break;

  case 158: /* Statement: IfThenElseStatement Symbol_Table_Back  */
#line 1805 "src/parser.y"
                                           {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4291 "bin/parser.tab.cc"
    break;

  case 159: /* Statement: WhileStatement Symbol_Table_Back  */
#line 1808 "src/parser.y"
                                      {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4299 "bin/parser.tab.cc"
    break;

  case 160: /* Statement: ForStatement Symbol_Table_Back  */
#line 1811 "src/parser.y"
                                    {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4307 "bin/parser.tab.cc"
    break;

  case 161: /* StatementNoShortIf: StatementWithoutTrailingSubstatement  */
#line 1816 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4315 "bin/parser.tab.cc"
    break;

  case 162: /* StatementNoShortIf: LabeledStatementNoShortIf  */
#line 1819 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4323 "bin/parser.tab.cc"
    break;

  case 163: /* StatementNoShortIf: IfThenElseStatementNoShortIf Symbol_Table_Back  */
#line 1822 "src/parser.y"
                                                    {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4331 "bin/parser.tab.cc"
    break;

  case 164: /* StatementNoShortIf: WhileStatementNoShortIf Symbol_Table_Back  */
#line 1825 "src/parser.y"
                                               {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4339 "bin/parser.tab.cc"
    break;

  case 165: /* StatementNoShortIf: ForStatementNoShortIf Symbol_Table_Back  */
#line 1828 "src/parser.y"
                                             {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4347 "bin/parser.tab.cc"
    break;

  case 166: /* StatementWithoutTrailingSubstatement: Block  */
#line 1833 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 1616 "<<$$->val.code[i] << " "<<endl;
        // }
    }
#line 4358 "bin/parser.tab.cc"
    break;

  case 167: /* StatementWithoutTrailingSubstatement: EmptyStatement  */
#line 1839 "src/parser.y"
                     {
        (yyval.exp) = NULL;
    }
#line 4366 "bin/parser.tab.cc"
    break;

  case 168: /* StatementWithoutTrailingSubstatement: ExpressionStatement  */
#line 1842 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);

        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 1625 "<<$$->val.code[i] << " "<<endl;
        // }
    }
#line 4378 "bin/parser.tab.cc"
    break;

  case 169: /* StatementWithoutTrailingSubstatement: BreakStatement  */
#line 1849 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4386 "bin/parser.tab.cc"
    break;

  case 170: /* StatementWithoutTrailingSubstatement: ContinueStatement  */
#line 1852 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4394 "bin/parser.tab.cc"
    break;

  case 171: /* StatementWithoutTrailingSubstatement: ReturnStatement  */
#line 1855 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4402 "bin/parser.tab.cc"
    break;

  case 172: /* StatementWithoutTrailingSubstatement: SynchronizedStatement  */
#line 1858 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4410 "bin/parser.tab.cc"
    break;

  case 173: /* StatementWithoutTrailingSubstatement: ThrowStatement  */
#line 1861 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4418 "bin/parser.tab.cc"
    break;

  case 174: /* StatementWithoutTrailingSubstatement: TryStatement  */
#line 1864 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4426 "bin/parser.tab.cc"
    break;

  case 175: /* EmptyStatement: Semicolon  */
#line 1869 "src/parser.y"
              {
        (yyval.exp) = NULL;
    }
#line 4434 "bin/parser.tab.cc"
    break;

  case 176: /* LabeledStatement: Identifier Semicolon Statement  */
#line 1874 "src/parser.y"
                                   {
        struct node* memArr[2];
        memArr[0] = makeleaf((yyvsp[-2].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("LabeledStatements", memArr, 2, 0);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = makeleaf((yyvsp[-2].data));
        buildVal(E[1], 1);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);
    }
#line 4451 "bin/parser.tab.cc"
    break;

  case 177: /* LabeledStatementNoShortIf: Identifier Semicolon StatementNoShortIf  */
#line 1888 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = makeleaf((yyvsp[-2].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfThen", memArr, 2, 0);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = makeleaf((yyvsp[-2].data));
        buildVal(E[1], 1);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);
    }
#line 4468 "bin/parser.tab.cc"
    break;

  case 178: /* ExpressionStatement: StatementExpression Semicolon  */
#line 1902 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[-1].exp);
        appendCode((yyval.exp)->val, (yyval.exp)->post_fix_val);
        (yyval.exp)->post_fix_val.code.clear();
        (yyval.exp)->post_fix_val.quad.clear();
    }
#line 4479 "bin/parser.tab.cc"
    break;

  case 179: /* StatementExpression: Assignment  */
#line 1910 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
        //cout << "Hmmm" << endl;
    }
#line 4488 "bin/parser.tab.cc"
    break;

  case 180: /* StatementExpression: PreIncrementExpression  */
#line 1914 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4496 "bin/parser.tab.cc"
    break;

  case 181: /* StatementExpression: PreDecrementExpression  */
#line 1917 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4504 "bin/parser.tab.cc"
    break;

  case 182: /* StatementExpression: PostIncrementExpression  */
#line 1920 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4512 "bin/parser.tab.cc"
    break;

  case 183: /* StatementExpression: PostDecrementExpression  */
#line 1923 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4520 "bin/parser.tab.cc"
    break;

  case 184: /* StatementExpression: MethodInvocation  */
#line 1926 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4528 "bin/parser.tab.cc"
    break;

  case 185: /* StatementExpression: ClassInstanceCreationExpression  */
#line 1929 "src/parser.y"
                                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4536 "bin/parser.tab.cc"
    break;

  case 186: /* IfThenStatement: If Symbol_Table_Change LeftParanthesis Expression RightParanthesis Statement  */
#line 1934 "src/parser.y"
                                                                                 {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfThen", memArr, 2, 1);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E,3,IF_CODE);
    }
#line 4552 "bin/parser.tab.cc"
    break;

  case 187: /* IfThenElseStatement: If Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf Else Statement  */
#line 1947 "src/parser.y"
                                                                                                        {
        
        struct node* memArr[3];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfElse", memArr, 3, 1);

        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-4].exp);
        E[2] = (yyvsp[-2].exp);
        E[3] = (yyvsp[0].exp);
        buildTAC(E,4,IF_CODE);
        
    }
#line 4573 "bin/parser.tab.cc"
    break;

  case 188: /* IfThenElseStatementNoShortIf: If Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf Else StatementNoShortIf  */
#line 1965 "src/parser.y"
                                                                                                                  {
        
        struct node* memArr[3];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfElseIf", memArr, 3, 1);

        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-4].exp);
        E[2] = (yyvsp[-2].exp);
        E[3] = (yyvsp[0].exp);
        buildTAC(E,4,IF_CODE);
        
    }
#line 4594 "bin/parser.tab.cc"
    break;

  case 189: /* WhileStatement: While Symbol_Table_Change LeftParanthesis Expression RightParanthesis Statement  */
#line 1983 "src/parser.y"
                                                                                    {
        
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("While", memArr, 2, 1);

        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E,3,WHILE_CODE);
        
    }
#line 4613 "bin/parser.tab.cc"
    break;

  case 190: /* WhileStatementNoShortIf: While Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf  */
#line 1999 "src/parser.y"
                                                                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("While", memArr, 2, 1);

        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E,3,WHILE_CODE);
    }
#line 4630 "bin/parser.tab.cc"
    break;

  case 191: /* ForStatement: For Symbol_Table_Change LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis Statement  */
#line 2013 "src/parser.y"
                                                                                                                                   {
        
        struct node* memArr[4];
        memArr[0] = (yyvsp[-6].exp);
        memArr[1] = (yyvsp[-4].exp);
        memArr[2] = (yyvsp[-2].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("For", memArr, 4, 1);
        (yyval.exp)->t = 2;

        struct node* E[5];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-6].exp);
        E[2] = (yyvsp[-4].exp);
        E[3] = (yyvsp[-2].exp);
        E[4] = (yyvsp[0].exp);
        buildTAC(E,5,FOR_CODE);

    }
#line 4654 "bin/parser.tab.cc"
    break;

  case 192: /* ForStatementNoShortIf: For Symbol_Table_Change LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis StatementNoShortIf  */
#line 2034 "src/parser.y"
                                                                                                                                            {
        
        struct node* memArr[4];
        memArr[0] = (yyvsp[-6].exp);
        memArr[1] = (yyvsp[-4].exp);
        memArr[2] = (yyvsp[-2].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("For", memArr, 4, 1);

        struct node* E[5];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-6].exp);
        E[2] = (yyvsp[-4].exp);
        E[3] = (yyvsp[-2].exp);
        E[4] = (yyvsp[0].exp);
        buildTAC(E,5,FOR_CODE);
    }
#line 4676 "bin/parser.tab.cc"
    break;

  case 193: /* ForInit_opt: %empty  */
#line 2052 "src/parser.y"
             { 
    (yyval.exp) = NULL; 
    }
#line 4684 "bin/parser.tab.cc"
    break;

  case 194: /* ForInit_opt: ForInit  */
#line 2055 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);

        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4699 "bin/parser.tab.cc"
    break;

  case 195: /* Expression_opt: %empty  */
#line 2066 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 4707 "bin/parser.tab.cc"
    break;

  case 196: /* Expression_opt: Expression  */
#line 2069 "src/parser.y"
                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Expression", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
        //cout << $$->val.place <<endl;
        // printThreeAC($1->val);
    }
#line 4723 "bin/parser.tab.cc"
    break;

  case 197: /* ForUpdate_opt: %empty  */
#line 2081 "src/parser.y"
               { 
    (yyval.exp) = NULL ;
    }
#line 4731 "bin/parser.tab.cc"
    break;

  case 198: /* ForUpdate_opt: ForUpdate  */
#line 2084 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4745 "bin/parser.tab.cc"
    break;

  case 199: /* ForInit: StatementExpressionList  */
#line 2095 "src/parser.y"
                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4759 "bin/parser.tab.cc"
    break;

  case 200: /* ForInit: LocalVariableDeclaration  */
#line 2104 "src/parser.y"
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
#line 4775 "bin/parser.tab.cc"
    break;

  case 201: /* ForUpdate: StatementExpressionList  */
#line 2117 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4789 "bin/parser.tab.cc"
    break;

  case 202: /* StatementExpressionList: StatementExpression  */
#line 2128 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("StatementExpression", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
        appendCode((yyval.exp)->val,(yyval.exp)->post_fix_val);
        (yyval.exp)->post_fix_val.code.clear();
        (yyval.exp)->post_fix_val.quad.clear();
    }
#line 4806 "bin/parser.tab.cc"
    break;

  case 203: /* StatementExpressionList: StatementExpressionList Comma StatementExpression  */
#line 2140 "src/parser.y"
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
#line 4822 "bin/parser.tab.cc"
    break;

  case 204: /* BreakStatement: Break Identifier_opt Semicolon  */
#line 2153 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("break", memArr, 1, 1);
        buildVal((yyval.exp), 1);
    }
#line 4833 "bin/parser.tab.cc"
    break;

  case 205: /* Identifier_opt: %empty  */
#line 2161 "src/parser.y"
    {
        (yyval.exp) = NULL;
    }
#line 4841 "bin/parser.tab.cc"
    break;

  case 206: /* Identifier_opt: Identifier  */
#line 2163 "src/parser.y"
                  {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        buildVal((yyval.exp),1);
    }
#line 4850 "bin/parser.tab.cc"
    break;

  case 207: /* ContinueStatement: Continue Identifier_opt Semicolon  */
#line 2169 "src/parser.y"
                                      {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("continue", memArr, 1, 1);
        buildVal((yyval.exp), 1);

    }
#line 4862 "bin/parser.tab.cc"
    break;

  case 208: /* ReturnStatement: Return Expression_opt Semicolon  */
#line 2178 "src/parser.y"
                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("return", memArr, 1, 1);
        // buildVal(makeleaf($1));
        // printThreeAC($2->val);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = makeleaf((yyvsp[-2].data));
        buildVal(E[1], 1);
        E[2] = (yyvsp[-1].exp);
        buildTAC(E, 3, APPEND_CODE);


        if((yyvsp[-1].exp) != NULL){
            if(ret_size == 0){
                semantic_error("Function of type void returning value at line number " + to_string(line_number));
            }
            else{
                struct Quad* quad = new struct Quad;
                quad->op.op = Movq_;
                quad->op.type = "int";
                struct Value * val = new struct Value;
                val->place = "\%rax";
                val->status = IS_LITERAL;
                fill_arg(&quad->result, *val);
                fill_arg(&quad->arg_1, (yyvsp[-1].exp)->val);
                quad->arg_2.status = IS_EMPTY;
                pushQuad((yyval.exp)->val, *quad);
                pushCode((yyval.exp)->val, "push " + (yyvsp[-1].exp)->val.place + " (" + to_string(ret_size) + ")$rbp");
                

                pushCode((yyval.exp)->val, "popq \%rbp");

                quad->op.op = Popq_;
                val->place = "\%rbp";
                fill_arg(&quad->result, *val);
                quad->arg_1.status = IS_EMPTY;
                quad->arg_2.status = IS_EMPTY;

                pushQuad((yyval.exp)->val, *quad);

                
                quad->arg_1.status = IS_EMPTY;
                quad->arg_2.status = IS_EMPTY;
                quad->result.status = IS_EMPTY;
                quad->op.op = Retq_;
                quad->op.type = "int";
                pushQuad((yyval.exp)->val, *quad);
                pushCode((yyval.exp)->val,"retq");
            }
        }
        hasReturned = 1;
        //string str = "ret";
        //pushCode($$->val,str);
    }
#line 4923 "bin/parser.tab.cc"
    break;

  case 209: /* ThrowStatement: THROW Expression Semicolon  */
#line 2236 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("throw", memArr, 1, 1);
    }
#line 4933 "bin/parser.tab.cc"
    break;

  case 210: /* SynchronizedStatement: Synchronized LeftParanthesis Expression RightParanthesis Block  */
#line 2243 "src/parser.y"
                                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("synchronized", memArr, 2, 1);
    }
#line 4944 "bin/parser.tab.cc"
    break;

  case 211: /* TryStatement: Try Block Catches  */
#line 2251 "src/parser.y"
                      {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCatches", memArr, 2, 1);
    }
#line 4955 "bin/parser.tab.cc"
    break;

  case 212: /* TryStatement: Try Block Catches_opt Finally  */
#line 2257 "src/parser.y"
                                    {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCtachesFinally", memArr, 3, 1);
    }
#line 4967 "bin/parser.tab.cc"
    break;

  case 213: /* Catches_opt: %empty  */
#line 2265 "src/parser.y"
             {
        (yyval.exp) = NULL; 
    }
#line 4975 "bin/parser.tab.cc"
    break;

  case 214: /* Catches_opt: Catches  */
#line 2268 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catches", memArr, 1, 1);
    }
#line 4985 "bin/parser.tab.cc"
    break;

  case 215: /* Catches: CatchClause  */
#line 2275 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("catch", memArr, 1, 0);
    }
#line 4995 "bin/parser.tab.cc"
    break;

  case 216: /* Catches: Catches CatchClause  */
#line 2280 "src/parser.y"
                          {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catch", memArr, 2, 0);
    }
#line 5006 "bin/parser.tab.cc"
    break;

  case 217: /* CatchClause: Catch LeftParanthesis FormalParameter RightParanthesis Block  */
#line 2288 "src/parser.y"
                                                                 {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CatchClause", memArr, 2, 0);
    }
#line 5017 "bin/parser.tab.cc"
    break;

  case 218: /* Finally: FINALLY Block  */
#line 2296 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("finally", memArr, 1, 1);
    }
#line 5027 "bin/parser.tab.cc"
    break;

  case 219: /* Primary: PrimaryNoNewArray  */
#line 2303 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5035 "bin/parser.tab.cc"
    break;

  case 220: /* Primary: ArrayCreationExpression  */
#line 2306 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5043 "bin/parser.tab.cc"
    break;

  case 221: /* PrimaryNoNewArray: Literal  */
#line 2311 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5051 "bin/parser.tab.cc"
    break;

  case 222: /* PrimaryNoNewArray: This  */
#line 2314 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        string temp = makeNewTemp(newTempLabel);
        newTempLabel++;
        (yyval.exp)->symbol.type.name = class_name;
        (yyval.exp)->val.place = temp;
        pushCode((yyval.exp)->val,temp + " = poparam");
        if(static_context == 1){
            semantic_error("Non-static variable this cannot be referenced from a static context at line number " + to_string(line_number));
        }
    }
#line 5067 "bin/parser.tab.cc"
    break;

  case 223: /* PrimaryNoNewArray: LeftParanthesis Expression RightParanthesis  */
#line 2325 "src/parser.y"
                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 5075 "bin/parser.tab.cc"
    break;

  case 224: /* PrimaryNoNewArray: ClassInstanceCreationExpression  */
#line 2328 "src/parser.y"
                                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5083 "bin/parser.tab.cc"
    break;

  case 225: /* PrimaryNoNewArray: FieldAccess  */
#line 2331 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5091 "bin/parser.tab.cc"
    break;

  case 226: /* PrimaryNoNewArray: MethodInvocation  */
#line 2334 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5099 "bin/parser.tab.cc"
    break;

  case 227: /* PrimaryNoNewArray: ArrayAccess  */
#line 2337 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
        string temp = makeNewTemp(newTempLabel);
        insert_temp((yyval.exp)->symbol, temp, (yyval.exp)->symbol.type.name);
        newTempLabel++;
        pushCode((yyval.exp)->val,string(temp + " = " + (yyvsp[0].exp)->symbol.name + "[" + (yyvsp[0].exp)->val.place + "]") );
        // $$->val.place = $1->symbol.name + "[" + $1->val.place + "]";

        struct Value * val = new struct Value;
        struct Quad * quad = new struct Quad;
        quad->my_table = curr;
        quad->op.op = LoadArray_;
        quad->op.type = (yyvsp[0].exp)->symbol.type.name;

        fill_arg(&quad->arg_2, (yyvsp[0].exp)->val);

        (yyval.exp)->val.place = temp;
        (yyval.exp)->val.status = IS_VARIABLE;

        fill_arg(&quad->result, (yyval.exp)->val);
        val->place = (yyvsp[0].exp)->symbol.name;
        val->status = IS_VARIABLE;
        fill_arg(&quad->arg_1, *val);

        pushQuad((yyval.exp)->val, *quad);

    }
#line 5131 "bin/parser.tab.cc"
    break;

  case 228: /* ClassInstanceCreationExpression: New ClassType LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 2366 "src/parser.y"
                                                                    {
        struct node * memArr[3];
        memArr[0] = makeleaf((yyvsp[-4].data));
        memArr[1] =(yyvsp[-3].exp);
        memArr[2] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ClassInstance", memArr, 3, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->symbol.type.name = (yyvsp[-3].exp)->symbol.name;

        struct GlobalSymbol * glob_entry = glob_lookup((yyvsp[-3].exp)->symbol.name,(yyvsp[-3].exp)->symbol.name,glob_table);

        if(glob_entry == NULL){
            buildVal((yyval.exp), 1);
        }

        else{
            if((yyvsp[-1].exp) == NULL){
                //cout << glob_entry->type.parameters_type.size() <<endl;
                view_type(glob_entry->type);
                if(glob_entry->type.parameters_type.size() != 0){
                    semantic_error("Constructor " + string((yyvsp[-3].exp)->data) +  " invocation at line number " + to_string(line_number) + " has wrong number of parameters passed.");
                }

            }
            else{
                if((yyvsp[-1].exp)->arr.size()!= glob_entry->type.parameters_type.size()){
                    semantic_error("Constructor " + string((yyvsp[-3].exp)->data) +  " invocation at line number " + to_string(line_number) + " has wrong number of parameters passed.");
                }
                else{
                    //cout << "Hello good sir " << $3->arr.size() << endl;
                    for (int i = 0; i< (yyvsp[-1].exp)->arr.size(); i++)
                    {   
                        //view_symbol($3->arr[i]->symbol);

                        if(!isAssignmentCompatible(glob_entry->type.parameters_type[i], (yyvsp[-1].exp)->arr[i]->symbol.type.name))
                        {
                            semantic_error("Constructor " + string((yyvsp[-3].exp)->data) +  " invocation at line number " + to_string(line_number) + " has wrong type of parameter passed at position " + to_string(i+1) + "." );          
                        }
                    }
                }
            }

        }

        buildVal((yyval.exp), 1);

    }
#line 5183 "bin/parser.tab.cc"
    break;

  case 229: /* ArgumentList: Expression  */
#line 2415 "src/parser.y"
               {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArgumentList", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);

    }
#line 5198 "bin/parser.tab.cc"
    break;

  case 230: /* ArgumentList: ArgumentList Comma Expression  */
#line 2425 "src/parser.y"
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
#line 5214 "bin/parser.tab.cc"
    break;

  case 231: /* ArrayCreationExpression: New PrimitiveType DimExprs Dims_opt  */
#line 2438 "src/parser.y"
                                        {

        struct node * memArr2[1];
        memArr2[0] = (yyvsp[-1].exp);
        (yyvsp[-1].exp) = makeInternalNode("Dimension", memArr2,1,1);

        struct node * memArr[4];
        memArr[0] = makeleaf((yyvsp[-3].data));
        memArr[1] =(yyvsp[-2].exp);
        memArr[2] =(yyvsp[-1].exp);
        memArr[3] =(yyvsp[0].exp);

        (yyval.exp) = makeInternalNode("ArrayCreation", memArr, 4, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->symbol.type.name = (yyvsp[-2].exp)->symbol.type.name;
        (yyval.exp)->symbol.size = (yyvsp[-2].exp)->symbol.size;

        for(int i = 0 ; i < (yyvsp[-1].exp)->arr.size(); i++){
            (yyval.exp)->symbol.type.name += "[]";
            (yyval.exp)->symbol.type.dims.push_back(atoi((yyvsp[-1].exp)->arr[i]->data));
            (yyval.exp)->symbol.size *= (yyval.exp)->symbol.type.dims[i];
        }

        //view_type($$->symbol.type);

        // buildVal($$);
        (yyval.exp)->t = ARRAY_ACCESS;
    }
#line 5247 "bin/parser.tab.cc"
    break;

  case 232: /* ArrayCreationExpression: New ClassOrInterfaceType DimExprs Dims_opt  */
#line 2466 "src/parser.y"
                                                 {

        struct node * memArr2[1];
        memArr2[0] = (yyvsp[-1].exp);
        (yyvsp[-1].exp) = makeInternalNode("Dimension", memArr2,1,1);

        struct node * memArr[4];
        memArr[0] = makeleaf((yyvsp[-3].data));
        memArr[1] =(yyvsp[-2].exp);
        memArr[2] =(yyvsp[-1].exp);
        memArr[3] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArrayCreation", memArr, 4, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        // buildVal($$);
    }
#line 5267 "bin/parser.tab.cc"
    break;

  case 233: /* Dims_opt: %empty  */
#line 2482 "src/parser.y"
          { 
    (yyval.exp) = NULL; 
    }
#line 5275 "bin/parser.tab.cc"
    break;

  case 234: /* Dims_opt: Dims  */
#line 2485 "src/parser.y"
          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5283 "bin/parser.tab.cc"
    break;

  case 235: /* DimExprs: DimExpr  */
#line 2490 "src/parser.y"
            {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 5293 "bin/parser.tab.cc"
    break;

  case 236: /* DimExprs: DimExprs DimExpr  */
#line 2495 "src/parser.y"
                       {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]",memArr,2, 0);
    }
#line 5304 "bin/parser.tab.cc"
    break;

  case 237: /* DimExpr: LeftSquareBracket Expression RightSquareBracket  */
#line 2503 "src/parser.y"
                                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 5314 "bin/parser.tab.cc"
    break;

  case 238: /* Dims: LeftSquareBracket RightSquareBracket  */
#line 2510 "src/parser.y"
                                         {
        (yyval.exp) = makeleaf("[]");
    }
#line 5322 "bin/parser.tab.cc"
    break;

  case 239: /* Dims: Dims LeftSquareBracket RightSquareBracket  */
#line 2513 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
    }
#line 5330 "bin/parser.tab.cc"
    break;

  case 240: /* FieldAccess: Primary Dot Identifier  */
#line 2518 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,(yyvsp[0].data)));
        for (int i =0; i<glob_class_scope->children.size(); i++)
        {
            if(glob_class_scope->children[i]->scope == (yyvsp[-2].exp)->symbol.type.name)
            {
                struct Symbol* symb = loc_lookup(glob_class_scope->children[i],string((yyvsp[0].data)));
                if(symb == NULL)
                {
                    semantic_error("No such modifier for the class " + (yyvsp[-2].exp)->symbol.type.name);
                }
                else{
                    (yyval.exp)->symbol.type = symb->type;
                }
            }
        }
        

        struct node * E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = makeleaf((yyvsp[0].data));
        buildVal(E[2], 1);
        string temp = makeNewTemp(newTempLabel);
        newTempLabel++;
        E[2]->val.place = temp;
        pushCode(E[2]->val, temp + " = " + string((yyvsp[0].data))); 
        buildTAC(E, 3, APPEND_CODE);
        temp = makeNewTemp(newTempLabel);
        newTempLabel++;
        E[0]->val.place = temp;
        pushCode(E[0]->val,E[0]->val.place  + " = *(" +(E[1]->val.place +" + " +E[2]->val.place)+")");
    }
#line 5368 "bin/parser.tab.cc"
    break;

  case 241: /* FieldAccess: Super Dot Identifier  */
#line 2551 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),(yyvsp[0].data)));

    }
#line 5377 "bin/parser.tab.cc"
    break;

  case 242: /* MethodInvocation: Name LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 2557 "src/parser.y"
                                                           {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 1, 1);

        // Checking If function has been defined
        struct GlobalSymbol * glob_entry = glob_lookup(class_name, (yyvsp[-3].exp)->data, glob_table);
        if(glob_entry ==  NULL){
            // Function not defined before 
            semantic_error("Function " + string((yyvsp[-3].exp)->data) + " at line number " + to_string(line_number) + " not declared." );
        }
        else{
            // Checking if Arguments are filled in properly
            if((yyvsp[-1].exp) == NULL){
                if(glob_entry->type.parameters_type.size() != 0){
                    semantic_error("Function " + string((yyvsp[-3].exp)->data) +  " invocation at line number " + to_string(line_number) + " has wrong number of parameters passed.");
                }
            }
            else{
                if((yyvsp[-1].exp)->arr.size()!= glob_entry->type.parameters_type.size()){
                    semantic_error("Function " + string((yyvsp[-3].exp)->data) +  " invocation at line number " + to_string(line_number) + " has wrong number of parameters passed.");
                }
                else{
                    for (int i = 0; i< (yyvsp[-1].exp)->arr.size(); i++)
                    {   
                        if(!isAssignmentCompatible(glob_entry->type.parameters_type[i],(yyvsp[-1].exp)->arr[i]->symbol.type.name))
                        {
                            semantic_error("Function " + string((yyvsp[-3].exp)->data) +  " invocation at line number " + to_string(line_number) + " has wrong type of parameter passed at position " + to_string(i+1) + "." );          
                        }
                    }
                    (yyval.exp)->symbol.type.name = glob_entry->type.return_type;
                    (yyval.exp)->symbol.size = glob_entry->type.return_size;
                    (yyval.exp)->symbol.name = glob_entry->type.name;
                }
                
            }



            if( (static_context== 1) && (is_static(glob_entry->type) == 0)){
                semantic_error("Calling a non-static function from a static context at line number " + to_string(line_number));
            }
            else {
                struct node * E[2];
                E[0] = (yyval.exp);
                E[1] = (yyvsp[-1].exp);
                genMethodInvocationCode(E, 2);
            }
        }


        // cout << "three ac for method invocation: \n";
        // printThreeAC($3->val);
    }
#line 5436 "bin/parser.tab.cc"
    break;

  case 243: /* MethodInvocation: Primary Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 2611 "src/parser.y"
                                                                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].exp)->data,concatenate_string(".",(yyvsp[-3].data))), memArr, 1, 1);
        (yyval.exp)->symbol.name = string((yyvsp[-3].data));
        struct node * E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        genMethodInvocationCode(E, 2);
    }
#line 5451 "bin/parser.tab.cc"
    break;

  case 244: /* MethodInvocation: Super Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 2621 "src/parser.y"
                                                                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].data),concatenate_string(" ",(yyvsp[-3].data))), memArr, 1, 1);
        struct node * E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, METHOD_INVOCATION);
    }
#line 5465 "bin/parser.tab.cc"
    break;

  case 245: /* ArrayAccess: Name LeftSquareBracket Expression RightSquareBracket  */
#line 2632 "src/parser.y"
                                                        {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ArrayAccess", memArr, 2, 1);
        (yyval.exp)->symbol = (yyvsp[-3].exp)->symbol;

        string txt = (yyval.exp)->symbol.type.name;
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

        (yyval.exp)->symbol.type.name = name;
        //cout << $$->symbol.type.name << endl;

        if((yyvsp[-1].exp)->symbol.type.name != "byte" && (yyvsp[-1].exp)->symbol.type.name != "short" && (yyvsp[-1].exp)->symbol.type.name != "int" && (yyvsp[-1].exp)->symbol.type.name != "char"  )
        {
            semantic_error("Invalid array access at line number " + to_string(line_number) + " as the expression is of type " + (yyvsp[-1].exp)->symbol.type.name);
        }
        if((yyval.exp)->symbol.type.dims.size() != 0){
            (yyval.exp)->symbol.size = (yyval.exp)->symbol.size/(yyval.exp)->symbol.type.dims[0];
            (yyval.exp)->symbol.type.dims.erase((yyval.exp)->symbol.type.dims.begin());
        }   

        genArrayAccess((yyval.exp),(yyvsp[-3].exp),(yyvsp[-1].exp));
        // buildTAC(E, 3, ARRAY_ACCESS);

    }
#line 5517 "bin/parser.tab.cc"
    break;

  case 246: /* ArrayAccess: ArrayAccess LeftSquareBracket Expression RightSquareBracket  */
#line 2679 "src/parser.y"
                                                                  {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("PrimaryNoNewArrayAccess", memArr, 2, 1);
        (yyval.exp)->symbol = (yyvsp[-3].exp)->symbol;

        string txt = (yyval.exp)->symbol.type.name;
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

        (yyval.exp)->symbol.type.name = name;

        // Checking if Expression is a Integer
        if((yyvsp[-1].exp)->symbol.type.name != "byte" && (yyvsp[-1].exp)->symbol.type.name != "short" && (yyvsp[-1].exp)->symbol.type.name != "int" && (yyvsp[-1].exp)->symbol.type.name != "char"  )
        {
            semantic_error("Invalid array access at line number " + to_string(line_number) + " as the expression is of type " + (yyvsp[-1].exp)->symbol.type.name);
        }

        if((yyval.exp)->symbol.type.dims.size() != 0){
            (yyval.exp)->symbol.size = (yyval.exp)->symbol.size/(yyval.exp)->symbol.type.dims[0];
            (yyval.exp)->symbol.type.dims.erase((yyval.exp)->symbol.type.dims.begin());
        } 

        genArrayAccess2((yyval.exp),(yyvsp[-3].exp),(yyvsp[-1].exp));

        //buildVal($$);
    }
#line 5569 "bin/parser.tab.cc"
    break;

  case 247: /* PostfixExpression: Primary  */
#line 2728 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5577 "bin/parser.tab.cc"
    break;

  case 248: /* PostfixExpression: Name  */
#line 2731 "src/parser.y"
           {
        (yyval.exp) = (yyvsp[0].exp);
        struct Symbol * lookup_entry = check_scope(curr , string((yyvsp[0].exp)->data));
        if(lookup_entry == NULL){
            semantic_error("The identifier " + string((yyvsp[0].exp)->data) + " at line number " + to_string(line_number) +  " has not been declared in the scope." );
        }
        else{
            (yyval.exp)->symbol.type = lookup_entry->type;
        }
    }
#line 5592 "bin/parser.tab.cc"
    break;

  case 249: /* PostfixExpression: PostIncrementExpression  */
#line 2741 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5600 "bin/parser.tab.cc"
    break;

  case 250: /* PostfixExpression: PostDecrementExpression  */
#line 2744 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5608 "bin/parser.tab.cc"
    break;

  case 251: /* PostIncrementExpression: PostfixExpression PlusPlus  */
#line 2749 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("++", memArr, 1, 1);

        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        struct node tempNode = *makeleaf("1");
        tempNode.symbol.type.name = (yyvsp[-1].exp)->symbol.type.name;
        tempNode.symbol.size = (yyvsp[-1].exp)->symbol.size;
        tempNode.val.place = "1";
        buildVal(&tempNode, 0);
        E[2] = &tempNode;
        E[3] = makeleaf("+");


        if(isPrimitiveType((yyvsp[-1].exp)->symbol.type.name) && (yyvsp[-1].exp)->symbol.type.name != "boolean")
        {
            (yyval.exp)->symbol.type.name = (yyvsp[-1].exp)->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-1].exp)->symbol.type.name + "] for operator " + string((yyvsp[0].data)) + " at line number " +  to_string(line_number) + ".");
        }
        if((yyvsp[-1].exp)->val.status == IS_VARIABLE){
            buildTAC(E,4,BINARY_CODE);
            pushCode((yyval.exp)->post_fix_val, E[0]->val.code.back());
            E[0]->val.code.pop_back();
            pushQuad((yyval.exp)->post_fix_val, E[0]->val.quad.back());
            E[0]->val.quad.pop_back();

            pushCode((yyval.exp)->post_fix_val, string((yyvsp[-1].exp)->data) + " = " + (yyval.exp)->val.place);
            


            struct Quad* quad = new struct Quad;
            quad->op.op = Empty_;
            quad->op.type = (yyvsp[-1].exp)->symbol.type.name;
            quad->my_table = curr;
            fill_arg(&quad->arg_1,(yyval.exp)->val);
            fill_arg(&quad->result,(yyvsp[-1].exp)->val);
            quad->arg_2.status = IS_EMPTY;
            pushQuad((yyval.exp)->post_fix_val, *quad);

            (yyval.exp)->post_fix_val.place = (yyvsp[-1].exp)->val.place;
            (yyval.exp)->val.place = (yyvsp[-1].exp)->val.place;
        }
        //cout <<  $$->post_fix_val.code.size() <<endl;
        else{
            semantic_error("Unexpected type for post-increment at line number "+ to_string(line_number) + " .");
        }
        
    }
#line 5666 "bin/parser.tab.cc"
    break;

  case 252: /* PostDecrementExpression: PostfixExpression MinusMinus  */
#line 2804 "src/parser.y"
                                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("--", memArr, 1, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        struct node tempNode = *makeleaf("1");
        tempNode.symbol.type.name = (yyvsp[-1].exp)->symbol.type.name;
        tempNode.symbol.size = (yyvsp[-1].exp)->symbol.size;
        tempNode.val.place = "1";
        buildVal(&tempNode, 0);
        E[2] = &tempNode;
        E[3] = makeleaf("-");

        if(isPrimitiveType((yyvsp[-1].exp)->symbol.type.name) && (yyvsp[-1].exp)->symbol.type.name != "boolean")
        {
            (yyval.exp)->symbol.type.name = (yyvsp[-1].exp)->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-1].exp)->symbol.type.name + "] for operator " + string((yyvsp[0].data)) + " at line number " +  to_string(line_number) + ".");
        }

        if((yyvsp[-1].exp)->val.status == IS_VARIABLE)
        {
        buildTAC(E,4,BINARY_CODE);


        pushCode((yyval.exp)->post_fix_val, E[0]->val.code.back());
        E[0]->val.code.pop_back();
        pushQuad((yyval.exp)->post_fix_val, E[0]->val.quad.back());
        E[0]->val.quad.pop_back();

        pushCode((yyval.exp)->post_fix_val, string((yyvsp[-1].exp)->data) + " = " + (yyval.exp)->val.place);

        struct Quad* quad = new struct Quad;
        quad->op.op = Empty_;
        quad->op.type = (yyvsp[-1].exp)->symbol.type.name;
        quad->my_table = curr;
        fill_arg(&quad->arg_1,(yyval.exp)->val);
        fill_arg(&quad->result,(yyvsp[-1].exp)->val);
        quad->arg_2.status = IS_EMPTY;
        pushQuad((yyval.exp)->post_fix_val, *quad);

        (yyval.exp)->post_fix_val.place = (yyvsp[-1].exp)->val.place;
        (yyval.exp)->val.place = (yyvsp[-1].exp)->val.place;
        }
    else{
            semantic_error("Unexpected type for post-decrement at line number "+ to_string(line_number) + " .");
        }
    }
#line 5722 "bin/parser.tab.cc"
    break;

  case 253: /* UnaryExpression: PreIncrementExpression  */
#line 2857 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5730 "bin/parser.tab.cc"
    break;

  case 254: /* UnaryExpression: PreDecrementExpression  */
#line 2860 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5738 "bin/parser.tab.cc"
    break;

  case 255: /* UnaryExpression: Addition UnaryExpression  */
#line 2863 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("+", memArr, 1, 1);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        E[2] = makeleaf((yyvsp[-1].data));

        if(isPrimitiveType((yyvsp[0].exp)->symbol.type.name) && (yyvsp[0].exp)->symbol.type.name != "boolean")
        {
            (yyval.exp)->symbol.type.name = (yyvsp[0].exp)->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[0].exp)->symbol.type.name + "] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }

        buildTAC(E,3,UNARY_CODE);

    }
#line 5763 "bin/parser.tab.cc"
    break;

  case 256: /* UnaryExpression: Substraction UnaryExpression  */
#line 2883 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("-", memArr, 1, 1);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        E[2] = makeleaf((yyvsp[-1].data));
    
        if(isPrimitiveType((yyvsp[0].exp)->symbol.type.name) && (yyvsp[0].exp)->symbol.type.name != "boolean")
        {
            (yyval.exp)->symbol.type.name = (yyvsp[0].exp)->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[0].exp)->symbol.type.name + "] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }

        buildTAC(E,3,UNARY_CODE);
    }
#line 5787 "bin/parser.tab.cc"
    break;

  case 257: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 2902 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5795 "bin/parser.tab.cc"
    break;

  case 258: /* PreIncrementExpression: PlusPlus UnaryExpression  */
#line 2907 "src/parser.y"
                             {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("++", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        struct node tempNode = *makeleaf("1");
        tempNode.symbol.type.name = (yyvsp[0].exp)->symbol.type.name;
        tempNode.symbol.size = (yyvsp[0].exp)->symbol.size;
        tempNode.val.place = "1";
        buildVal(&tempNode, 0);
        E[2] = &tempNode;
        E[3] = makeleaf("+");

        if(isPrimitiveType((yyvsp[0].exp)->symbol.type.name) && (yyvsp[0].exp)->symbol.type.name != "boolean")
        {
            (yyval.exp)->symbol.type.name = (yyvsp[0].exp)->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[0].exp)->symbol.type.name + "] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }

        if((yyvsp[0].exp)->val.status == IS_VARIABLE){
            buildTAC(E,4,BINARY_CODE);
            
            pushCode((yyval.exp)->val, string((yyvsp[0].exp)->data) + " = " + (yyval.exp)->val.place);
            
            struct Quad* quad = new struct Quad;
            quad->op.op = Empty_;
            quad->op.type = (yyvsp[0].exp)->symbol.type.name;
            quad->my_table = curr;
            fill_arg(&quad->arg_1,(yyval.exp)->val);
            fill_arg(&quad->result,(yyvsp[0].exp)->val);
            quad->arg_2.status = IS_EMPTY;
            pushQuad((yyval.exp)->val, *quad);
            (yyval.exp)->val.place = (yyvsp[0].exp)->val.place;
        }
        else{
            semantic_error("Unexpected type for pre-increment at line number "+ to_string(line_number) + " .");
        }
    }
#line 5843 "bin/parser.tab.cc"
    break;

  case 259: /* PreDecrementExpression: MinusMinus UnaryExpression  */
#line 2952 "src/parser.y"
                               {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("--", memArr, 2, 1);
        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        struct node tempNode = *makeleaf("1");
        tempNode.symbol.type.name = (yyvsp[0].exp)->symbol.type.name;
        tempNode.symbol.size = (yyvsp[0].exp)->symbol.size;
        tempNode.val.place = "1";
        buildVal(&tempNode, 0);
        E[2] = &tempNode;
        E[3] = makeleaf("-");

        if(isPrimitiveType((yyvsp[0].exp)->symbol.type.name) && (yyvsp[0].exp)->symbol.type.name != "boolean")
        {
            (yyval.exp)->symbol.type.name = (yyvsp[0].exp)->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[0].exp)->symbol.type.name + "] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }
        if((yyvsp[0].exp)->val.status == IS_VARIABLE){
            buildTAC(E,4,BINARY_CODE);
            
            pushCode((yyval.exp)->val, string((yyvsp[0].exp)->data) + " = " + (yyval.exp)->val.place);
            
            
            struct Quad* quad = new struct Quad;
            quad->op.op = Empty_;
            quad->op.type = (yyvsp[0].exp)->symbol.type.name;
            quad->my_table = curr;
            fill_arg(&quad->arg_1,(yyval.exp)->val);
            fill_arg(&quad->result,(yyvsp[0].exp)->val);
            quad->arg_2.status = IS_EMPTY;
            pushQuad((yyval.exp)->val, *quad);

            (yyval.exp)->val.place = (yyvsp[0].exp)->val.place;
        }
        else{
            semantic_error("Unexpected type for pre-decrement at line number "+ to_string(line_number) + " .");
        }
    }
#line 5892 "bin/parser.tab.cc"
    break;

  case 260: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 2998 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5900 "bin/parser.tab.cc"
    break;

  case 261: /* UnaryExpressionNotPlusMinus: Tilde UnaryExpression  */
#line 3001 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("~", memArr, 1, 1);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        E[2] = makeleaf((yyvsp[-1].data));
        if(isIntegralType((yyvsp[0].exp)->symbol.type.name))
        {
            (yyval.exp)->symbol.type.name = (yyvsp[0].exp)->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[0].exp)->symbol.type.name + "] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }
        buildTAC(E,3,UNARY_CODE);
    }
#line 5922 "bin/parser.tab.cc"
    break;

  case 262: /* UnaryExpressionNotPlusMinus: NotOperator UnaryExpression  */
#line 3018 "src/parser.y"
                                  {
         struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("!", memArr, 1, 1);
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        E[2] = makeleaf((yyvsp[-1].data));

        if((yyvsp[0].exp)->symbol.type.name == "boolean")
        {
            (yyval.exp)->symbol.type.name = "boolean";
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[0].exp)->symbol.type.name + "] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }
        buildTAC(E,3,UNARY_CODE);
    }
#line 5945 "bin/parser.tab.cc"
    break;

  case 263: /* UnaryExpressionNotPlusMinus: CastExpression  */
#line 3036 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5953 "bin/parser.tab.cc"
    break;

  case 264: /* CastExpression: LeftParanthesis PrimitiveType Dims_opt RightParanthesis UnaryExpression  */
#line 3041 "src/parser.y"
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
#line 5968 "bin/parser.tab.cc"
    break;

  case 265: /* CastExpression: LeftParanthesis Expression RightParanthesis UnaryExpressionNotPlusMinus  */
#line 3051 "src/parser.y"
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
#line 5983 "bin/parser.tab.cc"
    break;

  case 266: /* CastExpression: LeftParanthesis Name Dims RightParanthesis UnaryExpressionNotPlusMinus  */
#line 3061 "src/parser.y"
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
#line 5998 "bin/parser.tab.cc"
    break;

  case 267: /* MultiplicativeExpression: UnaryExpression  */
#line 3073 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 6006 "bin/parser.tab.cc"
    break;

  case 268: /* MultiplicativeExpression: MultiplicativeExpression Product UnaryExpression  */
#line 3076 "src/parser.y"
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

        if((yyvsp[-2].exp)->symbol.type.name != "boolean" && (yyvsp[0].exp)->symbol.type.name != "boolean")
        {
            if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name))
            {
                (yyval.exp)->symbol.type.name = max_type((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name);
                
            }
            else{
                semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }


        buildTAC(E,4,BINARY_CODE);
    }
#line 6040 "bin/parser.tab.cc"
    break;

  case 269: /* MultiplicativeExpression: MultiplicativeExpression Divide UnaryExpression  */
#line 3105 "src/parser.y"
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

        if((yyvsp[-2].exp)->symbol.type.name != "boolean" && (yyvsp[0].exp)->symbol.type.name != "boolean")
        {
            if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name))
            {
                (yyval.exp)->symbol.type.name = max_type((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name);
                
            }
            else{
                semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }


        buildTAC(E,4,BINARY_CODE);
    }
#line 6074 "bin/parser.tab.cc"
    break;

  case 270: /* MultiplicativeExpression: MultiplicativeExpression Modulo UnaryExpression  */
#line 3134 "src/parser.y"
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

        if((yyvsp[-2].exp)->symbol.type.name != "boolean" && (yyvsp[0].exp)->symbol.type.name != "boolean")
        {
            if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name))
            {
                (yyval.exp)->symbol.type.name = max_type((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name);
                
            }
            else{
                semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }


        buildTAC(E,4,BINARY_CODE);
    }
#line 6108 "bin/parser.tab.cc"
    break;

  case 271: /* AdditiveExpression: MultiplicativeExpression  */
#line 3165 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 6116 "bin/parser.tab.cc"
    break;

  case 272: /* AdditiveExpression: AdditiveExpression Addition MultiplicativeExpression  */
#line 3168 "src/parser.y"
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

        if((yyvsp[-2].exp)->symbol.type.name != "boolean" && (yyvsp[0].exp)->symbol.type.name != "boolean")
        {
            if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name))
            {
                (yyval.exp)->symbol.type.name = max_type((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name);
                
            }
            else{
                semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }

        buildTAC(E,4,BINARY_CODE);
        
    }
#line 6150 "bin/parser.tab.cc"
    break;

  case 273: /* AdditiveExpression: AdditiveExpression Substraction MultiplicativeExpression  */
#line 3197 "src/parser.y"
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

        if((yyvsp[-2].exp)->symbol.type.name != "boolean" && (yyvsp[0].exp)->symbol.type.name != "boolean")
        {
            if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name))
            {
                (yyval.exp)->symbol.type.name = max_type((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name);
                
            }
            else{
                semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }

        buildTAC(E,4,BINARY_CODE);

    }
#line 6184 "bin/parser.tab.cc"
    break;

  case 274: /* ShiftExpression: AdditiveExpression  */
#line 3228 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 2753 "<<$$->val.code[i] << " "<<endl;
        // }
    }
#line 6195 "bin/parser.tab.cc"
    break;

  case 275: /* ShiftExpression: ShiftExpression LeftShit AdditiveExpression  */
#line 3234 "src/parser.y"
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

        //cout << $1->symbol.type.name <<endl;
        if(isIntegralType((yyvsp[-2].exp)->symbol.type.name)&& isIntegralType((yyvsp[0].exp)->symbol.type.name))
        {
            (yyval.exp)->symbol.type.name = max_type((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name);
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }

        buildTAC(E,4,BINARY_CODE);

    }
#line 6223 "bin/parser.tab.cc"
    break;

  case 276: /* ShiftExpression: ShiftExpression RightShift AdditiveExpression  */
#line 3257 "src/parser.y"
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

        if(isIntegralType((yyvsp[-2].exp)->symbol.type.name)&& isIntegralType((yyvsp[0].exp)->symbol.type.name))
        {
            (yyval.exp)->symbol.type.name = max_type((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name);
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }

        buildTAC(E,4,BINARY_CODE);
        
    }
#line 6250 "bin/parser.tab.cc"
    break;

  case 277: /* ShiftExpression: ShiftExpression TripleGreaterThan AdditiveExpression  */
#line 3279 "src/parser.y"
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

        if(isIntegralType((yyvsp[-2].exp)->symbol.type.name)&& isIntegralType((yyvsp[0].exp)->symbol.type.name))
        {
            (yyval.exp)->symbol.type.name = max_type((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name);
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }

        buildTAC(E,4,BINARY_CODE);
    }
#line 6276 "bin/parser.tab.cc"
    break;

  case 278: /* RelationalExpression: ShiftExpression  */
#line 3302 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 2826 "<<$$->val.code[i] << " "<<endl;
        // }
    }
#line 6287 "bin/parser.tab.cc"
    break;

  case 279: /* RelationalExpression: RelationalExpression LessThan ShiftExpression  */
#line 3308 "src/parser.y"
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
        if((yyvsp[-2].exp)->symbol.type.name != "boolean" && (yyvsp[0].exp)->symbol.type.name != "boolean")
        {
            if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name))
            {
                (yyval.exp)->symbol.type.name = "boolean";
                //cout << $1->symbol.type.name <<endl;
                //cout << $3->symbol.type.name <<endl;
                
            }
            else{
                semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }
        buildTAC(E,4,BINARY_CODE);
    }
#line 6320 "bin/parser.tab.cc"
    break;

  case 280: /* RelationalExpression: RelationalExpression GreaterThan ShiftExpression  */
#line 3336 "src/parser.y"
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

        if((yyvsp[-2].exp)->symbol.type.name != "boolean" && (yyvsp[0].exp)->symbol.type.name != "boolean")
        {
            if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name))
            {
                (yyval.exp)->symbol.type.name = "boolean";
                //cout << $1->symbol.type.name <<endl;
                //cout << $3->symbol.type.name <<endl;
                
            }
            else{
                semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }
        buildTAC(E,4,BINARY_CODE);
    }
#line 6354 "bin/parser.tab.cc"
    break;

  case 281: /* RelationalExpression: RelationalExpression LessThanEqualTo ShiftExpression  */
#line 3365 "src/parser.y"
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

        if((yyvsp[-2].exp)->symbol.type.name != "boolean" && (yyvsp[0].exp)->symbol.type.name != "boolean")
        {
            if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name))
            {
                (yyval.exp)->symbol.type.name = "boolean";
                //cout << $1->symbol.type.name <<endl;
                //cout << $3->symbol.type.name <<endl;
                
            }
            else{
                semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }
        buildTAC(E,4,BINARY_CODE);
    }
#line 6388 "bin/parser.tab.cc"
    break;

  case 282: /* RelationalExpression: RelationalExpression GreaterThanEqualTo ShiftExpression  */
#line 3394 "src/parser.y"
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

        if((yyvsp[-2].exp)->symbol.type.name != "boolean" && (yyvsp[0].exp)->symbol.type.name != "boolean")
        {
            if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name))
            {
                (yyval.exp)->symbol.type.name = "boolean";
                //cout << $1->symbol.type.name <<endl;
                //cout << $3->symbol.type.name <<endl;
                
            }
            else{
                semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
            }
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }
        buildTAC(E,4,BINARY_CODE);
    }
#line 6422 "bin/parser.tab.cc"
    break;

  case 283: /* RelationalExpression: RelationalExpression Instanceof ReferenceType  */
#line 3423 "src/parser.y"
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
#line 6439 "bin/parser.tab.cc"
    break;

  case 284: /* EqualityExpression: RelationalExpression  */
#line 3437 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 2961 "<<$$->val.code[i] << " "<<endl;
        // }
    }
#line 6450 "bin/parser.tab.cc"
    break;

  case 285: /* EqualityExpression: EqualityExpression EqualToEqualTo RelationalExpression  */
#line 3443 "src/parser.y"
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
        
        if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name,(yyvsp[0].exp)->symbol.type.name))
        {
            (yyval.exp)->symbol.type.name = "boolean";
        }
        else
        {
            if((yyvsp[-2].exp)->symbol.type.name == (yyvsp[0].exp)->symbol.type.name)
            {
                (yyval.exp)->symbol.type.name = "boolean";
            }
            else{
                semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
            }
        }
    }
#line 6482 "bin/parser.tab.cc"
    break;

  case 286: /* EqualityExpression: EqualityExpression NotEqualTo RelationalExpression  */
#line 3470 "src/parser.y"
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

        if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name,(yyvsp[0].exp)->symbol.type.name))
        {
            (yyval.exp)->symbol.type.name = "boolean";
        }
        else
        {
            if((yyvsp[-2].exp)->symbol.type.name == (yyvsp[0].exp)->symbol.type.name)
            {
                (yyval.exp)->symbol.type.name = "boolean";
            }
            else{
                semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
            }
        }
    }
#line 6514 "bin/parser.tab.cc"
    break;

  case 287: /* AndExpression: EqualityExpression  */
#line 3499 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 3023 "<<$$->val.code[i] << " "<<endl;
        // }
    }
#line 6525 "bin/parser.tab.cc"
    break;

  case 288: /* AndExpression: AndExpression BitwiseAnd EqualityExpression  */
#line 3505 "src/parser.y"
                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("&", memArr, 2 ,1);

        if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name,(yyvsp[0].exp)->symbol.type.name))
        {
            (yyval.exp)->symbol.type.name = "boolean";
        }
        else
        {
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }

        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 6552 "bin/parser.tab.cc"
    break;

  case 289: /* ExclusiveOrExpression: AndExpression  */
#line 3529 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 6560 "bin/parser.tab.cc"
    break;

  case 290: /* ExclusiveOrExpression: ExclusiveOrExpression CircumFlex AndExpression  */
#line 3532 "src/parser.y"
                                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("xor", memArr, 2 ,1);

        if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name,(yyvsp[0].exp)->symbol.type.name))
        {
            (yyval.exp)->symbol.type.name = "boolean";
        }
        else
        {
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }


        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 6588 "bin/parser.tab.cc"
    break;

  case 291: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 3557 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 6596 "bin/parser.tab.cc"
    break;

  case 292: /* InclusiveOrExpression: InclusiveOrExpression BitwiseOr ExclusiveOrExpression  */
#line 3560 "src/parser.y"
                                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("|", memArr, 2, 1);

        if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name,(yyvsp[0].exp)->symbol.type.name))
        {   
            //cout << "Hello Type compatible" <<endl;
            (yyval.exp)->symbol.type.name = "boolean";
        }
        else
        {
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }

        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 6624 "bin/parser.tab.cc"
    break;

  case 293: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 3585 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 3109 "<<$$->val.code[i] << " "<<endl;
        // }
    }
#line 6635 "bin/parser.tab.cc"
    break;

  case 294: /* ConditionalAndExpression: ConditionalAndExpression AndOperator InclusiveOrExpression  */
#line 3591 "src/parser.y"
                                                                 {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("&&", memArr, 2, 1);

        if((yyvsp[-2].exp)->symbol.type.name == "boolean" && (yyvsp[0].exp)->symbol.type.name == "boolean")
        {
            (yyval.exp)->symbol.type.name = "boolean";
        }
        else
        {
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }

        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);
    }
#line 6662 "bin/parser.tab.cc"
    break;

  case 295: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 3615 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 3142 "<<$$->val.code[i] << " "<<endl;
        // }
    }
#line 6673 "bin/parser.tab.cc"
    break;

  case 296: /* ConditionalOrExpression: ConditionalOrExpression OrOperator ConditionalAndExpression  */
#line 3621 "src/parser.y"
                                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("||", memArr, 2, 1);

        if((yyvsp[-2].exp)->symbol.type.name == "boolean" && (yyvsp[0].exp)->symbol.type.name == "boolean")
        {
            (yyval.exp)->symbol.type.name = "boolean";
        }
        else
        {
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name  +"] for operator " + string((yyvsp[-1].data)) + " at line number " +  to_string(line_number) + ".");
        }

        struct node* E[4];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-2].exp);
        E[2] = (yyvsp[0].exp);
        E[3] = makeleaf((yyvsp[-1].data));
        buildTAC(E,4,BINARY_CODE);


    }
#line 6702 "bin/parser.tab.cc"
    break;

  case 297: /* ConditionalExpression: ConditionalOrExpression  */
#line 3647 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 3174 "<<$$->val.code[i] << " "<<endl;
        // }
    }
#line 6713 "bin/parser.tab.cc"
    break;

  case 298: /* ConditionalExpression: ConditionalOrExpression QuestionMark Expression Colon ConditionalExpression  */
#line 3653 "src/parser.y"
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
#line 6731 "bin/parser.tab.cc"
    break;

  case 299: /* AssignmentExpression: ConditionalExpression  */
#line 3668 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
        // for(int i = 0; i < $$->val.code.size(); i++){
        //     cout <<"line: 3186 "<<$$->val.code[i] << " "<<endl;
        // }
    }
#line 6742 "bin/parser.tab.cc"
    break;

  case 300: /* AssignmentExpression: Assignment  */
#line 3674 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 6750 "bin/parser.tab.cc"
    break;

  case 301: /* Assignment: LeftHandSide AssignmentOperator AssignmentExpression  */
#line 3679 "src/parser.y"
                                                         {
    struct node* memArr[2];
    memArr[0] = (yyvsp[-2].exp);
    memArr[1] = (yyvsp[0].exp);
    (yyval.exp) = makeInternalNode("=", memArr, 2, 1);

    if((yyvsp[-2].exp)->symbol.type.name == (yyvsp[0].exp)->symbol.type.name)
    {
        (yyval.exp)->symbol.type.name = (yyvsp[-2].exp)->symbol.type.name;
    }
    else{
        if(isTypeCompatible((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name))
        {
            (yyval.exp)->symbol.type.name = (yyvsp[-2].exp)->symbol.type.name;
        }
        else{
            semantic_error("Bad operand types ["  + (yyvsp[-2].exp)->symbol.type.name + ", " + (yyvsp[0].exp)->symbol.type.name + "] for operator " + string((yyvsp[-1].exp)->symbol.name) + " at line number " +  to_string(line_number) + ".");
        }
    }
    if(isAssignmentCompatible((yyvsp[-2].exp)->symbol.type.name, (yyvsp[0].exp)->symbol.type.name) == 0){
            semantic_error("Possible lossy conversion from "  + (yyvsp[0].exp)->symbol.type.name + " to " + (yyvsp[-2].exp)->symbol.type.name +" at line number " +  to_string(line_number) + ".");
    }
    if((yyvsp[-2].exp)->t != ARRAY_ACCESS){
        struct node* E[2];
        E[0] = (yyvsp[-2].exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, ASSIGN_CODE);
        (yyval.exp) = (yyvsp[-2].exp);
    }
    else{
        struct Quad * quad = new struct Quad;
        struct Value * val = new struct Value;

        fill_arg(&quad->arg_1, (yyvsp[-2].exp)->val);
        val->place = (yyvsp[-2].exp)->symbol.name;
        val->status = IS_VARIABLE;
        fill_arg(&quad->result, *val);
        fill_arg(&quad->arg_2, (yyvsp[0].exp)->val);

        quad->my_table = curr;
        quad->op.op = ArrayAccess_;
        quad->op.type = (yyval.exp)->symbol.type.name;
        appendCode((yyval.exp)->val, (yyvsp[-2].exp)->val);
        appendCode((yyval.exp)->val, (yyvsp[0].exp)->val);
        pushQuad((yyval.exp)->val, *quad);
        pushCode((yyval.exp)->val, (yyvsp[-2].exp)->symbol.name + "[" + (yyvsp[-2].exp)->val.place + "]" + " = " + (yyvsp[0].exp)->val.place);
        appendCode((yyval.exp)->val, (yyvsp[-2].exp)->post_fix_val);
        appendCode((yyval.exp)->val, (yyvsp[0].exp)->post_fix_val);
    }

    

}
#line 6808 "bin/parser.tab.cc"
    break;

  case 302: /* LeftHandSide: Name  */
#line 3734 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
        struct Symbol * lookup_entry = check_scope(curr , string((yyvsp[0].exp)->data));
        if(lookup_entry == NULL){
            semantic_error("The identifier " + string((yyvsp[0].exp)->data) + " at line number " + to_string(line_number) +  " has not been declared in the scope." );
        }
        else{
            (yyval.exp)->symbol.type = lookup_entry->type;
        }
    }
#line 6823 "bin/parser.tab.cc"
    break;

  case 303: /* LeftHandSide: FieldAccess  */
#line 3744 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 6831 "bin/parser.tab.cc"
    break;

  case 304: /* LeftHandSide: ArrayAccess  */
#line 3747 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
        (yyval.exp)->t = ARRAY_ACCESS;
        struct Symbol * lookup_entry = check_scope(curr , string((yyvsp[0].exp)->symbol.name));
        if(lookup_entry == NULL){
            semantic_error("The identifier " + string((yyvsp[0].exp)->symbol.name) + " at line number " + to_string(line_number) +  " has not been declared in the scope." );
        }
        else{
            //cout << "The identifier "  <<  $1->symbol.name <<" at line number " << line_number << " has been declared at line number "<< lookup_entry->line_num << endl <<endl;
            //$$->symbol.type = lookup_entry->type;
        }
        //appendCode($$->val)
        (yyval.exp)->symbol.type.name = (yyvsp[0].exp)->symbol.type.name;        
        (yyval.exp)->symbol.name = (yyvsp[0].exp)->symbol.name;
        //$$->val.place = $1->symbol.name + "[" + $1->val.place + "]";
        (yyval.exp)->val.place = (yyvsp[0].exp)->val.place;


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
#line 6867 "bin/parser.tab.cc"
    break;

  case 305: /* AssignmentOperator: EqualTo  */
#line 3780 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.name = string((yyvsp[0].data));
    }
#line 6876 "bin/parser.tab.cc"
    break;

  case 306: /* AssignmentOperator: ProductEqualTo  */
#line 3784 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.name = string((yyvsp[0].data));
    }
#line 6885 "bin/parser.tab.cc"
    break;

  case 307: /* AssignmentOperator: DivideEqualTo  */
#line 3788 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.name = string((yyvsp[0].data));
    }
#line 6894 "bin/parser.tab.cc"
    break;

  case 308: /* AssignmentOperator: ModuloEqualTo  */
#line 3792 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.name = string((yyvsp[0].data));
    }
#line 6903 "bin/parser.tab.cc"
    break;

  case 309: /* AssignmentOperator: AdditionEqualTo  */
#line 3796 "src/parser.y"
                      {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.name = string((yyvsp[0].data));
    }
#line 6912 "bin/parser.tab.cc"
    break;

  case 310: /* AssignmentOperator: SubstractionEqualTo  */
#line 3800 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.name = string((yyvsp[0].data));
    }
#line 6921 "bin/parser.tab.cc"
    break;

  case 311: /* AssignmentOperator: LeftShitEqualTo  */
#line 3804 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.name = string((yyvsp[0].data));
    }
#line 6930 "bin/parser.tab.cc"
    break;

  case 312: /* AssignmentOperator: RightShiftEqualTo  */
#line 3808 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.name = string((yyvsp[0].data));
    }
#line 6939 "bin/parser.tab.cc"
    break;

  case 313: /* AssignmentOperator: TripleGreaterThanEqualTo  */
#line 3812 "src/parser.y"
                                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.name = string((yyvsp[0].data));
    }
#line 6948 "bin/parser.tab.cc"
    break;

  case 314: /* AssignmentOperator: BitWiseAndEqualTo  */
#line 3816 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.name = string((yyvsp[0].data));
    }
#line 6957 "bin/parser.tab.cc"
    break;

  case 315: /* AssignmentOperator: CircumFlexEqualTo  */
#line 3820 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.name = string((yyvsp[0].data));
    }
#line 6966 "bin/parser.tab.cc"
    break;

  case 316: /* AssignmentOperator: BitWiseOrEqualTo  */
#line 3824 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.name = string((yyvsp[0].data));
    }
#line 6975 "bin/parser.tab.cc"
    break;

  case 317: /* Expression: AssignmentExpression  */
#line 3829 "src/parser.y"
                                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 6983 "bin/parser.tab.cc"
    break;


#line 6987 "bin/parser.tab.cc"

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

#line 3834 "src/parser.y"



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
    if(err == 0){
        freopen(output_file,"w", stdout);
        cout <<"//// The 3AC is the following : ";
        // ofseam cout(output_file);
        generateTac(graph, glob_table);
    }
    else{
        freopen(output_file,"w", stdout);
        cout <<"//// There are errors in the code and thus 3AC generation failed";
        // ofseam cout(output_file);
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



