/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    Exports = 258,                 /* Exports  */
    Opens = 259,                   /* Opens  */
    Requires = 260,                /* Requires  */
    Uses = 261,                    /* Uses  */
    Module = 262,                  /* Module  */
    Permits = 263,                 /* Permits  */
    Sealed = 264,                  /* Sealed  */
    Var = 265,                     /* Var  */
    Non_sealed = 266,              /* Non_sealed  */
    Provides = 267,                /* Provides  */
    To = 268,                      /* To  */
    With = 269,                    /* With  */
    Open = 270,                    /* Open  */
    Record = 271,                  /* Record  */
    Transitive = 272,              /* Transitive  */
    Yield = 273,                   /* Yield  */
    Abstract = 274,                /* Abstract  */
    Continue = 275,                /* Continue  */
    For = 276,                     /* For  */
    New = 277,                     /* New  */
    Switch = 278,                  /* Switch  */
    Assert = 279,                  /* Assert  */
    Default = 280,                 /* Default  */
    If = 281,                      /* If  */
    Package = 282,                 /* Package  */
    Synchronized = 283,            /* Synchronized  */
    Boolean = 284,                 /* Boolean  */
    Do = 285,                      /* Do  */
    Goto = 286,                    /* Goto  */
    Private = 287,                 /* Private  */
    This = 288,                    /* This  */
    Break = 289,                   /* Break  */
    Double = 290,                  /* Double  */
    Implements = 291,              /* Implements  */
    Protected = 292,               /* Protected  */
    THROW = 293,                   /* THROW  */
    Byte = 294,                    /* Byte  */
    Else = 295,                    /* Else  */
    Import = 296,                  /* Import  */
    Public = 297,                  /* Public  */
    THROWS = 298,                  /* THROWS  */
    Case = 299,                    /* Case  */
    Enum = 300,                    /* Enum  */
    Instanceof = 301,              /* Instanceof  */
    Return = 302,                  /* Return  */
    Transient = 303,               /* Transient  */
    Catch = 304,                   /* Catch  */
    Extends = 305,                 /* Extends  */
    Int = 306,                     /* Int  */
    Short = 307,                   /* Short  */
    Try = 308,                     /* Try  */
    Char = 309,                    /* Char  */
    Final = 310,                   /* Final  */
    Interface = 311,               /* Interface  */
    Static = 312,                  /* Static  */
    Void = 313,                    /* Void  */
    Class = 314,                   /* Class  */
    FINALLY = 315,                 /* FINALLY  */
    Long = 316,                    /* Long  */
    Strictfp = 317,                /* Strictfp  */
    Volatile = 318,                /* Volatile  */
    Const = 319,                   /* Const  */
    Float = 320,                   /* Float  */
    Native = 321,                  /* Native  */
    Super = 322,                   /* Super  */
    While = 323,                   /* While  */
    BooleanLiteral = 324,          /* BooleanLiteral  */
    NullLiteral = 325,             /* NullLiteral  */
    Identifier = 326,              /* Identifier  */
    DecimalIntegerLiteral = 327,   /* DecimalIntegerLiteral  */
    HexIntegerLiteral = 328,       /* HexIntegerLiteral  */
    OctalIntegerLiteral = 329,     /* OctalIntegerLiteral  */
    FloatingPointIntegerLiteral = 330, /* FloatingPointIntegerLiteral  */
    FloatingPointLiteral = 331,    /* FloatingPointLiteral  */
    BooleanIntegerLiteral = 332,   /* BooleanIntegerLiteral  */
    CharacterLiteral = 333,        /* CharacterLiteral  */
    TextBlock = 334,               /* TextBlock  */
    Operator = 335,                /* Operator  */
    Seperator = 336,               /* Seperator  */
    StringLiteral = 337,           /* StringLiteral  */
    Comma = 338,                   /* Comma  */
    LeftCurlyBrace = 339,          /* LeftCurlyBrace  */
    RightCurlyBrace = 340,         /* RightCurlyBrace  */
    Semicolon = 341,               /* Semicolon  */
    Dot = 342,                     /* Dot  */
    LeftParanthesis = 343,         /* LeftParanthesis  */
    RightParanthesis = 344,        /* RightParanthesis  */
    TripleDot = 345,               /* TripleDot  */
    LeftSquareBracket = 346,       /* LeftSquareBracket  */
    RightSquareBracket = 347,      /* RightSquareBracket  */
    AtRate = 348,                  /* AtRate  */
    Scope = 349,                   /* Scope  */
    EqualTo = 350,                 /* EqualTo  */
    NotOperator = 351,             /* NotOperator  */
    Tilde = 352,                   /* Tilde  */
    QuestionMark = 353,            /* QuestionMark  */
    Colon = 354,                   /* Colon  */
    RightArrow = 355,              /* RightArrow  */
    EqualToEqualTo = 356,          /* EqualToEqualTo  */
    GreaterThanEqualTo = 357,      /* GreaterThanEqualTo  */
    LessThanEqualTo = 358,         /* LessThanEqualTo  */
    NotEqualTo = 359,              /* NotEqualTo  */
    AndOperator = 360,             /* AndOperator  */
    OrOperator = 361,              /* OrOperator  */
    PlusPlus = 362,                /* PlusPlus  */
    MinusMinus = 363,              /* MinusMinus  */
    Addition = 364,                /* Addition  */
    Substraction = 365,            /* Substraction  */
    Product = 366,                 /* Product  */
    Divide = 367,                  /* Divide  */
    BitwiseAnd = 368,              /* BitwiseAnd  */
    BitwiseOr = 369,               /* BitwiseOr  */
    CircumFlex = 370,              /* CircumFlex  */
    Modulo = 371,                  /* Modulo  */
    LeftShit = 372,                /* LeftShit  */
    RightShift = 373,              /* RightShift  */
    TripleGreaterThan = 374,       /* TripleGreaterThan  */
    AdditionEqualTo = 375,         /* AdditionEqualTo  */
    SubstractionEqualTo = 376,     /* SubstractionEqualTo  */
    ProductEqualTo = 377,          /* ProductEqualTo  */
    DivideEqualTo = 378,           /* DivideEqualTo  */
    BitWiseAndEqualTo = 379,       /* BitWiseAndEqualTo  */
    BitWiseOrEqualTo = 380,        /* BitWiseOrEqualTo  */
    CircumFlexEqualTo = 381,       /* CircumFlexEqualTo  */
    ModuloEqualTo = 382,           /* ModuloEqualTo  */
    LeftShitEqualTo = 383,         /* LeftShitEqualTo  */
    RightShiftEqualTo = 384,       /* RightShiftEqualTo  */
    TripleGreaterThanEqualTo = 385, /* TripleGreaterThanEqualTo  */
    GreaterThan = 386,             /* GreaterThan  */
    LessThan = 387,                /* LessThan  */
    __EMPTY__ = 388                /* __EMPTY__  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "parser.y"

    char data[1000];

#line 201 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
