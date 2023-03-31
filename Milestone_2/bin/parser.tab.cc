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

int newTempLabel = 0;
Value dummyVal; // do not delete needed for generating 3AC text

struct GlobalSymbolTable* glob_table = new struct GlobalSymbolTable;
struct SymbolTable* curr = loc_mktable(NULL,"global_scope"); //parameters are parent-pointer,  local-table-name
struct SymbolTable* glob_class_scope = curr;
string class_name = "";
int assign_flag = 0;
string src_file = "";
int err = 0;


#line 105 "bin/parser.tab.cc"

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
#define YYLAST   1482

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
       0,   121,   121,   128,   131,   136,   141,   146,   151,   158,
     164,   169,   176,   179,   184,   187,   195,   198,   203,   209,
     215,   221,   227,   235,   241,   249,   252,   257,   262,   267,
     272,   278,   285,   294,   297,   302,   311,   317,   331,   334,
     341,   346,   354,   357,   369,   379,   393,   396,   401,   406,
     409,   414,   419,   424,   427,   430,   435,   440,   448,   451,
     454,   457,   460,   463,   466,   469,   472,   475,   479,   509,
     521,   524,   530,   533,   537,   540,   545,   550,   559,   564,
     572,   580,   583,   595,   605,   618,   621,   624,   629,   636,
     642,   733,   743,   756,   767,   788,   794,   802,   805,   810,
     834,   872,   911,   914,   921,   941,   953,   956,   968,   978,
     991,  1025,  1032,  1037,  1045,  1048,  1054,  1066,  1097,  1132,
    1144,  1178,  1181,  1193,  1203,  1206,  1213,  1218,  1226,  1230,
    1233,  1240,  1245,  1253,  1257,  1263,  1268,  1273,  1277,  1280,
    1290,  1293,  1298,  1307,  1320,  1325,  1330,  1334,  1337,  1348,
    1357,  1371,  1380,  1392,  1403,  1454,  1457,  1460,  1463,  1466,
    1469,  1474,  1477,  1480,  1483,  1486,  1491,  1494,  1497,  1500,
    1503,  1506,  1509,  1512,  1515,  1520,  1525,  1539,  1553,  1558,
    1561,  1564,  1567,  1570,  1573,  1576,  1581,  1594,  1612,  1630,
    1646,  1660,  1681,  1699,  1702,  1713,  1716,  1726,  1729,  1740,
    1749,  1762,  1773,  1782,  1795,  1803,  1805,  1811,  1820,  1834,
    1841,  1849,  1855,  1863,  1866,  1873,  1878,  1886,  1894,  1901,
    1904,  1909,  1912,  1915,  1918,  1921,  1924,  1927,  1932,  1978,
    1987,  2000,  2010,  2021,  2024,  2029,  2034,  2042,  2049,  2052,
    2057,  2064,  2071,  2119,  2128,  2139,  2178,  2219,  2222,  2225,
    2228,  2233,  2246,  2259,  2262,  2265,  2276,  2286,  2291,  2305,
    2319,  2322,  2332,  2342,  2347,  2357,  2367,  2379,  2382,  2394,
    2406,  2420,  2423,  2435,  2449,  2452,  2464,  2476,  2490,  2493,
    2505,  2517,  2529,  2541,  2555,  2558,  2570,  2584,  2587,  2601,
    2604,  2618,  2621,  2635,  2638,  2652,  2655,  2669,  2672,  2687,
    2690,  2695,  2711,  2721,  2724,  2737,  2740,  2743,  2746,  2749,
    2752,  2755,  2758,  2761,  2764,  2767,  2770,  2774
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
      11,    -8,    67,  -452,    15,  -452,  -452,    75,  -452,  -452,
    -452,    -8,    43,    15,  -452,  -452,  -452,  -452,     2,    84,
    -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,  -452,   593,  -452,   735,  -452,  -452,  -452,    30,  -452,
    -452,  -452,  -452,   -37,  -452,  -452,     0,    17,    79,    27,
     127,  -452,    88,   108,  -452,    96,   227,    83,   734,  -452,
    -452,  -452,  -452,    42,  -452,  -452,  -452,    -8,    99,    89,
      -8,   142,  -452,   112,  -452,  -452,  -452,  -452,  -452,  -452,
     129,  -452,  -452,   132,   107,  -452,  -452,  -452,  -452,  -452,
     115,   -33,   128,   182,  -452,  -452,   956,  -452,  -452,  -452,
    -452,  -452,   139,  1367,  -452,    -8,  -452,  -452,    -8,  -452,
    -452,  -452,  -452,   -15,   128,    38,  -452,   -30,   -15,   135,
     136,   145,   151,    -8,   159,  -452,   173,  -452,   880,  -452,
     158,  -452,   173,  1195,  1195,   112,   160,  -452,  -452,  -452,
     162,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  1195,  1195,
    1195,  -452,  -452,   184,    66,  -452,   168,   956,  -452,  -452,
     174,  -452,  -452,  -452,  -452,  -452,   175,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,  -452,  -452,  -452,   176,   179,   -36,
    -452,   345,     7,   611,    69,    87,    94,  -452,  -452,  -452,
    1077,  -452,  -452,   227,  -452,   178,   186,  1368,  -452,  -452,
    -452,  -452,  -452,   189,  -452,   185,   183,  -452,   184,  -452,
     188,   736,  -452,  -452,  -452,  -452,   880,  -452,   191,  -452,
    -452,  -452,   181,   194,   192,   192,   196,   198,  1195,   190,
    1014,  1195,  1195,  1195,  1195,  1341,  -452,  -452,    69,  -452,
    -452,  -452,  -452,  -452,  -452,  -452,    19,   101,   -40,   -20,
      41,   164,   172,   177,   197,   -61,  -452,  -452,  -452,   203,
     204,  -452,   244,   223,   208,  1079,   212,   -39,  -452,  -452,
    -452,  -452,  -452,   221,  1195,   851,  -452,  -452,  -452,  -452,
     226,  1195,  -452,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,  -452,  -452,  1195,  -452,  -452,  -452,
      -8,   880,  -452,  -452,  -452,   736,  -452,  -452,  -452,   184,
     217,   224,  -452,    -8,   956,  -452,  -452,  1260,  1195,   218,
    -452,   218,  1195,  1195,   219,  -452,   220,  1352,   225,  -452,
    -452,  -452,  -452,  1195,  1195,  1195,  1195,  1195,  1195,  1195,
    1195,  1195,   880,  1195,  1195,  1195,  1195,  1195,  1195,  1195,
    1195,  1195,  1195,  1195,  1195,  -452,  -452,   230,   255,   -18,
    -452,   231,  1195,  -452,  -452,   233,   240,  -452,   232,   237,
     234,  -452,  -452,   238,  -452,   245,   246,   241,  -452,   880,
    -452,   267,  -452,  -452,   269,  -452,   276,   268,  1149,  -452,
    -452,   271,  -452,   274,   275,   112,   273,   277,  1149,    14,
    1306,  -452,  -452,  -452,    19,    19,   101,   101,   101,   107,
    -452,   -40,   -40,   -40,   -40,   -20,   -20,    41,   164,   172,
     177,   270,   197,   880,   112,  -452,  -452,  1195,   278,  -452,
    1195,  -452,  1195,  -452,  -452,  -452,   283,   736,  -452,  -452,
    1195,  1284,  -452,  -452,   284,  -452,  1107,  -452,  1195,  1306,
    -452,  1195,   286,  -452,   288,  1079,  -452,   290,  -452,  -452,
     294,  -452,  -452,  -452,  -452,  -452,   296,  -452,   343,   347,
    -452,  -452,  -452,  -452,  -452,  -452,  -452,   112,  -452,  -452,
    -452,  1284,   297,   300,   301,  1107,  -452,  1079,  -452,  -452,
     302,  -452,   276,  1260,  1195,  1195,  -452,  -452,  1079,   306,
     304,   305,  -452,  -452,  1195,  1107,  1107,  -452,   310,   357,
    -452,  1284,  1107,  -452,   309,  -452,  1107,  -452,  -452,  -452
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
       0,   152,   155,   167,   156,   168,     0,   157,   158,   159,
     160,   169,   170,   171,   173,   172,   174,   247,   219,   224,
     220,   225,   226,   227,     0,   182,   183,   180,   181,   179,
       0,   115,   114,     0,   135,     0,     0,    70,   131,   133,
     134,   127,    78,    77,   116,     0,     0,   101,     0,    90,
       0,     0,   100,    30,    32,    31,   106,   112,   111,   120,
     146,   206,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,   224,   226,   260,   249,
     250,   267,   253,   254,   257,   263,   271,   274,   278,   284,
     287,   289,   291,   293,   295,   297,   299,   317,   300,     0,
       0,   196,   213,     0,     0,     0,     0,   248,   225,   227,
     258,   259,    95,   154,   121,     0,   144,   150,   153,   178,
       0,     0,   251,   252,   305,   309,   310,   306,   307,   314,
     316,   315,   308,   311,   312,   313,     0,   136,   128,   132,
       0,   106,   105,    92,    96,   138,    94,    98,    97,     0,
       0,   107,   108,     0,   147,   117,   207,   193,     0,   233,
     235,   233,   121,     0,     0,   204,   233,   248,     0,   262,
     261,   255,   256,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   209,   208,     0,     0,   211,
     215,   241,     0,   176,   223,     0,   122,   229,     0,   240,
       0,   301,    79,     0,   142,   140,   139,   110,   118,     0,
     113,     0,   200,   202,     0,   194,   199,     0,     0,   231,
     236,   234,   232,     0,     0,     0,     0,     0,     0,     0,
     223,   268,   269,   270,   272,   273,   275,   276,   277,     0,
     283,   282,   281,   280,   279,   285,   286,   288,   290,   292,
     294,     0,   296,     0,     0,   212,   216,   121,     0,   242,
       0,   245,   121,   246,   104,   141,     0,     0,   109,   119,
     195,     0,   237,   238,     0,   228,     0,   210,     0,     0,
     265,     0,     0,   218,     0,     0,   230,     0,   137,   143,
       0,   203,   239,   145,   145,   145,    35,   146,     0,   155,
     162,   163,   164,   165,   264,   266,   298,     0,   244,   146,
     243,   197,     0,     0,     0,     0,   186,     0,   217,   189,
       0,   198,   201,   193,     0,     0,   177,   146,     0,     0,
       0,     0,   187,   146,   195,     0,     0,   191,     0,     0,
     146,   197,     0,   190,     0,   146,     0,   188,   146,   192
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -452,  -452,  -452,  -452,   -49,  -120,  -452,  -452,  -452,    58,
     -64,  -106,   -96,  -452,    -1,   348,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,   388,  -452,  -452,   371,  -452,   372,
    -452,  -452,   -31,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,   351,  -452,   -89,   252,   205,   103,  -294,  -452,   -78,
     -67,   331,   116,  -452,  -355,  -452,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,  -309,  -452,  -452,  -452,  -452,  -452,  -452,
     222,  -452,  -452,  -452,  -452,  -452,  -452,   -34,   -35,   -95,
     102,  -452,   261,  -452,  -312,  -247,  -271,  -365,  -452,  -452,
    -452,  -452,  -302,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
     -69,  -417,   -85,  -452,  -452,  -451,  -452,   299,  -452,  -452,
    -452,  -452,  -452,  -452,  -452,    73,  -452,  -452,  -452,   -60,
    -452,  -452,  -286,   209,  -156,   109,   517,     3,   553,    40,
      56,    93,  -117,   146,   199,  -379,  -452,  -114,  -207,  -158,
    -127,    86,    91,   104,    85,   100,  -452,   -12,   157,   214,
    -452,  -452,   442
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   151,   152,   153,    84,    85,    86,    87,    88,
      89,   107,   101,    90,   235,     8,     9,     3,    12,    13,
      31,    32,     4,     5,    14,    15,    16,    33,    34,    35,
      36,    37,    38,    71,   109,    72,   110,   203,    51,    57,
      58,    59,    60,    61,   115,   116,   117,   306,    62,    63,
     124,   113,   310,   311,   312,   125,   218,    98,    64,    65,
      93,   220,   314,   365,    39,    68,    69,   104,   196,   197,
     198,   199,   200,   307,   375,   436,   376,   155,   205,    66,
     156,   157,   158,   159,   160,   161,   468,   162,   163,   164,
     470,   165,   166,   167,   168,   471,   169,   472,   170,   473,
     384,   260,   490,   385,   491,   386,   171,   222,   172,   173,
     174,   175,   176,   358,   359,   360,   425,   177,   178,   236,
     366,   180,   389,   319,   320,   391,   181,   237,   183,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     190,   296,   367
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    46,   191,   100,   192,   382,   106,    83,   224,   201,
      19,   374,   202,   393,   194,   383,   204,   217,   363,    56,
      73,   450,   226,   460,   438,   195,   342,    56,   123,    99,
     492,   357,   270,   271,    41,   392,   179,   353,     1,   111,
     397,   100,  -214,   -42,   100,   354,   207,  -185,    18,   274,
    -185,   212,   333,  -185,    18,    91,    11,   122,   121,   106,
     492,   210,    20,     6,   225,   211,   102,    10,   452,   102,
     475,    21,   193,    41,    49,    22,   206,   339,   340,   341,
      23,   469,   343,   344,    50,    24,    47,   508,    52,    48,
    -184,    25,   223,  -184,   227,   154,  -184,   179,    26,   182,
      27,   262,   264,   449,   102,   444,    28,   102,   194,    29,
     326,   345,   346,    54,   329,   330,   331,   332,   454,   195,
     469,   208,   102,   457,   209,   315,    96,   102,    97,    30,
     334,   335,   406,   407,   408,   336,   184,   -27,    67,   461,
     469,   469,   347,   459,    83,   348,    20,   469,   267,   267,
      53,   469,   185,    18,   274,    21,   154,   275,    70,    22,
     182,    17,    18,   390,    23,   390,   193,   309,    94,    24,
      42,    43,   105,  -248,  -248,    25,   282,   283,   108,   383,
    -145,   382,    26,   103,    55,   411,   412,   413,   414,   186,
      28,   383,    91,    29,  -249,  -249,    96,   184,   119,   467,
     112,  -250,  -250,   114,   372,   179,   120,   380,   479,   383,
     337,   338,   -81,   185,   496,    91,  -145,   401,   402,   403,
     415,   416,   409,   404,   405,   123,    18,   213,   214,   327,
     267,   267,   267,   267,   509,   510,   100,   215,   363,   216,
     497,   515,   187,   219,   221,   518,   228,   263,   265,   106,
     186,   503,   309,   276,   179,   272,    74,   179,   467,   479,
     278,   279,    75,   280,   297,   497,    76,   316,   182,   503,
     281,   298,   300,   301,   313,   302,   325,   349,    77,    78,
     304,    79,   317,   318,   322,    80,   323,   350,    81,   355,
     356,   351,    82,   357,   361,   188,   362,   369,     6,   102,
      91,   364,   352,   187,   208,   184,   378,   379,   395,   388,
     189,   396,   102,   154,   400,   424,   154,   182,   423,   427,
     182,   185,   429,   430,   431,   432,   433,   434,   435,   437,
     309,   474,   210,   267,   267,   267,   267,   267,   267,   267,
     267,    91,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   439,   267,   184,   440,   188,   184,   186,   441,
     442,   447,   444,   445,   446,   443,   448,   455,   458,   451,
     185,   189,   486,   185,   309,   477,   462,   478,    91,   480,
     481,   179,   485,   487,   489,   493,   179,  -161,   494,   495,
     453,   498,   504,   505,   506,   179,   511,   512,   516,   267,
     410,    40,   502,    44,    92,   273,    45,   186,   507,    95,
     186,   187,   377,   303,   118,   513,   381,   373,   277,   299,
     517,   179,    91,   519,   499,   179,   514,   179,   482,   483,
     484,   229,   426,   179,   321,   417,   399,   420,   179,   476,
    -303,   418,     0,   488,   182,   179,   179,   267,   267,   182,
     267,   179,   179,   371,   422,   419,   179,     0,   182,     0,
     187,     0,     0,   187,   188,  -303,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,     0,     0,     0,   189,
       0,   184,     0,     0,   182,     0,   184,     0,   182,     0,
     182,     0,   154,     0,     0,   184,   182,   185,     0,     0,
       0,   182,   185,     0,     0,     0,     0,     0,   182,   182,
       0,   185,     0,   188,   182,   182,   188,     0,     0,   182,
       0,   184,     0,     0,     0,   184,     0,   184,   189,     0,
       0,   189,     0,   184,   186,     0,     0,   185,   184,   186,
       0,   185,     0,   185,     0,   184,   184,     0,   186,   185,
       0,   184,   184,     0,   185,     0,   184,     0,     0,     0,
       0,   185,   185,     0,     0,     0,     0,   185,   185,     0,
       0,     0,   185,     0,   186,   259,   261,     0,   186,     0,
     186,     0,     0,     0,     0,     0,   186,   187,     0,     0,
     266,   186,   187,   -43,     0,     0,     0,     0,   186,   186,
       0,   187,     0,     0,   186,   186,     0,     0,     0,   186,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,    22,     0,   187,     0,     0,
      23,   187,     0,   187,     0,    24,     0,     0,     0,   187,
     188,    25,     0,     0,   187,   188,     0,     0,    26,     0,
      27,   187,   187,   308,   188,   189,    28,   187,   187,    29,
     189,     0,   187,     0,     0,     0,   268,   268,     0,   189,
     324,     0,   328,     0,     0,     0,     0,     0,     0,    30,
     188,     0,     0,     0,   188,     0,   188,     0,     0,     0,
       0,     0,   188,     0,     0,   189,     0,   188,     0,   189,
       0,   189,   269,   269,   188,   188,  -304,   189,     0,     0,
     188,   188,   189,     0,     0,   188,     0,   368,     0,   189,
     189,     0,     0,   370,     0,   189,   189,     0,     0,     0,
     189,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,     0,     0,     0,     0,     0,   308,   268,   268,
     268,   268,     0,    20,    20,     0,     0,     0,   128,     0,
     387,     0,    21,    21,     0,   394,    22,    22,     0,   131,
       0,    23,    23,     0,     0,   368,    24,    24,     0,     0,
       0,     0,    25,    25,   269,   269,   269,   269,     0,    26,
      26,    55,    27,     0,     0,   421,     0,    28,    28,     0,
      29,    29,     0,   136,   428,   138,   139,     6,   141,   142,
     143,     0,   144,     0,   145,     0,     0,     0,   146,   -82,
     305,     0,     0,     0,   230,     0,     0,     0,     0,     0,
     387,     0,   231,   232,     0,     0,     0,     0,     0,     0,
     368,     0,     0,   149,   150,   233,   234,     0,     0,     0,
       0,   268,   268,   268,   268,   268,   268,   268,   268,     0,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
       0,   268,   456,   128,     0,     0,     0,     0,     0,   308,
       0,     0,   261,     0,   131,     0,     0,   269,   269,   269,
     269,   269,   269,   269,   269,     0,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,     0,   269,     0,    74,
       0,     0,     0,     0,     0,    75,     0,   268,   136,    76,
     138,   139,     6,   141,   142,   143,     0,   144,     0,   145,
       0,    77,    78,   146,    79,     0,   500,   501,     0,   230,
       0,    81,     0,   215,     0,    82,   261,   231,   232,     0,
       0,     6,     0,   269,     0,     0,     0,     0,   149,   150,
     233,   234,     0,     0,     0,   268,   268,     0,   268,     0,
       0,     0,     0,     0,     0,     0,   126,   127,   128,     0,
       0,     0,   129,     0,   130,    74,     0,     0,     0,   131,
     132,    75,     0,     0,   133,    76,     0,     0,     0,     0,
       0,   269,   269,   134,   269,     0,     0,    77,    78,   135,
      79,     0,     0,     0,     0,     0,     0,    81,     0,     0,
       0,    82,     0,   136,   137,   138,   139,   140,   141,   142,
     143,     0,   144,     0,   145,     0,   128,     0,   146,     0,
      96,     0,   147,    74,   148,     0,     0,   131,     0,    75,
       0,     0,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   149,   150,    77,    78,     0,    79,     0,
       0,     0,     0,     0,     0,    81,     0,     0,     0,    82,
       0,   136,     0,   138,   139,     6,   141,   142,   143,     0,
     144,     0,   145,     0,     0,     0,   146,     0,     0,   126,
     127,   128,   230,     0,     0,   129,     0,   130,     0,     0,
     231,   232,   131,   132,     0,     0,     0,   133,     0,     0,
       0,   149,   150,   233,   234,     0,   134,   126,   463,   128,
       0,     0,   135,   464,     0,   130,     0,     0,     0,     0,
     131,   132,     0,     0,     0,   133,   136,   137,   138,   139,
     140,   141,   142,   143,   134,   144,     0,   145,     0,     0,
     135,   146,     0,    96,     0,   147,     0,   148,     0,     0,
       0,   128,   284,     0,   136,   465,   138,   139,   466,   141,
     142,   143,   131,   144,     0,   145,   149,   150,     0,   146,
       0,    96,     0,   147,     0,   148,     0,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,     0,     0,
       0,     0,     0,     0,   149,   150,   136,   128,   138,   139,
       6,   141,   142,   143,     0,   144,     0,   145,   131,     0,
       0,   146,     0,     0,     0,     0,     0,   230,     0,     0,
       0,   443,     0,     0,     0,   231,   232,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   149,   150,   233,   234,
       0,     0,   136,     0,   138,   139,     6,   141,   142,   143,
       0,   144,     0,   145,     0,     0,     0,   146,     0,     0,
       0,     0,   128,   230,     0,     0,     0,     0,     0,    74,
       0,   231,   232,   131,     0,    75,     0,     0,     0,    76,
       0,     0,   149,   150,   233,   234,   128,     0,     0,     0,
       0,    77,    78,     0,    79,     0,     0,   131,     0,     0,
       0,    81,     0,     0,     0,    82,     0,   136,   128,   138,
     139,     6,   141,   142,   143,     0,   144,     0,   145,   131,
       0,     0,   146,     0,     0,     0,     0,     0,   148,     0,
       0,   136,     0,   138,   139,     6,   141,   142,   143,     0,
     144,     0,   145,     0,     0,     0,   146,   149,   150,     0,
       0,     0,   148,   136,     0,   138,   139,     6,   141,   142,
     143,     0,   144,     0,   145,     0,    20,    20,   146,     0,
       0,   149,   150,     0,   230,    21,    21,     0,     0,    22,
      22,     0,   231,   232,    23,    23,     0,     0,     0,    24,
      24,     0,     0,     0,     0,    25,    25,     0,     0,     0,
       0,     0,    26,    26,    27,    27,     0,     0,    18,   274,
      28,    28,   333,    29,    29,     0,  -302,     0,     0,    18,
     274,     0,     0,   398,     0,     0,     0,  -302,     0,     0,
       0,     0,  -129,  -130,     0,     0,     0,     0,     0,     0,
       0,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302
};

