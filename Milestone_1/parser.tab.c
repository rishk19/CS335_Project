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
#line 1 "parser.y"

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



#line 92 "parser.tab.c"

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
  YYSYMBOL_Throw = 38,                     /* Throw  */
  YYSYMBOL_Byte = 39,                      /* Byte  */
  YYSYMBOL_Else = 40,                      /* Else  */
  YYSYMBOL_Import = 41,                    /* Import  */
  YYSYMBOL_Public = 42,                    /* Public  */
  YYSYMBOL_Throws = 43,                    /* Throws  */
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
  YYSYMBOL_Finally = 60,                   /* Finally  */
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
  YYSYMBOL_CompilationUnit = 135,          /* CompilationUnit  */
  YYSYMBOL_ModularCompilationUnit = 136,   /* ModularCompilationUnit  */
  YYSYMBOL_OrdinaryCompilationUnit = 137,  /* OrdinaryCompilationUnit  */
  YYSYMBOL_TopLevelClassOrInterfaceDeclaration = 138, /* TopLevelClassOrInterfaceDeclaration  */
  YYSYMBOL_ClassDeclaration = 139,         /* ClassDeclaration  */
  YYSYMBOL_NormalClassDeclaration = 140,   /* NormalClassDeclaration  */
  YYSYMBOL_ClassModifier_ntM = 141,        /* ClassModifier_ntM  */
  YYSYMBOL_TypeParamaters_nt = 142,        /* TypeParamaters_nt  */
  YYSYMBOL_ClassExtends_nt = 143,          /* ClassExtends_nt  */
  YYSYMBOL_ClassImplements_nt = 144,       /* ClassImplements_nt  */
  YYSYMBOL_ClassPermits_nt = 145,          /* ClassPermits_nt  */
  YYSYMBOL_ClassModifier = 146,            /* ClassModifier  */
  YYSYMBOL_TypeParameters = 147,           /* TypeParameters  */
  YYSYMBOL_TypeParameterList = 148,        /* TypeParameterList  */
  YYSYMBOL_Typerparameter_extender = 149,  /* Typerparameter_extender  */
  YYSYMBOL_ClassExtends = 150,             /* ClassExtends  */
  YYSYMBOL_ClassImplements = 151,          /* ClassImplements  */
  YYSYMBOL_InterfaceTypeList = 152,        /* InterfaceTypeList  */
  YYSYMBOL_InterfaceType_extender = 153,   /* InterfaceType_extender  */
  YYSYMBOL_ClassPermits = 154,             /* ClassPermits  */
  YYSYMBOL_TypeName_extender = 155,        /* TypeName_extender  */
  YYSYMBOL_ClassBody = 156,                /* ClassBody  */
  YYSYMBOL_ClassBodyDeclaration_ntM = 157, /* ClassBodyDeclaration_ntM  */
  YYSYMBOL_ClassBodyDeclaration = 158,     /* ClassBodyDeclaration  */
  YYSYMBOL_ClassMemberDeclaration = 159,   /* ClassMemberDeclaration  */
  YYSYMBOL_FieldDeclaration = 160,         /* FieldDeclaration  */
  YYSYMBOL_FieldModifier_ntM = 161,        /* FieldModifier_ntM  */
  YYSYMBOL_FieldModifier = 162,            /* FieldModifier  */
  YYSYMBOL_VariableDeclaratorList = 163,   /* VariableDeclaratorList  */
  YYSYMBOL_VariableDeclarator_extender = 164, /* VariableDeclarator_extender  */
  YYSYMBOL_VariableDeclarator = 165,       /* VariableDeclarator  */
  YYSYMBOL_VariableInitializer_extender = 166, /* VariableInitializer_extender  */
  YYSYMBOL_VariableDeclaratorId = 167,     /* VariableDeclaratorId  */
  YYSYMBOL_Dims_nt = 168,                  /* Dims_nt  */
  YYSYMBOL_VariableInitializer = 169,      /* VariableInitializer  */
  YYSYMBOL_UannType = 170,                 /* UannType  */
  YYSYMBOL_UannPrimitiveType = 171,        /* UannPrimitiveType  */
  YYSYMBOL_UannReferenceType = 172,        /* UannReferenceType  */
  YYSYMBOL_UannClassOrInterfaceType = 173, /* UannClassOrInterfaceType  */
  YYSYMBOL_UannClassType = 174,            /* UannClassType  */
  YYSYMBOL_TypeArguments_nt = 175,         /* TypeArguments_nt  */
  YYSYMBOL_Annotation_ntM = 176,           /* Annotation_ntM  */
  YYSYMBOL_UannInterfaceType = 177,        /* UannInterfaceType  */
  YYSYMBOL_UannTypeVariable = 178,         /* UannTypeVariable  */
  YYSYMBOL_UannArrayType = 179,            /* UannArrayType  */
  YYSYMBOL_MethodDeclaration = 180,        /* MethodDeclaration  */
  YYSYMBOL_MethodModifier_ntM = 181,       /* MethodModifier_ntM  */
  YYSYMBOL_MethodModifier = 182,           /* MethodModifier  */
  YYSYMBOL_MethodHeader = 183,             /* MethodHeader  */
  YYSYMBOL_Throws_nt = 184,                /* Throws_nt  */
  YYSYMBOL_Result = 185,                   /* Result  */
  YYSYMBOL_MethodDeclarator = 186,         /* MethodDeclarator  */
  YYSYMBOL_ReceiverParameter_extender = 187, /* ReceiverParameter_extender  */
  YYSYMBOL_FormalParameterList_nt = 188,   /* FormalParameterList_nt  */
  YYSYMBOL_RecieverParameter = 189,        /* RecieverParameter  */
  YYSYMBOL_Identifier_extender_Dot = 190,  /* Identifier_extender_Dot  */
  YYSYMBOL_FormalParameterList = 191,      /* FormalParameterList  */
  YYSYMBOL_FormalParameter_extender = 192, /* FormalParameter_extender  */
  YYSYMBOL_FormalParameter = 193,          /* FormalParameter  */
  YYSYMBOL_VariableModifier_ntM = 194,     /* VariableModifier_ntM  */
  YYSYMBOL_VariableArityParameter = 195,   /* VariableArityParameter  */
  YYSYMBOL_VariableModifier = 196,         /* VariableModifier  */
  YYSYMBOL_Throws_ntK = 197,               /* Throws_ntK  */
  YYSYMBOL_ExceptionListType = 198,        /* ExceptionListType  */
  YYSYMBOL_ExceptionType_extender = 199,   /* ExceptionType_extender  */
  YYSYMBOL_ExceptionType = 200,            /* ExceptionType  */
  YYSYMBOL_MethodBody = 201,               /* MethodBody  */
  YYSYMBOL_InstanceInitializer = 202,      /* InstanceInitializer  */
  YYSYMBOL_StaticInitializer = 203,        /* StaticInitializer  */
  YYSYMBOL_ConstructorDeclaration = 204,   /* ConstructorDeclaration  */
  YYSYMBOL_ConstructorModifier_ntM = 205,  /* ConstructorModifier_ntM  */
  YYSYMBOL_ConstructorModifier = 206,      /* ConstructorModifier  */
  YYSYMBOL_ConstructorDeclarator = 207,    /* ConstructorDeclarator  */
  YYSYMBOL_SimpleTypeName = 208,           /* SimpleTypeName  */
  YYSYMBOL_ConstructorBody = 209,          /* ConstructorBody  */
  YYSYMBOL_ExplicitConstructorInvocation_nt = 210, /* ExplicitConstructorInvocation_nt  */
  YYSYMBOL_BlockStatements_nt = 211,       /* BlockStatements_nt  */
  YYSYMBOL_ExplicitConstructorInvocation = 212, /* ExplicitConstructorInvocation  */
  YYSYMBOL_ArgumentList_nt = 213,          /* ArgumentList_nt  */
  YYSYMBOL_UnqualifiedMethodIdentifier = 214, /* UnqualifiedMethodIdentifier  */
  YYSYMBOL_TypeIdentifier = 215,           /* TypeIdentifier  */
  YYSYMBOL_Literal = 216,                  /* Literal  */
  YYSYMBOL_PrimitiveType = 217,            /* PrimitiveType  */
  YYSYMBOL_NumericType = 218,              /* NumericType  */
  YYSYMBOL_IntegralType = 219,             /* IntegralType  */
  YYSYMBOL_FloatingPointType = 220,        /* FloatingPointType  */
  YYSYMBOL_ReferenceType = 221,            /* ReferenceType  */
  YYSYMBOL_ClassOrInterfaceType = 222,     /* ClassOrInterfaceType  */
  YYSYMBOL_ClassType = 223,                /* ClassType  */
  YYSYMBOL_InterfaceType = 224,            /* InterfaceType  */
  YYSYMBOL_TypeVariable = 225,             /* TypeVariable  */
  YYSYMBOL_ArrayType = 226,                /* ArrayType  */
  YYSYMBOL_Dims = 227,                     /* Dims  */
  YYSYMBOL_Annotation_extender_bracket = 228, /* Annotation_extender_bracket  */
  YYSYMBOL_TypeParameter = 229,            /* TypeParameter  */
  YYSYMBOL_TypeParameterModifier_ntM = 230, /* TypeParameterModifier_ntM  */
  YYSYMBOL_TypeBound_nt = 231,             /* TypeBound_nt  */
  YYSYMBOL_TypeParameterModifier = 232,    /* TypeParameterModifier  */
  YYSYMBOL_TypeBound = 233,                /* TypeBound  */
  YYSYMBOL_AdditionalBound_ntM = 234,      /* AdditionalBound_ntM  */
  YYSYMBOL_AdditionalBound = 235,          /* AdditionalBound  */
  YYSYMBOL_TypeArguments = 236,            /* TypeArguments  */
  YYSYMBOL_TypeArgumentList = 237,         /* TypeArgumentList  */
  YYSYMBOL_TypeArgument_extender = 238,    /* TypeArgument_extender  */
  YYSYMBOL_TypeArgument = 239,             /* TypeArgument  */
  YYSYMBOL_WildCard = 240,                 /* WildCard  */
  YYSYMBOL_WildCardBounds_nt = 241,        /* WildCardBounds_nt  */
  YYSYMBOL_WildCardBounds = 242,           /* WildCardBounds  */
  YYSYMBOL_TypeName = 243,                 /* TypeName  */
  YYSYMBOL_ExpressionName = 244,           /* ExpressionName  */
  YYSYMBOL_MethodName = 245,               /* MethodName  */
  YYSYMBOL_PackageOrTypeName = 246,        /* PackageOrTypeName  */
  YYSYMBOL_AmbiguousName = 247,            /* AmbiguousName  */
  YYSYMBOL_ArrayInitializer = 248,         /* ArrayInitializer  */
  YYSYMBOL_VariableInitializerList_nt = 249, /* VariableInitializerList_nt  */
  YYSYMBOL_Comma_nt = 250,                 /* Comma_nt  */
  YYSYMBOL_VariableInitializerList = 251,  /* VariableInitializerList  */
  YYSYMBOL_VariableInitializer_comma_ntM = 252, /* VariableInitializer_comma_ntM  */
  YYSYMBOL_Block = 253,                    /* Block  */
  YYSYMBOL_BlockStatements = 254,          /* BlockStatements  */
  YYSYMBOL_BlockStatement_ntM = 255,       /* BlockStatement_ntM  */
  YYSYMBOL_BlockStatement = 256,           /* BlockStatement  */
  YYSYMBOL_LocalClassOrInterfaceDeclaration = 257, /* LocalClassOrInterfaceDeclaration  */
  YYSYMBOL_LocalVariableDeclarationStatement = 258, /* LocalVariableDeclarationStatement  */
  YYSYMBOL_LocalVariableDeclaration = 259, /* LocalVariableDeclaration  */
  YYSYMBOL_LocalVariableType = 260,        /* LocalVariableType  */
  YYSYMBOL_Statement = 261,                /* Statement  */
  YYSYMBOL_StatementNoShortIf = 262,       /* StatementNoShortIf  */
  YYSYMBOL_StatementWithoutTrailingSubstatement = 263, /* StatementWithoutTrailingSubstatement  */
  YYSYMBOL_EmptyStatement = 264,           /* EmptyStatement  */
  YYSYMBOL_LabeledStatement = 265,         /* LabeledStatement  */
  YYSYMBOL_LabeledStatementNoShortIf = 266, /* LabeledStatementNoShortIf  */
  YYSYMBOL_ExpressionStatement = 267,      /* ExpressionStatement  */
  YYSYMBOL_StatementExpression = 268,      /* StatementExpression  */
  YYSYMBOL_IfThenStatement = 269,          /* IfThenStatement  */
  YYSYMBOL_IfThenElseStatement = 270,      /* IfThenElseStatement  */
  YYSYMBOL_IfThenElseStatementNoShortIf = 271, /* IfThenElseStatementNoShortIf  */
  YYSYMBOL_AssertStatement = 272,          /* AssertStatement  */
  YYSYMBOL_SwitchStatement = 273,          /* SwitchStatement  */
  YYSYMBOL_SwitchBlock = 274,              /* SwitchBlock  */
  YYSYMBOL_SwitchRule_ntM = 275,           /* SwitchRule_ntM  */
  YYSYMBOL_SwitchBlockStatementGroup_ntM = 276, /* SwitchBlockStatementGroup_ntM  */
  YYSYMBOL_SwitchLabel_extender = 277,     /* SwitchLabel_extender  */
  YYSYMBOL_SwitchRule = 278,               /* SwitchRule  */
  YYSYMBOL_SwitchBlockStatementGroup = 279, /* SwitchBlockStatementGroup  */
  YYSYMBOL_SwitchLabel = 280,              /* SwitchLabel  */
  YYSYMBOL_CaseConstant_extender = 281,    /* CaseConstant_extender  */
  YYSYMBOL_CaseConstant = 282,             /* CaseConstant  */
  YYSYMBOL_WhileStatement = 283,           /* WhileStatement  */
  YYSYMBOL_WhileStatementNoShortIf = 284,  /* WhileStatementNoShortIf  */
  YYSYMBOL_DoStatement = 285,              /* DoStatement  */
  YYSYMBOL_ForStatement = 286,             /* ForStatement  */
  YYSYMBOL_ForStatementNoShortIf = 287,    /* ForStatementNoShortIf  */
  YYSYMBOL_BasicForStatement = 288,        /* BasicForStatement  */
  YYSYMBOL_Expression_nt = 289,            /* Expression_nt  */
  YYSYMBOL_ForInit_nt = 290,               /* ForInit_nt  */
  YYSYMBOL_ForUpdate_nt = 291,             /* ForUpdate_nt  */
  YYSYMBOL_BasicForStatementNoShortIf = 292, /* BasicForStatementNoShortIf  */
  YYSYMBOL_ForInit = 293,                  /* ForInit  */
  YYSYMBOL_ForUpdate = 294,                /* ForUpdate  */
  YYSYMBOL_StatementExpressionList = 295,  /* StatementExpressionList  */
  YYSYMBOL_StatementExpression_extender = 296, /* StatementExpression_extender  */
  YYSYMBOL_EnhancedForStatement = 297,     /* EnhancedForStatement  */
  YYSYMBOL_EnhancedForStatementNoShortIf = 298, /* EnhancedForStatementNoShortIf  */
  YYSYMBOL_BreakStatement = 299,           /* BreakStatement  */
  YYSYMBOL_Identifier_nt = 300,            /* Identifier_nt  */
  YYSYMBOL_YieldStatement = 301,           /* YieldStatement  */
  YYSYMBOL_ContinueStatement = 302,        /* ContinueStatement  */
  YYSYMBOL_ReturnStatement = 303,          /* ReturnStatement  */
  YYSYMBOL_ThrowStatement = 304,           /* ThrowStatement  */
  YYSYMBOL_SynchronizedStatement = 305,    /* SynchronizedStatement  */
  YYSYMBOL_TryStatement = 306,             /* TryStatement  */
  YYSYMBOL_Catches_nt = 307,               /* Catches_nt  */
  YYSYMBOL_Catches = 308,                  /* Catches  */
  YYSYMBOL_CatchClause_ntM = 309,          /* CatchClause_ntM  */
  YYSYMBOL_CatchClause = 310,              /* CatchClause  */
  YYSYMBOL_CatchFormalParameter = 311,     /* CatchFormalParameter  */
  YYSYMBOL_CatchType = 312,                /* CatchType  */
  YYSYMBOL_ClassType_extender = 313,       /* ClassType_extender  */
  YYSYMBOL_Finally_ntK = 314,              /* Finally_ntK  */
  YYSYMBOL_TryWithResourcesStatement = 315, /* TryWithResourcesStatement  */
  YYSYMBOL_Finally_ntK_nT = 316,           /* Finally_ntK_nT  */
  YYSYMBOL_ResourceSpecification = 317,    /* ResourceSpecification  */
  YYSYMBOL_Semicolon_nt = 318,             /* Semicolon_nt  */
  YYSYMBOL_ResourceList = 319,             /* ResourceList  */
  YYSYMBOL_Resource_extender = 320,        /* Resource_extender  */
  YYSYMBOL_Resource = 321,                 /* Resource  */
  YYSYMBOL_Pattern = 322,                  /* Pattern  */
  YYSYMBOL_TypePattern = 323,              /* TypePattern  */
  YYSYMBOL_Primary = 324,                  /* Primary  */
  YYSYMBOL_PrimaryNoNewArray = 325,        /* PrimaryNoNewArray  */
  YYSYMBOL_ClassLiteral = 326,             /* ClassLiteral  */
  YYSYMBOL_SquareBracket_ntM = 327,        /* SquareBracket_ntM  */
  YYSYMBOL_ClassInstanceCreationExpression = 328, /* ClassInstanceCreationExpression  */
  YYSYMBOL_UnqualifiedClassInstanceCreationExpression = 329, /* UnqualifiedClassInstanceCreationExpression  */
  YYSYMBOL_ClassBody_nt = 330,             /* ClassBody_nt  */
  YYSYMBOL_ClassOrInterfaceTypeToInstantiate = 331, /* ClassOrInterfaceTypeToInstantiate  */
  YYSYMBOL_Annotation_Identifier_extender = 332, /* Annotation_Identifier_extender  */
  YYSYMBOL_TypeArgumentsOrDiamond_nt = 333, /* TypeArgumentsOrDiamond_nt  */
  YYSYMBOL_TypeArgumentsOrDiamond = 334,   /* TypeArgumentsOrDiamond  */
  YYSYMBOL_FieldAccess = 335,              /* FieldAccess  */
  YYSYMBOL_ArrayAccess = 336,              /* ArrayAccess  */
  YYSYMBOL_MethodInvocation = 337,         /* MethodInvocation  */
  YYSYMBOL_ArgumentList = 338,             /* ArgumentList  */
  YYSYMBOL_Expression_extender = 339,      /* Expression_extender  */
  YYSYMBOL_MethodReference = 340,          /* MethodReference  */
  YYSYMBOL_ArrayCreationExpression = 341,  /* ArrayCreationExpression  */
  YYSYMBOL_DimExprs = 342,                 /* DimExprs  */
  YYSYMBOL_DimExpr_ntM = 343,              /* DimExpr_ntM  */
  YYSYMBOL_DimExpr = 344,                  /* DimExpr  */
  YYSYMBOL_Expression = 345,               /* Expression  */
  YYSYMBOL_LambdaExpression = 346,         /* LambdaExpression  */
  YYSYMBOL_LambdaParameters = 347,         /* LambdaParameters  */
  YYSYMBOL_LambdaParameterList_nt = 348,   /* LambdaParameterList_nt  */
  YYSYMBOL_LambdaParameterList = 349,      /* LambdaParameterList  */
  YYSYMBOL_LambdaParameter_extender = 350, /* LambdaParameter_extender  */
  YYSYMBOL_Identifier_extender_Comma = 351, /* Identifier_extender_Comma  */
  YYSYMBOL_LambdaParameter = 352,          /* LambdaParameter  */
  YYSYMBOL_LambdaParameterType = 353,      /* LambdaParameterType  */
  YYSYMBOL_LambdaBody = 354,               /* LambdaBody  */
  YYSYMBOL_AssignmentExpression = 355,     /* AssignmentExpression  */
  YYSYMBOL_Assignment = 356,               /* Assignment  */
  YYSYMBOL_LeftHandSide = 357,             /* LeftHandSide  */
  YYSYMBOL_AssignmentOperator = 358,       /* AssignmentOperator  */
  YYSYMBOL_ConditionalExpression = 359,    /* ConditionalExpression  */
  YYSYMBOL_ConditionalOrExpression = 360,  /* ConditionalOrExpression  */
  YYSYMBOL_ConditionalAndExpression = 361, /* ConditionalAndExpression  */
  YYSYMBOL_InclusiveOrExpression = 362,    /* InclusiveOrExpression  */
  YYSYMBOL_ExclusiveOrExpression = 363,    /* ExclusiveOrExpression  */
  YYSYMBOL_AndExpression = 364,            /* AndExpression  */
  YYSYMBOL_EqualityExpression = 365,       /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 366,     /* RelationalExpression  */
  YYSYMBOL_InstanceofExpression = 367,     /* InstanceofExpression  */
  YYSYMBOL_ShiftExpression = 368,          /* ShiftExpression  */
  YYSYMBOL_AdditiveExpression = 369,       /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 370, /* MultiplicativeExpression  */
  YYSYMBOL_UnaryExpression = 371,          /* UnaryExpression  */
  YYSYMBOL_PreIncrementExpression = 372,   /* PreIncrementExpression  */
  YYSYMBOL_PreDecrementExpression = 373,   /* PreDecrementExpression  */
  YYSYMBOL_UnaryExpressionNotPlusMinus = 374, /* UnaryExpressionNotPlusMinus  */
  YYSYMBOL_PostfixExpression = 375,        /* PostfixExpression  */
  YYSYMBOL_PostIncrementExpression = 376,  /* PostIncrementExpression  */
  YYSYMBOL_PostDecrementExpression = 377,  /* PostDecrementExpression  */
  YYSYMBOL_CastExpression = 378,           /* CastExpression  */
  YYSYMBOL_SwitchExpression = 379,         /* SwitchExpression  */
  YYSYMBOL_VariableAccess = 380,           /* VariableAccess  */
  YYSYMBOL_Annotation = 381,               /* Annotation  */
  YYSYMBOL_NormalAnnotation = 382,         /* NormalAnnotation  */
  YYSYMBOL_ElementValuePairList = 383,     /* ElementValuePairList  */
  YYSYMBOL_ElementValuePair_extender = 384, /* ElementValuePair_extender  */
  YYSYMBOL_ElementValuePair = 385,         /* ElementValuePair  */
  YYSYMBOL_ElementValue = 386,             /* ElementValue  */
  YYSYMBOL_ElementValueArrayInitializer = 387, /* ElementValueArrayInitializer  */
  YYSYMBOL_ElementValueList_nt = 388,      /* ElementValueList_nt  */
  YYSYMBOL_ElementValueList = 389,         /* ElementValueList  */
  YYSYMBOL_ElementValue_extender = 390,    /* ElementValue_extender  */
  YYSYMBOL_MarkerAnnotation = 391,         /* MarkerAnnotation  */
  YYSYMBOL_SingleElementAnnotation = 392   /* SingleElementAnnotation  */
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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3934

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  134
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  259
/* YYNRULES -- Number of rules.  */
#define YYNRULES  541
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  930

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
       0,    44,    44,    47,    51,    52,    54,    55,    60,    65,
      72,    76,    77,    79,    80,    82,    83,    85,    86,    88,
      89,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   107,   110,   112,   113,   117,   120,   125,   127,   128,
     133,   135,   136,   140,   142,   143,   146,   147,   148,   149,
     152,   153,   154,   155,   158,   160,   161,   164,   165,   166,
     167,   168,   169,   170,   171,   174,   176,   177,   180,   182,
     183,   186,   188,   189,   192,   193,   196,   197,   200,   201,
     204,   205,   206,   209,   210,   213,   214,   216,   217,   219,
     220,   223,   226,   229,   230,   231,   235,   237,   238,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   254,
     255,   257,   258,   261,   262,   265,   267,   268,   270,   271,
     274,   276,   277,   280,   282,   283,   286,   287,   289,   290,
     293,   296,   297,   300,   303,   305,   306,   309,   310,   313,
     314,   317,   320,   323,   325,   326,   329,   330,   331,   332,
     335,   338,   341,   343,   344,   346,   347,   350,   351,   352,
     353,   355,   356,   361,   364,   367,   368,   369,   370,   371,
     372,   373,   380,   381,   384,   385,   388,   389,   390,   391,
     392,   395,   396,   399,   400,   401,   404,   405,   408,   409,
     412,   415,   418,   419,   420,   423,   425,   426,   429,   431,
     432,   434,   435,   437,   440,   441,   443,   444,   447,   450,
     453,   455,   456,   459,   460,   463,   465,   466,   469,   470,
     482,   483,   486,   487,   490,   493,   494,   497,   498,   501,
     503,   504,   506,   507,   510,   512,   513,   517,   520,   522,
     523,   527,   528,   529,   532,   535,   538,   541,   542,   545,
     546,   547,   548,   549,   550,   553,   554,   555,   556,   557,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   575,   578,   581,   584,   587,   588,   589,
     590,   591,   592,   593,   596,   599,   602,   605,   606,   609,
     612,   613,   615,   616,   618,   619,   621,   622,   625,   626,
     627,   630,   633,   634,   636,   637,   640,   643,   646,   649,
     652,   653,   656,   657,   660,   662,   663,   665,   666,   668,
     669,   672,   675,   676,   679,   682,   684,   685,   688,   691,
     694,   696,   697,   700,   703,   706,   709,   712,   715,   716,
     719,   720,   723,   725,   726,   729,   732,   735,   737,   738,
     741,   744,   746,   747,   750,   752,   753,   756,   758,   759,
     762,   763,   766,   769,   774,   775,   778,   779,   780,   781,
     782,   783,   784,   785,   786,   787,   790,   791,   792,   793,
     795,   796,   799,   800,   801,   804,   806,   807,   810,   812,
     813,   815,   816,   819,   820,   823,   824,   825,   828,   829,
     832,   833,   834,   835,   836,   837,   840,   842,   843,   846,
     847,   848,   849,   850,   851,   852,   855,   856,   857,   858,
     861,   863,   864,   867,   870,   871,   874,   877,   878,   880,
     881,   884,   885,   887,   888,   890,   891,   894,   895,   898,
     899,   902,   903,   906,   907,   910,   913,   914,   915,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   928,
     929,   931,   932,   933,   934,   936,   937,   938,   941,   942,
     945,   946,   949,   950,   953,   954,   957,   958,   959,   962,
     963,   964,   965,   966,   967,   970,   971,   974,   975,   976,
     977,   980,   981,   982,   985,   986,   987,   988,   991,   992,
     993,   994,   995,   998,  1001,  1004,  1005,  1006,  1007,  1008,
    1011,  1012,  1013,  1014,  1017,  1020,  1023,  1024,  1025,  1028,
    1034,  1035,  1039,  1040,  1041,  1044,  1045,  1048,  1050,  1051,
    1054,  1057,  1058,  1059,  1062,  1064,  1065,  1068,  1070,  1071,
    1074,  1077
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
  "This", "Break", "Double", "Implements", "Protected", "Throw", "Byte",
  "Else", "Import", "Public", "Throws", "Case", "Enum", "Instanceof",
  "Return", "Transient", "Catch", "Extends", "Int", "Short", "Try", "Char",
  "Final", "Interface", "Static", "Void", "Class", "Finally", "Long",
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
  "$accept", "CompilationUnit", "ModularCompilationUnit",
  "OrdinaryCompilationUnit", "TopLevelClassOrInterfaceDeclaration",
  "ClassDeclaration", "NormalClassDeclaration", "ClassModifier_ntM",
  "TypeParamaters_nt", "ClassExtends_nt", "ClassImplements_nt",
  "ClassPermits_nt", "ClassModifier", "TypeParameters",
  "TypeParameterList", "Typerparameter_extender", "ClassExtends",
  "ClassImplements", "InterfaceTypeList", "InterfaceType_extender",
  "ClassPermits", "TypeName_extender", "ClassBody",
  "ClassBodyDeclaration_ntM", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "FieldModifier_ntM",
  "FieldModifier", "VariableDeclaratorList", "VariableDeclarator_extender",
  "VariableDeclarator", "VariableInitializer_extender",
  "VariableDeclaratorId", "Dims_nt", "VariableInitializer", "UannType",
  "UannPrimitiveType", "UannReferenceType", "UannClassOrInterfaceType",
  "UannClassType", "TypeArguments_nt", "Annotation_ntM",
  "UannInterfaceType", "UannTypeVariable", "UannArrayType",
  "MethodDeclaration", "MethodModifier_ntM", "MethodModifier",
  "MethodHeader", "Throws_nt", "Result", "MethodDeclarator",
  "ReceiverParameter_extender", "FormalParameterList_nt",
  "RecieverParameter", "Identifier_extender_Dot", "FormalParameterList",
  "FormalParameter_extender", "FormalParameter", "VariableModifier_ntM",
  "VariableArityParameter", "VariableModifier", "Throws_ntK",
  "ExceptionListType", "ExceptionType_extender", "ExceptionType",
  "MethodBody", "InstanceInitializer", "StaticInitializer",
  "ConstructorDeclaration", "ConstructorModifier_ntM",
  "ConstructorModifier", "ConstructorDeclarator", "SimpleTypeName",
  "ConstructorBody", "ExplicitConstructorInvocation_nt",
  "BlockStatements_nt", "ExplicitConstructorInvocation", "ArgumentList_nt",
  "UnqualifiedMethodIdentifier", "TypeIdentifier", "Literal",
  "PrimitiveType", "NumericType", "IntegralType", "FloatingPointType",
  "ReferenceType", "ClassOrInterfaceType", "ClassType", "InterfaceType",
  "TypeVariable", "ArrayType", "Dims", "Annotation_extender_bracket",
  "TypeParameter", "TypeParameterModifier_ntM", "TypeBound_nt",
  "TypeParameterModifier", "TypeBound", "AdditionalBound_ntM",
  "AdditionalBound", "TypeArguments", "TypeArgumentList",
  "TypeArgument_extender", "TypeArgument", "WildCard", "WildCardBounds_nt",
  "WildCardBounds", "TypeName", "ExpressionName", "MethodName",
  "PackageOrTypeName", "AmbiguousName", "ArrayInitializer",
  "VariableInitializerList_nt", "Comma_nt", "VariableInitializerList",
  "VariableInitializer_comma_ntM", "Block", "BlockStatements",
  "BlockStatement_ntM", "BlockStatement",
  "LocalClassOrInterfaceDeclaration", "LocalVariableDeclarationStatement",
  "LocalVariableDeclaration", "LocalVariableType", "Statement",
  "StatementNoShortIf", "StatementWithoutTrailingSubstatement",
  "EmptyStatement", "LabeledStatement", "LabeledStatementNoShortIf",
  "ExpressionStatement", "StatementExpression", "IfThenStatement",
  "IfThenElseStatement", "IfThenElseStatementNoShortIf", "AssertStatement",
  "SwitchStatement", "SwitchBlock", "SwitchRule_ntM",
  "SwitchBlockStatementGroup_ntM", "SwitchLabel_extender", "SwitchRule",
  "SwitchBlockStatementGroup", "SwitchLabel", "CaseConstant_extender",
  "CaseConstant", "WhileStatement", "WhileStatementNoShortIf",
  "DoStatement", "ForStatement", "ForStatementNoShortIf",
  "BasicForStatement", "Expression_nt", "ForInit_nt", "ForUpdate_nt",
  "BasicForStatementNoShortIf", "ForInit", "ForUpdate",
  "StatementExpressionList", "StatementExpression_extender",
  "EnhancedForStatement", "EnhancedForStatementNoShortIf",
  "BreakStatement", "Identifier_nt", "YieldStatement", "ContinueStatement",
  "ReturnStatement", "ThrowStatement", "SynchronizedStatement",
  "TryStatement", "Catches_nt", "Catches", "CatchClause_ntM",
  "CatchClause", "CatchFormalParameter", "CatchType", "ClassType_extender",
  "Finally_ntK", "TryWithResourcesStatement", "Finally_ntK_nT",
  "ResourceSpecification", "Semicolon_nt", "ResourceList",
  "Resource_extender", "Resource", "Pattern", "TypePattern", "Primary",
  "PrimaryNoNewArray", "ClassLiteral", "SquareBracket_ntM",
  "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression", "ClassBody_nt",
  "ClassOrInterfaceTypeToInstantiate", "Annotation_Identifier_extender",
  "TypeArgumentsOrDiamond_nt", "TypeArgumentsOrDiamond", "FieldAccess",
  "ArrayAccess", "MethodInvocation", "ArgumentList", "Expression_extender",
  "MethodReference", "ArrayCreationExpression", "DimExprs", "DimExpr_ntM",
  "DimExpr", "Expression", "LambdaExpression", "LambdaParameters",
  "LambdaParameterList_nt", "LambdaParameterList",
  "LambdaParameter_extender", "Identifier_extender_Comma",
  "LambdaParameter", "LambdaParameterType", "LambdaBody",
  "AssignmentExpression", "Assignment", "LeftHandSide",
  "AssignmentOperator", "ConditionalExpression", "ConditionalOrExpression",
  "ConditionalAndExpression", "InclusiveOrExpression",
  "ExclusiveOrExpression", "AndExpression", "EqualityExpression",
  "RelationalExpression", "InstanceofExpression", "ShiftExpression",
  "AdditiveExpression", "MultiplicativeExpression", "UnaryExpression",
  "PreIncrementExpression", "PreDecrementExpression",
  "UnaryExpressionNotPlusMinus", "PostfixExpression",
  "PostIncrementExpression", "PostDecrementExpression", "CastExpression",
  "SwitchExpression", "VariableAccess", "Annotation", "NormalAnnotation",
  "ElementValuePairList", "ElementValuePair_extender", "ElementValuePair",
  "ElementValue", "ElementValueArrayInitializer", "ElementValueList_nt",
  "ElementValueList", "ElementValue_extender", "MarkerAnnotation",
  "SingleElementAnnotation", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-764)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-534)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     701,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
      98,  -764,    70,  -764,  -764,   842,  -764,  -764,    20,  1313,
    -764,  -764,  -764,  -764,    53,  2585,  -764,    86,    97,  -764,
    -764,    15,  -764,    85,   111,     6,  -764,  -764,  -764,  -764,
    -764,  -764,   115,  -764,  -764,    89,    24,  -764,    73,  -764,
    -764,  -764,  -764,  -764,  2339,  2913,  3569,  3569,  3569,  3569,
    3569,  3569,   141,   187,  -764,  1308,  -764,   141,  -764,  -764,
      93,  -764,   141,   217,  -764,  -764,   166,   260,   182,  -764,
     279,   198,   237,    88,   238,   245,   129,   248,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,   -24,   249,   232,
     244,   254,   132,   117,  -764,   295,   104,   207,  -764,  -764,
    -764,  -764,   302,  -764,  -764,  -764,  -764,   163,   291,  -764,
     319,   322,  -764,   287,  2532,   141,  1308,   141,   220,    42,
    -764,   141,  2913,   337,   350,   396,    -8,    93,  -764,   378,
    -764,    73,  1845,   242,   -21,  3805,  1371,  2588,   375,  -764,
     366,  -764,  -764,  1318,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,   376,  -764,   141,  -764,  -764,    93,  -764,  -764,  -764,
    -764,   386,    93,   141,  -764,    93,  -764,   452,     9,   390,
      30,  2995,    93,  2667,   408,    14,    93,  2995,  3077,  3569,
    3569,  3569,  3569,  3569,  3569,  3569,   888,  3569,  3569,  3569,
    3569,  3569,  3569,  3569,  3569,  3569,  3569,  3569,  3569,  -764,
    -764,  -764,  -764,   385,   395,  -764,  -764,  -764,   141,   439,
    -764,  -764,    13,    93,  -764,  -764,   404,  -764,   361,   422,
    -764,   432,   426,    93,   424,   434,   279,   279,   434,   279,
     436,     6,   463,  -764,  -764,   460,   461,   453,  -764,  -764,
    -764,   411,   218,  -764,    10,   448,  -764,   455,    25,  3569,
     141,   468,   431,  -764,  3159,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  3651,   469,    15,
    -764,   491,   492,    15,   543,  -764,  -764,   199,   496,   507,
      93,   505,  -764,   485,   509,   489,  -764,   498,  -764,  -764,
     512,  -764,   513,   493,   488,   249,   232,   244,   254,   132,
     117,   117,    15,  1158,  -764,  -764,  -764,  -764,   295,   295,
     295,   295,   104,   104,   104,   207,   207,  -764,  -764,  -764,
    2339,  -764,   517,   456,   521,    15,   141,  -764,   141,   554,
    -764,   131,  -764,  2532,  -764,   508,  2667,  3241,  2421,  -764,
    -764,  -764,   515,  -764,   279,  -764,  -764,   523,  -764,  -764,
     522,  -764,  2339,   542,  -764,  -764,    -2,   279,  -764,   286,
     279,  -764,   550,  -764,  -764,  -764,    10,  -764,  -764,    15,
     404,   527,  3819,  -764,  1938,  -764,  -764,  -764,  -764,   279,
      93,  -764,  -764,    93,  -764,     1,    93,   536,  -764,   537,
    -764,  -764,  -764,  2749,  -764,   539,  -764,  -764,  3651,  -764,
    -764,   550,  -764,   319,  -764,   141,  -764,   578,  -764,   546,
     141,   622,  -764,  2532,  2532,  -764,  -764,   422,   141,   524,
     555,   553,   556,  -764,   378,  -764,  -764,  2995,  -764,   146,
    -764,  2667,  -764,   564,   565,   279,  -764,   455,  -764,  -764,
    3323,   582,   569,   570,  2749,   573,   574,  2196,   582,  3323,
    3405,   580,  1840,   584,   139,  -764,  2913,  -764,   589,  -764,
    -764,  2029,  -764,  -764,   590,  -764,  -764,  -764,  -764,  -764,
     591,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,   176,   275,  -764,
    -764,  -764,   302,   313,   346,  1039,   588,  -764,  -764,  -764,
    -764,   613,   614,  2667,  2667,   498,  2667,  -764,  -764,  -764,
     605,   592,  -764,   521,   141,  -764,  -764,  -764,   298,   618,
     606,  -764,  -764,  -764,  -764,   620,   863,  -764,  -764,  -764,
     606,  -764,  2421,  -764,   609,  -764,  2831,   146,   146,   146,
     306,   616,  -764,   624,  -764,  -764,   623,  -764,   625,  3716,
    2913,   -28,  2913,  2913,   638,   627,   629,   632,  -764,   659,
    2913,  2196,  -764,  -764,  2029,  -764,  -764,   630,   635,  -764,
     636,   637,  -764,   639,   550,  -764,  3487,  -764,  -764,   -26,
    -764,   141,  -764,   641,  1546,  -764,   508,  -764,  -764,  -764,
     556,  -764,   646,  -764,   645,   633,   651,   146,   631,  -764,
     640,   146,  2503,  -764,  -764,  -764,  -764,   643,   654,   658,
    -764,  -764,   656,  -764,  3323,   657,   660,   652,  -764,  -764,
    -764,   662,   687,   691,   659,   663,  -764,  -764,   279,  2667,
    -764,  -764,  -764,   605,  -764,  -764,   298,   618,  -764,  1221,
    -764,  1240,  1482,  1640,  -764,  1679,   458,  1560,  -764,  -764,
    -764,  -764,   668,  1546,  -764,  -764,  1011,   433,  -764,   547,
    1697,  -764,  -764,  -764,   287,    95,  -764,  1718,  -764,  -764,
    2831,  -764,  -764,   146,  -764,  -764,  2120,  -764,  -764,   671,
    2913,  3768,  -764,  3405,   523,   673,  2272,   580,  2913,    10,
     580,   709,  -764,   659,  2196,  -764,   675,  -764,  -764,   641,
    -764,  -764,  -764,   550,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,   141,  -764,   303,   695,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,    15,   724,  -764,  -764,  -764,
    -764,  -764,   646,  -764,  -764,  -764,   680,   654,   685,  -764,
    -764,   684,   688,   692,   197,  -764,   741,   742,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,   694,    15,   696,  -764,   700,
    -764,  -764,  -764,  -764,  -764,   698,  2334,  -764,  -764,  -764,
     702,   724,   705,  -764,   141,   711,  -764,  -764,  2196,  -764,
    3768,  3716,  2913,  2913,  2272,  2196,   712,   713,    -9,    93,
     550,   580,  1763,   580,  -764,   695,   122,  -764,   122,  -764,
     716,   546,  -764,  1611,  -764,  -764,   715,  -764,  -764,   706,
     721,   722,   723,  -764,  -764,  -764,   141,  -764,  -764,  -764,
    -764,  -764,   729,   730,  -764,  -764,   659,   724,  1011,   184,
     718,   184,   141,  -764,    45,  1938,  -764,   110,   216,  2196,
    2913,  3405,  2272,  2272,    -9,  -764,   725,  1763,  -764,   687,
    -764,  -764,   752,   744,  -764,   753,  1011,  -764,  -764,   749,
     716,   754,   755,   759,    30,    14,  -764,   751,   760,   809,
    -764,  -764,  -764,   730,  -764,  -764,   763,   819,   279,    10,
    -764,    94,  -764,  -764,  2667,  2667,  -764,   315,   321,  2272,
    3768,  2272,  -764,  -764,  -764,  -764,   753,  -764,   765,   766,
     768,   770,  -764,   774,  -764,  -764,   789,   790,  2667,  2667,
    2272,  -764,  -764,   791,   792,  -764,   797,   799,  -764,  -764
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       4,    28,    29,    25,    23,    24,    22,    27,    26,    30,
       0,     5,     0,     3,     2,     6,     8,     9,     0,    11,
      21,   522,   523,   524,   164,   465,   220,   540,     0,     1,
       7,     0,    12,    89,     0,   380,   368,   182,   176,   178,
     177,   180,     0,   179,   181,     0,   167,   171,   222,   165,
     166,   168,   170,   169,   461,   465,     0,     0,     0,     0,
       0,     0,    89,    89,    83,     0,    84,    89,   185,   224,
      87,   366,    89,    78,   174,   175,     0,   183,   186,   187,
     184,     0,     0,   511,     0,     0,   510,   364,   367,   371,
     382,   372,   373,   374,   375,   365,   531,   462,   466,   468,
     470,   472,   474,   476,   484,   479,   487,   491,   494,   498,
     499,   502,   505,   512,   513,   508,   509,    89,     0,   532,
       0,     0,   164,    13,    89,    89,     0,    89,    89,   186,
      88,    89,   465,     0,     0,     0,     0,    87,   538,   232,
     536,   222,   465,    89,   206,   511,   372,   373,     0,   424,
       0,   425,   444,     0,   443,   507,   506,   503,   504,   500,
     501,     0,    93,    89,    94,   173,    87,   172,    95,    85,
     192,     0,    87,    89,   193,    87,   194,     0,    87,     0,
      87,   465,    87,   465,     0,     0,    87,   465,   465,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   514,
     515,    90,   541,     0,     0,   528,   164,   221,   199,    15,
      14,    79,     0,    87,    78,   213,   183,   184,     0,   211,
     214,     0,     0,    87,     0,     0,    72,   421,     0,    72,
       0,   380,     0,   379,   396,     0,     0,   537,   233,   534,
     132,   222,     0,   438,   128,     0,   430,   433,    89,     0,
      89,     0,   206,   370,   461,   449,   457,   453,   454,   450,
     451,   458,   460,   459,   452,   455,   456,   461,     0,     0,
     188,     0,     0,     0,     0,   415,   369,     0,     0,     0,
      87,     0,   383,     0,     0,     0,   162,   407,   223,   395,
       0,   384,     0,     0,     0,   467,   469,   471,   473,   475,
     477,   478,     0,     0,   485,   363,   486,   362,   483,   482,
     481,   480,   488,   489,   490,   492,   493,   495,   496,   497,
     461,   525,   527,     0,    33,     0,   199,   203,    89,    17,
      16,   216,   209,    89,   210,   389,   465,   465,   230,   418,
     416,    73,     0,   420,   421,   419,   417,     0,   381,   378,
       0,   412,   461,     0,   432,   440,    89,    76,    77,    80,
      81,    82,     0,   129,   131,   427,   128,   431,   516,     0,
       0,   208,     0,   207,    11,   442,   441,   426,   445,   196,
      87,   377,   411,    87,   414,     0,    87,     0,   376,     0,
     398,   409,   400,   461,   406,     0,   410,   399,   461,   248,
     247,     0,   530,     0,    31,   199,    32,   201,   200,    35,
      89,    19,    18,     0,     0,   215,   217,   211,    89,   391,
       0,     0,   235,    75,   232,   231,    74,   465,   422,   294,
     519,   465,   539,   435,     0,    72,   437,   433,   518,   517,
     465,   331,     0,     0,   461,     0,     0,     0,   331,   465,
     465,     0,    27,     0,   222,   273,   465,   244,     0,   260,
     156,   239,   241,   242,     0,   243,   249,   261,   250,   262,
       0,   251,   252,   263,   264,   253,   265,   254,   310,   311,
     266,   272,   267,   268,   270,   269,   271,   371,   374,   277,
     278,   279,     0,   280,   281,    21,     0,   195,    86,   189,
     397,     0,     0,   465,   465,   407,   465,   464,   463,   246,
      66,    69,   529,    33,    89,   198,   202,    36,    38,     0,
       0,    20,   218,   219,   212,     0,    89,   393,   388,   392,
     386,   423,   461,   234,     0,   303,   461,   296,   292,   294,
       0,     0,   436,     0,    71,   434,     0,   332,     0,   128,
     465,     0,   465,   465,     0,     0,     0,     0,   316,   340,
     465,     0,   237,   238,   239,   245,   276,     0,     0,   413,
       0,     0,   408,     0,     0,    65,   461,    68,    34,   206,
     204,    89,    37,    41,    55,    10,   389,   394,   387,   385,
     235,   229,   304,   306,     0,     0,     0,   292,     0,   295,
       0,   296,   465,   404,   130,   333,   334,   323,   326,     0,
     318,   322,     0,   287,   465,     0,     0,     0,   330,   336,
     335,     0,     0,   338,   343,     0,   274,   240,   196,   465,
     401,   402,   403,    66,    70,   205,    38,     0,    40,   103,
     106,    23,    24,    22,    63,    27,    26,   108,    64,   107,
      53,    52,     0,    55,    46,    50,     0,    55,    51,     0,
      97,    47,    48,    49,    13,   144,   141,    21,   390,   236,
     461,   302,   291,   296,   290,   293,    11,   299,   300,     0,
     465,     0,   325,   465,     0,     0,     0,     0,   465,   128,
       0,     0,   342,   343,     0,   197,     0,    67,    39,    41,
     142,    43,    45,     0,    60,    59,    58,    62,    61,    56,
      57,   114,    89,   113,     0,     0,   103,   101,   102,   100,
     105,   104,   108,    98,    99,     0,   111,   148,   149,   147,
     145,   146,   304,   297,   301,   298,     0,   326,     0,   289,
     288,     0,     0,     0,   222,   284,     0,   249,   256,   257,
     258,   259,   312,   313,   337,     0,     0,     0,   350,     0,
     339,   344,   307,   405,    42,     0,     0,   140,    96,   139,
       0,   111,     0,   151,    89,     0,   112,   305,     0,   327,
     319,   128,   465,   465,     0,     0,     0,     0,    83,    87,
       0,     0,   461,     0,    54,     0,    89,   109,    89,   133,
     135,   137,   138,   153,   143,   328,     0,   320,   324,   323,
       0,     0,     0,   275,   285,   309,    89,   347,   346,   345,
     521,   360,   355,   358,   520,   361,   340,   111,     0,   128,
       0,   128,    89,   134,     0,    11,   154,     0,     0,     0,
     465,   465,     0,     0,   186,   356,     0,   461,   357,   352,
     341,   110,   121,     0,   119,   124,     0,   127,   117,     0,
     135,     0,     0,     0,    87,    87,   314,     0,     0,     0,
     308,   349,   354,   358,   353,   351,     0,     0,    72,   128,
     123,    89,   150,   136,   465,   465,   152,     0,     0,     0,
     319,     0,   359,   122,   120,   115,   124,   126,     0,     0,
       0,     0,   329,     0,   286,   125,     0,     0,   465,   465,
       0,   157,   158,     0,     0,   321,     0,     0,   159,   160
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -764,  -764,  -764,   845,  -764,     8,  -764,   859,   212,  -764,
    -764,  -764,  -764,   219,  -764,   364,  -764,  -764,  -764,   246,
    -764,   181,   353,   228,  -764,  -764,  -764,   229,  -764,   190,
     252,   316,  -764,  -350,  -236,  -482,  -247,  -207,  -764,  -206,
     142,   -27,   -29,  -764,  -197,  -184,  -764,   235,  -764,  -764,
    -737,   135,   102,   105,    71,  -764,  -764,  -764,    12,    27,
    -141,  -129,  -764,  -764,  -764,    50,    84,  -764,  -764,  -764,
    -764,   258,  -764,  -764,  -764,  -764,  -764,    99,  -764,  -322,
    -764,    -1,  -764,    26,   -49,  -764,  -764,    28,   -23,   -16,
    -248,   -68,  -764,   178,   300,   514,   612,  -764,  -764,  -764,
    -244,  -764,   516,  -764,   525,   607,  -764,  -764,  -764,     4,
     241,  -764,  -764,  -764,  -209,  -764,   533,  -764,   355,    17,
     265,   384,  -424,  -764,  -764,  -176,  -764,   420,  -763,  -503,
    -764,  -764,  -764,  -764,  -548,  -764,  -764,  -764,  -764,  -764,
     288,   373,   435,  -562,   544,  -764,  -418,   243,   307,  -764,
    -764,  -764,  -764,  -764,  -764,  -666,   195,    90,  -764,  -764,
    -764,  -751,   251,  -764,  -764,  -764,   531,  -764,  -764,  -764,
     381,  -764,  -764,   159,   160,   294,  -581,  -764,  -764,   165,
     164,  -764,  -764,  -764,  -764,  -764,   144,   167,  -764,  -764,
     209,  -764,  -764,   -41,   250,  -178,  -764,  -764,   429,  -764,
    -764,   771,   810,   335,  -764,   518,  -764,  -764,   900,   678,
    -200,    80,  -315,  -764,  -764,  -764,   596,   586,   672,  -764,
    -764,  -764,   351,  -764,  -764,     3,  -764,   846,   861,   862,
     844,   864,   208,  -764,   438,   223,   253,   495,   535,   563,
     670,   604,   686,   728,  -764,  -764,  -764,     0,  -764,  -764,
    -764,   647,   -14,  -764,  -764,  -764,  -764,  -764,  -764
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    12,    13,    14,    15,   467,    17,    18,   219,   339,
     421,   530,    19,   220,   333,   416,   340,   422,   527,   592,
     531,   648,   595,   662,   663,   664,   665,   666,   667,   519,
     585,   520,   587,   521,   350,   432,   723,    62,   368,    63,
      64,   169,    65,    66,    67,    68,   668,   669,   670,   724,
     785,   725,   781,   839,   863,   840,   887,   864,   890,   865,
     313,   867,   254,   786,   809,   843,   810,   778,   671,   672,
     673,   674,   675,   736,   782,   814,   845,   468,   846,   295,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,   351,   507,   334,   335,   525,   336,   526,
     261,   262,   130,   228,   344,   229,   230,   425,   426,    82,
     145,    84,    28,    85,   433,   434,   249,   435,   543,   469,
     470,   573,   471,   472,   473,   474,   411,   475,   756,   476,
     477,   478,   758,   479,   480,   481,   482,   759,   483,   484,
     440,   606,   547,   604,   607,   549,   605,   681,   602,   485,
     760,   486,   487,   761,   488,   567,   619,   816,   762,   620,
     817,   621,   692,   489,   763,   490,   558,   491,   492,   493,
     494,   495,   496,   632,   633,   702,   634,   767,   800,   827,
     701,   770,   885,   803,   856,   832,   858,   833,   316,   317,
      86,    87,    88,   134,    89,    90,   599,   232,   429,   538,
     539,   146,   147,    93,   296,   404,    94,    95,   236,   353,
     237,   297,   149,   150,   255,   256,   377,   364,   257,   372,
     387,   151,   152,   153,   277,   154,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   835,   131,    21,   214,
     332,   215,   118,   119,   139,   140,   247,    22,    23
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,   252,   292,   356,   126,   366,   125,   301,    16,    26,
     128,   618,   381,   253,    27,    20,   167,   129,   383,    20,
     315,   550,   446,    16,   430,   117,   349,   748,    96,   355,
     123,   823,   171,   161,   161,  -131,   290,   354,   161,   818,
     138,   179,   286,   161,   807,   367,   369,   574,   161,   686,
    -190,   161,   290,   703,   117,   370,   227,    96,   623,   127,
     600,   173,  -348,   244,   166,   250,   410,   448,   371,  -439,
      29,   624,   510,   172,   188,   224,   287,   167,   871,    31,
    -131,   143,   189,   144,   122,   299,   122,   260,   211,   879,
     880,    10,   260,   517,  -131,   222,   231,   133,   234,   234,
     861,   226,   211,    10,   644,   826,   367,   369,   129,   245,
     246,   341,   872,   373,   161,   -79,   370,   -79,    10,   551,
     217,   743,   703,   223,   124,   233,  -190,   737,   227,   371,
     608,   610,   738,   124,   279,   148,   912,   739,   914,   280,
    -225,   124,   258,   747,   283,   282,   124,   224,   284,   818,
     574,   288,   225,   291,   354,   294,   -87,   925,   300,   302,
    -164,  -163,   124,   196,  -164,   445,  -164,   312,   143,    24,
     144,   545,   528,   226,   120,   180,   136,  -116,    10,   181,
     129,   423,   182,   137,   121,   878,    25,    10,    10,   608,
     546,   580,   581,   757,   583,   223,   258,   874,   424,   132,
     358,   181,   135,   224,   182,  -164,   280,   161,   352,   554,
     161,  -116,   240,   204,   205,    10,   185,   124,   337,   197,
     198,   166,   148,   186,   314,   124,  -164,  -163,   365,   211,
    -164,   379,  -164,   194,    10,   252,   195,   380,   571,   250,
     162,   164,   618,   618,   129,   168,  -533,   253,   199,   200,
     170,   223,  -533,    37,   374,   174,    10,    38,   176,  -283,
     172,   293,  -283,   125,   224,  -283,    83,   303,   304,    39,
      40,  -164,    41,  -118,   163,   227,   175,    10,   390,    43,
      10,   385,   393,    44,  -164,  -163,   395,   221,  -164,   122,
    -164,   757,   177,   396,   224,    83,   794,    83,    83,    83,
      83,    83,    83,   875,  -380,   235,   238,   173,   133,   379,
     186,   166,   223,    10,   222,   380,   412,   706,   206,   207,
     226,   170,   419,   208,   178,   352,   183,   129,   133,  -164,
     117,   259,   184,    96,   417,    10,   337,   444,   161,   187,
     161,   161,   223,   646,   386,   645,   191,   173,   442,   757,
     757,   -89,   618,    10,   190,   227,   227,   388,  -282,   192,
     506,  -282,   117,   508,  -282,    96,   509,   193,   511,   512,
     -89,   225,    10,   163,   224,   224,   374,   -89,   233,    10,
     212,   591,   910,   617,   505,  -187,   399,   384,   911,   777,
     213,   379,   405,   216,   312,   312,   757,   380,   757,   535,
     226,   226,   310,   311,   129,   611,   612,   129,   129,   209,
     210,   518,   201,   202,   203,   337,   161,   757,   218,   713,
    -512,  -512,   223,   223,   322,   323,   324,   431,   436,   241,
      83,    83,    83,    83,    83,    83,    83,   242,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
     828,   532,   533,  -513,  -513,   243,   590,   325,   326,   367,
     369,   248,   367,   369,   263,   714,   264,   278,   227,   370,
     715,   505,   370,   281,   285,   716,   211,   289,   569,   298,
     330,   654,   371,   515,   331,   371,  -104,   224,   717,   338,
     718,   173,   342,   -61,   363,   312,   658,   -61,  -164,  -163,
      83,   589,  -164,   345,  -164,   343,   -61,   222,   129,   -61,
     -61,  -428,   -61,   226,   346,   347,  -104,   431,   348,   -61,
     129,   -61,   359,   -61,  -104,   357,    10,   -61,    26,   -61,
     556,   360,   361,   593,   561,   223,   362,   375,   376,   566,
     568,   907,   384,  -164,   260,   162,   148,   164,   168,   603,
     391,   155,   156,   157,   158,   159,   160,   382,   766,   258,
     797,   389,   379,   392,   225,   394,   398,   397,   380,   367,
     369,    83,   908,   909,   505,   129,   399,   400,   402,   370,
     401,   403,    37,   405,   406,   407,    38,   408,   414,  -104,
     420,   862,   371,   830,   677,   428,   923,   924,    39,    40,
     413,    41,   661,    83,   415,   721,   437,   439,    43,   506,
     441,   676,    44,   443,  -187,   819,   221,   224,   122,   891,
     224,   445,   436,    83,   513,   514,   831,   516,   524,   687,
     529,   367,   369,  -186,   497,   318,   319,   320,   321,   542,
     622,   370,   625,   626,   540,   541,    26,   363,   830,    83,
     635,   709,   905,   557,   371,   553,   536,   559,   560,   367,
     369,   562,   563,   677,   384,   223,   436,   720,   223,   370,
     734,   661,   570,   710,   572,   741,   575,   576,   218,   577,
     676,   831,   371,   603,   578,   579,   505,   586,   584,    24,
     594,   596,   689,   776,   601,   614,   292,   301,   866,   374,
     866,   327,   328,   329,   695,   613,   627,   497,   631,   615,
       1,   616,     2,   628,   764,   629,   812,   768,   630,   498,
       3,   497,   638,   639,   647,   640,   641,   224,   642,   680,
     682,   612,   683,     4,   783,   499,   684,   691,     5,   611,
     698,   779,   690,     6,   693,   694,   696,   700,   866,   697,
     699,  -341,   704,   711,   378,   312,     7,   745,     8,   750,
     -11,   380,   769,     9,   773,   799,   780,   784,   811,   788,
     746,   790,   791,   568,   812,   223,   792,   838,   765,   838,
     793,   795,  -255,   796,   804,   801,   844,    83,   802,   224,
     806,   258,   498,   808,    10,   813,    91,   379,   825,   842,
     163,   868,   258,   380,   849,   850,   498,   851,   499,   497,
     854,   852,   853,   312,   882,   855,   857,   224,   829,   380,
     836,   497,   499,   886,   497,    91,   811,    91,    91,    91,
      91,    91,    91,   888,    11,    92,   889,   223,   892,   374,
     899,   374,   894,   895,   896,   505,   900,   897,   898,   901,
     903,     1,   904,     2,   916,   917,   918,   258,   919,   161,
      30,     3,   444,   920,    92,   223,    92,    92,    92,    92,
      92,    92,   821,   822,     4,   921,   922,   564,    32,     5,
     926,   927,   834,   928,     6,   929,   735,   588,   722,   374,
     774,   712,   708,   598,   498,   707,   719,     7,    37,     8,
     643,   -11,    38,   775,     9,   733,   498,   837,   798,   498,
     499,   805,   869,   841,    39,    40,   906,    41,   915,   500,
     893,    83,   499,    37,    43,   499,   870,    38,    44,   523,
     877,   568,   221,   740,   122,    10,   497,   834,   705,    39,
      40,   497,    41,   250,   873,   537,   497,   501,   418,    43,
     427,   744,   534,    44,   497,   679,    10,   221,   637,   122,
      91,    91,    91,    91,    91,    91,    91,   544,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
     685,    10,   749,   548,   609,   787,   820,   742,   502,   565,
     913,   636,   500,   688,   597,   859,   860,   771,   789,    92,
      92,    92,    92,    92,    92,    92,   500,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,   881,
     501,   498,   848,   884,   883,   678,   498,   902,   239,   552,
      91,   498,   438,   582,   501,   305,   308,   499,   497,   498,
     497,   497,   499,   555,   497,   497,    37,   499,   447,  -131,
      38,   306,   449,   307,   847,   499,     0,   309,     0,     0,
     522,   502,    39,    40,     0,    41,     0,     0,   -89,    92,
     503,     0,    43,     0,   -89,   502,    44,     0,   -89,     0,
     221,     0,   122,     0,     0,     0,     0,     0,     0,     0,
     -89,   -89,     0,   -89,   500,   497,     0,     0,     0,   497,
     -89,    91,   497,   497,   -89,     0,   500,     0,  -131,   500,
     -89,     0,   504,     0,     0,     0,   755,     0,     0,     0,
       0,     0,   501,   498,   772,   498,   498,     0,     0,   498,
     498,     0,    10,    91,   501,     0,     0,   501,     0,   499,
      92,   499,   499,   503,     0,   499,   499,     0,     0,   497,
     497,   497,     0,    91,     0,     0,     0,   503,     0,     0,
       0,     0,     0,   502,     0,     0,     0,     0,   409,     0,
     497,     0,    92,     0,     0,   502,     0,     0,   502,    91,
     498,     0,     0,     0,   498,   504,     0,   498,   498,     0,
       0,     0,    92,    37,     0,     0,   499,    38,     0,   504,
     499,     0,     0,   499,   499,     0,     0,     0,   815,    39,
      40,     0,    41,     0,   636,   824,     0,     0,    92,    43,
       0,   500,     0,    44,     0,     0,   500,   221,     0,   122,
     -25,   500,   -25,     0,   498,   498,   498,     0,     0,   500,
     -25,     0,     0,     0,     0,   503,     0,     0,     0,   501,
     499,   499,   499,   -25,   501,   498,     0,   503,   -25,   501,
     503,     0,     0,   -25,     0,     0,     0,   501,  -101,   876,
       0,   499,   755,   772,     0,   -60,   -25,     0,   -25,   -60,
     -25,     0,     0,   -25,     0,     0,     0,   504,   -60,     0,
     502,   -60,   -60,     0,   -60,   502,     0,     0,  -101,   504,
     502,   -60,   504,   -60,     0,   -60,  -101,     0,   502,   -60,
       0,   -60,     0,     0,   -25,     0,     0,    91,     0,   815,
       0,   824,     1,   500,     2,   500,   500,     0,     0,   500,
     500,     0,     3,     0,     0,     0,     0,   165,     0,     0,
     876,     0,     0,    37,     0,     4,     0,    38,     0,     0,
       5,   501,     0,   501,   501,     6,    92,   501,   501,    39,
      40,     0,    41,     0,     0,     0,     0,     0,     7,    43,
       8,  -101,   503,    44,     0,     9,     0,   503,     0,   122,
     500,     0,   503,     0,   500,     0,     0,   500,   500,     0,
     503,     0,   502,     0,   502,   502,     0,     0,   502,   502,
       0,     0,     0,     0,     0,     0,    10,     0,   501,     0,
       0,     0,   501,   265,   504,   501,   501,     0,     0,   504,
       0,     0,     0,     0,   504,     0,     0,     0,     0,     0,
       0,     0,   504,     0,   500,   500,   500,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,     0,   502,
       0,    91,     0,   502,     0,   500,   502,   502,     0,     0,
       0,     0,   501,   501,   501,     0,  -447,     0,     0,     0,
       0,     0,     0,     0,   503,     0,   503,   503,     0,     0,
     503,   503,     0,   501,     0,     0,     0,     0,     0,     0,
      92,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,     0,     0,   502,   502,   502,     0,     0,     0,     0,
    -102,     0,     0,     0,     0,     0,   504,   -59,   504,   504,
       0,   -59,   504,   504,   502,     0,     0,     0,     0,     0,
     -59,   503,     0,   -59,   -59,   503,   -59,     0,   503,   503,
    -102,     0,     0,   -59,     0,   -59,     0,   -59,  -102,     0,
       0,   -59,     0,   -59,     0,     1,     0,     2,     0,     0,
       0,     0,     0,     0,     0,   649,     0,     0,     0,   -30,
       0,   -30,     0,   504,   650,     0,     0,   504,   651,   -30,
     504,   504,     0,   652,    91,   503,   503,   503,   653,     0,
       0,     0,   -30,     0,   654,     0,     0,   -30,     0,     0,
       0,   655,   -30,   656,   -97,   -11,   503,     0,   657,   658,
       0,     0,   659,  -102,     0,   -30,     0,   -30,     0,   -30,
       0,     0,   -30,    92,     0,     0,     0,   504,   504,   504,
     384,   -44,   660,    33,     0,     0,     0,     0,     0,    10,
      35,     0,     0,     0,    36,     0,    37,     0,   504,     0,
      38,     0,     0,   -30,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    40,     0,    41,     0,     0,  -100,    42,
       0,     0,    43,     0,     0,   -58,    44,   -97,    45,   -58,
      46,    47,    48,    49,     0,     0,    50,     0,   -58,    51,
      52,   -58,   -58,    53,   -58,     0,     0,     0,  -100,   466,
       0,   -58,     0,   -58,    10,   -58,  -100,  -105,     0,   -58,
       0,   -58,     0,     0,   -62,     0,   726,     0,   -62,     0,
       0,     0,     0,     0,     0,   650,     0,   -62,     0,   727,
     -62,   -62,     0,   -62,   728,     0,     0,  -105,     0,   729,
     -62,     0,   -62,   124,   -62,  -105,   -99,     0,   -62,     0,
     -62,     0,   730,   -57,   731,     0,     0,   -57,     0,   732,
       0,     0,     0,   659,     0,     0,   -57,     0,     0,   -57,
     -57,  -100,   -57,  -128,     0,     0,   -99,     0,     0,   -57,
       0,   -57,     0,   -57,   -99,    33,    34,   -57,     0,   -57,
      10,     0,    35,     0,     0,     0,    36,     0,    37,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
    -105,     0,     0,     0,    39,    40,     0,    41,   250,     0,
       0,    42,     0,     0,    43,     0,     0,     0,    44,     0,
      45,     0,    46,    47,   141,    49,     0,     0,    50,     0,
       0,    51,    52,     0,     0,    53,     0,   348,     0,   -99,
    -132,   142,     0,     0,     0,  -128,    10,     0,     0,    56,
      57,  -465,     0,     0,     0,     0,     0,    33,    34,  -465,
      58,    59,    60,    61,    35,  -132,     0,     0,    36,  -132,
      37,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,  -132,  -132,     0,  -132,     0,    39,    40,     0,    41,
     250,  -132,     0,    42,     0,  -132,    43,     0,     0,  -132,
      44,  -132,    45,     0,    46,    47,   251,    49,     0,     0,
      50,     0,     0,    51,    52,     0,     0,    53,     0,     0,
       0,     0,     0,   142,  -429,     0,     0,     0,    10,     0,
       0,    56,    57,     0,     0,     0,     0,     1,  -128,     2,
       0,     0,    58,    59,    60,    61,   450,     3,   451,   452,
      33,   453,   454,     0,   455,     0,   456,    35,   457,     0,
       4,    36,   458,    37,     0,     5,   459,    38,     0,     0,
       6,     0,     0,     0,     0,   460,     0,     0,     0,    39,
      40,   461,    41,   462,     0,     8,    42,     0,     0,    43,
       9,     0,     0,    44,     0,    45,   463,    46,    47,   464,
      49,     0,     0,    50,     0,     0,    51,    52,     0,     0,
      53,     0,   384,  -155,   465,     0,   466,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     1,  -128,
       2,     0,     0,     0,     0,    58,    59,   450,     3,   451,
     452,    33,   453,   454,     0,   455,     0,   456,    35,   457,
       0,     4,    36,   458,    37,     0,     5,   459,    38,     0,
       0,     6,     0,     0,     0,     0,   460,     0,     0,     0,
      39,    40,   461,    41,   462,     0,     8,    42,   -11,     0,
      43,     9,     0,     0,    44,     0,    45,   463,    46,    47,
     464,    49,     0,     0,    50,     0,     0,    51,    52,     0,
       0,    53,     0,   384,     0,   465,     0,   466,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     1,
    -128,     2,     0,     0,     0,     0,    58,    59,   450,     3,
     451,   452,    33,   453,   454,     0,   455,     0,   456,    35,
     457,     0,     4,    36,   458,    37,     0,     5,   459,    38,
       0,     0,     6,     0,     0,     0,     0,   460,     0,     0,
       0,    39,    40,   461,    41,   462,     0,     8,    42,     0,
       0,    43,     9,     0,     0,    44,     0,    45,   463,    46,
      47,   464,    49,     0,     0,    50,     0,     0,    51,    52,
       0,     0,    53,     0,   384,     0,   465,     0,   466,     0,
       0,     0,     0,    10,   450,     0,   451,   452,    33,   453,
     454,     0,   455,     0,   456,    35,   457,    58,    59,    36,
     458,    37,     0,     0,   459,    38,     0,     0,     0,     0,
       0,     0,     0,   460,     0,     0,     0,    39,    40,   461,
      41,     0,     0,     0,    42,     0,     0,    43,     0,     0,
       0,    44,     0,    45,   463,    46,    47,   464,    49,     0,
       0,    50,     0,     0,    51,    52,     0,     0,    53,     0,
     384,     0,   465,     0,   466,     0,     0,     0,     0,    10,
     450,     0,   451,   751,    33,   453,   454,     0,   752,     0,
     456,    35,   457,    58,    59,    36,   458,    37,     0,     0,
     459,    38,     0,     0,     0,     0,     0,     0,     0,   460,
       0,     0,     0,    39,    40,   461,    41,     0,     0,     0,
      42,     0,     0,    43,     0,     0,     0,    44,     0,    45,
     753,    46,    47,   754,    49,     0,     0,    50,     0,     0,
      51,    52,     0,     0,    53,     0,   384,     0,   465,     0,
     466,    33,    34,     0,     0,    10,     0,     0,    35,    37,
       0,     0,    36,    38,    37,     0,     0,     0,    38,    58,
      59,     0,     0,     0,     0,    39,    40,     0,    41,     0,
      39,    40,   721,    41,     0,    43,     0,    42,     0,    44,
      43,     0,     0,   221,    44,   122,    45,     0,    46,    47,
      48,    49,     0,     0,    50,     0,     0,    51,    52,     0,
       0,    53,     0,    54,     0,     0,     0,    55,     0,     0,
       0,     0,    10,     0,     0,    56,    57,  -465,     0,     0,
       0,     0,     0,    33,    34,  -465,    58,    59,    60,    61,
      35,     0,     0,     0,    36,     0,    37,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    40,     0,    41,     0,     0,     0,    42,
       0,     0,    43,     0,     0,     0,    44,     0,    45,     0,
      46,    47,   141,    49,     0,     0,    50,     0,     0,    51,
      52,     0,     0,    53,     0,   348,     0,     0,     0,   142,
       0,     0,     0,     0,    10,     0,     0,    56,    57,  -465,
       0,     0,     0,     0,     0,    33,    34,  -465,    58,    59,
      60,    61,    35,     0,     0,     0,    36,     0,    37,     0,
       0,   459,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    40,     0,    41,     0,     0,
       0,    42,     0,     0,    43,     0,     0,    37,    44,     0,
      45,    38,    46,    47,   141,    49,     0,     0,    50,     0,
       0,    51,    52,    39,    40,    53,    41,   384,     0,  -461,
       0,   142,     0,    43,     0,     0,    10,    44,     0,    56,
      57,   221,     0,   122,     0,     0,     0,    33,    34,     0,
      58,    59,    60,    61,    35,     0,     0,     0,    36,     0,
      37,     0,     0,     0,    38,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,     0,    41,
       0,     0,     0,    42,     0,     0,    43,     0,     0,     0,
      44,     0,    45,     0,    46,    47,    48,    49,     0,     0,
      50,     0,     0,    51,    52,     0,     0,    53,     0,    54,
       0,     0,     0,    55,  -461,     0,     0,     0,    10,     0,
       0,    56,    57,  -448,     0,     0,     0,     0,     0,    33,
      34,     0,    58,    59,    60,    61,    35,     0,     0,     0,
      36,     0,    37,     0,     0,     0,    38,     0,  -448,  -448,
    -448,  -448,  -448,  -448,  -448,  -448,  -448,  -448,    39,    40,
       0,    41,     0,     0,     0,    42,     0,     0,    43,     0,
       0,     0,    44,     0,    45,     0,    46,    47,   141,    49,
       0,     0,    50,     0,     0,    51,    52,     0,     0,    53,
    -461,     0,     0,     0,     0,   142,  -161,     0,     0,     0,
      10,     0,     0,    56,    57,     0,     0,     0,     0,     0,
       0,    33,    34,     0,    58,    59,    60,    61,    35,     0,
       0,     0,    36,     0,    37,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,     0,    41,     0,     0,     0,    42,     0,     0,
      43,     0,     0,     0,    44,     0,    45,     0,    46,    47,
     141,    49,     0,     0,    50,     0,     0,    51,    52,     0,
       0,    53,     0,     0,     0,     0,     0,   142,     0,     0,
       0,     0,    10,     0,     0,    56,    57,  -465,     0,     0,
       0,     0,     0,    33,    34,  -465,    58,    59,    60,    61,
      35,     0,     0,     0,    36,     0,    37,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    40,     0,    41,     0,     0,     0,    42,
       0,     0,    43,     0,     0,     0,    44,     0,    45,     0,
      46,    47,    48,    49,     0,     0,    50,     0,     0,    51,
      52,     0,     0,    53,     0,     0,     0,     0,     0,    55,
       0,     0,     0,     0,    10,     0,     0,    56,    57,  -465,
       0,     0,     0,     0,     0,    33,    34,  -465,    58,    59,
      60,    61,    35,     0,     0,     0,    36,     0,    37,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    40,     0,    41,     0,     0,
       0,    42,     0,     0,    43,     0,     0,     0,    44,     0,
      45,     0,    46,    47,   141,    49,     0,     0,    50,     0,
       0,    51,    52,     0,     0,    53,     0,     0,     0,     0,
       0,   142,  -461,     0,     0,     0,    10,     0,     0,    56,
      57,     0,     0,     0,     0,     0,     0,    33,    34,     0,
      58,    59,    60,    61,    35,     0,     0,     0,    36,     0,
      37,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,     0,    41,
       0,     0,     0,    42,     0,     0,    43,     0,     0,     0,
      44,     0,    45,     0,    46,    47,   141,    49,     0,     0,
      50,     0,     0,    51,    52,     0,     0,    53,     0,     0,
       0,     0,     0,   142,     0,     0,     0,  -461,    10,     0,
       0,    56,    57,     0,     0,     0,     0,     0,     0,    33,
      34,     0,    58,    59,    60,    61,    35,     0,     0,     0,
      36,     0,    37,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
       0,    41,     0,     0,     0,    42,     0,     0,    43,     0,
       0,     0,    44,     0,    45,     0,    46,    47,   141,    49,
       0,     0,    50,     0,     0,    51,    52,     0,     0,    53,
       0,     0,     0,     0,     0,   142,     0,     0,     0,     0,
      10,     0,     0,    56,    57,     0,  -461,     0,     0,     0,
       0,    33,    34,     0,    58,    59,    60,    61,    35,     0,
       0,     0,    36,     0,    37,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,     0,    41,     0,     0,     0,    42,     0,     0,
      43,     0,     0,     0,    44,     0,    45,     0,    46,    47,
     141,    49,     0,     0,    50,     0,     0,    51,    52,     0,
       0,    53,     0,   384,     0,     0,     0,   142,     0,     0,
       0,     0,    10,     0,     0,    56,    57,     0,     0,     0,
       0,     0,     0,    33,    34,     0,    58,    59,    60,    61,
      35,     0,     0,     0,    36,     0,    37,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    40,     0,    41,     0,     0,     0,    42,
       0,     0,    43,     0,     0,     0,    44,     0,    45,     0,
      46,    47,   141,    49,     0,     0,    50,     0,     0,    51,
      52,     0,     0,    53,     0,     0,     0,     0,     0,   142,
       0,     0,     0,   389,    10,     0,     0,    56,    57,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    58,    59,
      60,    61,    35,     0,     0,     0,    36,     0,    37,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    40,     0,    41,     0,     0,
       0,    42,     0,     0,    43,     0,     0,     0,    44,     0,
      45,     0,    46,    47,   141,    49,     0,     0,    50,     0,
       0,    51,    52,     0,     0,    53,     0,     0,     0,  -461,
       0,   142,     0,     0,     0,     0,    10,     0,     0,    56,
      57,     0,     0,     0,     0,     0,     0,    33,    34,     0,
      58,    59,    60,    61,    35,     0,     0,     0,    36,     0,
      37,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,     0,    41,
       0,     0,     0,    42,     0,     0,    43,     0,     0,     0,
      44,     0,    45,     0,    46,    47,   141,    49,     0,     0,
      50,     0,     0,    51,    52,     0,     0,    53,     0,     0,
       0,  -315,     0,   142,     0,     0,     0,     0,    10,     0,
       0,    56,    57,     0,     0,     0,     0,     0,     0,    33,
      34,     0,    58,    59,    60,    61,    35,     0,     0,     0,
      36,     0,    37,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
       0,    41,     0,     0,     0,    42,     0,     0,    43,     0,
       0,     0,    44,     0,    45,     0,    46,    47,   141,    49,
       0,     0,    50,     0,     0,    51,    52,     0,     0,    53,
       0,   348,     0,     0,     0,   142,     0,     0,     0,     0,
      10,     0,     0,    56,    57,     0,     0,     0,     0,     0,
       0,    33,    34,     0,    58,    59,    60,    61,    35,     0,
       0,     0,    36,     0,    37,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,     0,    41,     0,     0,     0,    42,     0,     0,
      43,     0,     0,     0,    44,     0,    45,     0,    46,    47,
      48,    49,     0,     0,    50,     0,     0,    51,    52,     0,
       0,    53,     0,     0,     0,     0,     0,    55,     0,     0,
       0,     0,    10,     0,     0,    56,    57,     0,     0,     0,
       0,     0,     0,    33,    34,     0,    58,    59,    60,    61,
      35,     0,     0,     0,    36,     0,    37,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    40,     0,    41,     0,     0,     0,    42,
       0,     0,    43,     0,     0,     0,    44,     0,    45,     0,
      46,    47,   141,    49,     0,     0,    50,     0,     0,    51,
      52,     0,     0,    53,     0,     0,     0,     0,    33,   142,
       0,     0,     0,     0,    10,    35,     0,    56,    57,    36,
       0,    37,     0,     0,     0,    38,     0,     0,    58,    59,
      60,    61,     0,     0,     0,     0,     0,    39,    40,     0,
      41,   250,     0,     0,    42,     0,     0,    43,     0,     0,
       0,    44,     0,    45,     0,    46,    47,    48,    49,     0,
      33,    50,     0,     0,    51,    52,     0,    35,    53,     0,
       0,    36,  -317,    37,   466,     0,     0,    38,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,     0,    41,    58,    59,     0,    42,     0,     0,    43,
       0,     0,     0,    44,     0,    45,     0,    46,    47,    48,
      49,    33,    34,    50,     0,     0,    51,    52,    35,     0,
      53,     0,    36,     0,    37,     0,   466,     0,    38,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,     0,    41,     0,    58,    59,    42,     0,     0,
      43,     0,     0,     0,    44,     0,    45,     0,    46,    47,
     141,    49,   180,     0,    50,     0,   181,    51,    52,   182,
    -446,    53,     0,     0,     0,     0,     0,   142,     0,     0,
       0,     0,    10,     0,     0,    56,    57,     0,     0,     0,
       0,     0,     0,     0,  -446,  -446,  -446,  -446,  -446,  -446,
    -446,  -446,  -446,  -446,  -446
};

