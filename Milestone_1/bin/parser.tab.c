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
    int nodenumber;
    int parentFlag;
    struct node* arr[N_NodeChild];

};
struct node* makeInternalNode(char* rule, struct node* memArr[], int n, int isParent);
struct node* makeleaf(char* node);
char* concatenate_string(char* s, char* s1);
void help();


#line 98 "bin/parser.tab.c"

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

#include "parser.tab.h"
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
  YYSYMBOL_BlockStatements_opt = 212,      /* BlockStatements_opt  */
  YYSYMBOL_BlockStatements = 213,          /* BlockStatements  */
  YYSYMBOL_BlockStatement = 214,           /* BlockStatement  */
  YYSYMBOL_LocalVariableDeclarationStatement = 215, /* LocalVariableDeclarationStatement  */
  YYSYMBOL_LocalVariableDeclaration = 216, /* LocalVariableDeclaration  */
  YYSYMBOL_Statement = 217,                /* Statement  */
  YYSYMBOL_StatementNoShortIf = 218,       /* StatementNoShortIf  */
  YYSYMBOL_StatementWithoutTrailingSubstatement = 219, /* StatementWithoutTrailingSubstatement  */
  YYSYMBOL_EmptyStatement = 220,           /* EmptyStatement  */
  YYSYMBOL_LabeledStatement = 221,         /* LabeledStatement  */
  YYSYMBOL_LabeledStatementNoShortIf = 222, /* LabeledStatementNoShortIf  */
  YYSYMBOL_ExpressionStatement = 223,      /* ExpressionStatement  */
  YYSYMBOL_StatementExpression = 224,      /* StatementExpression  */
  YYSYMBOL_IfThenStatement = 225,          /* IfThenStatement  */
  YYSYMBOL_IfThenElseStatement = 226,      /* IfThenElseStatement  */
  YYSYMBOL_IfThenElseStatementNoShortIf = 227, /* IfThenElseStatementNoShortIf  */
  YYSYMBOL_WhileStatement = 228,           /* WhileStatement  */
  YYSYMBOL_WhileStatementNoShortIf = 229,  /* WhileStatementNoShortIf  */
  YYSYMBOL_ForStatement = 230,             /* ForStatement  */
  YYSYMBOL_ForStatementNoShortIf = 231,    /* ForStatementNoShortIf  */
  YYSYMBOL_ForInit_opt = 232,              /* ForInit_opt  */
  YYSYMBOL_Expression_opt = 233,           /* Expression_opt  */
  YYSYMBOL_ForUpdate_opt = 234,            /* ForUpdate_opt  */
  YYSYMBOL_ForInit = 235,                  /* ForInit  */
  YYSYMBOL_ForUpdate = 236,                /* ForUpdate  */
  YYSYMBOL_StatementExpressionList = 237,  /* StatementExpressionList  */
  YYSYMBOL_BreakStatement = 238,           /* BreakStatement  */
  YYSYMBOL_Identifier_opt = 239,           /* Identifier_opt  */
  YYSYMBOL_ContinueStatement = 240,        /* ContinueStatement  */
  YYSYMBOL_ReturnStatement = 241,          /* ReturnStatement  */
  YYSYMBOL_ThrowStatement = 242,           /* ThrowStatement  */
  YYSYMBOL_SynchronizedStatement = 243,    /* SynchronizedStatement  */
  YYSYMBOL_TryStatement = 244,             /* TryStatement  */
  YYSYMBOL_Catches_opt = 245,              /* Catches_opt  */
  YYSYMBOL_Catches = 246,                  /* Catches  */
  YYSYMBOL_CatchClause = 247,              /* CatchClause  */
  YYSYMBOL_Finally = 248,                  /* Finally  */
  YYSYMBOL_Primary = 249,                  /* Primary  */
  YYSYMBOL_PrimaryNoNewArray = 250,        /* PrimaryNoNewArray  */
  YYSYMBOL_ClassInstanceCreationExpression = 251, /* ClassInstanceCreationExpression  */
  YYSYMBOL_ArgumentList = 252,             /* ArgumentList  */
  YYSYMBOL_ArrayCreationExpression = 253,  /* ArrayCreationExpression  */
  YYSYMBOL_Dims_opt = 254,                 /* Dims_opt  */
  YYSYMBOL_DimExprs = 255,                 /* DimExprs  */
  YYSYMBOL_DimExpr = 256,                  /* DimExpr  */
  YYSYMBOL_Dims = 257,                     /* Dims  */
  YYSYMBOL_FieldAccess = 258,              /* FieldAccess  */
  YYSYMBOL_MethodInvocation = 259,         /* MethodInvocation  */
  YYSYMBOL_ArrayAccess = 260,              /* ArrayAccess  */
  YYSYMBOL_PostfixExpression = 261,        /* PostfixExpression  */
  YYSYMBOL_PostIncrementExpression = 262,  /* PostIncrementExpression  */
  YYSYMBOL_PostDecrementExpression = 263,  /* PostDecrementExpression  */
  YYSYMBOL_UnaryExpression = 264,          /* UnaryExpression  */
  YYSYMBOL_PreIncrementExpression = 265,   /* PreIncrementExpression  */
  YYSYMBOL_PreDecrementExpression = 266,   /* PreDecrementExpression  */
  YYSYMBOL_UnaryExpressionNotPlusMinus = 267, /* UnaryExpressionNotPlusMinus  */
  YYSYMBOL_CastExpression = 268,           /* CastExpression  */
  YYSYMBOL_MultiplicativeExpression = 269, /* MultiplicativeExpression  */
  YYSYMBOL_AdditiveExpression = 270,       /* AdditiveExpression  */
  YYSYMBOL_ShiftExpression = 271,          /* ShiftExpression  */
  YYSYMBOL_RelationalExpression = 272,     /* RelationalExpression  */
  YYSYMBOL_EqualityExpression = 273,       /* EqualityExpression  */
  YYSYMBOL_AndExpression = 274,            /* AndExpression  */
  YYSYMBOL_ExclusiveOrExpression = 275,    /* ExclusiveOrExpression  */
  YYSYMBOL_InclusiveOrExpression = 276,    /* InclusiveOrExpression  */
  YYSYMBOL_ConditionalAndExpression = 277, /* ConditionalAndExpression  */
  YYSYMBOL_ConditionalOrExpression = 278,  /* ConditionalOrExpression  */
  YYSYMBOL_ConditionalExpression = 279,    /* ConditionalExpression  */
  YYSYMBOL_AssignmentExpression = 280,     /* AssignmentExpression  */
  YYSYMBOL_Assignment = 281,               /* Assignment  */
  YYSYMBOL_LeftHandSide = 282,             /* LeftHandSide  */
  YYSYMBOL_AssignmentOperator = 283,       /* AssignmentOperator  */
  YYSYMBOL_Expression = 284                /* Expression  */
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
#define YYLAST   1415

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  134
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  151
/* YYNRULES -- Number of rules.  */
#define YYNRULES  317
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  508

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
       0,   116,   116,   123,   126,   129,   132,   135,   138,   143,
     146,   149,   154,   157,   162,   165,   170,   173,   178,   181,
     184,   187,   190,   195,   198,   203,   206,   211,   216,   221,
     226,   229,   233,   239,   242,   247,   252,   257,   267,   270,
     277,   282,   290,   293,   300,   305,   313,   316,   321,   326,
     329,   334,   339,   344,   347,   350,   355,   360,   368,   371,
     374,   377,   380,   383,   386,   389,   392,   395,   400,   411,
     414,   420,   423,   427,   430,   435,   440,   449,   454,   462,
     466,   469,   476,   481,   489,   492,   495,   500,   503,   508,
     517,   522,   530,   536,   544,   547,   552,   555,   560,   568,
     576,   586,   589,   596,   601,   607,   610,   617,   622,   630,
     635,   642,   647,   655,   660,   665,   672,   682,   689,   696,
     699,   706,   711,   717,   720,   727,   736,   739,   746,   751,
     759,   763,   766,   773,   778,   786,   789,   794,   799,   804,
     808,   811,   817,   820,   825,   830,   838,   842,   845,   852,
     857,   865,   868,   873,   880,   888,   891,   894,   897,   900,
     903,   908,   911,   914,   917,   920,   925,   928,   931,   934,
     937,   940,   943,   946,   949,   954,   959,   967,   975,   980,
     983,   986,   989,   992,   995,   998,  1003,  1011,  1020,  1029,
    1037,  1045,  1055,  1064,  1067,  1073,  1076,  1082,  1085,  1092,
    1097,  1104,  1111,  1116,  1124,  1131,  1133,  1138,  1145,  1152,
    1159,  1167,  1173,  1181,  1184,  1191,  1196,  1204,  1212,  1219,
    1222,  1227,  1230,  1233,  1236,  1239,  1242,  1245,  1250,  1259,
    1264,  1272,  1280,  1289,  1292,  1297,  1302,  1310,  1317,  1320,
    1325,  1328,  1333,  1338,  1343,  1350,  1356,  1364,  1367,  1370,
    1373,  1378,  1385,  1392,  1395,  1398,  1403,  1408,  1413,  1421,
    1429,  1432,  1437,  1442,  1447,  1453,  1459,  1467,  1470,  1476,
    1482,  1490,  1493,  1499,  1507,  1510,  1516,  1522,  1530,  1533,
    1539,  1545,  1551,  1557,  1565,  1568,  1574,  1582,  1585,  1593,
    1596,  1604,  1607,  1615,  1618,  1626,  1629,  1637,  1640,  1649,
    1652,  1657,  1665,  1668,  1671,  1676,  1679,  1682,  1685,  1688,
    1691,  1694,  1697,  1700,  1703,  1706,  1709,  1713
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
  "BlockStatements_opt", "BlockStatements", "BlockStatement",
  "LocalVariableDeclarationStatement", "LocalVariableDeclaration",
  "Statement", "StatementNoShortIf",
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