static const yytype_int16 yycheck[] =
{
       1,    36,    97,    67,    99,   317,    70,    56,   128,   105,
      11,   305,   108,   322,   103,   317,   111,   123,   265,    50,
      55,   400,   128,   440,   379,   103,    46,    58,    43,    63,
     481,    49,   149,   150,    71,   321,    96,    98,    27,    73,
     326,   105,    60,     0,   108,   106,   113,    83,    87,    88,
      86,   118,    91,    89,    87,    56,    41,    92,    91,   123,
     511,    91,    19,    71,   128,    95,    67,     0,   423,    70,
     449,    28,   103,    71,   111,    32,    91,   117,   118,   119,
      37,   446,   102,   103,    84,    42,    56,   504,    71,    59,
      83,    48,   127,    86,   129,    96,    89,   157,    55,    96,
      57,   135,   137,    89,   105,    91,    63,   108,   197,    66,
     230,   131,   132,    86,   231,   232,   233,   234,   427,   197,
     485,    83,   123,   432,    86,   220,    84,   128,    86,    86,
     111,   112,   339,   340,   341,   116,    96,    71,    50,   441,
     505,   506,   101,   437,   193,   104,    19,   512,   149,   150,
      71,   516,    96,    87,    88,    28,   157,    91,    50,    32,
     157,    86,    87,   319,    37,   321,   197,   216,    85,    42,
      86,    87,    83,   107,   108,    48,   107,   108,    36,   481,
      84,   493,    55,    84,    57,   343,   344,   345,   346,    96,
      63,   493,   193,    66,   107,   108,    84,   157,    91,   446,
      71,   107,   108,    71,   300,   265,    91,   313,   455,   511,
     109,   110,    85,   157,   485,   216,    88,   334,   335,   336,
     347,   348,   342,   337,   338,    43,    87,    92,    92,   230,
     231,   232,   233,   234,   505,   506,   300,    92,   485,    88,
     487,   512,    96,    84,    71,   516,    88,    87,    86,   313,
     157,   498,   301,    85,   314,    71,    29,   317,   505,   506,
      86,    86,    35,    87,    86,   512,    39,    86,   265,   516,
      91,    85,    83,    88,    83,    92,    86,   113,    51,    52,
      92,    54,    88,    91,    88,    58,    88,   115,    61,    86,
      86,   114,    65,    49,    71,    96,    88,    71,    71,   300,
     301,    89,   105,   157,    83,   265,    89,    83,    89,    91,
      96,    91,   313,   314,    89,    60,   317,   314,    88,    88,
     317,   265,    89,    83,    92,    88,    92,    89,    83,    83,
     379,   448,    91,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,    85,   354,   314,    86,   157,   317,   265,    83,
      92,   395,    91,    89,    89,    92,    89,    89,    85,    99,
     314,   157,   467,   317,   423,    89,    92,    89,   379,    89,
      86,   441,    86,    40,   479,    88,   446,    40,    88,    88,
     424,    89,    86,    89,    89,   455,    86,    40,    89,   400,
     342,    13,   497,    32,    56,   153,    34,   314,   503,    58,
     317,   265,   309,   208,    83,   510,   314,   301,   157,   197,
     515,   481,   423,   518,   493,   485,   511,   487,   463,   464,
     465,   132,   359,   493,   225,   349,   327,   352,   498,   451,
      95,   350,    -1,   477,   441,   505,   506,   448,   449,   446,
     451,   511,   512,   296,   354,   351,   516,    -1,   455,    -1,
     314,    -1,    -1,   317,   265,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,    -1,    -1,    -1,   265,
      -1,   441,    -1,    -1,   481,    -1,   446,    -1,   485,    -1,
     487,    -1,   493,    -1,    -1,   455,   493,   441,    -1,    -1,
      -1,   498,   446,    -1,    -1,    -1,    -1,    -1,   505,   506,
      -1,   455,    -1,   314,   511,   512,   317,    -1,    -1,   516,
      -1,   481,    -1,    -1,    -1,   485,    -1,   487,   314,    -1,
      -1,   317,    -1,   493,   441,    -1,    -1,   481,   498,   446,
      -1,   485,    -1,   487,    -1,   505,   506,    -1,   455,   493,
      -1,   511,   512,    -1,   498,    -1,   516,    -1,    -1,    -1,
      -1,   505,   506,    -1,    -1,    -1,    -1,   511,   512,    -1,
      -1,    -1,   516,    -1,   481,   133,   134,    -1,   485,    -1,
     487,    -1,    -1,    -1,    -1,    -1,   493,   441,    -1,    -1,
     148,   498,   446,     0,    -1,    -1,    -1,    -1,   505,   506,
      -1,   455,    -1,    -1,   511,   512,    -1,    -1,    -1,   516,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    -1,   481,    -1,    -1,
      37,   485,    -1,   487,    -1,    42,    -1,    -1,    -1,   493,
     441,    48,    -1,    -1,   498,   446,    -1,    -1,    55,    -1,
      57,   505,   506,   211,   455,   441,    63,   511,   512,    66,
     446,    -1,   516,    -1,    -1,    -1,   149,   150,    -1,   455,
     228,    -1,   230,    -1,    -1,    -1,    -1,    -1,    -1,    86,
     481,    -1,    -1,    -1,   485,    -1,   487,    -1,    -1,    -1,
      -1,    -1,   493,    -1,    -1,   481,    -1,   498,    -1,   485,
      -1,   487,   149,   150,   505,   506,    95,   493,    -1,    -1,
     511,   512,   498,    -1,    -1,   516,    -1,   275,    -1,   505,
     506,    -1,    -1,   281,    -1,   511,   512,    -1,    -1,    -1,
     516,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,    -1,    -1,    -1,    -1,    -1,   305,   231,   232,
     233,   234,    -1,    19,    19,    -1,    -1,    -1,    22,    -1,
     318,    -1,    28,    28,    -1,   323,    32,    32,    -1,    33,
      -1,    37,    37,    -1,    -1,   333,    42,    42,    -1,    -1,
      -1,    -1,    48,    48,   231,   232,   233,   234,    -1,    55,
      55,    57,    57,    -1,    -1,   353,    -1,    63,    63,    -1,
      66,    66,    -1,    67,   362,    69,    70,    71,    72,    73,
      74,    -1,    76,    -1,    78,    -1,    -1,    -1,    82,    85,
      84,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,
     388,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
     398,    -1,    -1,   107,   108,   109,   110,    -1,    -1,    -1,
      -1,   334,   335,   336,   337,   338,   339,   340,   341,    -1,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
      -1,   354,   430,    22,    -1,    -1,    -1,    -1,    -1,   437,
      -1,    -1,   440,    -1,    33,    -1,    -1,   334,   335,   336,
     337,   338,   339,   340,   341,    -1,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,    -1,   354,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    -1,   400,    67,    39,
      69,    70,    71,    72,    73,    74,    -1,    76,    -1,    78,
      -1,    51,    52,    82,    54,    -1,   494,   495,    -1,    88,
      -1,    61,    -1,    92,    -1,    65,   504,    96,    97,    -1,
      -1,    71,    -1,   400,    -1,    -1,    -1,    -1,   107,   108,
     109,   110,    -1,    -1,    -1,   448,   449,    -1,   451,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      -1,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,   448,   449,    47,   451,    -1,    -1,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    65,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    -1,    78,    -1,    22,    -1,    82,    -1,
      84,    -1,    86,    29,    88,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    51,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    65,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    -1,
      76,    -1,    78,    -1,    -1,    -1,    82,    -1,    -1,    20,
      21,    22,    88,    -1,    -1,    26,    -1,    28,    -1,    -1,
      96,    97,    33,    34,    -1,    -1,    -1,    38,    -1,    -1,
      -1,   107,   108,   109,   110,    -1,    47,    20,    21,    22,
      -1,    -1,    53,    26,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    38,    67,    68,    69,    70,
      71,    72,    73,    74,    47,    76,    -1,    78,    -1,    -1,
      53,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      -1,    22,    95,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    33,    76,    -1,    78,   107,   108,    -1,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,    -1,    -1,
      -1,    -1,    -1,    -1,   107,   108,    67,    22,    69,    70,
      71,    72,    73,    74,    -1,    76,    -1,    78,    33,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,   110,
      -1,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      -1,    76,    -1,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    22,    88,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    96,    97,    33,    -1,    35,    -1,    -1,    -1,    39,
      -1,    -1,   107,   108,   109,   110,    22,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    -1,    -1,    33,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    65,    -1,    67,    22,    69,
      70,    71,    72,    73,    74,    -1,    76,    -1,    78,    33,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    -1,
      76,    -1,    78,    -1,    -1,    -1,    82,   107,   108,    -1,
      -1,    -1,    88,    67,    -1,    69,    70,    71,    72,    73,
      74,    -1,    76,    -1,    78,    -1,    19,    19,    82,    -1,
      -1,   107,   108,    -1,    88,    28,    28,    -1,    -1,    32,
      32,    -1,    96,    97,    37,    37,    -1,    -1,    -1,    42,
      42,    -1,    -1,    -1,    -1,    48,    48,    -1,    -1,    -1,
      -1,    -1,    55,    55,    57,    57,    -1,    -1,    87,    88,
      63,    63,    91,    66,    66,    -1,    95,    -1,    -1,    87,
      88,    -1,    -1,    91,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    85,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130
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
      87,    91,   107,   108,    95,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   285,    86,    85,   204,
      83,    88,    92,   179,    92,    84,   181,   207,   286,   138,
     186,   187,   188,    83,   196,   213,    86,    88,    91,   257,
     258,   257,    88,    88,   286,    86,   139,   148,   286,   266,
     266,   266,   266,    91,   111,   112,   116,   109,   110,   117,
     118,   119,    46,   102,   103,   131,   132,   101,   104,   113,
     115,   114,   105,    98,   106,    86,    86,    49,   247,   248,
     249,    71,    88,   219,    89,   197,   254,   286,   286,    71,
     286,   282,   146,   186,   181,   208,   210,   180,    89,    83,
     145,   214,   218,   226,   234,   237,   239,   286,    91,   256,
     258,   259,   256,   197,   286,    89,    91,   256,    91,   259,
      89,   266,   266,   266,   271,   271,   272,   272,   272,   139,
     143,   273,   273,   273,   273,   274,   274,   275,   276,   277,
     278,   286,   279,    88,    60,   250,   249,    88,   286,    89,
      83,    92,    88,    92,    89,    83,   209,    83,   188,    85,
      86,    83,    92,    92,    91,    89,    89,   211,    89,    89,
     269,    99,   188,   211,   197,    89,   286,   197,    85,   181,
     235,   226,    92,    21,    26,    68,    71,   219,   220,   221,
     224,   229,   231,   233,   266,   269,   281,    89,    89,   219,
      89,    86,   212,   212,   212,    86,   213,    40,   211,   213,
     236,   238,   239,    88,    88,    88,   220,   219,    89,   234,
     286,   286,   213,   219,    86,    89,    89,   213,   235,   220,
     220,    86,    40,   213,   236,   220,    89,   213,   220,   213
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
       2,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     7,     9,     9,     7,
       7,    11,    11,     0,     1,     0,     1,     0,     1,     1,
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
#line 121 "src/parser.y"
                      {
    printf("Parsing stage was successful !\n");
    (yyval.exp) = (yyvsp[0].exp);
}
#line 2026 "bin/parser.tab.cc"
    break;

  case 3: /* Literal: IntegerLiteral  */
#line 128 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2034 "bin/parser.tab.cc"
    break;

  case 4: /* Literal: FloatingPointLiteral  */
#line 131 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "float";
        buildVal((yyval.exp));
    }