static const yytype_int16 yycheck[] =
{
       0,   142,   180,   239,    33,   252,    33,   185,     0,    10,
      33,   559,   260,   142,    10,    15,    65,    33,   262,    19,
     196,   439,   372,    15,   346,    25,   235,   693,    25,   238,
      31,   794,    73,    62,    63,    10,    22,   237,    67,   790,
      54,    82,    33,    72,   781,   252,   252,   471,    77,   611,
       8,    80,    22,   634,    54,   252,   124,    54,    86,    33,
     542,    87,    71,    71,    65,    55,   313,   382,   252,    71,
       0,    99,    71,    94,    98,   124,    67,   126,    33,    59,
      55,    55,   106,    55,    71,    71,    71,   113,   117,   852,
     853,    93,   113,   408,    69,   124,   125,    91,   127,   128,
     837,   124,   131,    93,   586,   114,   313,   313,   124,   136,
     137,    98,    67,   254,   143,    91,   313,    93,    93,   441,
     121,   683,   703,   124,   132,   126,    84,    32,   196,   313,
     548,   549,    37,   132,   163,    55,   899,    42,   901,   166,
      87,   132,   142,   691,   173,   172,   132,   196,   175,   900,
     574,   178,   124,   180,   354,   182,    71,   920,   185,   186,
      87,    88,   132,    46,    91,    71,    93,   196,   142,    71,
     142,    25,   420,   196,    88,    87,    87,    55,    93,    91,
     196,    50,    94,    94,    87,   851,    88,    93,    93,   607,
      44,   513,   514,   696,   516,   196,   196,    87,    67,    88,
     241,    91,    87,   252,    94,   132,   233,   236,   237,   445,
     239,    89,   132,   109,   110,    93,    87,   132,   218,   102,
     103,   222,   142,    94,   196,   132,    87,    88,    10,   258,
      91,   260,    93,   101,    93,   376,   104,   260,    99,    55,
      62,    63,   790,   791,   260,    67,    83,   376,   131,   132,
      72,   252,    89,    35,   254,    77,    93,    39,    80,    83,
      94,   181,    86,   290,   313,    89,    25,   187,   188,    51,
      52,   132,    54,    89,    87,   343,    94,    93,   279,    61,
      93,   264,   283,    65,    87,    88,    87,    69,    91,    71,
      93,   794,    94,    94,   343,    54,    99,    56,    57,    58,
      59,    60,    61,    87,    87,   127,   128,    87,    91,   338,
      94,   312,   313,    93,   343,   338,   330,   639,   111,   112,
     343,   143,   338,   116,    87,   354,    88,   343,    91,   132,
     330,    89,    87,   330,   335,    93,   336,   366,   367,    91,
     369,   370,   343,   591,   264,   589,   114,    87,   362,   852,
     853,    91,   900,    93,   105,   423,   424,   277,    83,   115,
     389,    86,   362,   390,    89,   362,   393,   113,   395,   396,
      91,   343,    93,    87,   423,   424,   376,    91,   379,    93,
      89,    83,    67,   559,   384,    87,    71,    84,    67,    86,
      71,   420,    71,    71,   423,   424,   899,   420,   901,   428,
     423,   424,   194,   195,   420,    99,   100,   423,   424,   107,
     108,   408,   117,   118,   119,   415,   445,   920,   131,   666,
     107,   108,   423,   424,   201,   202,   203,   347,   348,    92,
     189,   190,   191,   192,   193,   194,   195,    87,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     800,   423,   424,   107,   108,    59,   524,   204,   205,   666,
     666,    83,   669,   669,    89,    32,   100,    91,   536,   666,
      37,   471,   669,    87,    22,    42,   505,    87,   461,    71,
      95,    48,   666,   403,    89,   669,    28,   536,    55,    50,
      57,    87,   131,    35,    83,   524,    63,    39,    87,    88,
     259,   524,    91,    71,    93,    83,    48,   536,   524,    51,
      52,   100,    54,   536,    88,    91,    58,   437,    84,    61,
     536,    63,    59,    65,    66,    89,    93,    69,   529,    71,
     450,    71,    71,   529,   454,   536,    83,    89,    83,   459,
     460,   891,    84,   132,   113,   367,   466,   369,   370,   546,
      59,    56,    57,    58,    59,    60,    61,    89,   699,   559,
     766,    92,   591,    71,   536,    22,    59,    71,   591,   776,
     776,   330,   894,   895,   574,   591,    71,    92,    89,   776,
      71,    83,    35,    71,    71,    92,    39,    99,   132,   131,
      36,   838,   776,   802,   594,    87,   918,   919,    51,    52,
      83,    54,   594,   362,    83,    58,    91,    84,    61,   638,
      88,   594,    65,    71,    87,   791,    69,   666,    71,   866,
     669,    71,   542,   382,    88,    88,   802,    88,    50,   612,
       8,   838,   838,    87,   384,   197,   198,   199,   200,    83,
     560,   838,   562,   563,    89,    92,   647,    83,   857,   408,
     570,   647,   888,    71,   838,    90,   132,    88,    88,   866,
     866,    88,    88,   663,    84,   666,   586,   667,   669,   866,
     670,   663,    88,   656,    85,   675,    86,    86,   131,    91,
     663,   857,   866,   680,    71,    71,   686,    95,    83,    71,
      84,    71,   612,   722,    85,    71,   874,   875,   839,   699,
     841,   206,   207,   208,   624,    89,    68,   457,    49,    86,
       9,    86,    11,    86,   697,    86,   784,   700,    86,   384,
      19,   471,    92,    88,    83,    89,    89,   776,    89,    83,
      85,   100,    99,    32,   735,   384,    85,    83,    37,    99,
      88,   724,    99,    42,    86,    89,    89,    60,   889,    89,
      88,    60,    89,    85,   259,   784,    55,    86,    57,    86,
      59,   784,    53,    62,    89,   766,    71,    43,   784,    89,
     690,    86,    88,   693,   842,   776,    88,   806,   698,   808,
      88,    40,    40,    89,    86,    89,   813,   546,    88,   838,
      88,   791,   457,    88,    93,    84,    25,   826,    86,    83,
      87,    83,   802,   826,    89,    99,   471,    86,   457,   559,
     826,    89,    89,   842,    89,    86,    86,   866,   801,   842,
     803,   571,   471,    71,   574,    54,   842,    56,    57,    58,
      59,    60,    61,    89,   133,    25,    83,   838,    89,   839,
      89,   841,    88,    88,    85,   845,    86,   874,   875,    40,
      87,     9,    33,    11,    89,    89,    88,   857,    88,   888,
      15,    19,   891,    89,    54,   866,    56,    57,    58,    59,
      60,    61,   792,   793,    32,    86,    86,   457,    19,    37,
      89,    89,   802,    86,    42,    86,   674,   523,   669,   889,
     709,   663,   646,   540,   559,   643,   667,    55,    35,    57,
     584,    59,    39,   713,    62,   670,   571,   805,   766,   574,
     559,   776,   841,   808,    51,    52,   889,    54,   906,   384,
     870,   680,   571,    35,    61,   574,   842,    39,    65,   415,
     850,   851,    69,   675,    71,    93,   686,   857,   638,    51,
      52,   691,    54,    55,   845,   429,   696,   384,   336,    61,
     343,   686,   427,    65,   704,   600,    93,    69,   574,    71,
     189,   190,   191,   192,   193,   194,   195,   434,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     607,    93,   694,   439,   549,   742,   791,   680,   384,   458,
     900,   571,   457,   612,   131,   836,   836,   703,   747,   189,
     190,   191,   192,   193,   194,   195,   471,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   854,
     457,   686,   813,   859,   857,   596,   691,   883,   128,   443,
     259,   696,   354,   515,   471,   189,   192,   686,   788,   704,
     790,   791,   691,   447,   794,   795,    35,   696,   376,    10,
      39,   190,   382,   191,   813,   704,    -1,   193,    -1,    -1,
     413,   457,    51,    52,    -1,    54,    -1,    -1,    29,   259,
     384,    -1,    61,    -1,    35,   471,    65,    -1,    39,    -1,
      69,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,   559,   845,    -1,    -1,    -1,   849,
      61,   330,   852,   853,    65,    -1,   571,    -1,    69,   574,
      71,    -1,   384,    -1,    -1,    -1,   696,    -1,    -1,    -1,
      -1,    -1,   559,   788,   704,   790,   791,    -1,    -1,   794,
     795,    -1,    93,   362,   571,    -1,    -1,   574,    -1,   788,
     330,   790,   791,   457,    -1,   794,   795,    -1,    -1,   899,
     900,   901,    -1,   382,    -1,    -1,    -1,   471,    -1,    -1,
      -1,    -1,    -1,   559,    -1,    -1,    -1,    -1,    10,    -1,
     920,    -1,   362,    -1,    -1,   571,    -1,    -1,   574,   408,
     845,    -1,    -1,    -1,   849,   457,    -1,   852,   853,    -1,
      -1,    -1,   382,    35,    -1,    -1,   845,    39,    -1,   471,
     849,    -1,    -1,   852,   853,    -1,    -1,    -1,   788,    51,
      52,    -1,    54,    -1,   794,   795,    -1,    -1,   408,    61,
      -1,   686,    -1,    65,    -1,    -1,   691,    69,    -1,    71,
       9,   696,    11,    -1,   899,   900,   901,    -1,    -1,   704,
      19,    -1,    -1,    -1,    -1,   559,    -1,    -1,    -1,   686,
     899,   900,   901,    32,   691,   920,    -1,   571,    37,   696,
     574,    -1,    -1,    42,    -1,    -1,    -1,   704,    28,   849,
      -1,   920,   852,   853,    -1,    35,    55,    -1,    57,    39,
      59,    -1,    -1,    62,    -1,    -1,    -1,   559,    48,    -1,
     686,    51,    52,    -1,    54,   691,    -1,    -1,    58,   571,
     696,    61,   574,    63,    -1,    65,    66,    -1,   704,    69,
      -1,    71,    -1,    -1,    93,    -1,    -1,   546,    -1,   899,
      -1,   901,     9,   788,    11,   790,   791,    -1,    -1,   794,
     795,    -1,    19,    -1,    -1,    -1,    -1,    29,    -1,    -1,
     920,    -1,    -1,    35,    -1,    32,    -1,    39,    -1,    -1,
      37,   788,    -1,   790,   791,    42,   546,   794,   795,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    55,    61,
      57,   131,   686,    65,    -1,    62,    -1,   691,    -1,    71,
     845,    -1,   696,    -1,   849,    -1,    -1,   852,   853,    -1,
     704,    -1,   788,    -1,   790,   791,    -1,    -1,   794,   795,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,   845,    -1,
      -1,    -1,   849,    95,   686,   852,   853,    -1,    -1,   691,
      -1,    -1,    -1,    -1,   696,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   704,    -1,   899,   900,   901,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,    -1,   845,
      -1,   680,    -1,   849,    -1,   920,   852,   853,    -1,    -1,
      -1,    -1,   899,   900,   901,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   788,    -1,   790,   791,    -1,    -1,
     794,   795,    -1,   920,    -1,    -1,    -1,    -1,    -1,    -1,
     680,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,   899,   900,   901,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,   788,    35,   790,   791,
      -1,    39,   794,   795,   920,    -1,    -1,    -1,    -1,    -1,
      48,   845,    -1,    51,    52,   849,    54,    -1,   852,   853,
      58,    -1,    -1,    61,    -1,    63,    -1,    65,    66,    -1,
      -1,    69,    -1,    71,    -1,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,     9,
      -1,    11,    -1,   845,    28,    -1,    -1,   849,    32,    19,
     852,   853,    -1,    37,   813,   899,   900,   901,    42,    -1,
      -1,    -1,    32,    -1,    48,    -1,    -1,    37,    -1,    -1,
      -1,    55,    42,    57,    58,    59,   920,    -1,    62,    63,
      -1,    -1,    66,   131,    -1,    55,    -1,    57,    -1,    59,
      -1,    -1,    62,   813,    -1,    -1,    -1,   899,   900,   901,
      84,    85,    86,    22,    -1,    -1,    -1,    -1,    -1,    93,
      29,    -1,    -1,    -1,    33,    -1,    35,    -1,   920,    -1,
      39,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    -1,    -1,    28,    58,
      -1,    -1,    61,    -1,    -1,    35,    65,   131,    67,    39,
      69,    70,    71,    72,    -1,    -1,    75,    -1,    48,    78,
      79,    51,    52,    82,    54,    -1,    -1,    -1,    58,    88,
      -1,    61,    -1,    63,    93,    65,    66,    28,    -1,    69,
      -1,    71,    -1,    -1,    35,    -1,    19,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    48,    -1,    32,
      51,    52,    -1,    54,    37,    -1,    -1,    58,    -1,    42,
      61,    -1,    63,   132,    65,    66,    28,    -1,    69,    -1,
      71,    -1,    55,    35,    57,    -1,    -1,    39,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    48,    -1,    -1,    51,
      52,   131,    54,    10,    -1,    -1,    58,    -1,    -1,    61,
      -1,    63,    -1,    65,    66,    22,    23,    69,    -1,    71,
      93,    -1,    29,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,    -1,    -1,    -1,    51,    52,    -1,    54,    55,    -1,
      -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,
      67,    -1,    69,    70,    71,    72,    -1,    -1,    75,    -1,
      -1,    78,    79,    -1,    -1,    82,    -1,    84,    -1,   131,
      10,    88,    -1,    -1,    -1,    10,    93,    -1,    -1,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    22,    23,   106,
     107,   108,   109,   110,    29,    35,    -1,    -1,    33,    39,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    -1,    51,    52,    -1,    54,
      55,    61,    -1,    58,    -1,    65,    61,    -1,    -1,    69,
      65,    71,    67,    -1,    69,    70,    71,    72,    -1,    -1,
      75,    -1,    -1,    78,    79,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    88,    89,    -1,    -1,    -1,    93,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,   107,   108,   109,   110,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,    -1,    28,    29,    30,    -1,
      32,    33,    34,    35,    -1,    37,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    -1,    57,    58,    -1,    -1,    61,
      62,    -1,    -1,    65,    -1,    67,    68,    69,    70,    71,
      72,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,    -1,
      82,    -1,    84,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,   107,   108,    18,    19,    20,
      21,    22,    23,    24,    -1,    26,    -1,    28,    29,    30,
      -1,    32,    33,    34,    35,    -1,    37,    38,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    -1,
      61,    62,    -1,    -1,    65,    -1,    67,    68,    69,    70,
      71,    72,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,
      -1,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,   107,   108,    18,    19,
      20,    21,    22,    23,    24,    -1,    26,    -1,    28,    29,
      30,    -1,    32,    33,    34,    35,    -1,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    -1,    57,    58,    -1,
      -1,    61,    62,    -1,    -1,    65,    -1,    67,    68,    69,
      70,    71,    72,    -1,    -1,    75,    -1,    -1,    78,    79,
      -1,    -1,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    -1,    -1,    93,    18,    -1,    20,    21,    22,    23,
      24,    -1,    26,    -1,    28,    29,    30,   107,   108,    33,
      34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    51,    52,    53,
      54,    -1,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,
      -1,    65,    -1,    67,    68,    69,    70,    71,    72,    -1,
      -1,    75,    -1,    -1,    78,    79,    -1,    -1,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,    -1,    -1,    -1,    93,
      18,    -1,    20,    21,    22,    23,    24,    -1,    26,    -1,
      28,    29,    30,   107,   108,    33,    34,    35,    -1,    -1,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    51,    52,    53,    54,    -1,    -1,    -1,
      58,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    67,
      68,    69,    70,    71,    72,    -1,    -1,    75,    -1,    -1,
      78,    79,    -1,    -1,    82,    -1,    84,    -1,    86,    -1,
      88,    22,    23,    -1,    -1,    93,    -1,    -1,    29,    35,
      -1,    -1,    33,    39,    35,    -1,    -1,    -1,    39,   107,
     108,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,
      51,    52,    58,    54,    -1,    61,    -1,    58,    -1,    65,
      61,    -1,    -1,    69,    65,    71,    67,    -1,    69,    70,
      71,    72,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,
      -1,    82,    -1,    84,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    22,    23,   106,   107,   108,   109,   110,
      29,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    -1,    -1,    -1,    58,
      -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    67,    -1,
      69,    70,    71,    72,    -1,    -1,    75,    -1,    -1,    78,
      79,    -1,    -1,    82,    -1,    84,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    22,    23,   106,   107,   108,
     109,   110,    29,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,
      -1,    58,    -1,    -1,    61,    -1,    -1,    35,    65,    -1,
      67,    39,    69,    70,    71,    72,    -1,    -1,    75,    -1,
      -1,    78,    79,    51,    52,    82,    54,    84,    -1,    86,
      -1,    88,    -1,    61,    -1,    -1,    93,    65,    -1,    96,
      97,    69,    -1,    71,    -1,    -1,    -1,    22,    23,    -1,
     107,   108,   109,   110,    29,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,
      -1,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    -1,
      65,    -1,    67,    -1,    69,    70,    71,    72,    -1,    -1,
      75,    -1,    -1,    78,    79,    -1,    -1,    82,    -1,    84,
      -1,    -1,    -1,    88,    89,    -1,    -1,    -1,    93,    -1,
      -1,    96,    97,    95,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,   107,   108,   109,   110,    29,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,    51,    52,
      -1,    54,    -1,    -1,    -1,    58,    -1,    -1,    61,    -1,
      -1,    -1,    65,    -1,    67,    -1,    69,    70,    71,    72,
      -1,    -1,    75,    -1,    -1,    78,    79,    -1,    -1,    82,
      83,    -1,    -1,    -1,    -1,    88,    89,    -1,    -1,    -1,
      93,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,   107,   108,   109,   110,    29,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    -1,    -1,    -1,    58,    -1,    -1,
      61,    -1,    -1,    -1,    65,    -1,    67,    -1,    69,    70,
      71,    72,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    22,    23,   106,   107,   108,   109,   110,
      29,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    -1,    -1,    -1,    58,
      -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    67,    -1,
      69,    70,    71,    72,    -1,    -1,    75,    -1,    -1,    78,
      79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    22,    23,   106,   107,   108,
     109,   110,    29,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,
      -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,
      67,    -1,    69,    70,    71,    72,    -1,    -1,    75,    -1,
      -1,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    -1,    -1,    -1,    93,    -1,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
     107,   108,   109,   110,    29,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,
      -1,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    -1,
      65,    -1,    67,    -1,    69,    70,    71,    72,    -1,    -1,
      75,    -1,    -1,    78,    79,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    92,    93,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,   107,   108,   109,   110,    29,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    -1,    -1,    -1,    58,    -1,    -1,    61,    -1,
      -1,    -1,    65,    -1,    67,    -1,    69,    70,    71,    72,
      -1,    -1,    75,    -1,    -1,    78,    79,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    96,    97,    -1,    99,    -1,    -1,    -1,
      -1,    22,    23,    -1,   107,   108,   109,   110,    29,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    -1,    -1,    -1,    58,    -1,    -1,
      61,    -1,    -1,    -1,    65,    -1,    67,    -1,    69,    70,
      71,    72,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,
      -1,    82,    -1,    84,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,   107,   108,   109,   110,
      29,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    -1,    -1,    -1,    58,
      -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    67,    -1,
      69,    70,    71,    72,    -1,    -1,    75,    -1,    -1,    78,
      79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    92,    93,    -1,    -1,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,   107,   108,
     109,   110,    29,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,
      -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,
      67,    -1,    69,    70,    71,    72,    -1,    -1,    75,    -1,
      -1,    78,    79,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
     107,   108,   109,   110,    29,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,
      -1,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    -1,
      65,    -1,    67,    -1,    69,    70,    71,    72,    -1,    -1,
      75,    -1,    -1,    78,    79,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,    88,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,   107,   108,   109,   110,    29,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    -1,    -1,    -1,    58,    -1,    -1,    61,    -1,
      -1,    -1,    65,    -1,    67,    -1,    69,    70,    71,    72,
      -1,    -1,    75,    -1,    -1,    78,    79,    -1,    -1,    82,
      -1,    84,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,   107,   108,   109,   110,    29,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    -1,    -1,    -1,    58,    -1,    -1,
      61,    -1,    -1,    -1,    65,    -1,    67,    -1,    69,    70,
      71,    72,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,   107,   108,   109,   110,
      29,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    -1,    -1,    -1,    58,
      -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    67,    -1,
      69,    70,    71,    72,    -1,    -1,    75,    -1,    -1,    78,
      79,    -1,    -1,    82,    -1,    -1,    -1,    -1,    22,    88,
      -1,    -1,    -1,    -1,    93,    29,    -1,    96,    97,    33,
      -1,    35,    -1,    -1,    -1,    39,    -1,    -1,   107,   108,
     109,   110,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
      54,    55,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,
      -1,    65,    -1,    67,    -1,    69,    70,    71,    72,    -1,
      22,    75,    -1,    -1,    78,    79,    -1,    29,    82,    -1,
      -1,    33,    86,    35,    88,    -1,    -1,    39,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    54,   107,   108,    -1,    58,    -1,    -1,    61,
      -1,    -1,    -1,    65,    -1,    67,    -1,    69,    70,    71,
      72,    22,    23,    75,    -1,    -1,    78,    79,    29,    -1,
      82,    -1,    33,    -1,    35,    -1,    88,    -1,    39,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    -1,   107,   108,    58,    -1,    -1,
      61,    -1,    -1,    -1,    65,    -1,    67,    -1,    69,    70,
      71,    72,    87,    -1,    75,    -1,    91,    78,    79,    94,
      95,    82,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     9,    11,    19,    32,    37,    42,    55,    57,    62,
      93,   133,   135,   136,   137,   138,   139,   140,   141,   146,
     381,   382,   391,   392,    71,    88,   215,   243,   246,     0,
     137,    59,   141,    22,    23,    29,    33,    35,    39,    51,
      52,    54,    58,    61,    65,    67,    69,    70,    71,    72,
      75,    78,    79,    82,    84,    88,    96,    97,   107,   108,
     109,   110,   171,   173,   174,   176,   177,   178,   179,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   243,   244,   245,   247,   324,   325,   326,   328,
     329,   335,   336,   337,   340,   341,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   381,   386,   387,
      88,    87,    71,   215,   132,   175,   176,   217,   222,   223,
     236,   381,    88,    91,   327,    87,    87,    94,   386,   388,
     389,    71,    88,   217,   221,   244,   335,   336,   345,   346,
     347,   355,   356,   357,   359,   371,   371,   371,   371,   371,
     371,   176,   227,    87,   227,    29,   215,   218,   227,   175,
     227,   327,    94,    87,   227,    94,   227,    94,    87,   327,
      87,    91,    94,    88,    87,    87,    94,    91,    98,   106,
     105,   114,   115,   113,   101,   104,    46,   102,   103,   131,
     132,   117,   118,   119,   109,   110,   111,   112,   116,   107,
     108,   176,    89,    71,   383,   385,    71,   215,   131,   142,
     147,    69,   176,   215,   218,   221,   222,   225,   237,   239,
     240,   176,   331,   215,   176,   227,   342,   344,   227,   342,
     345,    92,    87,    59,    71,   175,   175,   390,    83,   250,
      55,    71,   194,   195,   196,   348,   349,   352,   381,    89,
     113,   234,   235,    89,   100,    95,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   358,    91,   176,
     175,    87,   175,   176,   175,    22,    33,    67,   175,    87,
      22,   175,   329,   345,   175,   213,   338,   345,    71,    71,
     175,   329,   175,   345,   345,   361,   362,   363,   364,   365,
     366,   366,   176,   194,   221,   259,   322,   323,   368,   368,
     368,   368,   369,   369,   369,   370,   370,   371,   371,   371,
      95,    89,   384,   148,   229,   230,   232,   381,    50,   143,
     150,    98,   131,    83,   238,    71,    88,    91,    84,   248,
     168,   227,   176,   343,   344,   248,   168,    89,   327,    59,
      71,    71,    83,    83,   351,    10,   170,   171,   172,   173,
     178,   179,   353,   194,   381,    89,    83,   350,   371,   176,
     222,   224,    89,   234,    84,   253,   345,   354,   345,    92,
     215,    59,    71,   215,    22,    87,    94,    71,    59,    71,
      92,    71,    89,    83,   339,    71,    71,    92,    99,    10,
     170,   260,   386,    83,   132,    83,   149,   215,   230,   223,
      36,   144,   151,    50,    67,   241,   242,   239,    87,   332,
     213,   345,   169,   248,   249,   251,   345,    91,   343,    84,
     274,    88,   386,    71,   176,    71,   167,   352,   346,   374,
      18,    20,    21,    23,    24,    26,    28,    30,    34,    38,
      47,    53,    55,    68,    71,    86,    88,   139,   211,   253,
     254,   256,   257,   258,   259,   261,   263,   264,   265,   267,
     268,   269,   270,   272,   273,   283,   285,   286,   288,   297,
     299,   301,   302,   303,   304,   305,   306,   328,   337,   356,
     372,   373,   375,   376,   377,   381,   176,   228,   175,   175,
      71,   175,   175,    88,    88,   345,    88,   346,   359,   163,
     165,   167,   385,   229,    50,   231,   233,   152,   224,     8,
     145,   154,   221,   221,   238,   176,   132,   236,   333,   334,
      89,    92,    83,   252,   250,    25,    44,   276,   278,   279,
     280,   213,   351,    90,   168,   350,   345,    71,   300,    88,
      88,   345,    88,    88,   261,   300,   345,   289,   345,   253,
      88,    99,    85,   255,   256,    86,    86,    91,    71,    71,
     213,   213,   339,   213,    83,   164,    95,   166,   149,   222,
     225,    83,   153,   243,    84,   156,    71,   131,   156,   330,
     169,    85,   282,   359,   277,   280,   275,   278,   280,   276,
     280,    99,   100,    89,    71,    86,    86,   259,   268,   290,
     293,   295,   345,    86,    99,   345,   345,    68,    86,    86,
      86,    49,   307,   308,   310,   345,   261,   255,    92,    88,
      89,    89,    89,   165,   169,   234,   224,    83,   155,    19,
      28,    32,    37,    42,    48,    55,    57,    62,    63,    66,
      86,   139,   157,   158,   159,   160,   161,   162,   180,   181,
     182,   202,   203,   204,   205,   206,   253,   381,   332,   252,
      83,   281,    85,    99,    85,   275,   277,   253,   304,   345,
      99,    83,   296,    86,    89,   345,    89,    89,    88,    88,
      60,   314,   309,   310,    89,   228,   213,   164,   153,   243,
     253,    85,   157,   170,    32,    37,    42,    55,    57,   161,
     381,    58,   147,   170,   183,   185,    19,    32,    37,    42,
      55,    57,    62,   181,   381,   142,   207,    32,    37,    42,
     205,   381,   282,   277,   254,    86,   345,   268,   289,   274,
      86,    21,    26,    68,    71,   261,   262,   263,   266,   271,
     284,   287,   292,   298,   253,   345,   194,   311,   253,    53,
     315,   309,   261,    89,   155,   163,   176,    86,   201,   253,
      71,   186,   208,   215,    43,   184,   197,   281,    89,   296,
      86,    88,    88,    88,    99,    40,    89,   173,   174,   215,
     312,    89,    88,   317,    86,   185,    88,   184,    88,   198,
     200,   223,   225,    84,   209,   261,   291,   294,   295,   259,
     290,   345,   345,   262,   261,    86,   114,   313,   167,   253,
     248,   259,   319,   321,   345,   380,   253,   186,   176,   187,
     189,   187,    83,   199,   175,   210,   212,   244,   324,    89,
      99,    86,    89,    89,   223,    86,   318,    86,   320,   307,
     308,   184,   170,   188,   191,   193,   194,   195,    83,   188,
     200,    33,    67,   211,    87,    87,   261,   345,   289,   262,
     262,   313,    89,   321,   314,   316,    71,   190,    89,    83,
     192,   170,    89,   199,    88,    88,    85,   175,   175,    89,
      86,    40,   320,    87,    33,   168,   193,   167,   213,   213,
      67,    67,   262,   291,   262,   192,    89,    89,    88,    88,
      89,    86,    86,   213,   213,   262,    89,    89,    86,    86
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   134,   135,   135,   136,   136,   137,   137,   138,   139,
     140,   141,   141,   142,   142,   143,   143,   144,   144,   145,
     145,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   147,   148,   149,   149,   150,   151,   152,   153,   153,
     154,   155,   155,   156,   157,   157,   158,   158,   158,   158,
     159,   159,   159,   159,   160,   161,   161,   162,   162,   162,
     162,   162,   162,   162,   162,   163,   164,   164,   165,   166,
     166,   167,   168,   168,   169,   169,   170,   170,   171,   171,
     172,   172,   172,   173,   173,   174,   174,   175,   175,   176,
     176,   177,   178,   179,   179,   179,   180,   181,   181,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   183,
     183,   184,   184,   185,   185,   186,   187,   187,   188,   188,
     189,   190,   190,   191,   192,   192,   193,   193,   194,   194,
     195,   196,   196,   197,   198,   199,   199,   200,   200,   201,
     201,   202,   203,   204,   205,   205,   206,   206,   206,   206,
     207,   208,   209,   210,   210,   211,   211,   212,   212,   212,
     212,   213,   213,   214,   215,   216,   216,   216,   216,   216,
     216,   216,   217,   217,   218,   218,   219,   219,   219,   219,
     219,   220,   220,   221,   221,   221,   222,   222,   223,   223,
     224,   225,   226,   226,   226,   227,   228,   228,   229,   230,
     230,   231,   231,   232,   233,   233,   234,   234,   235,   236,
     237,   238,   238,   239,   239,   240,   241,   241,   242,   242,
     243,   243,   244,   244,   245,   246,   246,   247,   247,   248,
     249,   249,   250,   250,   251,   252,   252,   253,   254,   255,
     255,   256,   256,   256,   257,   258,   259,   260,   260,   261,
     261,   261,   261,   261,   261,   262,   262,   262,   262,   262,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   264,   265,   266,   267,   268,   268,   268,
     268,   268,   268,   268,   269,   270,   271,   272,   272,   273,
     274,   274,   275,   275,   276,   276,   277,   277,   278,   278,
     278,   279,   280,   280,   281,   281,   282,   283,   284,   285,
     286,   286,   287,   287,   288,   289,   289,   290,   290,   291,
     291,   292,   293,   293,   294,   295,   296,   296,   297,   298,
     299,   300,   300,   301,   302,   303,   304,   305,   306,   306,
     307,   307,   308,   309,   309,   310,   311,   312,   313,   313,
     314,   315,   316,   316,   317,   318,   318,   319,   320,   320,
     321,   321,   322,   323,   324,   324,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   326,   326,   326,   326,
     327,   327,   328,   328,   328,   329,   330,   330,   331,   332,
     332,   333,   333,   334,   334,   335,   335,   335,   336,   336,
     337,   337,   337,   337,   337,   337,   338,   339,   339,   340,
     340,   340,   340,   340,   340,   340,   341,   341,   341,   341,
     342,   343,   343,   344,   345,   345,   346,   347,   347,   348,
     348,   349,   349,   350,   350,   351,   351,   352,   352,   353,
     353,   354,   354,   355,   355,   356,   357,   357,   357,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   359,   359,   359,   359,   360,   360,   360,   361,   361,
     362,   362,   363,   363,   364,   364,   365,   365,   365,   366,
     366,   366,   366,   366,   366,   367,   367,   368,   368,   368,
     368,   369,   369,   369,   370,   370,   370,   370,   371,   371,
     371,   371,   371,   372,   373,   374,   374,   374,   374,   374,
     375,   375,   375,   375,   376,   377,   378,   378,   378,   379,
     380,   380,   381,   381,   381,   382,   382,   383,   384,   384,
     385,   386,   386,   386,   387,   388,   388,   389,   390,   390,
     391,   392
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     0,     1,     0,     2,     1,     1,
       8,     0,     2,     0,     1,     0,     1,     0,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     0,     3,     2,     2,     2,     0,     3,
       3,     0,     3,     3,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     3,     2,     0,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     5,     0,     1,     0,
       2,     1,     1,     2,     2,     2,     3,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     0,     1,     1,     1,     6,     0,     2,     0,     1,
       4,     0,     2,     2,     0,     3,     3,     1,     0,     2,
       5,     1,     1,     2,     2,     0,     3,     1,     1,     1,
       1,     1,     2,     4,     0,     2,     1,     1,     1,     1,
       6,     1,     4,     0,     1,     0,     1,     6,     6,     8,
       8,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       1,     2,     2,     2,     2,     4,     0,     4,     3,     0,
       2,     0,     1,     1,     2,     3,     0,     2,     2,     3,
       2,     0,     3,     1,     1,     3,     0,     1,     2,     2,
       1,     3,     1,     3,     1,     1,     3,     1,     3,     4,
       0,     1,     0,     1,     2,     0,     3,     3,     2,     0,
       2,     1,     1,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     5,     7,     7,     3,     5,     5,
       4,     4,     0,     2,     0,     2,     0,     3,     4,     3,
       3,     4,     3,     1,     0,     3,     1,     5,     5,     7,
       1,     1,     1,     1,     9,     0,     1,     0,     1,     0,
       1,     9,     1,     1,     1,     2,     0,     3,     7,     7,
       3,     0,     1,     3,     3,     3,     3,     5,     3,     5,
       0,     1,     2,     0,     2,     5,     3,     2,     0,     3,
       2,     5,     0,     1,     4,     0,     1,     2,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     4,     4,     4,     3,
       0,     3,     1,     3,     3,     7,     0,     1,     4,     0,
       4,     0,     1,     1,     2,     3,     3,     5,     4,     4,
       4,     7,     7,     7,     7,     9,     2,     0,     3,     4,
       4,     4,     4,     6,     4,     3,     4,     4,     4,     4,
       2,     0,     2,     4,     1,     1,     3,     3,     1,     0,
       1,     2,     2,     0,     3,     0,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     5,     5,     0,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     4,     5,     5,     5,
       1,     1,     1,     1,     1,     5,     5,     2,     0,     3,
       3,     1,     1,     1,     3,     0,     1,     2,     0,     3,
       2,     4
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
  case 2: /* CompilationUnit: OrdinaryCompilationUnit  */
#line 44 "parser.y"
                            {

    }
#line 2859 "parser.tab.c"
    break;

  case 3: /* CompilationUnit: ModularCompilationUnit  */
#line 47 "parser.y"
                             {

    }
#line 2867 "parser.tab.c"
    break;

  case 7: /* OrdinaryCompilationUnit: TopLevelClassOrInterfaceDeclaration OrdinaryCompilationUnit  */
#line 55 "parser.y"
                                                                 {

    }
#line 2875 "parser.tab.c"
    break;

  case 8: /* TopLevelClassOrInterfaceDeclaration: ClassDeclaration  */
#line 60 "parser.y"
                     {

    }
#line 2883 "parser.tab.c"
    break;

  case 9: /* ClassDeclaration: NormalClassDeclaration  */
#line 65 "parser.y"
                           {

    }
#line 2891 "parser.tab.c"
    break;

  case 10: /* NormalClassDeclaration: ClassModifier_ntM Class TypeIdentifier TypeParamaters_nt ClassExtends_nt ClassImplements_nt ClassPermits_nt ClassBody  */
#line 72 "parser.y"
                                                                                                                          {

    }
#line 2899 "parser.tab.c"
    break;


#line 2903 "parser.tab.c"

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

#line 1081 "parser.y"


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