#define YYPACT_NINF (-446)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-305)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,     0,    60,  -446,    45,  -446,  -446,    79,  -446,  -446,
    -446,     0,  1226,    45,  -446,  -446,  -446,  -446,    33,    92,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  1243,  -446,   235,  -446,  -446,    28,  -446,  -446,
    -446,  -446,   -53,  -446,  -446,    37,    56,    55,    89,   100,
    -446,     0,    61,    75,     0,   127,  -446,  -446,  -446,    81,
      74,  -446,     0,  -446,  -446,     0,   106,  -446,  1344,  -446,
     129,   112,   477,  -446,  -446,  -446,  -446,  -446,   135,   730,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,   134,  -446,  -446,
     171,   156,  -446,  -446,  -446,  -446,  -446,   159,   -14,  -446,
    -446,  -446,     0,   167,  1344,   170,  1291,  -446,  -446,  -446,
    -446,   -56,  -446,  -446,   164,   -22,   164,    11,  -446,     1,
     -22,   165,   168,   169,  -446,   785,  -446,   174,   221,  -446,
    -446,  -446,  -446,  -446,   835,     0,   179,  -446,  -446,   195,
    -446,   181,   978,  -446,  -446,  -446,  -446,   203,   187,   835,
     190,   193,  -446,   203,  1114,  1114,   167,   197,   194,  -446,
    -446,   199,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  1114,
    1114,  1114,  -446,  -446,   195,   -45,  -446,   201,   785,  -446,
    -446,   202,  -446,  -446,  -446,  -446,  -446,   208,  -446,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,   200,   204,
      32,  -446,   111,    49,   906,    53,    78,    95,  -446,  -446,
    -446,  1240,   835,   215,   195,   211,   219,  -446,  -446,   223,
    -446,  -446,  -446,  -446,   978,   843,  1114,  1114,  1114,  1114,
     590,  -446,  -446,  -446,  -446,    53,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,    31,   104,    54,   -12,    13,   196,   198,
     205,   207,   -57,  -446,  -446,  -446,  -446,  -446,   224,  1179,
     225,   225,   226,  1114,  1114,   229,   253,   257,  -446,   296,
     276,  1114,   908,   262,    66,  -446,  -446,  -446,  -446,   269,
    1114,  1024,  -446,  -446,  -446,  -446,   285,  1114,  -446,  -446,
    -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  1114,   268,   -11,  -446,   267,  -446,   835,     0,
    -446,   279,   280,   275,  1264,   278,  -446,  -446,  -446,  -446,
    1114,  1114,  1114,  1114,  1114,  1114,  1114,  1114,  1114,   835,
    1114,  1114,  1114,  1114,  1114,  1114,  1114,  1114,  1114,  1114,
    1114,  1114,  -446,  -446,  -446,   286,  -446,   293,  1114,   290,
    -446,   290,  1114,   288,   295,  -446,  -446,  -446,   294,   325,
     -20,  -446,   302,   304,  -446,  -446,   315,   324,  -446,   316,
     323,   317,  -446,  -446,   326,   327,   785,  -446,  -446,  -446,
    -446,   328,   978,   320,   329,   330,  1068,   -54,  1244,  -446,
    -446,  -446,    31,    31,   104,   104,   104,   156,  -446,    54,
      54,    54,    54,   -12,   -12,    13,   196,   198,   205,   318,
     207,  1114,   122,   332,  1068,  -446,  -446,  -446,   333,   936,
     167,   835,   167,  -446,  -446,  1114,   908,  -446,  1114,  -446,
    1114,  -446,  1114,  1114,   331,  -446,  -446,  -446,  1114,   335,
    1244,  -446,  1114,   342,  -446,  -446,  -446,   341,   346,   348,
     344,  -446,   379,   398,  -446,  -446,  -446,  -446,  -446,   353,
    -446,   354,  -446,  -446,   355,   356,   357,  -446,  -446,  -446,
    -446,  -446,   122,  1179,  1114,  1114,   936,   908,   167,  -446,
    -446,   362,   366,   364,  -446,   293,   368,   369,   370,  -446,
    -446,  -446,  -446,  -446,   908,  1114,   936,   936,  -446,   376,
     415,  -446,   122,   936,   377,  -446,   936,  -446
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
      88,     0,    85,    86,     0,   101,    94,     0,    90,    92,
     101,     0,     0,     0,    78,   147,   115,    33,   101,    79,
      83,   114,    98,   113,   105,     0,     0,   100,   102,     0,
      89,     0,     0,    99,    30,    32,    31,   205,     0,     0,
       0,     0,   222,   205,     0,   195,     0,     0,     0,     5,
       8,    35,     9,    10,    11,     4,     6,     7,   175,     0,
       0,     0,   221,     3,     0,   302,   166,     0,   148,   149,
     151,     0,   152,   155,   167,   156,   168,     0,   157,   158,
     159,   160,   169,   170,   171,   173,   172,   174,   247,   219,
     224,   220,   225,   226,   227,     0,   182,   183,   180,   181,
     179,     0,   105,     0,     0,     0,   106,   107,   111,   110,
     104,    94,    91,    95,   140,     0,     0,     0,     0,     0,
     248,    93,    97,   224,   226,   260,   249,   250,   267,   253,
     254,   257,   263,   271,   274,   278,   284,   287,   289,   291,
     293,   295,   297,   299,   317,   300,    96,   206,     0,   193,
       0,    28,     0,     0,     0,     0,     0,     0,   196,   213,
       0,     0,     0,     0,   248,   225,   227,   258,   259,   154,
     123,     0,   146,   150,   153,   178,     0,     0,   251,   252,
     305,   309,   310,   306,   307,   314,   316,   315,   308,   311,
     312,   313,     0,     0,   119,   116,   109,   103,     0,     0,
     144,   142,   141,   233,   248,     0,   262,   261,   255,   256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   207,   200,   202,     0,   194,   199,     0,   233,
     235,   233,   123,     0,     0,   204,   209,   208,     0,     0,
     211,   215,   241,     0,   176,   223,     0,   124,   229,     0,
     240,     0,   301,   117,     0,     0,   147,   120,   108,   112,
     143,     0,     0,     0,     0,   234,     0,     0,   223,   268,
     269,   270,   272,   273,   275,   276,   277,     0,   283,   282,
     281,   280,   279,   285,   286,   288,   290,   292,   294,     0,
     296,   195,     0,     0,     0,   231,   236,   232,     0,     0,
       0,     0,     0,   212,   216,   123,     0,   242,     0,   245,
     123,   246,   123,   123,     0,   139,   145,   238,     0,     0,
       0,   265,     0,     0,   203,   237,   228,     0,     0,     0,
      35,   186,     0,   155,   162,   163,   164,   165,   210,     0,
     218,     0,   189,   230,     0,     0,     0,   118,   264,   239,
     266,   298,   197,   193,     0,     0,     0,     0,     0,   244,
     243,     0,     0,     0,   198,   201,     0,     0,     0,   177,
     187,   217,   121,   122,     0,   195,     0,     0,   191,     0,
       0,   190,   197,     0,     0,   188,     0,   192
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -446,  -446,  -446,  -446,   -60,  -142,  -446,  -446,  -446,   136,
     -50,  -129,   -26,  -446,    -1,   367,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,   455,  -446,  -446,   441,  -446,   440,
    -446,   -41,  -446,  -446,  -446,  -446,  -446,  -446,  -446,  -446,
     371,  -446,   -34,   301,   343,   270,  -215,  -446,   -31,   -69,
     393,   273,  -446,  -295,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -320,  -446,  -446,  -446,  -446,  -446,  -446,
     417,  -446,  -446,  -446,  -446,  -446,  -446,   -78,   124,  -446,
     310,  -446,  -254,   -27,  -227,  -408,  -446,  -446,  -446,  -446,
    -256,  -446,  -446,  -446,  -446,  -446,  -446,  -446,    29,  -395,
       2,  -446,  -446,  -445,  -446,   350,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,   141,  -446,  -446,  -446,  -123,  -446,  -446,
    -226,   246,  -221,   206,   321,  -108,   407,   -71,   -16,    21,
    -147,    87,   119,  -374,  -446,  -104,  -119,  -149,  -112,   172,
     173,   178,   182,   185,  -446,    69,   210,   192,  -446,  -446,
     416
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   172,   173,   174,    91,    92,    93,    94,    95,
      96,    64,    58,    97,   230,     8,     9,     3,    12,    13,
      31,    32,     4,     5,    14,    15,    16,    33,    34,    35,
      36,    37,    55,    66,    56,    67,    78,    80,   105,   106,
     107,   108,    69,   117,   118,   119,   231,   110,    70,   137,
     115,   215,   216,   217,   138,   219,   132,   112,   113,   128,
     305,   376,   377,   366,    38,    52,    53,    61,    71,    72,
      73,    74,    75,   232,   311,   381,   312,   176,   177,   178,
     179,   180,   181,   182,   452,   183,   184,   185,   454,   186,
     187,   188,   189,   455,   190,   456,   191,   457,   345,   267,
     483,   346,   484,   347,   192,   258,   193,   194,   195,   196,
     197,   359,   360,   361,   423,   198,   199,   233,   367,   201,
     384,   349,   350,   385,   202,   234,   204,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   211,   302,
     368
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    57,   200,   344,    63,   343,   218,   260,    90,   310,
      19,   453,    57,   378,   441,    57,   443,   203,    40,    68,
     262,   135,   374,   277,   278,   126,   -27,   485,   125,   358,
     131,    68,   418,   133,   329,   440,    76,   439,   104,    77,
    -214,   340,    18,   280,    90,   109,   281,     1,   111,   341,
      59,   143,    57,    59,   205,   200,   375,   485,    47,   213,
      10,    59,  -248,  -248,    59,   104,   470,    98,   453,   136,
     203,     6,   109,    18,   214,   111,   124,   123,   269,   316,
     317,   318,   319,   313,    45,    63,    11,    46,   453,   453,
     330,   331,   141,    20,   139,   453,   142,   140,   453,   261,
     499,    59,    21,    98,    40,   461,    22,   205,    48,   206,
     464,    23,   465,   466,   334,  -185,    24,   335,  -185,   332,
     333,  -185,    25,   415,   175,   417,   459,    49,   416,    26,
     416,    27,  -184,    98,    59,  -184,   200,    28,  -184,    51,
      29,    50,   321,   322,   149,    60,   207,   323,    59,   200,
      54,   203,   214,    18,   280,   152,   444,   320,    62,  -131,
     288,   289,   206,    65,   203,    17,    18,   436,    18,   274,
     274,   326,   327,   328,   389,   390,   391,   175,    41,    42,
     379,   399,   400,   401,   402,  -249,  -249,   397,   205,   157,
      79,   159,   160,     6,   162,   163,   164,   100,   165,   207,
     166,   205,  -250,  -250,   167,   114,  -303,   394,   395,   396,
     169,    98,   208,   324,   325,    99,   344,   344,   102,   343,
     392,   393,   403,   404,   314,   274,   274,   274,   274,   170,
     171,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
    -303,  -303,   116,   206,   209,   364,   344,   121,   214,   489,
     122,   125,   134,   200,    20,   129,   206,   144,   175,    63,
     145,   146,   212,    21,   135,   208,   221,    22,   203,   500,
     501,   220,    23,   223,   257,   259,   505,    24,   263,   507,
     207,   264,   271,    25,   270,   272,   282,   286,   284,   200,
      26,   468,    27,   207,   285,   287,   200,   209,    28,   304,
     307,    29,   308,   200,   203,   205,   309,    98,    59,   336,
     342,   203,   339,   337,   352,   355,   348,   210,   203,   338,
     274,   274,   274,   274,   274,   274,   274,   274,    98,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   356,
     274,   205,   458,   357,   460,   358,   208,   362,   205,   200,
     200,   365,   139,   200,   200,   205,   370,   373,   141,   208,
     206,   214,   380,   382,   203,   203,   383,   388,   203,   203,
     210,   200,   411,   200,   200,   175,   412,   419,   209,   200,
     200,   414,   421,   200,   420,   422,   203,   274,   203,   203,
     425,   209,   451,   426,   203,   203,   206,   207,   203,   462,
     491,   205,   205,   206,   427,   205,   205,   428,   429,   431,
     206,   430,   437,   435,   432,   433,   467,   442,   438,   477,
      98,   439,   446,   205,   445,   205,   205,   469,   472,   473,
     476,   205,   205,   207,   474,   205,   475,   274,  -161,   274,
     207,   274,   478,   479,   480,   481,   482,   207,   492,   364,
     490,   210,   493,   494,   495,   503,   206,   206,   496,   497,
     206,   206,   502,   208,   210,   398,   506,   498,    39,   451,
     462,   127,   175,    43,    44,   279,   490,   130,   206,   498,
     206,   206,   222,   120,   306,   303,   206,   206,   283,   101,
     206,   275,   275,   207,   207,   209,    20,   207,   207,   208,
     434,   424,   486,   265,   504,    21,   208,   351,   405,    22,
     406,   471,   372,   208,    23,   207,   407,   207,   207,    24,
     387,   408,     0,   207,   207,    25,   410,   207,     0,     0,
       0,   209,    26,     0,    27,     0,     0,     0,   209,     0,
      28,     0,     0,    29,     0,   209,     0,   275,   275,   275,
     275,     0,     0,     0,     0,     0,     0,     0,   256,   208,
     208,     0,  -132,   208,   208,     0,     0,     0,   210,     0,
     266,   268,     0,     0,     0,     0,     0,   276,   276,     0,
       0,   208,     0,   208,   208,   273,     0,     0,     0,   208,
     208,   209,   209,   208,     0,   209,   209,     0,     0,     0,
       0,     0,     0,     0,   210,     0,     0,     0,     0,     0,
       0,   210,     0,   209,     0,   209,   209,     0,   210,     0,
       0,   209,   209,     0,     0,   209,     0,     0,     0,     0,
       0,     0,     0,   276,   276,   276,   276,     0,     0,     0,
     256,   315,   275,   275,   275,   275,   275,   275,   275,   275,
       0,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,     0,   275,     0,   210,   210,     0,     0,   210,   210,
       0,     0,     0,     0,     0,     0,     0,    18,   280,   353,
     354,   320,     0,     0,     0,  -302,   210,   363,   210,   210,
       0,     0,     0,     0,   210,   210,     0,   369,   210,     0,
       0,     0,     0,   371,     0,     0,     0,     0,     0,   275,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,     0,     0,     0,     0,     0,     0,     0,   276,   276,
     276,   276,   276,   276,   276,   276,   369,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,     0,   276,    20,
       0,     0,     0,     0,     0,     0,   409,     0,    21,   275,
       0,   275,    22,   275,   413,     0,     0,    23,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,    25,     0,
       0,     0,     0,     0,     0,    26,     0,   103,     0,     0,
       0,     0,     0,    28,     0,   276,    29,     0,   256,     0,
       0,     0,   369,     0,     0,   147,   148,   149,     0,     0,
       0,   150,     0,   151,    81,   -80,     0,     0,   152,   153,
      82,     0,     0,   154,    83,     0,     0,   268,     0,     0,
     413,     0,   155,     0,     0,     0,    84,    85,   156,    86,
       0,     0,     0,     0,   463,   276,    88,   276,     0,   276,
      89,     0,   157,   158,   159,   160,   161,   162,   163,   164,
       0,   165,     0,   166,    81,   149,     0,   167,     0,   125,
      82,   168,    81,   169,    83,     0,   152,     0,    82,     0,
       0,     0,    83,     0,     0,     0,    84,    85,     0,    86,
     487,   488,   170,   171,    84,    85,    88,    86,     0,     0,
      89,     0,     0,     0,    88,     0,     6,     0,    89,     0,
     157,   268,   159,   160,     6,   162,   163,   164,     0,   165,
       0,   166,     0,     0,     0,   167,     0,     0,   147,   148,
     149,   225,     0,     0,   150,     0,   151,     0,     0,   226,
     227,   152,   153,     0,     0,     0,   154,     0,     0,     0,
     170,   171,   228,   229,     0,   155,   147,   447,   149,     0,
       0,   156,   448,     0,   151,     0,     0,     0,     0,   152,
     153,     0,     0,     0,   154,   157,   158,   159,   160,   161,
     162,   163,   164,   155,   165,     0,   166,     0,     0,   156,
     167,     0,   125,     0,   168,     0,   169,     0,     0,     0,
     149,  -304,     0,   157,   449,   159,   160,   450,   162,   163,
     164,   152,   165,     0,   166,   170,   171,     0,   167,     0,
     125,     0,   168,     0,   169,     0,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,     0,     0,     0,
       0,     0,     0,   170,   171,   157,   149,   159,   160,     6,
     162,   163,   164,     0,   165,     0,   166,   152,     0,     0,
     167,     0,   224,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,   226,   227,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,   171,   228,   229,     0,
     149,   157,     0,   159,   160,     6,   162,   163,   164,     0,
     165,   152,   166,     0,     0,     0,   167,     0,     0,     0,
       0,     0,   225,     0,     0,     0,   146,     0,     0,     0,
     226,   227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   228,   229,   157,   149,   159,   160,     6,
     162,   163,   164,     0,   165,     0,   166,   152,     0,     0,
     167,     0,     0,     0,     0,     0,   225,     0,     0,     0,
     437,     0,     0,     0,   226,   227,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,   171,   228,   229,     0,
       0,   157,     0,   159,   160,     6,   162,   163,   164,     0,
     165,     0,   166,     0,     0,     0,   167,     0,     0,     0,
       0,   149,   225,     0,     0,     0,     0,     0,    81,     0,
     226,   227,   152,     0,    82,     0,     0,     0,    83,     0,
       0,   170,   171,   228,   229,     0,   -42,     0,     0,     0,
      84,    85,     0,    86,     0,     0,     0,     0,     0,     0,
      88,     0,     0,   -43,    89,    20,   157,     0,   159,   160,
       6,   162,   163,   164,    21,   165,     0,   166,    22,     0,
       0,   167,    20,    23,     0,     0,   149,   169,    24,     0,
       0,    21,     0,     0,    25,    22,     0,   152,     0,     0,
      23,    26,     0,    27,     0,    24,   170,   171,     0,    28,
       0,    25,    29,     0,     0,     0,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,    28,     0,     0,    29,
      20,   157,    30,   159,   160,     6,   162,   163,   164,    21,
     165,     0,   166,    22,     0,     0,   167,     0,    23,    30,
       0,     0,   225,    24,     0,   290,     0,     0,     0,    25,
     226,   227,     0,     0,     0,     0,    26,     0,   103,     0,
       0,    18,   280,     0,    28,   386,     0,    29,     0,  -302,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,     0,     0,    81,     0,     0,   -81,     0,     0,    82,
       0,     0,     0,    83,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,    84,    85,     0,    86,     0,
       0,     0,    87,     0,     0,    88,     0,     0,     0,    89,
       0,     0,     0,     0,     0,     6
};