#line 2044 "bin/parser.tab.cc"
    break;

  case 5: /* Literal: BooleanLiteral  */
#line 136 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "boolean";
        buildVal((yyval.exp));
    }
#line 2054 "bin/parser.tab.cc"
    break;

  case 6: /* Literal: CharacterLiteral  */
#line 141 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "char";
        buildVal((yyval.exp));
    }
#line 2064 "bin/parser.tab.cc"
    break;

  case 7: /* Literal: StringLiteral  */
#line 146 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "string";
        buildVal((yyval.exp));
    }
#line 2074 "bin/parser.tab.cc"
    break;

  case 8: /* Literal: NullLiteral  */
#line 151 "src/parser.y"
                 {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "null";
        buildVal((yyval.exp));
    }
#line 2084 "bin/parser.tab.cc"
    break;

  case 9: /* IntegerLiteral: DecimalIntegerLiteral  */
#line 158 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";

        buildVal((yyval.exp));
    }
#line 2095 "bin/parser.tab.cc"
    break;

  case 10: /* IntegerLiteral: HexIntegerLiteral  */
#line 164 "src/parser.y"
                        {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";
        buildVal((yyval.exp));
    }
#line 2105 "bin/parser.tab.cc"
    break;

  case 11: /* IntegerLiteral: OctalIntegerLiteral  */
#line 169 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";
        buildVal((yyval.exp));
    }
#line 2115 "bin/parser.tab.cc"
    break;

  case 12: /* Type: PrimitiveType  */
#line 176 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2123 "bin/parser.tab.cc"
    break;

  case 13: /* Type: ReferenceType  */
#line 179 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2131 "bin/parser.tab.cc"
    break;

  case 14: /* PrimitiveType: NumericType  */
#line 184 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2139 "bin/parser.tab.cc"
    break;

  case 15: /* PrimitiveType: Boolean  */
#line 187 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "boolean";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 1;
    }
#line 2150 "bin/parser.tab.cc"
    break;

  case 16: /* NumericType: IntegralType  */
#line 195 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2158 "bin/parser.tab.cc"
    break;

  case 17: /* NumericType: FloatingPointType  */
#line 198 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2166 "bin/parser.tab.cc"
    break;

  case 18: /* IntegralType: Byte  */
#line 203 "src/parser.y"
         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "byte";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 1;
    }
#line 2177 "bin/parser.tab.cc"
    break;

  case 19: /* IntegralType: Short  */
#line 209 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "short";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 2;
    }
#line 2188 "bin/parser.tab.cc"
    break;

  case 20: /* IntegralType: Int  */
#line 215 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)-> symbol.size = 4;
    }
#line 2199 "bin/parser.tab.cc"
    break;

  case 21: /* IntegralType: Long  */
#line 221 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "long";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2210 "bin/parser.tab.cc"
    break;

  case 22: /* IntegralType: Char  */
#line 227 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "char";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 2;
    }
#line 2221 "bin/parser.tab.cc"
    break;

  case 23: /* FloatingPointType: Float  */
#line 235 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.type.name = "float";
        (yyval.exp)->symbol.size = 4;
    }
#line 2232 "bin/parser.tab.cc"
    break;

  case 24: /* FloatingPointType: Double  */
#line 241 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "double";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2243 "bin/parser.tab.cc"
    break;

  case 25: /* ReferenceType: ClassOrInterfaceType  */
#line 249 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2251 "bin/parser.tab.cc"
    break;

  case 26: /* ReferenceType: ArrayType  */
#line 252 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2259 "bin/parser.tab.cc"
    break;

  case 27: /* ClassOrInterfaceType: Name  */
#line 257 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2267 "bin/parser.tab.cc"
    break;

  case 28: /* ClassType: ClassOrInterfaceType  */
#line 262 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2275 "bin/parser.tab.cc"
    break;

  case 29: /* InterfaceType: ClassOrInterfaceType  */
#line 267 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2283 "bin/parser.tab.cc"
    break;

  case 30: /* ArrayType: PrimitiveType LeftSquareBracket RightSquareBracket  */
#line 272 "src/parser.y"
                                                       {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data)+"[]";
        (yyval.exp)->symbol.type.name = temp;
    }
#line 2294 "bin/parser.tab.cc"
    break;

  case 31: /* ArrayType: Name LeftSquareBracket RightSquareBracket  */
#line 278 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.type.name = temp;

    }
#line 2306 "bin/parser.tab.cc"
    break;

  case 32: /* ArrayType: ArrayType LeftSquareBracket RightSquareBracket  */
#line 285 "src/parser.y"
                                                     {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.type.name = temp;

    }
#line 2318 "bin/parser.tab.cc"
    break;

  case 33: /* Name: SimpleName  */
#line 294 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2326 "bin/parser.tab.cc"
    break;

  case 34: /* Name: QualifiedName  */
#line 297 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2334 "bin/parser.tab.cc"
    break;

  case 35: /* SimpleName: Identifier  */
#line 302 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));  
        struct Symbol* lookup_entry = check_scope(curr,(yyvsp[0].data));      
        if(lookup_entry != NULL){
            (yyval.exp)->symbol = *lookup_entry;
        }buildVal((yyval.exp));
    }
#line 2346 "bin/parser.tab.cc"
    break;

  case 36: /* QualifiedName: Name Dot Identifier  */
#line 311 "src/parser.y"
                        {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,concatenate_string((yyvsp[-1].data),(yyvsp[0].data))));
        buildVal((yyval.exp));
    }
#line 2355 "bin/parser.tab.cc"
    break;

  case 37: /* CompilationUnit: PackageDeclaration_opt ImportDeclarations_opt TypeDeclarations_opt  */
#line 317 "src/parser.y"
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
#line 2372 "bin/parser.tab.cc"
    break;

  case 38: /* ImportDeclarations_opt: %empty  */
#line 331 "src/parser.y"
    { 
        (yyval.exp) = NULL; 
    }
#line 2380 "bin/parser.tab.cc"
    break;

  case 39: /* ImportDeclarations_opt: ImportDeclarations  */
#line 334 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Imports", memArr, 1, 1);
    }
#line 2390 "bin/parser.tab.cc"
    break;

  case 40: /* ImportDeclarations: ImportDeclaration  */
#line 341 "src/parser.y"
                      {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2400 "bin/parser.tab.cc"
    break;

  case 41: /* ImportDeclarations: ImportDeclarations ImportDeclaration  */
#line 346 "src/parser.y"
                                           {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateImports", memArr, 2, 0);
    }
#line 2411 "bin/parser.tab.cc"
    break;

  case 42: /* TypeDeclarations_opt: %empty  */
#line 354 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2419 "bin/parser.tab.cc"
    break;

  case 43: /* TypeDeclarations_opt: TypeDeclarations  */
#line 357 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Declarations", memArr, 1, 0);
        
        struct node*E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 2434 "bin/parser.tab.cc"
    break;

  case 44: /* TypeDeclarations: TypeDeclaration  */
#line 369 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        
        struct node*E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 2449 "bin/parser.tab.cc"
    break;

  case 45: /* TypeDeclarations: TypeDeclarations TypeDeclaration  */
#line 379 "src/parser.y"
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
#line 2466 "bin/parser.tab.cc"
    break;

  case 46: /* PackageDeclaration_opt: %empty  */
#line 393 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2474 "bin/parser.tab.cc"
    break;

  case 47: /* PackageDeclaration_opt: PackageDeclaration  */
#line 396 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2482 "bin/parser.tab.cc"
    break;

  case 48: /* PackageDeclaration: Package Name Semicolon  */
#line 401 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),concatenate_string(" ",(yyvsp[-1].exp)->data)));
    }
#line 2490 "bin/parser.tab.cc"
    break;

  case 49: /* ImportDeclaration: SingleTypeImportDeclaration  */
#line 406 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2498 "bin/parser.tab.cc"
    break;

  case 50: /* ImportDeclaration: TypeImportOnDemandDeclaration  */
#line 409 "src/parser.y"
                                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2506 "bin/parser.tab.cc"
    break;

  case 51: /* SingleTypeImportDeclaration: Import Name Semicolon  */
#line 414 "src/parser.y"
                          {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data), concatenate_string(" ",(yyvsp[-1].exp)->data)));
    }
#line 2514 "bin/parser.tab.cc"
    break;

  case 52: /* TypeImportOnDemandDeclaration: Import Name Dot Product Semicolon  */
#line 419 "src/parser.y"
                                      {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-4].data), concatenate_string(" ",concatenate_string((yyvsp[-3].exp)->data,".*"))));
    }
#line 2522 "bin/parser.tab.cc"
    break;

  case 53: /* TypeDeclaration: ClassDeclaration  */
#line 424 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2530 "bin/parser.tab.cc"
    break;

  case 54: /* TypeDeclaration: InterfaceDeclaration  */
#line 427 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2538 "bin/parser.tab.cc"
    break;

  case 55: /* TypeDeclaration: Semicolon  */
#line 430 "src/parser.y"
                {
        (yyval.exp) = NULL;
    }
#line 2546 "bin/parser.tab.cc"
    break;

  case 56: /* Modifiers: Modifier  */
#line 435 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2556 "bin/parser.tab.cc"
    break;

  case 57: /* Modifiers: Modifiers Modifier  */
#line 440 "src/parser.y"
                         {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifier", memArr, 2, 0);
    }
#line 2567 "bin/parser.tab.cc"
    break;

  case 58: /* Modifier: Public  */
#line 448 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2575 "bin/parser.tab.cc"
    break;

  case 59: /* Modifier: Protected  */
#line 451 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2583 "bin/parser.tab.cc"
    break;

  case 60: /* Modifier: Private  */
#line 454 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2591 "bin/parser.tab.cc"
    break;

  case 61: /* Modifier: Static  */
#line 457 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2599 "bin/parser.tab.cc"
    break;

  case 62: /* Modifier: Abstract  */
#line 460 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2607 "bin/parser.tab.cc"
    break;

  case 63: /* Modifier: Final  */
#line 463 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2615 "bin/parser.tab.cc"
    break;

  case 64: /* Modifier: Native  */
#line 466 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2623 "bin/parser.tab.cc"
    break;

  case 65: /* Modifier: Synchronized  */
#line 469 "src/parser.y"
                   {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2631 "bin/parser.tab.cc"
    break;

  case 66: /* Modifier: Transient  */
#line 472 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2639 "bin/parser.tab.cc"
    break;

  case 67: /* Modifier: Volatile  */
#line 475 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2647 "bin/parser.tab.cc"
    break;

  case 68: /* Class_Name_Extractor: Modifiers_opt Class Identifier ClassExtend_opt Interfaces_opt  */
#line 479 "src/parser.y"
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
            if((yyvsp[-4].exp)->arr[i]!=NULL)
                (yyval.exp)->symbol.type.modifier.push_back(string((yyvsp[-4].exp)->arr[i]->data));
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
#line 2679 "bin/parser.tab.cc"
    break;

  case 69: /* ClassDeclaration: Class_Name_Extractor Symbol_Table_Change ClassBody Symbol_Table_Back  */
#line 509 "src/parser.y"
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
#line 2695 "bin/parser.tab.cc"
    break;

  case 70: /* Modifiers_opt: %empty  */
#line 521 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 2703 "bin/parser.tab.cc"
    break;

  case 71: /* Modifiers_opt: Modifiers  */
#line 524 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifiers", memArr, 1, 1);
    }
#line 2713 "bin/parser.tab.cc"
    break;

  case 72: /* ClassExtend_opt: %empty  */
#line 530 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2721 "bin/parser.tab.cc"
    break;

  case 73: /* ClassExtend_opt: ClassExtend  */
#line 533 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2729 "bin/parser.tab.cc"
    break;

  case 74: /* Interfaces_opt: %empty  */
#line 537 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2737 "bin/parser.tab.cc"
    break;

  case 75: /* Interfaces_opt: Interfaces  */
#line 540 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2745 "bin/parser.tab.cc"
    break;

  case 76: /* ClassExtend: Extends ClassType  */
#line 545 "src/parser.y"
                      {
        (yyval.exp) = makeleaf((yyvsp[0].exp)->data);
    }
#line 2753 "bin/parser.tab.cc"
    break;

  case 77: /* Interfaces: Implements InterfaceTypeList  */
#line 550 "src/parser.y"
                                 {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 1);

    }
#line 2765 "bin/parser.tab.cc"
    break;

  case 78: /* InterfaceTypeList: InterfaceType  */
#line 559 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2775 "bin/parser.tab.cc"
    break;

  case 79: /* InterfaceTypeList: InterfaceTypeList Comma InterfaceType  */
#line 564 "src/parser.y"
                                            {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("InterfaceList", memArr, 2, 0);
    }
#line 2786 "bin/parser.tab.cc"
    break;

  case 80: /* ClassBody: LeftCurlyBrace ClassBodyDeclarations_opt RightCurlyBrace  */
#line 572 "src/parser.y"
                                                             {
        (yyval.exp) = (yyvsp[-1].exp);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 2798 "bin/parser.tab.cc"
    break;

  case 81: /* ClassBodyDeclarations_opt: %empty  */
#line 580 "src/parser.y"
                            { 
        (yyval.exp) = NULL ;
    }
#line 2806 "bin/parser.tab.cc"
    break;

  case 82: /* ClassBodyDeclarations_opt: ClassBodyDeclarations  */
#line 583 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ClassBody", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
        
    }
#line 2821 "bin/parser.tab.cc"
    break;

  case 83: /* ClassBodyDeclarations: ClassBodyDeclaration  */
#line 595 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ClassBody", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);

    }
#line 2836 "bin/parser.tab.cc"
    break;

  case 84: /* ClassBodyDeclarations: ClassBodyDeclarations ClassBodyDeclaration  */
#line 605 "src/parser.y"
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
#line 2852 "bin/parser.tab.cc"
    break;

  case 85: /* ClassBodyDeclaration: ClassMemberDeclaration  */
#line 618 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2860 "bin/parser.tab.cc"
    break;

  case 86: /* ClassBodyDeclaration: StaticInitializer  */
#line 621 "src/parser.y"
                        {
        (yyval.exp)=(yyvsp[0].exp);
    }
#line 2868 "bin/parser.tab.cc"
    break;

  case 87: /* ClassBodyDeclaration: ConstructorDeclaration  */
#line 624 "src/parser.y"
                             {
        (yyval.exp)=(yyvsp[0].exp);
    }
#line 2876 "bin/parser.tab.cc"
    break;

  case 88: /* ClassMemberDeclaration: FieldDeclaration  */
#line 629 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
        struct Symbol* class_entry = loc_lookup(glob_class_scope,class_name);
        if(class_entry != NULL){
            class_entry->size += (yyval.exp)->symbol.size;
        }
    }
#line 2888 "bin/parser.tab.cc"
    break;

  case 89: /* ClassMemberDeclaration: MethodDeclaration  */
#line 636 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);

    }
#line 2897 "bin/parser.tab.cc"
    break;

  case 90: /* FieldDeclaration: Modifiers_opt Type VariableDeclarators Semicolon  */
#line 642 "src/parser.y"
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
                

                (yyval.exp)->symbol.name = name;
                
                long long int x  = loc_insert(curr,(yyval.exp)->symbol);
        
                if(x < 0)
                {
                    semantic_error("Declaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x) + ".");
                }

                if((yyvsp[-1].exp)->arr[j]->symbol.type.t == 4 ){
                    if((yyvsp[-1].exp)->arr[j]->symbol.type.name != (yyvsp[-2].exp)->symbol.type.name){
                        // Add code for casting $3->arr[j] to type of $2->type.name
                    }
                }

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


            }
        }
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);        

    }
#line 2991 "bin/parser.tab.cc"
    break;

  case 91: /* VariableDeclarators: VariableDeclarator  */
#line 733 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);

    }
#line 3006 "bin/parser.tab.cc"
    break;

  case 92: /* VariableDeclarators: VariableDeclarators Comma VariableDeclarator  */
#line 743 "src/parser.y"
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
#line 3022 "bin/parser.tab.cc"
    break;

  case 93: /* VariableDeclarator: VariableDeclaratorId  */
#line 756 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->t = 0;
        (yyval.exp)->symbol.name = (yyvsp[0].exp)->symbol.name;
        (yyval.exp)->symbol.type.t = 0;


    }
#line 3038 "bin/parser.tab.cc"
    break;

  case 94: /* VariableDeclarator: VariableDeclaratorId EqualTo VariableInitializer  */