static const yytype_int16 yycheck[] =
{
       1,    51,   125,   259,    54,   259,   135,   149,    68,   224,
      11,   419,    62,   308,   388,    65,   411,   125,    71,    60,
     149,    43,    33,   170,   171,   103,    71,   472,    84,    49,
      86,    72,   352,   111,    46,    89,    62,    91,    79,    65,
      60,    98,    87,    88,   104,    79,    91,    27,    79,   106,
      51,   120,   102,    54,   125,   178,    67,   502,   111,   128,
       0,    62,   107,   108,    65,   106,   440,    68,   476,    91,
     178,    71,   106,    87,   134,   106,   102,    91,   156,   226,
     227,   228,   229,   225,    56,   135,    41,    59,   496,   497,
     102,   103,    91,    19,    83,   503,    95,    86,   506,   149,
     495,   102,    28,   104,    71,   425,    32,   178,    71,   125,
     430,    37,   432,   433,   101,    83,    42,   104,    86,   131,
     132,    89,    48,   349,   125,   351,   421,    71,   349,    55,
     351,    57,    83,   134,   135,    86,   259,    63,    89,    50,
      66,    86,   111,   112,    22,    84,   125,   116,   149,   272,
      50,   259,   212,    87,    88,    33,   412,    91,    83,    85,
     107,   108,   178,    36,   272,    86,    87,   382,    87,   170,
     171,   117,   118,   119,   321,   322,   323,   178,    86,    87,
     309,   330,   331,   332,   333,   107,   108,   329,   259,    67,
      84,    69,    70,    71,    72,    73,    74,    85,    76,   178,
      78,   272,   107,   108,    82,    71,    95,   326,   327,   328,
      88,   212,   125,   109,   110,    86,   472,   473,    83,   473,
     324,   325,   334,   335,   225,   226,   227,   228,   229,   107,
     108,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,    71,   259,   125,   272,   502,    91,   308,   476,
      91,    84,    88,   376,    19,    85,   272,    92,   259,   309,
      92,    92,    88,    28,    43,   178,    71,    32,   376,   496,
     497,    92,    37,    92,    71,    88,   503,    42,    88,   506,
     259,    88,    88,    48,    87,    86,    85,    87,    86,   412,
      55,   438,    57,   272,    86,    91,   419,   178,    63,    84,
      89,    66,    83,   426,   412,   376,    83,   308,   309,   113,
      86,   419,   105,   115,    88,    86,    91,   125,   426,   114,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,    86,
     341,   412,   420,    86,   422,    49,   259,    71,   419,   472,
     473,    89,    83,   476,   477,   426,    71,    89,    91,   272,
     376,   421,    83,    83,   472,   473,    91,    89,   476,   477,
     178,   494,    86,   496,   497,   376,    83,    89,   259,   502,
     503,    91,    88,   506,    89,    60,   494,   388,   496,   497,
      88,   272,   419,    89,   502,   503,   412,   376,   506,   426,
     478,   472,   473,   419,    89,   476,   477,    83,    92,    92,
     426,    88,    92,    85,    88,    88,    85,    99,    89,    40,
     421,    91,    89,   494,    92,   496,   497,    92,    86,    88,
      86,   502,   503,   412,    88,   506,    88,   438,    40,   440,
     419,   442,    89,    89,    89,    89,    89,   426,    86,   476,
     477,   259,    86,    89,    86,    40,   472,   473,    89,    89,
     476,   477,    86,   376,   272,   329,    89,   494,    13,   496,
     497,   104,   473,    32,    34,   174,   503,   106,   494,   506,
     496,   497,   139,    90,   214,   212,   502,   503,   178,    72,
     506,   170,   171,   472,   473,   376,    19,   476,   477,   412,
     376,   360,   473,   153,   502,    28,   419,   261,   336,    32,
     337,   442,   302,   426,    37,   494,   338,   496,   497,    42,
     314,   339,    -1,   502,   503,    48,   341,   506,    -1,    -1,
      -1,   412,    55,    -1,    57,    -1,    -1,    -1,   419,    -1,
      63,    -1,    -1,    66,    -1,   426,    -1,   226,   227,   228,
     229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   472,
     473,    -1,    85,   476,   477,    -1,    -1,    -1,   376,    -1,
     154,   155,    -1,    -1,    -1,    -1,    -1,   170,   171,    -1,
      -1,   494,    -1,   496,   497,   169,    -1,    -1,    -1,   502,
     503,   472,   473,   506,    -1,   476,   477,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   412,    -1,    -1,    -1,    -1,    -1,
      -1,   419,    -1,   494,    -1,   496,   497,    -1,   426,    -1,
      -1,   502,   503,    -1,    -1,   506,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,   227,   228,   229,    -1,    -1,    -1,
     224,   225,   321,   322,   323,   324,   325,   326,   327,   328,
      -1,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,    -1,   341,    -1,   472,   473,    -1,    -1,   476,   477,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,   263,
     264,    91,    -1,    -1,    -1,    95,   494,   271,   496,   497,
      -1,    -1,    -1,    -1,   502,   503,    -1,   281,   506,    -1,
      -1,    -1,    -1,   287,    -1,    -1,    -1,    -1,    -1,   388,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   321,   322,
     323,   324,   325,   326,   327,   328,   320,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,    -1,   341,    19,
      -1,    -1,    -1,    -1,    -1,    -1,   340,    -1,    28,   438,
      -1,   440,    32,   442,   348,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    63,    -1,   388,    66,    -1,   382,    -1,
      -1,    -1,   386,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    26,    -1,    28,    29,    85,    -1,    -1,    33,    34,
      35,    -1,    -1,    38,    39,    -1,    -1,   411,    -1,    -1,
     414,    -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,   428,   438,    61,   440,    -1,   442,
      65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    -1,    78,    29,    22,    -1,    82,    -1,    84,
      35,    86,    29,    88,    39,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    51,    52,    -1,    54,
     474,   475,   107,   108,    51,    52,    61,    54,    -1,    -1,
      65,    -1,    -1,    -1,    61,    -1,    71,    -1,    65,    -1,
      67,   495,    69,    70,    71,    72,    73,    74,    -1,    76,
      -1,    78,    -1,    -1,    -1,    82,    -1,    -1,    20,    21,
      22,    88,    -1,    -1,    26,    -1,    28,    -1,    -1,    96,
      97,    33,    34,    -1,    -1,    -1,    38,    -1,    -1,    -1,
     107,   108,   109,   110,    -1,    47,    20,    21,    22,    -1,
      -1,    53,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    -1,    -1,    -1,    38,    67,    68,    69,    70,    71,
      72,    73,    74,    47,    76,    -1,    78,    -1,    -1,    53,
      82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,    -1,
      22,    95,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    33,    76,    -1,    78,   107,   108,    -1,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    67,    22,    69,    70,    71,
      72,    73,    74,    -1,    76,    -1,    78,    33,    -1,    -1,
      82,    -1,    84,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
      22,    67,    -1,    69,    70,    71,    72,    73,    74,    -1,
      76,    33,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,   108,   109,   110,    67,    22,    69,    70,    71,
      72,    73,    74,    -1,    76,    -1,    78,    33,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,   108,   109,   110,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    -1,
      76,    -1,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    22,    88,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      96,    97,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,   107,   108,   109,   110,    -1,     0,    -1,    -1,    -1,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,     0,    65,    19,    67,    -1,    69,    70,
      71,    72,    73,    74,    28,    76,    -1,    78,    32,    -1,
      -1,    82,    19,    37,    -1,    -1,    22,    88,    42,    -1,
      -1,    28,    -1,    -1,    48,    32,    -1,    33,    -1,    -1,
      37,    55,    -1,    57,    -1,    42,   107,   108,    -1,    63,
      -1,    48,    66,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,
      19,    67,    86,    69,    70,    71,    72,    73,    74,    28,
      76,    -1,    78,    32,    -1,    -1,    82,    -1,    37,    86,
      -1,    -1,    88,    42,    -1,    95,    -1,    -1,    -1,    48,
      96,    97,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,
      -1,    87,    88,    -1,    63,    91,    -1,    66,    -1,    95,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,    -1,    -1,    29,    -1,    -1,    85,    -1,    -1,    35,
      -1,    -1,    -1,    39,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,    51,    52,    -1,    54,    -1,
      -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    71
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
     184,    91,    91,    91,   146,    84,   211,   149,   193,    85,
     174,    86,   190,   211,    88,    43,    91,   183,   188,    83,
      86,    91,    95,   183,    92,    92,    92,    20,    21,    22,
      26,    28,    33,    34,    38,    47,    53,    67,    68,    69,
      70,    71,    72,    73,    74,    76,    78,    82,    86,    88,
     107,   108,   136,   137,   138,   148,   211,   212,   213,   214,
     215,   216,   217,   219,   220,   221,   223,   224,   225,   226,
     228,   230,   238,   240,   241,   242,   243,   244,   249,   250,
     251,   253,   258,   259,   260,   261,   262,   263,   265,   266,
     281,   282,    88,   183,   138,   185,   186,   187,   145,   189,
      92,    71,   178,    92,    84,    88,    96,    97,   109,   110,
     148,   180,   207,   251,   259,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   284,    71,   239,    88,
     139,   144,   145,    88,    88,   239,   284,   233,   284,   211,
      87,    88,    86,   284,   148,   258,   260,   264,   264,   177,
      88,    91,    85,   214,    86,    86,    87,    91,   107,   108,
      95,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   283,   185,    84,   194,   179,    89,    83,    83,
     180,   208,   210,   139,   148,   284,   264,   264,   264,   264,
      91,   111,   112,   116,   109,   110,   117,   118,   119,    46,
     102,   103,   131,   132,   101,   104,   113,   115,   114,   105,
      98,   106,    86,   216,   224,   232,   235,   237,    91,   255,
     256,   255,    88,   284,   284,    86,    86,    86,    49,   245,
     246,   247,    71,   284,   217,    89,   197,   252,   284,   284,
      71,   284,   280,    89,    33,    67,   195,   196,   187,   145,
      83,   209,    83,    91,   254,   257,    91,   257,    89,   264,
     264,   264,   269,   269,   270,   270,   270,   139,   143,   271,
     271,   271,   271,   272,   272,   273,   274,   275,   276,   284,
     277,    86,    83,   284,    91,   254,   256,   254,   197,    89,
      89,    88,    60,   248,   247,    88,    89,    89,    83,    92,
      88,    92,    88,    88,   212,    85,   180,    92,    89,    91,
      89,   267,    99,   233,   224,    92,    89,    21,    26,    68,
      71,   217,   218,   219,   222,   227,   229,   231,   211,   187,
     211,   197,   217,   284,   197,   197,   197,    85,   264,    92,
     267,   279,    86,    88,    88,    88,    86,    40,    89,    89,
      89,    89,    89,   234,   236,   237,   232,   284,   284,   218,
     217,   211,    86,    86,    89,    86,    89,    89,   217,   233,
     218,   218,    86,    40,   234,   218,    89,   218
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
     208,   208,   209,   209,   210,   210,   211,   212,   212,   213,
     213,   214,   214,   215,   216,   217,   217,   217,   217,   217,
     217,   218,   218,   218,   218,   218,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   220,   221,   222,   223,   224,
     224,   224,   224,   224,   224,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   232,   233,   233,   234,   234,   235,
     235,   236,   237,   237,   238,   239,   239,   240,   241,   242,
     243,   244,   244,   245,   245,   246,   246,   247,   248,   249,
     249,   250,   250,   250,   250,   250,   250,   250,   251,   252,
     252,   253,   253,   254,   254,   255,   255,   256,   257,   257,
     258,   258,   259,   259,   259,   260,   260,   261,   261,   261,
     261,   262,   263,   264,   264,   264,   264,   264,   265,   266,
     267,   267,   267,   267,   268,   268,   268,   269,   269,   269,
     269,   270,   270,   270,   271,   271,   271,   271,   272,   272,
     272,   272,   272,   272,   273,   273,   273,   274,   274,   275,
     275,   276,   276,   277,   277,   278,   278,   279,   279,   280,
     280,   281,   282,   282,   282,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   284
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
       4,     0,     1,     4,     3,     0,     1,     1,     3,     2,
       2,     1,     3,     1,     1,     2,     4,     4,     4,     0,
       1,     5,     5,     0,     1,     5,     0,     1,     2,     3,
       3,     0,     1,     1,     2,     1,     1,     1,     2,     4,
       0,     1,     0,     1,     1,     3,     3,     0,     1,     1,
       2,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     7,     5,
       5,     9,     9,     0,     1,     0,     1,     0,     1,     1,
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
#line 116 "src/parser.y"
                      {
    printf("Parsing was successful !\n");
    (yyval.exp) = (yyvsp[0].exp);
}
#line 2000 "bin/parser.tab.c"
    break;

  case 3: /* Literal: IntegerLiteral  */
#line 123 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2008 "bin/parser.tab.c"
    break;

  case 4: /* Literal: FloatingPointLiteral  */
#line 126 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2016 "bin/parser.tab.c"
    break;

  case 5: /* Literal: BooleanLiteral  */
#line 129 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2024 "bin/parser.tab.c"
    break;

  case 6: /* Literal: CharacterLiteral  */
#line 132 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2032 "bin/parser.tab.c"
    break;

  case 7: /* Literal: StringLiteral  */
#line 135 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2040 "bin/parser.tab.c"
    break;

  case 8: /* Literal: NullLiteral  */
#line 138 "src/parser.y"
                 {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2048 "bin/parser.tab.c"
    break;

  case 9: /* IntegerLiteral: DecimalIntegerLiteral  */
#line 143 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2056 "bin/parser.tab.c"
    break;

  case 10: /* IntegerLiteral: HexIntegerLiteral  */
#line 146 "src/parser.y"
                        {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2064 "bin/parser.tab.c"
    break;

  case 11: /* IntegerLiteral: OctalIntegerLiteral  */
#line 149 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2072 "bin/parser.tab.c"
    break;

  case 12: /* Type: PrimitiveType  */
#line 154 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2080 "bin/parser.tab.c"
    break;

  case 13: /* Type: ReferenceType  */
#line 157 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2088 "bin/parser.tab.c"
    break;

  case 14: /* PrimitiveType: NumericType  */
#line 162 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2096 "bin/parser.tab.c"
    break;

  case 15: /* PrimitiveType: Boolean  */
#line 165 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2104 "bin/parser.tab.c"
    break;

  case 16: /* NumericType: IntegralType  */
#line 170 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2112 "bin/parser.tab.c"
    break;

  case 17: /* NumericType: FloatingPointType  */
#line 173 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2120 "bin/parser.tab.c"
    break;

  case 18: /* IntegralType: Byte  */
#line 178 "src/parser.y"
         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2128 "bin/parser.tab.c"
    break;

  case 19: /* IntegralType: Short  */
#line 181 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2136 "bin/parser.tab.c"
    break;

  case 20: /* IntegralType: Int  */
#line 184 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2144 "bin/parser.tab.c"
    break;

  case 21: /* IntegralType: Long  */
#line 187 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2152 "bin/parser.tab.c"
    break;

  case 22: /* IntegralType: Char  */
#line 190 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2160 "bin/parser.tab.c"
    break;

  case 23: /* FloatingPointType: Float  */
#line 195 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2168 "bin/parser.tab.c"
    break;

  case 24: /* FloatingPointType: Double  */
#line 198 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2176 "bin/parser.tab.c"
    break;

  case 25: /* ReferenceType: ClassOrInterfaceType  */
#line 203 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2184 "bin/parser.tab.c"
    break;

  case 26: /* ReferenceType: ArrayType  */
#line 206 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2192 "bin/parser.tab.c"
    break;

  case 27: /* ClassOrInterfaceType: Name  */
#line 211 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2200 "bin/parser.tab.c"
    break;

  case 28: /* ClassType: ClassOrInterfaceType  */
#line 216 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2208 "bin/parser.tab.c"
    break;

  case 29: /* InterfaceType: ClassOrInterfaceType  */
#line 221 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2216 "bin/parser.tab.c"
    break;

  case 30: /* ArrayType: PrimitiveType LeftSquareBracket RightSquareBracket  */
#line 226 "src/parser.y"
                                                       {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
    }
#line 2224 "bin/parser.tab.c"
    break;

  case 31: /* ArrayType: Name LeftSquareBracket RightSquareBracket  */
#line 229 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));

    }
#line 2233 "bin/parser.tab.c"
    break;

  case 32: /* ArrayType: ArrayType LeftSquareBracket RightSquareBracket  */
#line 233 "src/parser.y"
                                                     {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));

    }