#line 767 "src/parser.y"
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

        (yyval.exp)->symbol.type.t = 4;
        (yyval.exp)->symbol.type.name = (yyvsp[0].exp)->symbol.type.name;
    }
#line 3062 "bin/parser.tab.cc"
    break;

  case 95: /* VariableDeclaratorId: Identifier  */
#line 788 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        string temp  = string((yyvsp[0].data));
        (yyval.exp)->symbol.name = temp;
        buildVal((yyval.exp));
    }
#line 3073 "bin/parser.tab.cc"
    break;

  case 96: /* VariableDeclaratorId: VariableDeclaratorId LeftSquareBracket RightSquareBracket  */
#line 794 "src/parser.y"
                                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.name = temp;
        buildVal((yyval.exp));
    }
#line 3084 "bin/parser.tab.cc"
    break;

  case 97: /* VariableInitializer: Expression  */
#line 802 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3092 "bin/parser.tab.cc"
    break;

  case 98: /* VariableInitializer: ArrayInitializer  */
#line 805 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3100 "bin/parser.tab.cc"
    break;

  case 99: /* MethodDeclaration: MethodHeader MethodBody  */
#line 810 "src/parser.y"
                           {
        
        
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
        E[1] = (yyvsp[-1].exp);
        E[2] = (yyvsp[0].exp);
        buildTAC(E, 3, APPEND_CODE);

    }
#line 3127 "bin/parser.tab.cc"
    break;

  case 100: /* MethodHeader: Modifiers_opt Type MethodDeclarator Throws_opt  */
#line 834 "src/parser.y"
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


       long long int x = glob_insert(line_number, class_name,(yyval.exp)->symbol.name,(yyval.exp)->symbol.type,curr,glob_table);
       if(x < 0){
        semantic_error("Method declaration at line number " + to_string(line_number)+ " is invalid as constructor already with same name declared at line number " + to_string(-x) +".");
       }
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
        
    }
#line 3170 "bin/parser.tab.cc"
    break;

  case 101: /* MethodHeader: Modifiers_opt Void MethodDeclarator Throws_opt  */
#line 872 "src/parser.y"
                                                     {
        
        struct node * memArr[4];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = makeleaf((yyvsp[-2].data));
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 4, 0);
        if((yyvsp[-3].exp) != NULL)
        {   
            for(int i=0; i< (yyvsp[-3].exp)->arr.size();i ++)
            {
                string temp = string((yyvsp[-3].exp)->arr[i]->data);
                (yyval.exp)->symbol.type.modifier.push_back(temp);
            
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

        long long int x = glob_insert(line_number,class_name,(yyval.exp)->symbol.name,(yyval.exp)->symbol.type,curr,glob_table);
        if(x < 0){
            semantic_error("Method declaration at line number " + to_string(line_number)+ " is invalid as constructor already with same name declared at line number " + to_string(-x) +".");
        }
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);

    }
#line 3212 "bin/parser.tab.cc"
    break;

  case 102: /* Throws_opt: %empty  */
#line 911 "src/parser.y"
    { 
        (yyval.exp) = NULL;
    }
#line 3220 "bin/parser.tab.cc"
    break;

  case 103: /* Throws_opt: Throws  */
#line 914 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Throws", memArr, 1, 1);
    }
#line 3230 "bin/parser.tab.cc"
    break;

  case 104: /* MethodDeclarator: Identifier Symbol_Table_Change LeftParanthesis FormalParameterList_opt RightParanthesis  */
#line 921 "src/parser.y"
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
#line 3255 "bin/parser.tab.cc"
    break;

  case 105: /* MethodDeclarator: MethodDeclarator LeftSquareBracket RightSquareBracket  */
#line 941 "src/parser.y"
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
#line 3271 "bin/parser.tab.cc"
    break;

  case 106: /* FormalParameterList_opt: %empty  */
#line 953 "src/parser.y"
                          {
        (yyval.exp) = NULL;
    }
#line 3279 "bin/parser.tab.cc"
    break;

  case 107: /* FormalParameterList_opt: FormalParameterList  */
#line 956 "src/parser.y"
                          {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameters", memArr, 1, 1);
        
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3294 "bin/parser.tab.cc"
    break;

  case 108: /* FormalParameterList: FormalParameter  */
#line 968 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameter", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
        
    }
#line 3309 "bin/parser.tab.cc"
    break;

  case 109: /* FormalParameterList: FormalParameterList Comma FormalParameter  */
#line 978 "src/parser.y"
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
#line 3325 "bin/parser.tab.cc"
    break;

  case 110: /* FormalParameter: Type VariableDeclaratorId  */
#line 991 "src/parser.y"
                              {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-1].exp)->data, concatenate_string(" ", (yyvsp[0].exp)->data)));
        (yyval.exp)->symbol.type.name = (yyvsp[-1].exp)->symbol.type.name;
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
#line 3362 "bin/parser.tab.cc"
    break;

  case 111: /* Throws: THROWS ClassTypeList  */
#line 1025 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("throws", memArr, 1, 1);
    }
#line 3372 "bin/parser.tab.cc"
    break;

  case 112: /* ClassTypeList: ClassType  */
#line 1032 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 1, 0);
    }
#line 3382 "bin/parser.tab.cc"
    break;

  case 113: /* ClassTypeList: ClassTypeList Comma ClassType  */
#line 1037 "src/parser.y"
                                    {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp); 
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 2, 0);
    }
#line 3393 "bin/parser.tab.cc"
    break;

  case 114: /* MethodBody: Block Symbol_Table_Back  */
#line 1045 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3401 "bin/parser.tab.cc"
    break;

  case 115: /* MethodBody: Semicolon Symbol_Table_Back  */
#line 1048 "src/parser.y"
                                 {
        (yyval.exp) = NULL;
    }
#line 3409 "bin/parser.tab.cc"
    break;

  case 116: /* StaticInitializer: Static Symbol_Table_Change Block Symbol_Table_Back  */
#line 1054 "src/parser.y"
                                                       {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("static", memArr, 1, 1);
        
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3424 "bin/parser.tab.cc"
    break;

  case 117: /* ConstructorDeclaration: Modifiers_opt ConstructorDeclarator Throws_opt ConstructorBody Symbol_Table_Back  */
#line 1066 "src/parser.y"
                                                                                     {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-3].exp);
        memArr[2] = (yyvsp[-2].exp);
        memArr[3] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 4, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->symbol = (yyvsp[-3].exp)->symbol;
        view_symbol((yyvsp[-3].exp)->symbol);
        if((yyvsp[-4].exp) != NULL)
        {
            for(int i = 0; i<(yyvsp[-4].exp)->arr.size(); i++)
            {
                (yyval.exp)->symbol.type.modifier.push_back((yyvsp[-4].exp)->arr[i]->data);
            }
            
        }

        long long int x = glob_insert(line_number,class_name,(yyval.exp)->symbol.name,(yyval.exp)->symbol.type,curr,glob_table);
        if(x < 0){
            semantic_error("Constructor declaration at line number " + to_string(line_number)+ " is invalid as constructor already defined at line number " + to_string(-x) +".");
        }
        struct node* E[3];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-4].exp);
        E[2] = (yyvsp[-1].exp);
        buildTAC(E, 3, APPEND_CODE);
    }
#line 3458 "bin/parser.tab.cc"
    break;

  case 118: /* ConstructorDeclarator: SimpleName Symbol_Table_Change LeftParanthesis FormalParameterList_opt RightParanthesis  */
#line 1097 "src/parser.y"
                                                                                            {
        
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-4].exp)->data, memArr, 1, 0);
        if(string((yyvsp[-4].exp)->data) != class_name){
            semantic_error("Constructor Declaration at line number " + to_string(line_number) +  " is not declared properly." );
        }
        (yyval.exp)->symbol.name = (yyvsp[-4].exp)->data;
        struct Symbol * class_scope_entry = loc_lookup(glob_class_scope,class_name);
        if(class_scope_entry !=  NULL)
        {
            (yyval.exp)->symbol.type = class_scope_entry->type;
        }
        (yyval.exp)->symbol.type.t = 3;

        if((yyvsp[-1].exp) != NULL){
            for(int i=0; i< (yyvsp[-1].exp)->symbol.type.parameters.size(); i++)
            {

                (yyval.exp)->symbol.type.parameters.push_back((yyvsp[-1].exp)->symbol.type.parameters[i]);
                (yyval.exp)->symbol.type.parameters_type.push_back((yyvsp[-1].exp)->symbol.type.parameters_type[i]);
            }
        
        }
        (yyval.exp)->symbol.line_num = line_number;
        //glob_insert(line_number,class_name,$$->symbol.name,$$->symbol.type,curr,glob_table);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
        
    }
#line 3496 "bin/parser.tab.cc"
    break;

  case 119: /* ConstructorBody: LeftCurlyBrace ExplicitConstructorInvocation_opt BlockStatements_opt RightCurlyBrace  */
#line 1132 "src/parser.y"
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
#line 3512 "bin/parser.tab.cc"
    break;

  case 120: /* ExplicitConstructorInvocation_opt: %empty  */
#line 1144 "src/parser.y"
                                    { 
    (yyval.exp) = NULL; 
    }
#line 3520 "bin/parser.tab.cc"
    break;

  case 121: /* ArgumentList_opt: %empty  */
#line 1178 "src/parser.y"
                  {
    (yyval.exp) = NULL; 
    }
#line 3528 "bin/parser.tab.cc"
    break;

  case 122: /* ArgumentList_opt: ArgumentList  */
#line 1181 "src/parser.y"
                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Arguments", memArr, 1, 0);

        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);        
    }
#line 3543 "bin/parser.tab.cc"
    break;

  case 123: /* InterfaceDeclaration: Modifiers_opt Interface Identifier ExtendsInterfaces_opt InterfaceBody  */
#line 1193 "src/parser.y"
                                                                           {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = makeleaf((yyvsp[-3].data));
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-2].data), memArr, 4, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3557 "bin/parser.tab.cc"
    break;

  case 124: /* ExtendsInterfaces_opt: %empty  */
#line 1203 "src/parser.y"
                        {
    (yyval.exp) = NULL;
    }
#line 3565 "bin/parser.tab.cc"
    break;

  case 125: /* ExtendsInterfaces_opt: ExtendsInterfaces  */
#line 1206 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 1);
    }
#line 3575 "bin/parser.tab.cc"
    break;

  case 126: /* ExtendsInterfaces: Extends InterfaceType  */
#line 1213 "src/parser.y"
                          {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 0);
    }
#line 3585 "bin/parser.tab.cc"
    break;

  case 127: /* ExtendsInterfaces: ExtendsInterfaces Comma InterfaceType  */
#line 1218 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 2, 0);
    }
#line 3596 "bin/parser.tab.cc"
    break;

  case 128: /* InterfaceBody: LeftCurlyBrace InterfaceMemberDeclarations_opt RightCurlyBrace  */
#line 1226 "src/parser.y"
                                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3604 "bin/parser.tab.cc"
    break;

  case 129: /* InterfaceMemberDeclarations_opt: %empty  */
#line 1230 "src/parser.y"
                                 {
        (yyval.exp) = NULL;
    }
#line 3612 "bin/parser.tab.cc"
    break;

  case 130: /* InterfaceMemberDeclarations_opt: InterfaceMemberDeclarations  */
#line 1233 "src/parser.y"
                                  {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interfaces", memArr, 1, 1);
    }
#line 3622 "bin/parser.tab.cc"
    break;

  case 131: /* InterfaceMemberDeclarations: InterfaceMemberDeclaration  */
#line 1240 "src/parser.y"
                               {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 1, 0);
    }
#line 3632 "bin/parser.tab.cc"
    break;

  case 132: /* InterfaceMemberDeclarations: InterfaceMemberDeclarations InterfaceMemberDeclaration  */
#line 1245 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 0);
    }
#line 3643 "bin/parser.tab.cc"
    break;

  case 133: /* InterfaceMemberDeclaration: ConstantDeclaration  */
#line 1253 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3652 "bin/parser.tab.cc"
    break;

  case 134: /* InterfaceMemberDeclaration: AbstractMethodDeclaration  */
#line 1257 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3661 "bin/parser.tab.cc"
    break;

  case 135: /* ConstantDeclaration: FieldDeclaration  */
#line 1263 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3669 "bin/parser.tab.cc"
    break;

  case 136: /* AbstractMethodDeclaration: MethodHeader Semicolon  */
#line 1268 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3677 "bin/parser.tab.cc"
    break;

  case 137: /* ArrayInitializer: LeftCurlyBrace VariableInitializers_opt Comma_opt RightCurlyBrace  */
#line 1273 "src/parser.y"
                                                                      {
        (yyval.exp) = (yyvsp[-2].exp);
    }
#line 3685 "bin/parser.tab.cc"
    break;

  case 138: /* VariableInitializers_opt: %empty  */
#line 1277 "src/parser.y"
                          {
        (yyval.exp) = NULL; 
    }