#line 2242 "bin/parser.tab.c"
    break;

  case 33: /* Name: SimpleName  */
#line 239 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2250 "bin/parser.tab.c"
    break;

  case 34: /* Name: QualifiedName  */
#line 242 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2258 "bin/parser.tab.c"
    break;

  case 35: /* SimpleName: Identifier  */
#line 247 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2266 "bin/parser.tab.c"
    break;

  case 36: /* QualifiedName: Name Dot Identifier  */
#line 252 "src/parser.y"
                        {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,concatenate_string((yyvsp[-1].data),(yyvsp[0].data))));
    }
#line 2274 "bin/parser.tab.c"
    break;

  case 37: /* CompilationUnit: PackageDeclaration_opt ImportDeclarations_opt TypeDeclarations_opt  */
#line 257 "src/parser.y"
                                                                       {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CompilationUnit", memArr, 3, 1);
        root = (yyval.exp);
    }
#line 2287 "bin/parser.tab.c"
    break;

  case 38: /* ImportDeclarations_opt: %empty  */
#line 267 "src/parser.y"
    { 
        (yyval.exp) = NULL; 
    }
#line 2295 "bin/parser.tab.c"
    break;

  case 39: /* ImportDeclarations_opt: ImportDeclarations  */
#line 270 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Imports", memArr, 1, 1);
    }
#line 2305 "bin/parser.tab.c"
    break;

  case 40: /* ImportDeclarations: ImportDeclaration  */
#line 277 "src/parser.y"
                      {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2315 "bin/parser.tab.c"
    break;

  case 41: /* ImportDeclarations: ImportDeclarations ImportDeclaration  */
#line 282 "src/parser.y"
                                           {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateImports", memArr, 2, 0);
    }
#line 2326 "bin/parser.tab.c"
    break;

  case 42: /* TypeDeclarations_opt: %empty  */
#line 290 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2334 "bin/parser.tab.c"
    break;

  case 43: /* TypeDeclarations_opt: TypeDeclarations  */
#line 293 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Declarations", memArr, 1, 1);
    }
#line 2344 "bin/parser.tab.c"
    break;

  case 44: /* TypeDeclarations: TypeDeclaration  */
#line 300 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2354 "bin/parser.tab.c"
    break;

  case 45: /* TypeDeclarations: TypeDeclarations TypeDeclaration  */
#line 305 "src/parser.y"
                                       {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
    }
#line 2365 "bin/parser.tab.c"
    break;

  case 46: /* PackageDeclaration_opt: %empty  */
#line 313 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2373 "bin/parser.tab.c"
    break;

  case 47: /* PackageDeclaration_opt: PackageDeclaration  */
#line 316 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2381 "bin/parser.tab.c"
    break;

  case 48: /* PackageDeclaration: Package Name Semicolon  */
#line 321 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),concatenate_string(" ",(yyvsp[-1].exp)->data)));
    }
#line 2389 "bin/parser.tab.c"
    break;

  case 49: /* ImportDeclaration: SingleTypeImportDeclaration  */
#line 326 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2397 "bin/parser.tab.c"
    break;

  case 50: /* ImportDeclaration: TypeImportOnDemandDeclaration  */
#line 329 "src/parser.y"
                                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2405 "bin/parser.tab.c"
    break;

  case 51: /* SingleTypeImportDeclaration: Import Name Semicolon  */
#line 334 "src/parser.y"
                          {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data), concatenate_string(" ",(yyvsp[-1].exp)->data)));
    }
#line 2413 "bin/parser.tab.c"
    break;

  case 52: /* TypeImportOnDemandDeclaration: Import Name Dot Product Semicolon  */
#line 339 "src/parser.y"
                                      {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-4].data), concatenate_string(" ",concatenate_string((yyvsp[-3].exp)->data,".*"))));
    }
#line 2421 "bin/parser.tab.c"
    break;

  case 53: /* TypeDeclaration: ClassDeclaration  */
#line 344 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2429 "bin/parser.tab.c"
    break;

  case 54: /* TypeDeclaration: InterfaceDeclaration  */
#line 347 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2437 "bin/parser.tab.c"
    break;

  case 55: /* TypeDeclaration: Semicolon  */
#line 350 "src/parser.y"
                {
        (yyval.exp) = NULL;
    }
#line 2445 "bin/parser.tab.c"
    break;

  case 56: /* Modifiers: Modifier  */
#line 355 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2455 "bin/parser.tab.c"
    break;

  case 57: /* Modifiers: Modifiers Modifier  */
#line 360 "src/parser.y"
                         {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifier", memArr, 2, 0);
    }
#line 2466 "bin/parser.tab.c"
    break;

  case 58: /* Modifier: Public  */
#line 368 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2474 "bin/parser.tab.c"
    break;

  case 59: /* Modifier: Protected  */
#line 371 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2482 "bin/parser.tab.c"
    break;

  case 60: /* Modifier: Private  */
#line 374 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2490 "bin/parser.tab.c"
    break;

  case 61: /* Modifier: Static  */
#line 377 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2498 "bin/parser.tab.c"
    break;

  case 62: /* Modifier: Abstract  */
#line 380 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2506 "bin/parser.tab.c"
    break;

  case 63: /* Modifier: Final  */
#line 383 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2514 "bin/parser.tab.c"
    break;

  case 64: /* Modifier: Native  */
#line 386 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2522 "bin/parser.tab.c"
    break;

  case 65: /* Modifier: Synchronized  */
#line 389 "src/parser.y"
                   {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2530 "bin/parser.tab.c"
    break;

  case 66: /* Modifier: Transient  */
#line 392 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2538 "bin/parser.tab.c"
    break;

  case 67: /* Modifier: Volatile  */
#line 395 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2546 "bin/parser.tab.c"
    break;

  case 68: /* ClassDeclaration: Modifiers_opt Class Identifier ClassExtend_opt Interfaces_opt ClassBody  */
#line 400 "src/parser.y"
                                                                            {
        struct node * memArr[6];
        memArr[0] = (yyvsp[-5].exp);
        memArr[1] = makeleaf((yyvsp[-4].data));
        memArr[2] = makeleaf((yyvsp[-3].data));
        memArr[3] = (yyvsp[-2].exp);
        memArr[4] = (yyvsp[-1].exp);
        memArr[5] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ClassDeclaration", memArr, 6, 1);
    }
#line 2561 "bin/parser.tab.c"
    break;

  case 69: /* Modifiers_opt: %empty  */
#line 411 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 2569 "bin/parser.tab.c"
    break;

  case 70: /* Modifiers_opt: Modifiers  */
#line 414 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifiers", memArr, 1, 1);
    }
#line 2579 "bin/parser.tab.c"
    break;

  case 71: /* ClassExtend_opt: %empty  */
#line 420 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2587 "bin/parser.tab.c"
    break;

  case 72: /* ClassExtend_opt: ClassExtend  */
#line 423 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2595 "bin/parser.tab.c"
    break;

  case 73: /* Interfaces_opt: %empty  */
#line 427 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2603 "bin/parser.tab.c"
    break;

  case 74: /* Interfaces_opt: Interfaces  */
#line 430 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2611 "bin/parser.tab.c"
    break;

  case 75: /* ClassExtend: Extends ClassType  */
#line 435 "src/parser.y"
                      {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-1].data), concatenate_string(" ",(yyvsp[0].exp)->data)));
    }
#line 2619 "bin/parser.tab.c"
    break;

  case 76: /* Interfaces: Implements InterfaceTypeList  */
#line 440 "src/parser.y"
                                 {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 1);

    }
#line 2631 "bin/parser.tab.c"
    break;

  case 77: /* InterfaceTypeList: InterfaceType  */
#line 449 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2641 "bin/parser.tab.c"
    break;

  case 78: /* InterfaceTypeList: InterfaceTypeList Comma InterfaceType  */
#line 454 "src/parser.y"
                                            {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("InterfaceList", memArr, 2, 0);
    }
#line 2652 "bin/parser.tab.c"
    break;

  case 79: /* ClassBody: LeftCurlyBrace ClassBodyDeclarations_opt RightCurlyBrace  */
#line 462 "src/parser.y"
                                                             {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 2660 "bin/parser.tab.c"
    break;

  case 80: /* ClassBodyDeclarations_opt: %empty  */
#line 466 "src/parser.y"
                            { 
        (yyval.exp) = NULL ;
    }
#line 2668 "bin/parser.tab.c"
    break;

  case 81: /* ClassBodyDeclarations_opt: ClassBodyDeclarations  */
#line 469 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ClassBody", memArr, 1, 1);
    }
#line 2678 "bin/parser.tab.c"
    break;

  case 82: /* ClassBodyDeclarations: ClassBodyDeclaration  */
#line 476 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ClassBody", memArr, 1, 0);
    }
#line 2688 "bin/parser.tab.c"
    break;

  case 83: /* ClassBodyDeclarations: ClassBodyDeclarations ClassBodyDeclaration  */
#line 481 "src/parser.y"
                                                 {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
    }
#line 2699 "bin/parser.tab.c"
    break;

  case 84: /* ClassBodyDeclaration: ClassMemberDeclaration  */
#line 489 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2707 "bin/parser.tab.c"
    break;

  case 85: /* ClassBodyDeclaration: StaticInitializer  */
#line 492 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2715 "bin/parser.tab.c"
    break;

  case 86: /* ClassBodyDeclaration: ConstructorDeclaration  */
#line 495 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2723 "bin/parser.tab.c"
    break;

  case 87: /* ClassMemberDeclaration: FieldDeclaration  */
#line 500 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2731 "bin/parser.tab.c"
    break;

  case 88: /* ClassMemberDeclaration: MethodDeclaration  */
#line 503 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2739 "bin/parser.tab.c"
    break;

  case 89: /* FieldDeclaration: Modifiers_opt Type VariableDeclarators Semicolon  */
#line 508 "src/parser.y"
                                                     {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("FieldDeclaration", memArr, 3, 0);
    }
#line 2751 "bin/parser.tab.c"
    break;

  case 90: /* VariableDeclarators: VariableDeclarator  */
#line 517 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2761 "bin/parser.tab.c"
    break;

  case 91: /* VariableDeclarators: VariableDeclarators Comma VariableDeclarator  */
#line 522 "src/parser.y"
                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 2, 0);
    }
#line 2772 "bin/parser.tab.c"
    break;

  case 92: /* VariableDeclarator: VariableDeclaratorId  */
#line 530 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 1);

    }
#line 2783 "bin/parser.tab.c"
    break;

  case 93: /* VariableDeclarator: VariableDeclaratorId EqualTo VariableInitializer  */
#line 536 "src/parser.y"
                                                       {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-2].exp), concatenate_string(" ", concatenate_string("= ",(yyvsp[0].exp)->data))), memArr, 2, 1);
    }
#line 2794 "bin/parser.tab.c"
    break;

  case 94: /* VariableDeclaratorId: Identifier  */
#line 544 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2802 "bin/parser.tab.c"
    break;

  case 95: /* VariableDeclaratorId: VariableDeclaratorId LeftSquareBracket RightSquareBracket  */
#line 547 "src/parser.y"
                                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
    }
#line 2810 "bin/parser.tab.c"
    break;

  case 96: /* VariableInitializer: Expression  */
#line 552 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2818 "bin/parser.tab.c"
    break;

  case 97: /* VariableInitializer: ArrayInitializer  */
#line 555 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2826 "bin/parser.tab.c"
    break;

  case 98: /* MethodDeclaration: MethodHeader MethodBody  */
#line 560 "src/parser.y"
                            {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr,2, 1);
    }
#line 2837 "bin/parser.tab.c"
    break;

  case 99: /* MethodHeader: Modifiers_opt Type MethodDeclarator Throws_opt  */
#line 568 "src/parser.y"
                                                   {
        struct node * memArr[4];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 4, 0);
    }
#line 2850 "bin/parser.tab.c"
    break;

  case 100: /* MethodHeader: Modifiers_opt Void MethodDeclarator Throws_opt  */
#line 576 "src/parser.y"
                                                     {
        struct node * memArr[4];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = makeleaf((yyvsp[-2].data));
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 4, 0);
    }
#line 2863 "bin/parser.tab.c"
    break;

  case 101: /* Throws_opt: %empty  */
#line 586 "src/parser.y"
    { 
        (yyval.exp) = NULL;
    }
#line 2871 "bin/parser.tab.c"
    break;

  case 102: /* Throws_opt: Throws  */
#line 589 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Throws", memArr, 1, 1);
    }
#line 2881 "bin/parser.tab.c"
    break;

  case 103: /* MethodDeclarator: Identifier LeftParanthesis FormalParameterList_opt RightParanthesis  */
#line 596 "src/parser.y"
                                                                        {
        struct node * memArr[1];
        memArr[0]  = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].data), memArr,1, 0);
    }
#line 2891 "bin/parser.tab.c"
    break;

  case 104: /* MethodDeclarator: MethodDeclarator LeftSquareBracket RightSquareBracket  */
#line 601 "src/parser.y"
                                                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-2].exp)->data,"[]"), memArr, 1, 0);
    }
#line 2901 "bin/parser.tab.c"
    break;

  case 105: /* FormalParameterList_opt: %empty  */
#line 607 "src/parser.y"
                          {
        (yyval.exp) = NULL;
    }
#line 2909 "bin/parser.tab.c"
    break;

  case 106: /* FormalParameterList_opt: FormalParameterList  */
#line 610 "src/parser.y"
                          {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameters", memArr, 1, 1);
    }
#line 2919 "bin/parser.tab.c"
    break;

  case 107: /* FormalParameterList: FormalParameter  */
#line 617 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameter", memArr, 1, 0);
    }
#line 2929 "bin/parser.tab.c"
    break;

  case 108: /* FormalParameterList: FormalParameterList Comma FormalParameter  */
#line 622 "src/parser.y"
                                               {
         struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameter", memArr, 1, 0);
    }
#line 2940 "bin/parser.tab.c"
    break;

  case 109: /* FormalParameter: Type VariableDeclaratorId  */
#line 630 "src/parser.y"
                              {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-1].exp)->data, concatenate_string(" ", (yyvsp[0].exp)->data)));
    }
#line 2948 "bin/parser.tab.c"
    break;

  case 110: /* Throws: THROWS ClassTypeList  */
#line 635 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("throws", memArr, 1, 1);
    }
#line 2958 "bin/parser.tab.c"
    break;

  case 111: /* ClassTypeList: ClassType  */
#line 642 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 1, 0);
    }
#line 2968 "bin/parser.tab.c"
    break;

  case 112: /* ClassTypeList: ClassTypeList Comma ClassType  */
#line 647 "src/parser.y"
                                    {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp); 
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 2, 0);
    }
#line 2979 "bin/parser.tab.c"
    break;

  case 113: /* MethodBody: Block  */
#line 655 "src/parser.y"
          {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("MethodBody", memArr, 1, 1);
    }
#line 2989 "bin/parser.tab.c"
    break;

  case 114: /* MethodBody: Semicolon  */
#line 660 "src/parser.y"
                {
        (yyval.exp) = NULL;
    }
#line 2997 "bin/parser.tab.c"
    break;

  case 115: /* StaticInitializer: Static Block  */
#line 665 "src/parser.y"
                 {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("static", memArr, 1, 1);
    }
#line 3007 "bin/parser.tab.c"
    break;

  case 116: /* ConstructorDeclaration: Modifiers_opt ConstructorDeclarator Throws_opt ConstructorBody  */
#line 672 "src/parser.y"
                                                                   {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-2].exp)->data, memArr, 4, 1);
    }
#line 3020 "bin/parser.tab.c"
    break;

  case 117: /* ConstructorDeclarator: SimpleName LeftParanthesis FormalParameterList_opt RightParanthesis  */
#line 682 "src/parser.y"
                                                                        {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 1, 0);
    }
#line 3030 "bin/parser.tab.c"
    break;

  case 118: /* ConstructorBody: LeftCurlyBrace ExplicitConstructorInvocation_opt BlockStatements_opt RightCurlyBrace  */
#line 689 "src/parser.y"
                                                                                         {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ConstructorInvocation", memArr, 2, 1);
    }
#line 3041 "bin/parser.tab.c"
    break;

  case 119: /* ExplicitConstructorInvocation_opt: %empty  */
#line 696 "src/parser.y"
                                    { 
    (yyval.exp) = NULL; 
    }
#line 3049 "bin/parser.tab.c"
    break;

  case 120: /* ExplicitConstructorInvocation_opt: ExplicitConstructorInvocation  */
#line 699 "src/parser.y"
                                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ExplicitConstructorInvocation", memArr, 1, 1);
    }
#line 3059 "bin/parser.tab.c"
    break;

  case 121: /* ExplicitConstructorInvocation: This LeftParanthesis ArgumentList_opt RightParanthesis Semicolon  */
#line 706 "src/parser.y"
                                                                     {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode("this", memArr, 1, 0);
    }
#line 3069 "bin/parser.tab.c"
    break;

  case 122: /* ExplicitConstructorInvocation: Super LeftParanthesis ArgumentList_opt RightParanthesis Semicolon  */
#line 711 "src/parser.y"
                                                                        {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode("super", memArr, 1, 0);
    }
#line 3079 "bin/parser.tab.c"
    break;

  case 123: /* ArgumentList_opt: %empty  */
#line 717 "src/parser.y"
                  {
    (yyval.exp) = NULL; 
    }
#line 3087 "bin/parser.tab.c"
    break;

  case 124: /* ArgumentList_opt: ArgumentList  */
#line 720 "src/parser.y"
                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Arguments", memArr, 1, 1);
    }
#line 3097 "bin/parser.tab.c"
    break;

  case 125: /* InterfaceDeclaration: Modifiers_opt Interface Identifier ExtendsInterfaces_opt InterfaceBody  */
#line 727 "src/parser.y"
                                                                           {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = makeleaf((yyvsp[-3].data));
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-2].data), memArr, 4, 1);
    }
#line 3110 "bin/parser.tab.c"
    break;

  case 126: /* ExtendsInterfaces_opt: %empty  */
#line 736 "src/parser.y"
                        {
    (yyval.exp) = NULL;
    }
#line 3118 "bin/parser.tab.c"
    break;

  case 127: /* ExtendsInterfaces_opt: ExtendsInterfaces  */
#line 739 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 1);
    }
#line 3128 "bin/parser.tab.c"
    break;

  case 128: /* ExtendsInterfaces: Extends InterfaceType  */
#line 746 "src/parser.y"
                          {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 0);
    }
#line 3138 "bin/parser.tab.c"
    break;

  case 129: /* ExtendsInterfaces: ExtendsInterfaces Comma InterfaceType  */
#line 751 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 2, 0);
    }