#line 3693 "bin/parser.tab.cc"
    break;

  case 139: /* VariableInitializers_opt: VariableInitializers  */
#line 1280 "src/parser.y"
                           {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("VariableInitializers", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);  
    }
#line 3707 "bin/parser.tab.cc"
    break;

  case 140: /* Comma_opt: %empty  */
#line 1290 "src/parser.y"
            {
        (yyval.exp) = NULL; 
    }
#line 3715 "bin/parser.tab.cc"
    break;

  case 141: /* Comma_opt: Comma  */
#line 1293 "src/parser.y"
            {
        (yyval.exp) = NULL;
    }
#line 3723 "bin/parser.tab.cc"
    break;

  case 142: /* VariableInitializers: VariableInitializer  */
#line 1298 "src/parser.y"
                        {
       struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);  
    }
#line 3737 "bin/parser.tab.cc"
    break;

  case 143: /* VariableInitializers: VariableInitializers Comma VariableInitializer  */
#line 1307 "src/parser.y"
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
#line 3753 "bin/parser.tab.cc"
    break;

  case 144: /* Block: LeftCurlyBrace BlockStatements_opt RightCurlyBrace  */
#line 1320 "src/parser.y"
                                                       {    
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3761 "bin/parser.tab.cc"
    break;

  case 145: /* Symbol_Table_Change: %empty  */
#line 1325 "src/parser.y"
    { 
        curr = loc_mktable(curr,"local");
    }
#line 3769 "bin/parser.tab.cc"
    break;

  case 146: /* Symbol_Table_Back: %empty  */
#line 1330 "src/parser.y"
    {
        curr = curr->parent;
    }
#line 3777 "bin/parser.tab.cc"
    break;

  case 147: /* BlockStatements_opt: %empty  */
#line 1334 "src/parser.y"
                      {
     (yyval.exp) = NULL; 
     }
#line 3785 "bin/parser.tab.cc"
    break;

  case 148: /* BlockStatements_opt: BlockStatements  */
#line 1337 "src/parser.y"
                      {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("statements", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);  
    }
#line 3799 "bin/parser.tab.cc"
    break;

  case 149: /* BlockStatements: BlockStatement  */
#line 1348 "src/parser.y"
                   {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Blocks", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE); 
    }
#line 3813 "bin/parser.tab.cc"
    break;

  case 150: /* BlockStatements: BlockStatements BlockStatement  */
#line 1357 "src/parser.y"
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
#line 3830 "bin/parser.tab.cc"
    break;

  case 151: /* BlockStatement: LocalVariableDeclarationStatement  */
#line 1371 "src/parser.y"
                                      {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("LocalVariableDeclarationStatement", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3844 "bin/parser.tab.cc"
    break;

  case 152: /* BlockStatement: Statement  */
#line 1380 "src/parser.y"
                {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Statement", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);

    }
#line 3859 "bin/parser.tab.cc"
    break;

  case 153: /* LocalVariableDeclarationStatement: LocalVariableDeclaration Semicolon  */
#line 1392 "src/parser.y"
                                       {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3873 "bin/parser.tab.cc"
    break;

  case 154: /* LocalVariableDeclaration: Type VariableDeclarators  */
#line 1403 "src/parser.y"
                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Declaration", memArr, 2, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
        for(int j = 0 ; j< (yyvsp[0].exp)->arr.size(); j++)
            {
                (yyval.exp)->symbol.type.name = (yyvsp[-1].exp)->symbol.type.name;
                (yyval.exp)-> symbol.type.t = (yyvsp[-1].exp)->symbol.type.t;
                (yyval.exp)->symbol.name= (yyvsp[0].exp)->arr[j]->symbol.name;
                (yyval.exp)->symbol.size += (yyvsp[-1].exp)->symbol.size;
                (yyval.exp)->symbol.source_file = (yyvsp[0].exp)->arr[j]->symbol.source_file;
                (yyval.exp)->symbol.offset = (yyvsp[0].exp)->arr[j]->symbol.offset;
                (yyval.exp)->symbol.type.modifier.clear();
                
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
                
                long long int x = loc_insert(curr, (yyval.exp)->symbol);

                if(x<0)
                {
                    semantic_error("Declaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x));
                }
                

            }
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 3927 "bin/parser.tab.cc"
    break;

  case 155: /* Statement: StatementWithoutTrailingSubstatement  */
#line 1454 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3935 "bin/parser.tab.cc"
    break;

  case 156: /* Statement: LabeledStatement  */
#line 1457 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3943 "bin/parser.tab.cc"
    break;

  case 157: /* Statement: IfThenStatement  */
#line 1460 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3951 "bin/parser.tab.cc"
    break;

  case 158: /* Statement: IfThenElseStatement  */
#line 1463 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3959 "bin/parser.tab.cc"
    break;

  case 159: /* Statement: WhileStatement  */
#line 1466 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3967 "bin/parser.tab.cc"
    break;

  case 160: /* Statement: ForStatement  */
#line 1469 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3975 "bin/parser.tab.cc"
    break;

  case 161: /* StatementNoShortIf: StatementWithoutTrailingSubstatement  */
#line 1474 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3983 "bin/parser.tab.cc"
    break;

  case 162: /* StatementNoShortIf: LabeledStatementNoShortIf  */
#line 1477 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3991 "bin/parser.tab.cc"
    break;

  case 163: /* StatementNoShortIf: IfThenElseStatementNoShortIf  */
#line 1480 "src/parser.y"
                                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3999 "bin/parser.tab.cc"
    break;

  case 164: /* StatementNoShortIf: WhileStatementNoShortIf  */
#line 1483 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4007 "bin/parser.tab.cc"
    break;

  case 165: /* StatementNoShortIf: ForStatementNoShortIf  */
#line 1486 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4015 "bin/parser.tab.cc"
    break;

  case 166: /* StatementWithoutTrailingSubstatement: Block  */
#line 1491 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4023 "bin/parser.tab.cc"
    break;

  case 167: /* StatementWithoutTrailingSubstatement: EmptyStatement  */
#line 1494 "src/parser.y"
                     {
        (yyval.exp) = NULL;
    }
#line 4031 "bin/parser.tab.cc"
    break;

  case 168: /* StatementWithoutTrailingSubstatement: ExpressionStatement  */
#line 1497 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4039 "bin/parser.tab.cc"
    break;

  case 169: /* StatementWithoutTrailingSubstatement: BreakStatement  */
#line 1500 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4047 "bin/parser.tab.cc"
    break;

  case 170: /* StatementWithoutTrailingSubstatement: ContinueStatement  */
#line 1503 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4055 "bin/parser.tab.cc"
    break;

  case 171: /* StatementWithoutTrailingSubstatement: ReturnStatement  */
#line 1506 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4063 "bin/parser.tab.cc"
    break;

  case 172: /* StatementWithoutTrailingSubstatement: SynchronizedStatement  */
#line 1509 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4071 "bin/parser.tab.cc"
    break;

  case 173: /* StatementWithoutTrailingSubstatement: ThrowStatement  */
#line 1512 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4079 "bin/parser.tab.cc"
    break;

  case 174: /* StatementWithoutTrailingSubstatement: TryStatement  */
#line 1515 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4087 "bin/parser.tab.cc"
    break;

  case 175: /* EmptyStatement: Semicolon  */
#line 1520 "src/parser.y"
              {
        (yyval.exp) = NULL;
    }
#line 4095 "bin/parser.tab.cc"
    break;

  case 176: /* LabeledStatement: Identifier Semicolon Statement  */
#line 1525 "src/parser.y"
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
#line 4112 "bin/parser.tab.cc"
    break;

  case 177: /* LabeledStatementNoShortIf: Identifier Semicolon StatementNoShortIf  */
#line 1539 "src/parser.y"
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
#line 4129 "bin/parser.tab.cc"
    break;

  case 178: /* ExpressionStatement: StatementExpression Semicolon  */
#line 1553 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4137 "bin/parser.tab.cc"
    break;

  case 179: /* StatementExpression: Assignment  */
#line 1558 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4145 "bin/parser.tab.cc"
    break;

  case 180: /* StatementExpression: PreIncrementExpression  */
#line 1561 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4153 "bin/parser.tab.cc"
    break;

  case 181: /* StatementExpression: PreDecrementExpression  */
#line 1564 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4161 "bin/parser.tab.cc"
    break;

  case 182: /* StatementExpression: PostIncrementExpression  */
#line 1567 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4169 "bin/parser.tab.cc"
    break;

  case 183: /* StatementExpression: PostDecrementExpression  */
#line 1570 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4177 "bin/parser.tab.cc"
    break;

  case 184: /* StatementExpression: MethodInvocation  */
#line 1573 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4185 "bin/parser.tab.cc"
    break;

  case 185: /* StatementExpression: ClassInstanceCreationExpression  */
#line 1576 "src/parser.y"
                                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4193 "bin/parser.tab.cc"
    break;

  case 186: /* IfThenStatement: If Symbol_Table_Change LeftParanthesis Expression RightParanthesis Statement Symbol_Table_Back  */
#line 1581 "src/parser.y"
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
#line 4209 "bin/parser.tab.cc"
    break;

  case 187: /* IfThenElseStatement: If Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf Else Statement Symbol_Table_Back  */
#line 1594 "src/parser.y"
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
#line 4230 "bin/parser.tab.cc"
    break;

  case 188: /* IfThenElseStatementNoShortIf: If Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf Else StatementNoShortIf Symbol_Table_Back  */
#line 1612 "src/parser.y"
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
#line 4251 "bin/parser.tab.cc"
    break;

  case 189: /* WhileStatement: While Symbol_Table_Change LeftParanthesis Expression RightParanthesis Statement Symbol_Table_Back  */
#line 1630 "src/parser.y"
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
#line 4270 "bin/parser.tab.cc"
    break;

  case 190: /* WhileStatementNoShortIf: While Symbol_Table_Change LeftParanthesis Expression RightParanthesis StatementNoShortIf Symbol_Table_Back  */
#line 1646 "src/parser.y"
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
#line 4287 "bin/parser.tab.cc"
    break;

  case 191: /* ForStatement: For Symbol_Table_Change LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis Statement Symbol_Table_Back  */
#line 1660 "src/parser.y"
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
#line 4311 "bin/parser.tab.cc"
    break;

  case 192: /* ForStatementNoShortIf: For Symbol_Table_Change LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis StatementNoShortIf Symbol_Table_Back  */
#line 1681 "src/parser.y"
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
#line 4333 "bin/parser.tab.cc"
    break;

  case 193: /* ForInit_opt: %empty  */
#line 1699 "src/parser.y"
             { 
    (yyval.exp) = NULL; 
    }
#line 4341 "bin/parser.tab.cc"
    break;

  case 194: /* ForInit_opt: ForInit  */
#line 1702 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);

        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4356 "bin/parser.tab.cc"
    break;

  case 195: /* Expression_opt: %empty  */
#line 1713 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 4364 "bin/parser.tab.cc"
    break;

  case 196: /* Expression_opt: Expression  */
#line 1716 "src/parser.y"
                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Expression", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4378 "bin/parser.tab.cc"
    break;

  case 197: /* ForUpdate_opt: %empty  */
#line 1726 "src/parser.y"
               { 
    (yyval.exp) = NULL ;
    }
#line 4386 "bin/parser.tab.cc"
    break;

  case 198: /* ForUpdate_opt: ForUpdate  */
#line 1729 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4400 "bin/parser.tab.cc"
    break;

  case 199: /* ForInit: StatementExpressionList  */
#line 1740 "src/parser.y"
                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4414 "bin/parser.tab.cc"
    break;

  case 200: /* ForInit: LocalVariableDeclaration  */
#line 1749 "src/parser.y"
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
#line 4430 "bin/parser.tab.cc"
    break;

  case 201: /* ForUpdate: StatementExpressionList  */
#line 1762 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4444 "bin/parser.tab.cc"
    break;

  case 202: /* StatementExpressionList: StatementExpression  */
#line 1773 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("StatementExpression", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4458 "bin/parser.tab.cc"
    break;

  case 203: /* StatementExpressionList: StatementExpressionList Comma StatementExpression  */
#line 1782 "src/parser.y"
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
#line 4474 "bin/parser.tab.cc"
    break;

  case 204: /* BreakStatement: Break Identifier_opt Semicolon  */
#line 1795 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("break", memArr, 1, 1);
        buildVal((yyval.exp));
    }
#line 4485 "bin/parser.tab.cc"
    break;

  case 205: /* Identifier_opt: %empty  */
#line 1803 "src/parser.y"
    {
        (yyval.exp) = NULL;
    }
#line 4493 "bin/parser.tab.cc"
    break;

  case 206: /* Identifier_opt: Identifier  */
#line 1805 "src/parser.y"
                  {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        buildVal((yyval.exp));
    }
#line 4502 "bin/parser.tab.cc"
    break;

  case 207: /* ContinueStatement: Continue Identifier_opt Semicolon  */
#line 1811 "src/parser.y"
                                      {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("continue", memArr, 1, 1);
        buildVal((yyval.exp));

    }
#line 4514 "bin/parser.tab.cc"
    break;

  case 208: /* ReturnStatement: Return Expression_opt Semicolon  */
#line 1820 "src/parser.y"
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
#line 4531 "bin/parser.tab.cc"
    break;

  case 209: /* ThrowStatement: THROW Expression Semicolon  */
#line 1834 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("throw", memArr, 1, 1);
    }
#line 4541 "bin/parser.tab.cc"
    break;

  case 210: /* SynchronizedStatement: Synchronized LeftParanthesis Expression RightParanthesis Block  */
#line 1841 "src/parser.y"
                                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("synchronized", memArr, 2, 1);
    }
#line 4552 "bin/parser.tab.cc"
    break;

  case 211: /* TryStatement: Try Block Catches  */
#line 1849 "src/parser.y"
                      {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCatches", memArr, 2, 1);
    }
#line 4563 "bin/parser.tab.cc"
    break;

  case 212: /* TryStatement: Try Block Catches_opt Finally  */
#line 1855 "src/parser.y"
                                    {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCtachesFinally", memArr, 3, 1);
    }
#line 4575 "bin/parser.tab.cc"
    break;

  case 213: /* Catches_opt: %empty  */
#line 1863 "src/parser.y"
             {
        (yyval.exp) = NULL; 
    }
#line 4583 "bin/parser.tab.cc"
    break;

  case 214: /* Catches_opt: Catches  */
#line 1866 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catches", memArr, 1, 1);
    }
#line 4593 "bin/parser.tab.cc"
    break;

  case 215: /* Catches: CatchClause  */
#line 1873 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("catch", memArr, 1, 0);
    }