#line 3149 "bin/parser.tab.c"
    break;

  case 130: /* InterfaceBody: LeftCurlyBrace InterfaceMemberDeclarations_opt RightCurlyBrace  */
#line 759 "src/parser.y"
                                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3157 "bin/parser.tab.c"
    break;

  case 131: /* InterfaceMemberDeclarations_opt: %empty  */
#line 763 "src/parser.y"
                                 {
        (yyval.exp) = NULL;
    }
#line 3165 "bin/parser.tab.c"
    break;

  case 132: /* InterfaceMemberDeclarations_opt: InterfaceMemberDeclarations  */
#line 766 "src/parser.y"
                                  {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interfaces", memArr, 1, 1);
    }
#line 3175 "bin/parser.tab.c"
    break;

  case 133: /* InterfaceMemberDeclarations: InterfaceMemberDeclaration  */
#line 773 "src/parser.y"
                               {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 1, 0);
    }
#line 3185 "bin/parser.tab.c"
    break;

  case 134: /* InterfaceMemberDeclarations: InterfaceMemberDeclarations InterfaceMemberDeclaration  */
#line 778 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 0);
    }
#line 3196 "bin/parser.tab.c"
    break;

  case 135: /* InterfaceMemberDeclaration: ConstantDeclaration  */
#line 786 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3204 "bin/parser.tab.c"
    break;

  case 136: /* InterfaceMemberDeclaration: AbstractMethodDeclaration  */
#line 789 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3212 "bin/parser.tab.c"
    break;

  case 137: /* ConstantDeclaration: FieldDeclaration  */
#line 794 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3220 "bin/parser.tab.c"
    break;

  case 138: /* AbstractMethodDeclaration: MethodHeader Semicolon  */
#line 799 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3228 "bin/parser.tab.c"
    break;

  case 139: /* ArrayInitializer: LeftCurlyBrace VariableInitializers_opt Comma_opt RightCurlyBrace  */
#line 804 "src/parser.y"
                                                                      {
        (yyval.exp) = (yyvsp[-2].exp);
    }
#line 3236 "bin/parser.tab.c"
    break;

  case 140: /* VariableInitializers_opt: %empty  */
#line 808 "src/parser.y"
                          {
        (yyval.exp) = NULL; 
    }
#line 3244 "bin/parser.tab.c"
    break;

  case 141: /* VariableInitializers_opt: VariableInitializers  */
#line 811 "src/parser.y"
                           {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("VariableInitializers", memArr, 1, 1);
    }
#line 3254 "bin/parser.tab.c"
    break;

  case 142: /* Comma_opt: %empty  */
#line 817 "src/parser.y"
            {
        (yyval.exp) = NULL; 
    }
#line 3262 "bin/parser.tab.c"
    break;

  case 143: /* Comma_opt: Comma  */
#line 820 "src/parser.y"
            {
        (yyval.exp) = NULL;
    }
#line 3270 "bin/parser.tab.c"
    break;

  case 144: /* VariableInitializers: VariableInitializer  */
#line 825 "src/parser.y"
                        {
       struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 3280 "bin/parser.tab.c"
    break;

  case 145: /* VariableInitializers: VariableInitializers Comma VariableInitializer  */
#line 830 "src/parser.y"
                                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Initializer", memArr, 2, 0);
    }
#line 3291 "bin/parser.tab.c"
    break;

  case 146: /* Block: LeftCurlyBrace BlockStatements_opt RightCurlyBrace  */
#line 838 "src/parser.y"
                                                       {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3299 "bin/parser.tab.c"
    break;

  case 147: /* BlockStatements_opt: %empty  */
#line 842 "src/parser.y"
                      {
     (yyval.exp) = NULL; 
     }
#line 3307 "bin/parser.tab.c"
    break;

  case 148: /* BlockStatements_opt: BlockStatements  */
#line 845 "src/parser.y"
                      {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("statements", memArr, 1, 1);
    }
#line 3317 "bin/parser.tab.c"
    break;

  case 149: /* BlockStatements: BlockStatement  */
#line 852 "src/parser.y"
                   {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Blocks", memArr, 1, 0);
    }
#line 3327 "bin/parser.tab.c"
    break;

  case 150: /* BlockStatements: BlockStatements BlockStatement  */
#line 857 "src/parser.y"
                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Block", memArr, 2, 0);
    }
#line 3338 "bin/parser.tab.c"
    break;

  case 151: /* BlockStatement: LocalVariableDeclarationStatement  */
#line 865 "src/parser.y"
                                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3346 "bin/parser.tab.c"
    break;

  case 152: /* BlockStatement: Statement  */
#line 868 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3354 "bin/parser.tab.c"
    break;

  case 153: /* LocalVariableDeclarationStatement: LocalVariableDeclaration Semicolon  */
#line 873 "src/parser.y"
                                       {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 1, 1);
    }
#line 3364 "bin/parser.tab.c"
    break;

  case 154: /* LocalVariableDeclaration: Type VariableDeclarators  */
#line 880 "src/parser.y"
                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-1].exp)->data, concatenate_string(" ",(yyvsp[0].exp)->data)), memArr, 2, 0);
    }
#line 3375 "bin/parser.tab.c"
    break;

  case 155: /* Statement: StatementWithoutTrailingSubstatement  */
#line 888 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3383 "bin/parser.tab.c"
    break;

  case 156: /* Statement: LabeledStatement  */
#line 891 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3391 "bin/parser.tab.c"
    break;

  case 157: /* Statement: IfThenStatement  */
#line 894 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3399 "bin/parser.tab.c"
    break;

  case 158: /* Statement: IfThenElseStatement  */
#line 897 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3407 "bin/parser.tab.c"
    break;

  case 159: /* Statement: WhileStatement  */
#line 900 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3415 "bin/parser.tab.c"
    break;

  case 160: /* Statement: ForStatement  */
#line 903 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3423 "bin/parser.tab.c"
    break;

  case 161: /* StatementNoShortIf: StatementWithoutTrailingSubstatement  */
#line 908 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3431 "bin/parser.tab.c"
    break;

  case 162: /* StatementNoShortIf: LabeledStatementNoShortIf  */
#line 911 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3439 "bin/parser.tab.c"
    break;

  case 163: /* StatementNoShortIf: IfThenElseStatementNoShortIf  */
#line 914 "src/parser.y"
                                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3447 "bin/parser.tab.c"
    break;

  case 164: /* StatementNoShortIf: WhileStatementNoShortIf  */
#line 917 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3455 "bin/parser.tab.c"
    break;

  case 165: /* StatementNoShortIf: ForStatementNoShortIf  */
#line 920 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3463 "bin/parser.tab.c"
    break;

  case 166: /* StatementWithoutTrailingSubstatement: Block  */
#line 925 "src/parser.y"
          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3471 "bin/parser.tab.c"
    break;

  case 167: /* StatementWithoutTrailingSubstatement: EmptyStatement  */
#line 928 "src/parser.y"
                     {
        (yyval.exp) = NULL;
    }
#line 3479 "bin/parser.tab.c"
    break;

  case 168: /* StatementWithoutTrailingSubstatement: ExpressionStatement  */
#line 931 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3487 "bin/parser.tab.c"
    break;

  case 169: /* StatementWithoutTrailingSubstatement: BreakStatement  */
#line 934 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3495 "bin/parser.tab.c"
    break;

  case 170: /* StatementWithoutTrailingSubstatement: ContinueStatement  */
#line 937 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3503 "bin/parser.tab.c"
    break;

  case 171: /* StatementWithoutTrailingSubstatement: ReturnStatement  */
#line 940 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3511 "bin/parser.tab.c"
    break;

  case 172: /* StatementWithoutTrailingSubstatement: SynchronizedStatement  */
#line 943 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3519 "bin/parser.tab.c"
    break;

  case 173: /* StatementWithoutTrailingSubstatement: ThrowStatement  */
#line 946 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3527 "bin/parser.tab.c"
    break;

  case 174: /* StatementWithoutTrailingSubstatement: TryStatement  */
#line 949 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3535 "bin/parser.tab.c"
    break;

  case 175: /* EmptyStatement: Semicolon  */
#line 954 "src/parser.y"
              {
        (yyval.exp) = NULL;
    }
#line 3543 "bin/parser.tab.c"
    break;

  case 176: /* LabeledStatement: Identifier Semicolon Statement  */
#line 959 "src/parser.y"
                                   {
        struct node* memArr[2];
        memArr[0] = makeleaf((yyvsp[-2].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("LabeledStatements", memArr, 2, 0);
    }
#line 3554 "bin/parser.tab.c"
    break;

  case 177: /* LabeledStatementNoShortIf: Identifier Semicolon StatementNoShortIf  */
#line 967 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = makeleaf((yyvsp[-2].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfThen", memArr, 2, 0);
    }
#line 3565 "bin/parser.tab.c"
    break;

  case 178: /* ExpressionStatement: StatementExpression Semicolon  */
#line 975 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3573 "bin/parser.tab.c"
    break;

  case 179: /* StatementExpression: Assignment  */
#line 980 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3581 "bin/parser.tab.c"
    break;

  case 180: /* StatementExpression: PreIncrementExpression  */
#line 983 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3589 "bin/parser.tab.c"
    break;

  case 181: /* StatementExpression: PreDecrementExpression  */
#line 986 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3597 "bin/parser.tab.c"
    break;

  case 182: /* StatementExpression: PostIncrementExpression  */
#line 989 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3605 "bin/parser.tab.c"
    break;

  case 183: /* StatementExpression: PostDecrementExpression  */
#line 992 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3613 "bin/parser.tab.c"
    break;

  case 184: /* StatementExpression: MethodInvocation  */
#line 995 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3621 "bin/parser.tab.c"
    break;

  case 185: /* StatementExpression: ClassInstanceCreationExpression  */
#line 998 "src/parser.y"
                                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3629 "bin/parser.tab.c"
    break;

  case 186: /* IfThenStatement: If LeftParanthesis Expression RightParanthesis Statement  */
#line 1003 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfThen", memArr, 2, 1);
    }
#line 3640 "bin/parser.tab.c"
    break;

  case 187: /* IfThenElseStatement: If LeftParanthesis Expression RightParanthesis StatementNoShortIf Else Statement  */
#line 1011 "src/parser.y"
                                                                                     {
        struct node* memArr[3];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfElse", memArr, 3, 1);
    }
#line 3652 "bin/parser.tab.c"
    break;

  case 188: /* IfThenElseStatementNoShortIf: If LeftParanthesis Expression RightParanthesis StatementNoShortIf Else StatementNoShortIf  */
#line 1020 "src/parser.y"
                                                                                              {
        struct node* memArr[3];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfElseIf", memArr, 3, 1);
    }
#line 3664 "bin/parser.tab.c"
    break;

  case 189: /* WhileStatement: While LeftParanthesis Expression RightParanthesis Statement  */
#line 1029 "src/parser.y"
                                                                {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("While", memArr, 2, 1);
    }
#line 3675 "bin/parser.tab.c"
    break;

  case 190: /* WhileStatementNoShortIf: While LeftParanthesis Expression RightParanthesis StatementNoShortIf  */
#line 1037 "src/parser.y"
                                                                         {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("While", memArr, 2, 1);
    }
#line 3686 "bin/parser.tab.c"
    break;

  case 191: /* ForStatement: For LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis Statement  */
#line 1045 "src/parser.y"
                                                                                                                {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-6].exp);
        memArr[1] = (yyvsp[-4].exp);
        memArr[2] = (yyvsp[-2].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("For", memArr, 4, 1);
    }
#line 3699 "bin/parser.tab.c"
    break;

  case 192: /* ForStatementNoShortIf: For LeftParanthesis ForInit_opt Semicolon Expression_opt Semicolon ForUpdate_opt RightParanthesis StatementNoShortIf  */
#line 1055 "src/parser.y"
                                                                                                                         {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-6].exp);
        memArr[1] = (yyvsp[-4].exp);
        memArr[2] = (yyvsp[-2].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("For", memArr, 4, 1);
    }
#line 3712 "bin/parser.tab.c"
    break;

  case 193: /* ForInit_opt: %empty  */
#line 1064 "src/parser.y"
             { 
    (yyval.exp) = NULL; 
    }
#line 3720 "bin/parser.tab.c"
    break;

  case 194: /* ForInit_opt: ForInit  */
#line 1067 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
    }
#line 3730 "bin/parser.tab.c"
    break;

  case 195: /* Expression_opt: %empty  */
#line 1073 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 3738 "bin/parser.tab.c"
    break;

  case 196: /* Expression_opt: Expression  */
#line 1076 "src/parser.y"
                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Expression", memArr, 1, 1);
    }
#line 3748 "bin/parser.tab.c"
    break;

  case 197: /* ForUpdate_opt: %empty  */
#line 1082 "src/parser.y"
               { 
    (yyval.exp) = NULL ;
    }
#line 3756 "bin/parser.tab.c"
    break;

  case 198: /* ForUpdate_opt: ForUpdate  */
#line 1085 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
    }
#line 3766 "bin/parser.tab.c"
    break;

  case 199: /* ForInit: StatementExpressionList  */
#line 1092 "src/parser.y"
                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
    }
#line 3776 "bin/parser.tab.c"
    break;

  case 200: /* ForInit: LocalVariableDeclaration  */
#line 1097 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
    }
#line 3786 "bin/parser.tab.c"
    break;

  case 201: /* ForUpdate: StatementExpressionList  */
#line 1104 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
    }
#line 3796 "bin/parser.tab.c"
    break;

  case 202: /* StatementExpressionList: StatementExpression  */
#line 1111 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("StatementExpression", memArr, 1, 0);
    }
#line 3806 "bin/parser.tab.c"
    break;

  case 203: /* StatementExpressionList: StatementExpressionList Comma StatementExpression  */
#line 1116 "src/parser.y"
                                                        {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-2].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("StatementExpression", memArr, 2, 0);
    }
#line 3817 "bin/parser.tab.c"
    break;

  case 204: /* BreakStatement: Break Identifier_opt Semicolon  */
#line 1124 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("break", memArr, 1, 1);
    }
#line 3827 "bin/parser.tab.c"
    break;

  case 205: /* Identifier_opt: %empty  */
#line 1131 "src/parser.y"
    {
        (yyval.exp) = NULL;
    }
#line 3835 "bin/parser.tab.c"
    break;

  case 206: /* Identifier_opt: Identifier  */
#line 1133 "src/parser.y"
                  {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 3843 "bin/parser.tab.c"
    break;

  case 207: /* ContinueStatement: Continue Identifier_opt Semicolon  */
#line 1138 "src/parser.y"
                                      {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("continue", memArr, 1, 1);
    }
#line 3853 "bin/parser.tab.c"
    break;

  case 208: /* ReturnStatement: Return Expression_opt Semicolon  */
#line 1145 "src/parser.y"
                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("return", memArr, 1, 1);
    }
#line 3863 "bin/parser.tab.c"
    break;

  case 209: /* ThrowStatement: THROW Expression Semicolon  */
#line 1152 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("throw", memArr, 1, 1);
    }
#line 3873 "bin/parser.tab.c"
    break;

  case 210: /* SynchronizedStatement: Synchronized LeftParanthesis Expression RightParanthesis Block  */
#line 1159 "src/parser.y"
                                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("synchronized", memArr, 2, 1);
    }
#line 3884 "bin/parser.tab.c"
    break;

  case 211: /* TryStatement: Try Block Catches  */
#line 1167 "src/parser.y"
                      {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCatches", memArr, 2, 1);
    }
#line 3895 "bin/parser.tab.c"
    break;

  case 212: /* TryStatement: Try Block Catches_opt Finally  */
#line 1173 "src/parser.y"
                                    {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCtachesFinally", memArr, 3, 1);
    }
#line 3907 "bin/parser.tab.c"
    break;

  case 213: /* Catches_opt: %empty  */
#line 1181 "src/parser.y"
             {
        (yyval.exp) = NULL; 
    }
#line 3915 "bin/parser.tab.c"
    break;

  case 214: /* Catches_opt: Catches  */
#line 1184 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catches", memArr, 1, 1);
    }
#line 3925 "bin/parser.tab.c"
    break;

  case 215: /* Catches: CatchClause  */
#line 1191 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("catch", memArr, 1, 0);
    }
#line 3935 "bin/parser.tab.c"
    break;

  case 216: /* Catches: Catches CatchClause  */
#line 1196 "src/parser.y"
                          {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catch", memArr, 2, 0);
    }
#line 3946 "bin/parser.tab.c"
    break;

  case 217: /* CatchClause: Catch LeftParanthesis FormalParameter RightParanthesis Block  */
#line 1204 "src/parser.y"
                                                                 {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CatchClause", memArr, 2, 0);
    }
#line 3957 "bin/parser.tab.c"
    break;

  case 218: /* Finally: FINALLY Block  */
#line 1212 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("finally", memArr, 1, 1);
    }
#line 3967 "bin/parser.tab.c"
    break;

  case 219: /* Primary: PrimaryNoNewArray  */
#line 1219 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3975 "bin/parser.tab.c"
    break;

  case 220: /* Primary: ArrayCreationExpression  */
#line 1222 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3983 "bin/parser.tab.c"
    break;

  case 221: /* PrimaryNoNewArray: Literal  */
#line 1227 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3991 "bin/parser.tab.c"
    break;

  case 222: /* PrimaryNoNewArray: This  */
#line 1230 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 3999 "bin/parser.tab.c"
    break;

  case 223: /* PrimaryNoNewArray: LeftParanthesis Expression RightParanthesis  */
#line 1233 "src/parser.y"
                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4007 "bin/parser.tab.c"
    break;

  case 224: /* PrimaryNoNewArray: ClassInstanceCreationExpression  */
#line 1236 "src/parser.y"
                                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4015 "bin/parser.tab.c"
    break;

  case 225: /* PrimaryNoNewArray: FieldAccess  */
#line 1239 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4023 "bin/parser.tab.c"
    break;

  case 226: /* PrimaryNoNewArray: MethodInvocation  */
#line 1242 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4031 "bin/parser.tab.c"
    break;

  case 227: /* PrimaryNoNewArray: ArrayAccess  */
#line 1245 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4039 "bin/parser.tab.c"
    break;

  case 228: /* ClassInstanceCreationExpression: New ClassType LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 1250 "src/parser.y"
                                                                    {
        struct node * memArr[3];
        memArr[0] = makeleaf((yyvsp[-4].data));
        memArr[1] =(yyvsp[-3].exp);
        memArr[2] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ClassInstance", memArr, 3, 1);
    }
#line 4051 "bin/parser.tab.c"
    break;

  case 229: /* ArgumentList: Expression  */
#line 1259 "src/parser.y"
               {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArgumentList", memArr, 1, 0);
    }
#line 4061 "bin/parser.tab.c"
    break;

  case 230: /* ArgumentList: ArgumentList Comma Expression  */
#line 1264 "src/parser.y"
                                    {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-2].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArgumentList", memArr, 2, 0);
    }
#line 4072 "bin/parser.tab.c"
    break;

  case 231: /* ArrayCreationExpression: New PrimitiveType DimExprs Dims_opt  */
#line 1272 "src/parser.y"
                                        {
        struct node * memArr[4];
        memArr[0] = makeleaf((yyvsp[-3].data));
        memArr[1] =(yyvsp[-2].exp);
        memArr[2] =(yyvsp[-1].exp);
        memArr[3] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArrayCreation", memArr, 4, 0);
    }
#line 4085 "bin/parser.tab.c"
    break;

  case 232: /* ArrayCreationExpression: New ClassOrInterfaceType DimExprs Dims_opt  */
#line 1280 "src/parser.y"
                                                 {
        struct node * memArr[4];
        memArr[0] = makeleaf((yyvsp[-3].data));
        memArr[1] =(yyvsp[-2].exp);
        memArr[2] =(yyvsp[-1].exp);
        memArr[3] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArrayCreation", memArr, 4, 0);
    }
#line 4098 "bin/parser.tab.c"
    break;

  case 233: /* Dims_opt: %empty  */
#line 1289 "src/parser.y"
          { 
    (yyval.exp) = NULL; 
    }
#line 4106 "bin/parser.tab.c"
    break;

  case 234: /* Dims_opt: Dims  */
#line 1292 "src/parser.y"
          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4114 "bin/parser.tab.c"
    break;

  case 235: /* DimExprs: DimExpr  */
#line 1297 "src/parser.y"
            {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 4124 "bin/parser.tab.c"
    break;

  case 236: /* DimExprs: DimExprs DimExpr  */
#line 1302 "src/parser.y"
                       {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]",memArr,2, 0);
    }
#line 4135 "bin/parser.tab.c"
    break;

  case 237: /* DimExpr: LeftSquareBracket Expression RightSquareBracket  */
#line 1310 "src/parser.y"
                                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 4145 "bin/parser.tab.c"
    break;

  case 238: /* Dims: LeftSquareBracket RightSquareBracket  */
#line 1317 "src/parser.y"
                                         {
        (yyval.exp) = makeleaf("[]");
    }
#line 4153 "bin/parser.tab.c"
    break;

  case 239: /* Dims: Dims LeftSquareBracket RightSquareBracket  */
#line 1320 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
    }
#line 4161 "bin/parser.tab.c"
    break;

  case 240: /* FieldAccess: Primary Dot Identifier  */
#line 1325 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,(yyvsp[0].data)));
    }
#line 4169 "bin/parser.tab.c"
    break;

  case 241: /* FieldAccess: Super Dot Identifier  */
#line 1328 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),(yyvsp[0].data)));
    }
#line 4177 "bin/parser.tab.c"
    break;

  case 242: /* MethodInvocation: Name LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 1333 "src/parser.y"
                                                           {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 1, 1);
    }
#line 4187 "bin/parser.tab.c"
    break;

  case 243: /* MethodInvocation: Primary Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 1338 "src/parser.y"
                                                                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].exp)->data,concatenate_string(" ",(yyvsp[-3].data))), memArr, 1, 1);
    }
#line 4197 "bin/parser.tab.c"
    break;

  case 244: /* MethodInvocation: Super Dot Identifier LeftParanthesis ArgumentList_opt RightParanthesis  */
#line 1343 "src/parser.y"
                                                                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].data),concatenate_string(" ",(yyvsp[-3].data))), memArr, 1, 1);
    }
#line 4207 "bin/parser.tab.c"
    break;

  case 245: /* ArrayAccess: Name LeftSquareBracket Expression RightSquareBracket  */
#line 1350 "src/parser.y"
                                                        {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ArrayAccess", memArr, 2, 0);
    }
#line 4218 "bin/parser.tab.c"
    break;

  case 246: /* ArrayAccess: PrimaryNoNewArray LeftSquareBracket Expression RightSquareBracket  */
#line 1356 "src/parser.y"
                                                                        {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ArrayAccess", memArr, 2, 0);
    }
#line 4229 "bin/parser.tab.c"
    break;

  case 247: /* PostfixExpression: Primary  */
#line 1364 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4237 "bin/parser.tab.c"
    break;

  case 248: /* PostfixExpression: Name  */
#line 1367 "src/parser.y"
           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4245 "bin/parser.tab.c"
    break;

  case 249: /* PostfixExpression: PostIncrementExpression  */
#line 1370 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4253 "bin/parser.tab.c"
    break;

  case 250: /* PostfixExpression: PostDecrementExpression  */
#line 1373 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4261 "bin/parser.tab.c"
    break;

  case 251: /* PostIncrementExpression: PostfixExpression PlusPlus  */
#line 1378 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("++", memArr, 1, 1);
    }
#line 4271 "bin/parser.tab.c"
    break;

  case 252: /* PostDecrementExpression: PostfixExpression MinusMinus  */
#line 1385 "src/parser.y"
                                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("--", memArr, 1, 1);
    }
#line 4281 "bin/parser.tab.c"
    break;

  case 253: /* UnaryExpression: PreIncrementExpression  */
#line 1392 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4289 "bin/parser.tab.c"
    break;

  case 254: /* UnaryExpression: PreDecrementExpression  */
#line 1395 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4297 "bin/parser.tab.c"
    break;

  case 255: /* UnaryExpression: Addition UnaryExpression  */
#line 1398 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("+", memArr, 1, 1);
    }
#line 4307 "bin/parser.tab.c"
    break;

  case 256: /* UnaryExpression: Substraction UnaryExpression  */
#line 1403 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("-", memArr, 1, 1);
    }
#line 4317 "bin/parser.tab.c"
    break;

  case 257: /* UnaryExpression: UnaryExpressionNotPlusMinus  */
#line 1408 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4325 "bin/parser.tab.c"
    break;

  case 258: /* PreIncrementExpression: PlusPlus UnaryExpression  */
#line 1413 "src/parser.y"
                             {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("++", memArr, 2, 1);
    }
#line 4336 "bin/parser.tab.c"
    break;

  case 259: /* PreDecrementExpression: MinusMinus UnaryExpression  */
#line 1421 "src/parser.y"
                               {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("--", memArr, 2, 1);
    }
#line 4347 "bin/parser.tab.c"
    break;

  case 260: /* UnaryExpressionNotPlusMinus: PostfixExpression  */
#line 1429 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4355 "bin/parser.tab.c"
    break;

  case 261: /* UnaryExpressionNotPlusMinus: Tilde UnaryExpression  */
#line 1432 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("~", memArr, 1, 1);
    }
#line 4365 "bin/parser.tab.c"
    break;

  case 262: /* UnaryExpressionNotPlusMinus: NotOperator UnaryExpression  */
#line 1437 "src/parser.y"
                                  {
         struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("!", memArr, 1, 1);
    }