#line 4603 "bin/parser.tab.cc"
    break;

  case 216: /* Catches: Catches CatchClause  */
#line 1878 "src/parser.y"
                          {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catch", memArr, 2, 0);
    }
#line 4614 "bin/parser.tab.cc"
    break;

  case 217: /* CatchClause: Catch LeftParanthesis FormalParameter RightParanthesis Block  */
#line 1886 "src/parser.y"
                                                                 {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CatchClause", memArr, 2, 0);
    }
#line 4625 "bin/parser.tab.cc"
    break;

  case 218: /* Finally: FINALLY Block  */
#line 1894 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("finally", memArr, 1, 1);
    }
#line 4635 "bin/parser.tab.cc"
    break;

  case 219: /* Primary: PrimaryNoNewArray  */
#line 1901 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4643 "bin/parser.tab.cc"
    break;

  case 220: /* Primary: ArrayCreationExpression  */
#line 1904 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4651 "bin/parser.tab.cc"
    break;

  case 221: /* PrimaryNoNewArray: Literal  */
#line 1909 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4659 "bin/parser.tab.cc"
    break;

  case 222: /* PrimaryNoNewArray: This  */
#line 1912 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4667 "bin/parser.tab.cc"
    break;

  case 223: /* PrimaryNoNewArray: LeftParanthesis Expression RightParanthesis  */
#line 1915 "src/parser.y"
                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4675 "bin/parser.tab.cc"
    break;

  case 224: /* PrimaryNoNewArray: ClassInstanceCreationExpression  */
#line 1918 "src/parser.y"
                                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4683 "bin/parser.tab.cc"
    break;

  case 225: /* PrimaryNoNewArray: FieldAccess  */
#line 1921 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4691 "bin/parser.tab.cc"
    break;

  case 226: /* PrimaryNoNewArray: MethodInvocation  */
#line 1924 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4699 "bin/parser.tab.cc"
    break;

  case 227: /* PrimaryNoNewArray: ArrayAccess  */
#line 1927 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4707 "bin/parser.tab.cc"
    break;

  case 228: /* ClassInstanceCreationExpression: New ClassType LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 1932 "src/parser.y"
                                                                    {
        struct node * memArr[3];
        memArr[0] = makeleaf((yyvsp[-4].data));
        memArr[1] =(yyvsp[-3].exp);
        memArr[2] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ClassInstance", memArr, 3, 1);
        (yyval.exp)->isDeclaration = DECLARATION;

        struct GlobalSymbol * glob_entry = glob_lookup((yyvsp[-3].exp)->symbol.name,(yyvsp[-3].exp)->symbol.name,glob_table);

        if(glob_entry == NULL){
            buildVal((yyval.exp));
        }

        else{
            if((yyvsp[-1].exp) == NULL){
                //cout << glob_entry->type.parameters_type.size() <<endl;
                if(glob_entry->type.parameters_type.size() != 0){
                    semantic_error("Constructor " + string((yyvsp[-3].exp)->data) +  " invocation at line number " + to_string(line_number) + " has wrong number of parameters passed.");
                }
            }
            else{
                //cout << $3->arr.size() <<endl;
                if((yyvsp[-1].exp)->arr.size()!= glob_entry->type.parameters_type.size()){
                    semantic_error("Constructor " + string((yyvsp[-3].exp)->data) +  " invocation at line number " + to_string(line_number) + " has wrong number of parameters passed.");
                }
                else{
                    //cout << "Hello good sir " << $3->arr.size() << endl;
                    for (int i = 0; i< (yyvsp[-1].exp)->arr.size(); i++)
                    {   
                        //view_symbol($3->arr[i]->symbol);
                        if(glob_entry->type.parameters_type[i] != (yyvsp[-1].exp)->arr[i]->symbol.type.name)
                        {
                            semantic_error("Constructor " + string((yyvsp[-3].exp)->data) +  " invocation at line number " + to_string(line_number) + " has wrong type of parameter passed at position " + to_string(i+1) + "." );          
                        }
                    }
                }
            }

        }

        buildVal((yyval.exp));

    }
#line 4756 "bin/parser.tab.cc"
    break;

  case 229: /* ArgumentList: Expression  */
#line 1978 "src/parser.y"
               {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArgumentList", memArr, 1, 0);
        struct node* E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[0].exp);
        buildTAC(E, 2, COPY_CODE);
    }
#line 4770 "bin/parser.tab.cc"
    break;

  case 230: /* ArgumentList: ArgumentList Comma Expression  */
#line 1987 "src/parser.y"
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
#line 4786 "bin/parser.tab.cc"
    break;

  case 231: /* ArrayCreationExpression: New PrimitiveType DimExprs Dims_opt  */
#line 2000 "src/parser.y"
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
#line 4801 "bin/parser.tab.cc"
    break;

  case 232: /* ArrayCreationExpression: New ClassOrInterfaceType DimExprs Dims_opt  */
#line 2010 "src/parser.y"
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
#line 4816 "bin/parser.tab.cc"
    break;

  case 233: /* Dims_opt: %empty  */
#line 2021 "src/parser.y"
          { 
    (yyval.exp) = NULL; 
    }
#line 4824 "bin/parser.tab.cc"
    break;

  case 234: /* Dims_opt: Dims  */
#line 2024 "src/parser.y"
          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4832 "bin/parser.tab.cc"
    break;

  case 235: /* DimExprs: DimExpr  */
#line 2029 "src/parser.y"
            {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 4842 "bin/parser.tab.cc"
    break;

  case 236: /* DimExprs: DimExprs DimExpr  */
#line 2034 "src/parser.y"
                       {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]",memArr,2, 0);
    }
#line 4853 "bin/parser.tab.cc"
    break;

  case 237: /* DimExpr: LeftSquareBracket Expression RightSquareBracket  */
#line 2042 "src/parser.y"
                                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 4863 "bin/parser.tab.cc"
    break;

  case 238: /* Dims: LeftSquareBracket RightSquareBracket  */
#line 2049 "src/parser.y"
                                         {
        (yyval.exp) = makeleaf("[]");
    }
#line 4871 "bin/parser.tab.cc"
    break;

  case 239: /* Dims: Dims LeftSquareBracket RightSquareBracket  */
#line 2052 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
    }
#line 4879 "bin/parser.tab.cc"
    break;

  case 240: /* FieldAccess: Primary Dot Identifier  */
#line 2057 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,(yyvsp[0].data)));
        //string class_in = $1->symbol.type.name;

        buildVal((yyval.exp));

    }
#line 4891 "bin/parser.tab.cc"
    break;

  case 241: /* FieldAccess: Super Dot Identifier  */
#line 2064 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),(yyvsp[0].data)));
        buildVal((yyval.exp));

    }
#line 4901 "bin/parser.tab.cc"
    break;

  case 242: /* MethodInvocation: Name LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 2071 "src/parser.y"
                                                           {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 1, 1);

        // Checking If function has been defined
        struct GlobalSymbol * glob_entry = glob_lookup(class_name, (yyvsp[-3].exp)->data, glob_table);
        if(glob_entry ==  NULL){
            semantic_error("Function " + string((yyvsp[-3].exp)->data) + " at line number " + to_string(line_number) + " not declared." );
            //cout << "Function at line number "<< line_number << " not declared" <<endl ;
        }
        else{
            // Checking if Arguments are filled in properly
            if((yyvsp[-1].exp) == NULL){
                if(glob_entry->type.parameters_type.size() != 0){
                    semantic_error("Function " + string((yyvsp[-3].exp)->data) +  " invocation at line number " + to_string(line_number) + " has wrong number of parameters passed.");
                }
            }
            else{
                //cout << $3->arr.size() <<endl;
                if((yyvsp[-1].exp)->arr.size()!= glob_entry->type.parameters_type.size()){
                    semantic_error("Function " + string((yyvsp[-3].exp)->data) +  " invocation at line number " + to_string(line_number) + " has wrong number of parameters passed.");
                }
                else{
                    //cout << "Hello good sir " << $3->arr.size() << endl;
                    for (int i = 0; i< (yyvsp[-1].exp)->arr.size(); i++)
                    {   
                        //view_symbol($3->arr[i]->symbol);
                        if(glob_entry->type.parameters_type[i] != (yyvsp[-1].exp)->arr[i]->symbol.type.name)
                        {
                            semantic_error("Function " + string((yyvsp[-3].exp)->data) +  " invocation at line number " + to_string(line_number) + " has wrong type of parameter passed at position " + to_string(i+1) + "." );          
                        }
                    }
                }
            }


            //cout << "Function at line number "<< line_number << " declared at line number " << glob_entry->line_num <<endl<<endl;
        }

        //Checking if ArgumentList_opt is valid


        struct node * E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, METHOD_INVOCATION);
    }
#line 4954 "bin/parser.tab.cc"
    break;

  case 243: /* MethodInvocation: Primary Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 2119 "src/parser.y"
                                                                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].exp)->data,concatenate_string(" ",(yyvsp[-3].data))), memArr, 1, 1);
        struct node * E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, METHOD_INVOCATION);
    }
#line 4968 "bin/parser.tab.cc"
    break;

  case 244: /* MethodInvocation: Super Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 2128 "src/parser.y"
                                                                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].data),concatenate_string(" ",(yyvsp[-3].data))), memArr, 1, 1);
        struct node * E[2];
        E[0] = (yyval.exp);
        E[1] = (yyvsp[-1].exp);
        buildTAC(E, 2, METHOD_INVOCATION);
    }
#line 4982 "bin/parser.tab.cc"
    break;

  case 245: /* ArrayAccess: Name LeftSquareBracket Expression RightSquareBracket  */
#line 2139 "src/parser.y"
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

        if((yyvsp[-1].exp)->symbol.type.name != "byte" && (yyvsp[-1].exp)->symbol.type.name != "short" && (yyvsp[-1].exp)->symbol.type.name != "int" && (yyvsp[-1].exp)->symbol.type.name != "long"  )
        {
            semantic_error("Invalid array access at line number " + to_string(line_number) + " as the expression " + (yyvsp[-1].exp)->symbol.name + " is not of type int.");
        }
        buildVal((yyval.exp));
    }
#line 5026 "bin/parser.tab.cc"
    break;

  case 246: /* ArrayAccess: PrimaryNoNewArray LeftSquareBracket Expression RightSquareBracket  */
#line 2178 "src/parser.y"
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
        if((yyvsp[-1].exp)->symbol.type.name != "byte" && (yyvsp[-1].exp)->symbol.type.name != "short" && (yyvsp[-1].exp)->symbol.type.name != "int" && (yyvsp[-1].exp)->symbol.type.name != "long"  )
        {
            semantic_error("Invalid array access at line number " + to_string(line_number) + " as the expression " + (yyvsp[-1].exp)->symbol.name + " is not of type int.");
        }
        buildVal((yyval.exp));
    }
#line 5070 "bin/parser.tab.cc"
    break;

  case 247: /* PostfixExpression: Primary  */
#line 2219 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5078 "bin/parser.tab.cc"
    break;

  case 248: /* PostfixExpression: Name  */
#line 2222 "src/parser.y"
           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5086 "bin/parser.tab.cc"
    break;

  case 249: /* PostfixExpression: PostIncrementExpression  */
#line 2225 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5094 "bin/parser.tab.cc"
    break;

  case 250: /* PostfixExpression: PostDecrementExpression  */
#line 2228 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5102 "bin/parser.tab.cc"
    break;

  case 251: /* PostIncrementExpression: PostfixExpression PlusPlus  */
#line 2233 "src/parser.y"
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
#line 5118 "bin/parser.tab.cc"
    break;

  case 252: /* PostDecrementExpression: PostfixExpression MinusMinus  */
#line 2246 "src/parser.y"
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
#line 5134 "bin/parser.tab.cc"
    break;

  case 253: /* UnaryExpression: PreIncrementExpression  */
#line 2259 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5142 "bin/parser.tab.cc"
    break;

  case 254: /* UnaryExpression: PreDecrementExpression  */
#line 2262 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5150 "bin/parser.tab.cc"
    break;

  case 255: /* UnaryExpression: Addition UnaryExpression  */
#line 2265 "src/parser.y"
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
#line 5166 "bin/parser.tab.cc"
    break;

  case 256: /* UnaryExpression: Substraction UnaryExpression  */
#line 2276 "src/parser.y"
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
#line 5181 "bin/parser.tab.cc"
    break;

  case 257: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 2286 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5189 "bin/parser.tab.cc"
    break;

  case 258: /* PreIncrementExpression: PlusPlus UnaryExpression  */
#line 2291 "src/parser.y"
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
#line 5206 "bin/parser.tab.cc"
    break;

  case 259: /* PreDecrementExpression: MinusMinus UnaryExpression  */
#line 2305 "src/parser.y"
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
#line 5223 "bin/parser.tab.cc"
    break;

  case 260: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 2319 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5231 "bin/parser.tab.cc"
    break;

  case 261: /* UnaryExpressionNotPlusMinus: Tilde UnaryExpression  */
#line 2322 "src/parser.y"
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
#line 5246 "bin/parser.tab.cc"
    break;

  case 262: /* UnaryExpressionNotPlusMinus: NotOperator UnaryExpression  */
#line 2332 "src/parser.y"
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
#line 5261 "bin/parser.tab.cc"
    break;

  case 263: /* UnaryExpressionNotPlusMinus: CastExpression  */
#line 2342 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5269 "bin/parser.tab.cc"
    break;

  case 264: /* CastExpression: LeftParanthesis PrimitiveType Dims_opt RightParanthesis UnaryExpression  */
#line 2347 "src/parser.y"
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
#line 5284 "bin/parser.tab.cc"
    break;

  case 265: /* CastExpression: LeftParanthesis Expression RightParanthesis UnaryExpressionNotPlusMinus  */
#line 2357 "src/parser.y"
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
#line 5299 "bin/parser.tab.cc"
    break;

  case 266: /* CastExpression: LeftParanthesis Name Dims RightParanthesis UnaryExpressionNotPlusMinus  */
#line 2367 "src/parser.y"
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
#line 5314 "bin/parser.tab.cc"
    break;

  case 267: /* MultiplicativeExpression: UnaryExpression  */
#line 2379 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5322 "bin/parser.tab.cc"
    break;

  case 268: /* MultiplicativeExpression: MultiplicativeExpression Product UnaryExpression  */
#line 2382 "src/parser.y"
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
#line 5339 "bin/parser.tab.cc"
    break;

  case 269: /* MultiplicativeExpression: MultiplicativeExpression Divide UnaryExpression  */
#line 2394 "src/parser.y"
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
#line 5356 "bin/parser.tab.cc"
    break;

  case 270: /* MultiplicativeExpression: MultiplicativeExpression Modulo UnaryExpression  */
#line 2406 "src/parser.y"
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
#line 5373 "bin/parser.tab.cc"
    break;

  case 271: /* AdditiveExpression: MultiplicativeExpression  */
#line 2420 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5381 "bin/parser.tab.cc"
    break;

  case 272: /* AdditiveExpression: AdditiveExpression Addition MultiplicativeExpression  */
#line 2423 "src/parser.y"
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
#line 5398 "bin/parser.tab.cc"
    break;

  case 273: /* AdditiveExpression: AdditiveExpression Substraction MultiplicativeExpression  */
#line 2435 "src/parser.y"
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
#line 5415 "bin/parser.tab.cc"
    break;

  case 274: /* ShiftExpression: AdditiveExpression  */
#line 2449 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5423 "bin/parser.tab.cc"
    break;

  case 275: /* ShiftExpression: ShiftExpression LeftShit AdditiveExpression  */
#line 2452 "src/parser.y"
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
#line 5440 "bin/parser.tab.cc"
    break;

  case 276: /* ShiftExpression: ShiftExpression RightShift AdditiveExpression  */
#line 2464 "src/parser.y"
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
#line 5457 "bin/parser.tab.cc"
    break;

  case 277: /* ShiftExpression: ShiftExpression TripleGreaterThan AdditiveExpression  */
#line 2476 "src/parser.y"
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
#line 5474 "bin/parser.tab.cc"
    break;

  case 278: /* RelationalExpression: ShiftExpression  */
#line 2490 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5482 "bin/parser.tab.cc"
    break;

  case 279: /* RelationalExpression: RelationalExpression LessThan ShiftExpression  */
#line 2493 "src/parser.y"
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
#line 5499 "bin/parser.tab.cc"
    break;

  case 280: /* RelationalExpression: RelationalExpression GreaterThan ShiftExpression  */
#line 2505 "src/parser.y"
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
#line 5516 "bin/parser.tab.cc"
    break;

  case 281: /* RelationalExpression: RelationalExpression LessThanEqualTo ShiftExpression  */
#line 2517 "src/parser.y"
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
#line 5533 "bin/parser.tab.cc"
    break;

  case 282: /* RelationalExpression: RelationalExpression GreaterThanEqualTo ShiftExpression  */
#line 2529 "src/parser.y"
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
#line 5550 "bin/parser.tab.cc"
    break;

  case 283: /* RelationalExpression: RelationalExpression Instanceof ReferenceType  */
#line 2541 "src/parser.y"
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
#line 5567 "bin/parser.tab.cc"
    break;

  case 284: /* EqualityExpression: RelationalExpression  */
#line 2555 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5575 "bin/parser.tab.cc"
    break;

  case 285: /* EqualityExpression: EqualityExpression EqualToEqualTo RelationalExpression  */
#line 2558 "src/parser.y"
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
#line 5592 "bin/parser.tab.cc"
    break;

  case 286: /* EqualityExpression: EqualityExpression NotEqualTo RelationalExpression  */
#line 2570 "src/parser.y"
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
#line 5609 "bin/parser.tab.cc"
    break;

  case 287: /* AndExpression: EqualityExpression  */
#line 2584 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5617 "bin/parser.tab.cc"
    break;

  case 288: /* AndExpression: AndExpression BitwiseAnd EqualityExpression  */
#line 2587 "src/parser.y"
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
#line 5634 "bin/parser.tab.cc"
    break;

  case 289: /* ExclusiveOrExpression: AndExpression  */
#line 2601 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5642 "bin/parser.tab.cc"
    break;

  case 290: /* ExclusiveOrExpression: ExclusiveOrExpression CircumFlex AndExpression  */
#line 2604 "src/parser.y"
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
#line 5659 "bin/parser.tab.cc"
    break;

  case 291: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 2618 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5667 "bin/parser.tab.cc"
    break;

  case 292: /* InclusiveOrExpression: InclusiveOrExpression BitwiseOr ExclusiveOrExpression  */
#line 2621 "src/parser.y"
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
#line 5684 "bin/parser.tab.cc"
    break;

  case 293: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 2635 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5692 "bin/parser.tab.cc"
    break;

  case 294: /* ConditionalAndExpression: ConditionalAndExpression AndOperator InclusiveOrExpression  */
#line 2638 "src/parser.y"
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
#line 5709 "bin/parser.tab.cc"
    break;

  case 295: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 2652 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5717 "bin/parser.tab.cc"
    break;

  case 296: /* ConditionalOrExpression: ConditionalOrExpression OrOperator ConditionalAndExpression  */
#line 2655 "src/parser.y"
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
#line 5734 "bin/parser.tab.cc"
    break;

  case 297: /* ConditionalExpression: ConditionalOrExpression  */
#line 2669 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5742 "bin/parser.tab.cc"
    break;

  case 298: /* ConditionalExpression: ConditionalOrExpression QuestionMark Expression Colon ConditionalExpression  */
#line 2672 "src/parser.y"
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
#line 5760 "bin/parser.tab.cc"
    break;

  case 299: /* AssignmentExpression: ConditionalExpression  */
#line 2687 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5768 "bin/parser.tab.cc"
    break;

  case 300: /* AssignmentExpression: Assignment  */
#line 2690 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5776 "bin/parser.tab.cc"
    break;

  case 301: /* Assignment: LeftHandSide AssignmentOperator AssignmentExpression  */
#line 2695 "src/parser.y"
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
#line 5795 "bin/parser.tab.cc"
    break;

  case 302: /* LeftHandSide: Name  */
#line 2711 "src/parser.y"
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
#line 5810 "bin/parser.tab.cc"
    break;

  case 303: /* LeftHandSide: FieldAccess  */
#line 2721 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5818 "bin/parser.tab.cc"
    break;

  case 304: /* LeftHandSide: ArrayAccess  */
#line 2724 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
        struct Symbol * lookup_entry = check_scope(curr , string((yyvsp[0].exp)->symbol.name));
        if(lookup_entry == NULL){
            semantic_error("The identifier " + string((yyvsp[0].exp)->symbol.name) + " at line number " + to_string(line_number) +  " has not been declared in the scope." );
        }
        else{
            //cout << "The identifier "  <<  $1->symbol.name <<" at line number " << line_number << " has been declared at line number "<< lookup_entry->line_num << endl <<endl;
            (yyval.exp)->symbol.type = lookup_entry->type;
        }
    }
#line 5834 "bin/parser.tab.cc"
    break;

  case 305: /* AssignmentOperator: EqualTo  */
#line 2737 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5842 "bin/parser.tab.cc"
    break;

  case 306: /* AssignmentOperator: ProductEqualTo  */
#line 2740 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5850 "bin/parser.tab.cc"
    break;

  case 307: /* AssignmentOperator: DivideEqualTo  */
#line 2743 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5858 "bin/parser.tab.cc"
    break;

  case 308: /* AssignmentOperator: ModuloEqualTo  */
#line 2746 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5866 "bin/parser.tab.cc"
    break;

  case 309: /* AssignmentOperator: AdditionEqualTo  */
#line 2749 "src/parser.y"
                      {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5874 "bin/parser.tab.cc"
    break;

  case 310: /* AssignmentOperator: SubstractionEqualTo  */
#line 2752 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5882 "bin/parser.tab.cc"
    break;

  case 311: /* AssignmentOperator: LeftShitEqualTo  */
#line 2755 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5890 "bin/parser.tab.cc"
    break;

  case 312: /* AssignmentOperator: RightShiftEqualTo  */
#line 2758 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5898 "bin/parser.tab.cc"
    break;

  case 313: /* AssignmentOperator: TripleGreaterThanEqualTo  */
#line 2761 "src/parser.y"
                                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5906 "bin/parser.tab.cc"
    break;

  case 314: /* AssignmentOperator: BitWiseAndEqualTo  */
#line 2764 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5914 "bin/parser.tab.cc"
    break;

  case 315: /* AssignmentOperator: CircumFlexEqualTo  */
#line 2767 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5922 "bin/parser.tab.cc"
    break;

  case 316: /* AssignmentOperator: BitWiseOrEqualTo  */
#line 2770 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5930 "bin/parser.tab.cc"
    break;

  case 317: /* Expression: AssignmentExpression  */
#line 2774 "src/parser.y"
                                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5938 "bin/parser.tab.cc"
    break;


#line 5942 "bin/parser.tab.cc"

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

#line 2779 "src/parser.y"



int yyerror(string s)
{
    cout << "Error detected !" << s << " at [ line number: " << line_number << " ] after removing the comments.\nExiting...\n";
    err = 1;
    return 0;
}

int semantic_error(string s)
{
    cout << s <<endl <<endl;
    err = 1;
    return 0;
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

    yyparse();
    
    if(err == 0){
        // No syntax or semantic error
        int limit = root->val.code.size();
        for(int iter = 0; iter < limit; iter++)
            cout << root->val.code[iter]<<endl; 
    }
    
    //// view_symbol_table(*glob_class_scope);
    //viewGlobal(glob_table);
    FILE* graph = fopen(output_file,"w");
    fprintf(graph, "digraph AST{ \n");
    generateGraph(root, graph);
    fprintf(graph, "} \n");
    fclose(graph);
    fclose(yyin);

    return 0;

}