#line 4375 "bin/parser.tab.c"
    break;

  case 263: /* UnaryExpressionNotPlusMinus: CastExpression  */
#line 1442 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4383 "bin/parser.tab.c"
    break;

  case 264: /* CastExpression: LeftParanthesis PrimitiveType Dims_opt RightParanthesis UnaryExpression  */
#line 1447 "src/parser.y"
                                                                            {
        struct  node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        char * str = concatenate_string((yyvsp[-3].exp)->data, (yyvsp[-2].exp)->data);
        (yyval.exp) = makeInternalNode(str, memArr, 1, 1);
    }
#line 4394 "bin/parser.tab.c"
    break;

  case 265: /* CastExpression: LeftParanthesis Expression RightParanthesis UnaryExpressionNotPlusMinus  */
#line 1453 "src/parser.y"
                                                                              {
        struct  node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CastExpression", memArr, 2, 1);
    }
#line 4405 "bin/parser.tab.c"
    break;

  case 266: /* CastExpression: LeftParanthesis Name Dims RightParanthesis UnaryExpressionNotPlusMinus  */
#line 1459 "src/parser.y"
                                                                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        char * str = concatenate_string((yyvsp[-3].exp)->data, (yyvsp[-2].exp)->data);
        (yyval.exp) = makeInternalNode(str, memArr, 1, 1);
    }
#line 4416 "bin/parser.tab.c"
    break;

  case 267: /* MultiplicativeExpression: UnaryExpression  */
#line 1467 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4424 "bin/parser.tab.c"
    break;

  case 268: /* MultiplicativeExpression: MultiplicativeExpression Product UnaryExpression  */
#line 1470 "src/parser.y"
                                                       {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("*", memArr, 2, 1); 
    }
#line 4435 "bin/parser.tab.c"
    break;

  case 269: /* MultiplicativeExpression: MultiplicativeExpression Divide UnaryExpression  */
#line 1476 "src/parser.y"
                                                      {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("/", memArr, 2, 1); 
    }
#line 4446 "bin/parser.tab.c"
    break;

  case 270: /* MultiplicativeExpression: MultiplicativeExpression Modulo UnaryExpression  */
#line 1482 "src/parser.y"
                                                      {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("%", memArr, 2, 1); 
    }
#line 4457 "bin/parser.tab.c"
    break;

  case 271: /* AdditiveExpression: MultiplicativeExpression  */
#line 1490 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4465 "bin/parser.tab.c"
    break;

  case 272: /* AdditiveExpression: AdditiveExpression Addition MultiplicativeExpression  */
#line 1493 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("+", memArr, 2, 1); 
    }
#line 4476 "bin/parser.tab.c"
    break;

  case 273: /* AdditiveExpression: AdditiveExpression Substraction MultiplicativeExpression  */
#line 1499 "src/parser.y"
                                                               {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("-", memArr, 2, 1); 
    }
#line 4487 "bin/parser.tab.c"
    break;

  case 274: /* ShiftExpression: AdditiveExpression  */
#line 1507 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4495 "bin/parser.tab.c"
    break;

  case 275: /* ShiftExpression: ShiftExpression LeftShit AdditiveExpression  */
#line 1510 "src/parser.y"
                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<<", memArr, 2, 1); 
    }
#line 4506 "bin/parser.tab.c"
    break;

  case 276: /* ShiftExpression: ShiftExpression RightShift AdditiveExpression  */
#line 1516 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">>", memArr, 2, 1); 
    }
#line 4517 "bin/parser.tab.c"
    break;

  case 277: /* ShiftExpression: ShiftExpression TripleGreaterThan AdditiveExpression  */
#line 1522 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">>>", memArr, 2, 1); 
    }
#line 4528 "bin/parser.tab.c"
    break;

  case 278: /* RelationalExpression: ShiftExpression  */
#line 1530 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4536 "bin/parser.tab.c"
    break;

  case 279: /* RelationalExpression: RelationalExpression LessThan ShiftExpression  */
#line 1533 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">", memArr, 2, 1); 
    }
#line 4547 "bin/parser.tab.c"
    break;

  case 280: /* RelationalExpression: RelationalExpression GreaterThan ShiftExpression  */
#line 1539 "src/parser.y"
                                                       {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<", memArr, 2, 1); 
    }
#line 4558 "bin/parser.tab.c"
    break;

  case 281: /* RelationalExpression: RelationalExpression LessThanEqualTo ShiftExpression  */
#line 1545 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<=", memArr, 2, 1); 
    }
#line 4569 "bin/parser.tab.c"
    break;

  case 282: /* RelationalExpression: RelationalExpression GreaterThanEqualTo ShiftExpression  */
#line 1551 "src/parser.y"
                                                              {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">=", memArr, 2, 1); 
    }
#line 4580 "bin/parser.tab.c"
    break;

  case 283: /* RelationalExpression: RelationalExpression Instanceof ReferenceType  */
#line 1557 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Instanceof", memArr, 2, 1); 
    }
#line 4591 "bin/parser.tab.c"
    break;

  case 284: /* EqualityExpression: RelationalExpression  */
#line 1565 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4599 "bin/parser.tab.c"
    break;

  case 285: /* EqualityExpression: EqualityExpression EqualToEqualTo RelationalExpression  */
#line 1568 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("==", memArr, 2, 1); 
    }
#line 4610 "bin/parser.tab.c"
    break;

  case 286: /* EqualityExpression: EqualityExpression NotEqualTo RelationalExpression  */
#line 1574 "src/parser.y"
                                                         {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("!=", memArr, 2, 1); 
    }
#line 4621 "bin/parser.tab.c"
    break;

  case 287: /* AndExpression: EqualityExpression  */
#line 1582 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4629 "bin/parser.tab.c"
    break;

  case 288: /* AndExpression: AndExpression BitwiseAnd EqualityExpression  */
#line 1585 "src/parser.y"
                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("&", memArr, 2 ,1); 
    }
#line 4640 "bin/parser.tab.c"
    break;

  case 289: /* ExclusiveOrExpression: AndExpression  */
#line 1593 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4648 "bin/parser.tab.c"
    break;

  case 290: /* ExclusiveOrExpression: ExclusiveOrExpression CircumFlex AndExpression  */
#line 1596 "src/parser.y"
                                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("xor", memArr, 2 ,1); 
    }
#line 4659 "bin/parser.tab.c"
    break;

  case 291: /* InclusiveOrExpression: ExclusiveOrExpression  */
#line 1604 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4667 "bin/parser.tab.c"
    break;

  case 292: /* InclusiveOrExpression: InclusiveOrExpression BitwiseOr ExclusiveOrExpression  */
#line 1607 "src/parser.y"
                                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("|", memArr, 2, 1); 
    }
#line 4678 "bin/parser.tab.c"
    break;

  case 293: /* ConditionalAndExpression: InclusiveOrExpression  */
#line 1615 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4686 "bin/parser.tab.c"
    break;

  case 294: /* ConditionalAndExpression: ConditionalAndExpression AndOperator InclusiveOrExpression  */
#line 1618 "src/parser.y"
                                                                 {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("&&", memArr, 2, 1); 
    }
#line 4697 "bin/parser.tab.c"
    break;

  case 295: /* ConditionalOrExpression: ConditionalAndExpression  */
#line 1626 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4705 "bin/parser.tab.c"
    break;

  case 296: /* ConditionalOrExpression: ConditionalOrExpression OrOperator ConditionalAndExpression  */
#line 1629 "src/parser.y"
                                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("||", memArr, 2, 1); 
    }
#line 4716 "bin/parser.tab.c"
    break;

  case 297: /* ConditionalExpression: ConditionalOrExpression  */
#line 1637 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4724 "bin/parser.tab.c"
    break;

  case 298: /* ConditionalExpression: ConditionalOrExpression QuestionMark Expression Colon ConditionalExpression  */
#line 1640 "src/parser.y"
                                                                                  {
        struct node* memArr[3];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("?:", memArr, 3, 1); 
    }
#line 4736 "bin/parser.tab.c"
    break;

  case 299: /* AssignmentExpression: ConditionalExpression  */
#line 1649 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4744 "bin/parser.tab.c"
    break;

  case 300: /* AssignmentExpression: Assignment  */
#line 1652 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4752 "bin/parser.tab.c"
    break;

  case 301: /* Assignment: LeftHandSide AssignmentOperator AssignmentExpression  */
#line 1657 "src/parser.y"
                                                         {
    struct node* memArr[2];
    memArr[0] = (yyvsp[-2].exp);
    memArr[1] = (yyvsp[0].exp);
    (yyval.exp) = makeInternalNode("=", memArr, 2, 1);
}
#line 4763 "bin/parser.tab.c"
    break;

  case 302: /* LeftHandSide: Name  */
#line 1665 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4771 "bin/parser.tab.c"
    break;

  case 303: /* LeftHandSide: FieldAccess  */
#line 1668 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4779 "bin/parser.tab.c"
    break;

  case 304: /* LeftHandSide: ArrayAccess  */
#line 1671 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4787 "bin/parser.tab.c"
    break;

  case 305: /* AssignmentOperator: EqualTo  */
#line 1676 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4795 "bin/parser.tab.c"
    break;

  case 306: /* AssignmentOperator: ProductEqualTo  */
#line 1679 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4803 "bin/parser.tab.c"
    break;

  case 307: /* AssignmentOperator: DivideEqualTo  */
#line 1682 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4811 "bin/parser.tab.c"
    break;

  case 308: /* AssignmentOperator: ModuloEqualTo  */
#line 1685 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4819 "bin/parser.tab.c"
    break;

  case 309: /* AssignmentOperator: AdditionEqualTo  */
#line 1688 "src/parser.y"
                      {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4827 "bin/parser.tab.c"
    break;

  case 310: /* AssignmentOperator: SubstractionEqualTo  */
#line 1691 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4835 "bin/parser.tab.c"
    break;

  case 311: /* AssignmentOperator: LeftShitEqualTo  */
#line 1694 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4843 "bin/parser.tab.c"
    break;

  case 312: /* AssignmentOperator: RightShiftEqualTo  */
#line 1697 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4851 "bin/parser.tab.c"
    break;

  case 313: /* AssignmentOperator: TripleGreaterThanEqualTo  */
#line 1700 "src/parser.y"
                                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4859 "bin/parser.tab.c"
    break;

  case 314: /* AssignmentOperator: BitWiseAndEqualTo  */
#line 1703 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4867 "bin/parser.tab.c"
    break;

  case 315: /* AssignmentOperator: CircumFlexEqualTo  */
#line 1706 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4875 "bin/parser.tab.c"
    break;

  case 316: /* AssignmentOperator: BitWiseOrEqualTo  */
#line 1709 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4883 "bin/parser.tab.c"
    break;

  case 317: /* Expression: AssignmentExpression  */
#line 1713 "src/parser.y"
                                 {
    (yyval.exp) = (yyvsp[0].exp);
}
#line 4891 "bin/parser.tab.c"
    break;


#line 4895 "bin/parser.tab.c"

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

#line 1718 "src/parser.y"



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


void ast_print(struct node* root, int d, int n){

    if(root == NULL){
        return;
    }

    printf("%s",root->data);
    root->nodenumber = n;
    n++;
    printf("\n");
    int i =0;

    
    for(;i<100;i++){
        if(root->arr[i]!= NULL){
            for(int i = 0 ; i<=d; i++)
            printf("     ");
            printf("|----->");
            ast_print(root->arr[i],d+1, n);
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
        {   fprintf(graph,"\ti%d_%d_%d [label= \"%s\"]",root->nodenumber, depth, child_num, root->data);
            fprintf(graph, "\ti%d_%d_%d ->{ i%d_%d_0", root->nodenumber, depth, child_num, (root->arr[i])->nodenumber, depth + 1);
            leaf_flag = 1;
            break;
        }
    }
    if (!leaf_flag)
    {
        fprintf(graph,"\ti%d_%d_%d [label= \"%s\"]",root->nodenumber, depth, child_num, root->data);
        fprintf(graph, "\ti%d_%d_%d ->{}\n", root->nodenumber, depth, child_num);
        return;
    }

    for (int j = i+1; j < N_NodeChild; j++)
    {
        if (root->arr[j] != NULL)
        {
            fprintf(graph, " ,i%d_%d_%d", (root->arr[j])->nodenumber, depth + 1, j);
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


void help()
{
    system("clear");
    system("cat ../doc/Help.txt");
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
    while ((read = getline(&input_file, &len, fp)) != -1) {
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
    while((read = getline(&output_file, &len, fp)) != -1) {
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
    ast_print(root,0,z);

    FILE* graph = fopen(output_file,"w");
    fprintf(graph, "digraph AST{ \n");
    graph_maker(root, graph,0,0);
    fprintf(graph, "} \n");

    fclose(graph);
    fclose(yyin);

    return 0;

}



