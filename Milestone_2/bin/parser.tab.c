/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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

int ctr = 0;

struct node{
    char data[100];
    long long int nodenumber;
    int parentFlag;
    int isDeclaration;
    int t;
    int lineNumber;
    vector<struct node*> arr;
    struct Symbol symbol;
};

struct node* makeInternalNode(char* rule, struct node* memArr[], int n, int isParent);
struct node* makeleaf(char* node);
char* concatenate_string(char* s, char* s1);
int semantic_analysis(struct node* root);
void help();
// int dummy(string name, struct SymbolTable * curr, struct GlobalSymbolTable* glob_insert);
long long int line_number=1;

struct GlobalSymbolTable* glob_table = new struct GlobalSymbolTable;
struct SymbolTable* curr = loc_mktable(NULL,"RR_GLOBAL_"); //parameters are parent-pointer,  local-table-name
string scope;

struct Symbol func_params;
int symb_insert = 0;


#line 126 "bin/parser.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_BIN_PARSER_TAB_H_INCLUDED
# define YY_YY_BIN_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    Exports = 258,
    Opens = 259,
    Requires = 260,
    Uses = 261,
    Module = 262,
    Permits = 263,
    Sealed = 264,
    Var = 265,
    Non_sealed = 266,
    Provides = 267,
    To = 268,
    With = 269,
    Open = 270,
    Record = 271,
    Transitive = 272,
    Yield = 273,
    Abstract = 274,
    Continue = 275,
    For = 276,
    New = 277,
    Switch = 278,
    Assert = 279,
    Default = 280,
    If = 281,
    Package = 282,
    Synchronized = 283,
    Boolean = 284,
    Do = 285,
    Goto = 286,
    Private = 287,
    This = 288,
    Break = 289,
    Double = 290,
    Implements = 291,
    Protected = 292,
    THROW = 293,
    Byte = 294,
    Else = 295,
    Import = 296,
    Public = 297,
    THROWS = 298,
    Case = 299,
    Enum = 300,
    Instanceof = 301,
    Return = 302,
    Transient = 303,
    Catch = 304,
    Extends = 305,
    Int = 306,
    Short = 307,
    Try = 308,
    Char = 309,
    Final = 310,
    Interface = 311,
    Static = 312,
    Void = 313,
    Class = 314,
    FINALLY = 315,
    Long = 316,
    Strictfp = 317,
    Volatile = 318,
    Const = 319,
    Float = 320,
    Native = 321,
    Super = 322,
    While = 323,
    BooleanLiteral = 324,
    NullLiteral = 325,
    Identifier = 326,
    DecimalIntegerLiteral = 327,
    HexIntegerLiteral = 328,
    OctalIntegerLiteral = 329,
    FloatingPointIntegerLiteral = 330,
    FloatingPointLiteral = 331,
    BooleanIntegerLiteral = 332,
    CharacterLiteral = 333,
    TextBlock = 334,
    Operator = 335,
    Seperator = 336,
    StringLiteral = 337,
    Comma = 338,
    LeftCurlyBrace = 339,
    RightCurlyBrace = 340,
    Semicolon = 341,
    Dot = 342,
    LeftParanthesis = 343,
    RightParanthesis = 344,
    TripleDot = 345,
    LeftSquareBracket = 346,
    RightSquareBracket = 347,
    AtRate = 348,
    Scope = 349,
    EqualTo = 350,
    NotOperator = 351,
    Tilde = 352,
    QuestionMark = 353,
    Colon = 354,
    RightArrow = 355,
    EqualToEqualTo = 356,
    GreaterThanEqualTo = 357,
    LessThanEqualTo = 358,
    NotEqualTo = 359,
    AndOperator = 360,
    OrOperator = 361,
    PlusPlus = 362,
    MinusMinus = 363,
    Addition = 364,
    Substraction = 365,
    Product = 366,
    Divide = 367,
    BitwiseAnd = 368,
    BitwiseOr = 369,
    CircumFlex = 370,
    Modulo = 371,
    LeftShit = 372,
    RightShift = 373,
    TripleGreaterThan = 374,
    AdditionEqualTo = 375,
    SubstractionEqualTo = 376,
    ProductEqualTo = 377,
    DivideEqualTo = 378,
    BitWiseAndEqualTo = 379,
    BitWiseOrEqualTo = 380,
    CircumFlexEqualTo = 381,
    ModuloEqualTo = 382,
    LeftShitEqualTo = 383,
    RightShiftEqualTo = 384,
    TripleGreaterThanEqualTo = 385,
    GreaterThan = 386,
    LessThan = 387,
    __EMPTY__ = 388
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 64 "src/parser.y"

    char data[100];
    struct node *exp;

#line 317 "bin/parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BIN_PARSER_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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

#define YYUNDEFTOK  2
#define YYMAXUTOK   388


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
       0,   143,   143,   150,   153,   156,   159,   162,   165,   170,
     173,   176,   181,   184,   189,   192,   200,   203,   208,   214,
     220,   226,   232,   240,   246,   254,   257,   262,   267,   272,
     277,   284,   291,   300,   303,   308,   313,   318,   328,   331,
     338,   343,   351,   354,   361,   366,   374,   377,   382,   387,
     390,   395,   400,   405,   408,   411,   416,   421,   429,   432,
     435,   438,   441,   444,   447,   450,   453,   456,   461,   493,
     496,   502,   505,   509,   512,   517,   522,   531,   536,   544,
     548,   551,   581,   587,   595,   598,   601,   606,   609,   615,
     691,   697,   706,   716,   727,   732,   739,   742,   747,   763,
     802,   845,   848,   855,   872,   880,   883,   890,   896,   904,
     933,   940,   945,   953,   956,   962,   969,   980,   987,   994,
     997,  1004,  1009,  1015,  1018,  1025,  1035,  1038,  1045,  1050,
    1058,  1062,  1065,  1072,  1077,  1085,  1089,  1095,  1100,  1105,
    1109,  1112,  1118,  1121,  1126,  1131,  1139,  1145,  1150,  1154,
    1157,  1164,  1169,  1178,  1185,  1194,  1201,  1254,  1257,  1260,
    1263,  1266,  1269,  1274,  1277,  1280,  1283,  1286,  1291,  1294,
    1297,  1300,  1303,  1306,  1309,  1312,  1315,  1320,  1325,  1333,
    1341,  1346,  1349,  1352,  1355,  1358,  1361,  1364,  1369,  1377,
    1388,  1399,  1409,  1417,  1430,  1440,  1443,  1449,  1452,  1458,
    1461,  1468,  1474,  1483,  1490,  1495,  1503,  1510,  1512,  1517,
    1524,  1531,  1538,  1546,  1552,  1560,  1563,  1570,  1575,  1583,
    1591,  1598,  1601,  1606,  1609,  1612,  1615,  1618,  1621,  1624,
    1629,  1639,  1644,  1652,  1661,  1671,  1674,  1679,  1684,  1692,
    1699,  1702,  1707,  1710,  1715,  1720,  1725,  1732,  1738,  1746,
    1749,  1752,  1755,  1760,  1767,  1774,  1777,  1780,  1785,  1790,
    1795,  1803,  1811,  1814,  1819,  1824,  1829,  1835,  1841,  1849,
    1852,  1858,  1864,  1872,  1875,  1881,  1889,  1892,  1898,  1904,
    1912,  1915,  1921,  1927,  1933,  1939,  1947,  1950,  1956,  1964,
    1967,  1975,  1978,  1986,  1989,  1997,  2000,  2008,  2011,  2019,
    2022,  2031,  2034,  2039,  2047,  2050,  2053,  2058,  2061,  2064,
    2067,  2070,  2073,  2076,  2079,  2082,  2085,  2088,  2091,  2095
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Exports", "Opens", "Requires", "Uses",
  "Module", "Permits", "Sealed", "Var", "Non_sealed", "Provides", "To",
  "With", "Open", "Record", "Transitive", "Yield", "Abstract", "Continue",
  "For", "New", "Switch", "Assert", "Default", "If", "Package",
  "Synchronized", "Boolean", "Do", "Goto", "Private", "This", "Break",
  "Double", "Implements", "Protected", "THROW", "Byte", "Else", "Import",
  "Public", "THROWS", "Case", "Enum", "Instanceof", "Return", "Transient",
  "Catch", "Extends", "Int", "Short", "Try", "Char", "Final", "Interface",
  "Static", "Void", "Class", "FINALLY", "Long", "Strictfp", "Volatile",
  "Const", "Float", "Native", "Super", "While", "BooleanLiteral",
  "NullLiteral", "Identifier", "DecimalIntegerLiteral",
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
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388
};
# endif

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
      -1,     2,   175,   176,   177,    91,    92,    93,    94,    95,
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

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
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

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 143 "src/parser.y"
                      {
    printf("Parsing stage was successful !\n");
    (yyval.exp) = (yyvsp[0].exp);
}
#line 2159 "bin/parser.tab.c"
    break;

  case 3:
#line 150 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2167 "bin/parser.tab.c"
    break;

  case 4:
#line 153 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2175 "bin/parser.tab.c"
    break;

  case 5:
#line 156 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2183 "bin/parser.tab.c"
    break;

  case 6:
#line 159 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2191 "bin/parser.tab.c"
    break;

  case 7:
#line 162 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2199 "bin/parser.tab.c"
    break;

  case 8:
#line 165 "src/parser.y"
                 {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2207 "bin/parser.tab.c"
    break;

  case 9:
#line 170 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2215 "bin/parser.tab.c"
    break;

  case 10:
#line 173 "src/parser.y"
                        {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2223 "bin/parser.tab.c"
    break;

  case 11:
#line 176 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2231 "bin/parser.tab.c"
    break;

  case 12:
#line 181 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2239 "bin/parser.tab.c"
    break;

  case 13:
#line 184 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2247 "bin/parser.tab.c"
    break;

  case 14:
#line 189 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2255 "bin/parser.tab.c"
    break;

  case 15:
#line 192 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "boolean";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 1;
    }
#line 2266 "bin/parser.tab.c"
    break;

  case 16:
#line 200 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2274 "bin/parser.tab.c"
    break;

  case 17:
#line 203 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2282 "bin/parser.tab.c"
    break;

  case 18:
#line 208 "src/parser.y"
         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "byte";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 1;
    }
#line 2293 "bin/parser.tab.c"
    break;

  case 19:
#line 214 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "short";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 2;
    }
#line 2304 "bin/parser.tab.c"
    break;

  case 20:
#line 220 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)-> symbol.size = 4;
    }
#line 2315 "bin/parser.tab.c"
    break;

  case 21:
#line 226 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "long";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2326 "bin/parser.tab.c"
    break;

  case 22:
#line 232 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "char";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 2;
    }
#line 2337 "bin/parser.tab.c"
    break;

  case 23:
#line 240 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.type.name = "float";
        (yyval.exp)->symbol.size = 4;
    }
#line 2348 "bin/parser.tab.c"
    break;

  case 24:
#line 246 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "double";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2359 "bin/parser.tab.c"
    break;

  case 25:
#line 254 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2367 "bin/parser.tab.c"
    break;

  case 26:
#line 257 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2375 "bin/parser.tab.c"
    break;

  case 27:
#line 262 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2383 "bin/parser.tab.c"
    break;

  case 28:
#line 267 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2391 "bin/parser.tab.c"
    break;

  case 29:
#line 272 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2399 "bin/parser.tab.c"
    break;

  case 30:
#line 277 "src/parser.y"
                                                       {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        //cout << $1->data <<endl;
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data)+"[]";
        (yyval.exp)->symbol.type.name = temp;
    }
#line 2411 "bin/parser.tab.c"
    break;

  case 31:
#line 284 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.type.name = temp;

    }
#line 2423 "bin/parser.tab.c"
    break;

  case 32:
#line 291 "src/parser.y"
                                                     {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.type.name = temp;

    }
#line 2435 "bin/parser.tab.c"
    break;

  case 33:
#line 300 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2443 "bin/parser.tab.c"
    break;

  case 34:
#line 303 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2451 "bin/parser.tab.c"
    break;

  case 35:
#line 308 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2459 "bin/parser.tab.c"
    break;

  case 36:
#line 313 "src/parser.y"
                        {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,concatenate_string((yyvsp[-1].data),(yyvsp[0].data))));
    }
#line 2467 "bin/parser.tab.c"
    break;

  case 37:
#line 318 "src/parser.y"
                                                                       {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CompilationUnit", memArr, 3, 1);
        root = (yyval.exp);
    }
#line 2480 "bin/parser.tab.c"
    break;

  case 38:
#line 328 "src/parser.y"
    { 
        (yyval.exp) = NULL; 
    }
#line 2488 "bin/parser.tab.c"
    break;

  case 39:
#line 331 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Imports", memArr, 1, 1);
    }
#line 2498 "bin/parser.tab.c"
    break;

  case 40:
#line 338 "src/parser.y"
                      {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2508 "bin/parser.tab.c"
    break;

  case 41:
#line 343 "src/parser.y"
                                           {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateImports", memArr, 2, 0);
    }
#line 2519 "bin/parser.tab.c"
    break;

  case 42:
#line 351 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2527 "bin/parser.tab.c"
    break;

  case 43:
#line 354 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Declarations", memArr, 1, 0);
    }
#line 2537 "bin/parser.tab.c"
    break;

  case 44:
#line 361 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2547 "bin/parser.tab.c"
    break;

  case 45:
#line 366 "src/parser.y"
                                       {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
    }
#line 2558 "bin/parser.tab.c"
    break;

  case 46:
#line 374 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2566 "bin/parser.tab.c"
    break;

  case 47:
#line 377 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2574 "bin/parser.tab.c"
    break;

  case 48:
#line 382 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),concatenate_string(" ",(yyvsp[-1].exp)->data)));
    }
#line 2582 "bin/parser.tab.c"
    break;

  case 49:
#line 387 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2590 "bin/parser.tab.c"
    break;

  case 50:
#line 390 "src/parser.y"
                                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2598 "bin/parser.tab.c"
    break;

  case 51:
#line 395 "src/parser.y"
                          {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data), concatenate_string(" ",(yyvsp[-1].exp)->data)));
    }
#line 2606 "bin/parser.tab.c"
    break;

  case 52:
#line 400 "src/parser.y"
                                      {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-4].data), concatenate_string(" ",concatenate_string((yyvsp[-3].exp)->data,".*"))));
    }
#line 2614 "bin/parser.tab.c"
    break;

  case 53:
#line 405 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2622 "bin/parser.tab.c"
    break;

  case 54:
#line 408 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2630 "bin/parser.tab.c"
    break;

  case 55:
#line 411 "src/parser.y"
                {
        (yyval.exp) = NULL;
    }
#line 2638 "bin/parser.tab.c"
    break;

  case 56:
#line 416 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2648 "bin/parser.tab.c"
    break;

  case 57:
#line 421 "src/parser.y"
                         {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifier", memArr, 2, 0);
    }
#line 2659 "bin/parser.tab.c"
    break;

  case 58:
#line 429 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2667 "bin/parser.tab.c"
    break;

  case 59:
#line 432 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2675 "bin/parser.tab.c"
    break;

  case 60:
#line 435 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2683 "bin/parser.tab.c"
    break;

  case 61:
#line 438 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2691 "bin/parser.tab.c"
    break;

  case 62:
#line 441 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2699 "bin/parser.tab.c"
    break;

  case 63:
#line 444 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2707 "bin/parser.tab.c"
    break;

  case 64:
#line 447 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2715 "bin/parser.tab.c"
    break;

  case 65:
#line 450 "src/parser.y"
                   {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2723 "bin/parser.tab.c"
    break;

  case 66:
#line 453 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2731 "bin/parser.tab.c"
    break;

  case 67:
#line 456 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2739 "bin/parser.tab.c"
    break;

  case 68:
#line 461 "src/parser.y"
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
        
    }
#line 2775 "bin/parser.tab.c"
    break;

  case 69:
#line 493 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 2783 "bin/parser.tab.c"
    break;

  case 70:
#line 496 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifiers", memArr, 1, 1);
    }
#line 2793 "bin/parser.tab.c"
    break;

  case 71:
#line 502 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2801 "bin/parser.tab.c"
    break;

  case 72:
#line 505 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2809 "bin/parser.tab.c"
    break;

  case 73:
#line 509 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2817 "bin/parser.tab.c"
    break;

  case 74:
#line 512 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2825 "bin/parser.tab.c"
    break;

  case 75:
#line 517 "src/parser.y"
                      {
        (yyval.exp) = makeleaf((yyvsp[0].exp)->data);
    }
#line 2833 "bin/parser.tab.c"
    break;

  case 76:
#line 522 "src/parser.y"
                                 {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 1);

    }
#line 2845 "bin/parser.tab.c"
    break;

  case 77:
#line 531 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2855 "bin/parser.tab.c"
    break;

  case 78:
#line 536 "src/parser.y"
                                            {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("InterfaceList", memArr, 2, 0);
    }
#line 2866 "bin/parser.tab.c"
    break;

  case 79:
#line 544 "src/parser.y"
                                                             {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 2874 "bin/parser.tab.c"
    break;

  case 80:
#line 548 "src/parser.y"
                            { 
        (yyval.exp) = NULL ;
    }
#line 2882 "bin/parser.tab.c"
    break;

  case 81:
#line 551 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        cout << "Class Declarations Reached !" <<endl;
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
        
    }
#line 2915 "bin/parser.tab.c"
    break;

  case 82:
#line 581 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ClassBody", memArr, 1, 0);

    }
#line 2926 "bin/parser.tab.c"
    break;

  case 83:
#line 587 "src/parser.y"
                                                 {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
    }
#line 2937 "bin/parser.tab.c"
    break;

  case 84:
#line 595 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2945 "bin/parser.tab.c"
    break;

  case 85:
#line 598 "src/parser.y"
                        {
        (yyval.exp)=(yyvsp[0].exp);
    }
#line 2953 "bin/parser.tab.c"
    break;

  case 86:
#line 601 "src/parser.y"
                             {
        (yyval.exp)=(yyvsp[0].exp);
    }
#line 2961 "bin/parser.tab.c"
    break;

  case 87:
#line 606 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2969 "bin/parser.tab.c"
    break;

  case 88:
#line 609 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);

    }
#line 2978 "bin/parser.tab.c"
    break;

  case 89:
#line 615 "src/parser.y"
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

    }
#line 3057 "bin/parser.tab.c"
    break;

  case 90:
#line 691 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        // $$->isDeclaration = DECLARATION;
    }
#line 3068 "bin/parser.tab.c"
    break;

  case 91:
#line 697 "src/parser.y"
                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 2, 0);
        // $$->isDeclaration = DECLARATION;
    }
#line 3080 "bin/parser.tab.c"
    break;

  case 92:
#line 706 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->t = 0;
        (yyval.exp)->symbol.name = (yyvsp[0].exp)->symbol.name;


    }
#line 3095 "bin/parser.tab.c"
    break;

  case 93:
#line 716 "src/parser.y"
                                                       {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("=", memArr, 2, 1);
        (yyval.exp)->isDeclaration = INITIALIZATION;
        (yyval.exp)->t = 0;
        (yyval.exp)->symbol.name = (yyvsp[-2].exp)->symbol.name;
    }
#line 3109 "bin/parser.tab.c"
    break;

  case 94:
#line 727 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        string temp  = string((yyvsp[0].data));
        (yyval.exp)->symbol.name = temp;
    }
#line 3119 "bin/parser.tab.c"
    break;

  case 95:
#line 732 "src/parser.y"
                                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.name = temp;
    }
#line 3129 "bin/parser.tab.c"
    break;

  case 96:
#line 739 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3137 "bin/parser.tab.c"
    break;

  case 97:
#line 742 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3145 "bin/parser.tab.c"
    break;

  case 98:
#line 747 "src/parser.y"
                           {
        
        
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr,2, 1);
        (yyval.exp)->symbol = (yyvsp[-1].exp)->symbol;
        (yyval.exp)->isDeclaration = DECLARATION;
        
        glob_insert("scope",(yyvsp[-1].exp)->symbol.name,(yyvsp[-1].exp)->symbol.type,curr,glob_table);
        curr = curr->parent;

    }
#line 3164 "bin/parser.tab.c"
    break;

  case 99:
#line 763 "src/parser.y"
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

        /*
        func_params = $$->symbol;
        symb_insert = 1;
        */
        
    }
#line 3208 "bin/parser.tab.c"
    break;

  case 100:
#line 802 "src/parser.y"
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

    }
#line 3254 "bin/parser.tab.c"
    break;

  case 101:
#line 845 "src/parser.y"
    { 
        (yyval.exp) = NULL;
    }
#line 3262 "bin/parser.tab.c"
    break;

  case 102:
#line 848 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Throws", memArr, 1, 1);
    }
#line 3272 "bin/parser.tab.c"
    break;

  case 103:
#line 855 "src/parser.y"
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
        
    }
#line 3294 "bin/parser.tab.c"
    break;

  case 104:
#line 872 "src/parser.y"
                                                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-2].exp)->data,"[]"), memArr, 1, 0);
        string temp = string((yyvsp[-2].exp)->data)+ "[]";
        (yyval.exp)->symbol.name = temp;
    }
#line 3306 "bin/parser.tab.c"
    break;

  case 105:
#line 880 "src/parser.y"
                          {
        (yyval.exp) = NULL;
    }
#line 3314 "bin/parser.tab.c"
    break;

  case 106:
#line 883 "src/parser.y"
                          {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameters", memArr, 1, 1);
    }
#line 3324 "bin/parser.tab.c"
    break;

  case 107:
#line 890 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameter", memArr, 1, 0);
        
    }
#line 3335 "bin/parser.tab.c"
    break;

  case 108:
#line 896 "src/parser.y"
                                               {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameter", memArr, 2,0);
    }
#line 3346 "bin/parser.tab.c"
    break;

  case 109:
#line 904 "src/parser.y"
                              {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-1].exp)->data, concatenate_string(" ", (yyvsp[0].exp)->data)));
        struct Type temp;
        temp.name = (yyvsp[-1].exp)->symbol.type.name;
        temp.t = (yyvsp[-1].exp)->symbol.type.t;
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
            temp.name += "[]";
        }

        (yyval.exp)->symbol.name = name;
        (yyval.exp)->symbol.type.name = temp.name;
        loc_insert(curr,(yyval.exp)->symbol);
    }
#line 3378 "bin/parser.tab.c"
    break;

  case 110:
#line 933 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("throws", memArr, 1, 1);
    }
#line 3388 "bin/parser.tab.c"
    break;

  case 111:
#line 940 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 1, 0);
    }
#line 3398 "bin/parser.tab.c"
    break;

  case 112:
#line 945 "src/parser.y"
                                    {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp); 
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 2, 0);
    }
#line 3409 "bin/parser.tab.c"
    break;

  case 113:
#line 953 "src/parser.y"
          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3417 "bin/parser.tab.c"
    break;

  case 114:
#line 956 "src/parser.y"
                {
        (yyval.exp) = NULL;
    }
#line 3425 "bin/parser.tab.c"
    break;

  case 115:
#line 962 "src/parser.y"
                                                       {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("static", memArr, 1, 1);
    }
#line 3435 "bin/parser.tab.c"
    break;

  case 116:
#line 969 "src/parser.y"
                                                                   {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-2].exp)->data, memArr, 4, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3449 "bin/parser.tab.c"
    break;

  case 117:
#line 980 "src/parser.y"
                                                                        {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 1, 0);
    }
#line 3459 "bin/parser.tab.c"
    break;

  case 118:
#line 987 "src/parser.y"
                                                                                         {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ConstructorInvocation", memArr, 2, 1);
    }
#line 3470 "bin/parser.tab.c"
    break;

  case 119:
#line 994 "src/parser.y"
                                    { 
    (yyval.exp) = NULL; 
    }
#line 3478 "bin/parser.tab.c"
    break;

  case 120:
#line 997 "src/parser.y"
                                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ExplicitConstructorInvocation", memArr, 1, 1);
    }
#line 3488 "bin/parser.tab.c"
    break;

  case 121:
#line 1004 "src/parser.y"
                                                                     {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode("this", memArr, 1, 0);
    }
#line 3498 "bin/parser.tab.c"
    break;

  case 122:
#line 1009 "src/parser.y"
                                                                        {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode("super", memArr, 1, 0);
    }
#line 3508 "bin/parser.tab.c"
    break;

  case 123:
#line 1015 "src/parser.y"
                  {
    (yyval.exp) = NULL; 
    }
#line 3516 "bin/parser.tab.c"
    break;

  case 124:
#line 1018 "src/parser.y"
                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Arguments", memArr, 1, 0);
    }
#line 3526 "bin/parser.tab.c"
    break;

  case 125:
#line 1025 "src/parser.y"
                                                                           {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = makeleaf((yyvsp[-3].data));
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-2].data), memArr, 4, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3540 "bin/parser.tab.c"
    break;

  case 126:
#line 1035 "src/parser.y"
                        {
    (yyval.exp) = NULL;
    }
#line 3548 "bin/parser.tab.c"
    break;

  case 127:
#line 1038 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 1);
    }
#line 3558 "bin/parser.tab.c"
    break;

  case 128:
#line 1045 "src/parser.y"
                          {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 0);
    }
#line 3568 "bin/parser.tab.c"
    break;

  case 129:
#line 1050 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 2, 0);
    }
#line 3579 "bin/parser.tab.c"
    break;

  case 130:
#line 1058 "src/parser.y"
                                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3587 "bin/parser.tab.c"
    break;

  case 131:
#line 1062 "src/parser.y"
                                 {
        (yyval.exp) = NULL;
    }
#line 3595 "bin/parser.tab.c"
    break;

  case 132:
#line 1065 "src/parser.y"
                                  {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interfaces", memArr, 1, 1);
    }
#line 3605 "bin/parser.tab.c"
    break;

  case 133:
#line 1072 "src/parser.y"
                               {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 1, 0);
    }
#line 3615 "bin/parser.tab.c"
    break;

  case 134:
#line 1077 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 0);
    }
#line 3626 "bin/parser.tab.c"
    break;

  case 135:
#line 1085 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3635 "bin/parser.tab.c"
    break;

  case 136:
#line 1089 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3644 "bin/parser.tab.c"
    break;

  case 137:
#line 1095 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3652 "bin/parser.tab.c"
    break;

  case 138:
#line 1100 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3660 "bin/parser.tab.c"
    break;

  case 139:
#line 1105 "src/parser.y"
                                                                      {
        (yyval.exp) = (yyvsp[-2].exp);
    }
#line 3668 "bin/parser.tab.c"
    break;

  case 140:
#line 1109 "src/parser.y"
                          {
        (yyval.exp) = NULL; 
    }
#line 3676 "bin/parser.tab.c"
    break;

  case 141:
#line 1112 "src/parser.y"
                           {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("VariableInitializers", memArr, 1, 1);
    }
#line 3686 "bin/parser.tab.c"
    break;

  case 142:
#line 1118 "src/parser.y"
            {
        (yyval.exp) = NULL; 
    }
#line 3694 "bin/parser.tab.c"
    break;

  case 143:
#line 1121 "src/parser.y"
            {
        (yyval.exp) = NULL;
    }
#line 3702 "bin/parser.tab.c"
    break;

  case 144:
#line 1126 "src/parser.y"
                        {
       struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 3712 "bin/parser.tab.c"
    break;

  case 145:
#line 1131 "src/parser.y"
                                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Initializer", memArr, 2, 0);
    }
#line 3723 "bin/parser.tab.c"
    break;

  case 146:
#line 1139 "src/parser.y"
                                                       {    
        (yyval.exp) = (yyvsp[-1].exp);
        //cout << "After block !" << endl;
    }
#line 3732 "bin/parser.tab.c"
    break;

  case 147:
#line 1145 "src/parser.y"
    { 
        curr = loc_mktable(curr,"local");
    }
#line 3740 "bin/parser.tab.c"
    break;

  case 148:
#line 1150 "src/parser.y"
    {
        curr = curr->parent;
    }
#line 3748 "bin/parser.tab.c"
    break;

  case 149:
#line 1154 "src/parser.y"
                      {
     (yyval.exp) = NULL; 
     }
#line 3756 "bin/parser.tab.c"
    break;

  case 150:
#line 1157 "src/parser.y"
                      {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("statements", memArr, 1, 1);
    }
#line 3766 "bin/parser.tab.c"
    break;

  case 151:
#line 1164 "src/parser.y"
                   {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Blocks", memArr, 1, 0);
    }
#line 3776 "bin/parser.tab.c"
    break;

  case 152:
#line 1169 "src/parser.y"
                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Block", memArr, 2, 0);
        
    }
#line 3788 "bin/parser.tab.c"
    break;

  case 153:
#line 1178 "src/parser.y"
                                      {
        //$$ = $1;
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("LocalVariableDeclarationStatement", memArr, 1, 1);
        //cout << "LocalVariableDeclaration" <<endl;
    }
#line 3800 "bin/parser.tab.c"
    break;

  case 154:
#line 1185 "src/parser.y"
                {
        //$$ = $1;
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Statement", memArr, 1, 1);

    }
#line 3812 "bin/parser.tab.c"
    break;

  case 155:
#line 1194 "src/parser.y"
                                       {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 1, 0);
    }
#line 3822 "bin/parser.tab.c"
    break;

  case 156:
#line 1201 "src/parser.y"
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
        //cout << "Local Variable Declaration ended " <<endl;
    }
#line 3878 "bin/parser.tab.c"
    break;

  case 157:
#line 1254 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3886 "bin/parser.tab.c"
    break;

  case 158:
#line 1257 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3894 "bin/parser.tab.c"
    break;

  case 159:
#line 1260 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3902 "bin/parser.tab.c"
    break;

  case 160:
#line 1263 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3910 "bin/parser.tab.c"
    break;

  case 161:
#line 1266 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3918 "bin/parser.tab.c"
    break;

  case 162:
#line 1269 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3926 "bin/parser.tab.c"
    break;

  case 163:
#line 1274 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3934 "bin/parser.tab.c"
    break;

  case 164:
#line 1277 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3942 "bin/parser.tab.c"
    break;

  case 165:
#line 1280 "src/parser.y"
                                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3950 "bin/parser.tab.c"
    break;

  case 166:
#line 1283 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3958 "bin/parser.tab.c"
    break;

  case 167:
#line 1286 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3966 "bin/parser.tab.c"
    break;

  case 168:
#line 1291 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3974 "bin/parser.tab.c"
    break;

  case 169:
#line 1294 "src/parser.y"
                     {
        (yyval.exp) = NULL;
    }
#line 3982 "bin/parser.tab.c"
    break;

  case 170:
#line 1297 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3990 "bin/parser.tab.c"
    break;

  case 171:
#line 1300 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3998 "bin/parser.tab.c"
    break;

  case 172:
#line 1303 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4006 "bin/parser.tab.c"
    break;

  case 173:
#line 1306 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4014 "bin/parser.tab.c"
    break;

  case 174:
#line 1309 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4022 "bin/parser.tab.c"
    break;

  case 175:
#line 1312 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4030 "bin/parser.tab.c"
    break;

  case 176:
#line 1315 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4038 "bin/parser.tab.c"
    break;

  case 177:
#line 1320 "src/parser.y"
              {
        (yyval.exp) = NULL;
    }
#line 4046 "bin/parser.tab.c"
    break;

  case 178:
#line 1325 "src/parser.y"
                                   {
        struct node* memArr[2];
        memArr[0] = makeleaf((yyvsp[-2].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("LabeledStatements", memArr, 2, 0);
    }
#line 4057 "bin/parser.tab.c"
    break;

  case 179:
#line 1333 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = makeleaf((yyvsp[-2].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfThen", memArr, 2, 0);
    }
#line 4068 "bin/parser.tab.c"
    break;

  case 180:
#line 1341 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4076 "bin/parser.tab.c"
    break;

  case 181:
#line 1346 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4084 "bin/parser.tab.c"
    break;

  case 182:
#line 1349 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4092 "bin/parser.tab.c"
    break;

  case 183:
#line 1352 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4100 "bin/parser.tab.c"
    break;

  case 184:
#line 1355 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4108 "bin/parser.tab.c"
    break;

  case 185:
#line 1358 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4116 "bin/parser.tab.c"
    break;

  case 186:
#line 1361 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4124 "bin/parser.tab.c"
    break;

  case 187:
#line 1364 "src/parser.y"
                                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4132 "bin/parser.tab.c"
    break;

  case 188:
#line 1369 "src/parser.y"
                                                                                                   {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("IfThen", memArr, 2, 1);
    }
#line 4143 "bin/parser.tab.c"
    break;

  case 189:
#line 1377 "src/parser.y"
                                                                                                                          {
        
        struct node* memArr[3];
        memArr[0] = (yyvsp[-5].exp);
        memArr[1] = (yyvsp[-3].exp);
        memArr[2] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("IfElse", memArr, 3, 1);
        
    }
#line 4157 "bin/parser.tab.c"
    break;

  case 190:
#line 1388 "src/parser.y"
                                                                                                                                    {
        
        struct node* memArr[3];
        memArr[0] = (yyvsp[-5].exp);
        memArr[1] = (yyvsp[-3].exp);
        memArr[2] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("IfElseIf", memArr, 3, 1);
        
    }
#line 4171 "bin/parser.tab.c"
    break;

  case 191:
#line 1399 "src/parser.y"
                                                                                                      {
        
        struct node* memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("While", memArr, 2, 1);
        
    }
#line 4184 "bin/parser.tab.c"
    break;

  case 192:
#line 1409 "src/parser.y"
                                                                                                               {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("While", memArr, 2, 1);
    }
#line 4195 "bin/parser.tab.c"
    break;

  case 193:
#line 1417 "src/parser.y"
                                                                                                                                                     {
        
        struct node* memArr[4];
        memArr[0] = (yyvsp[-7].exp);
        memArr[1] = (yyvsp[-5].exp);
        memArr[2] = (yyvsp[-3].exp);
        memArr[3] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("For", memArr, 4, 1);
        (yyval.exp)->t = 2;

    }
#line 4211 "bin/parser.tab.c"
    break;

  case 194:
#line 1430 "src/parser.y"
                                                                                                                                                              {
        
        struct node* memArr[4];
        memArr[0] = (yyvsp[-7].exp);
        memArr[1] = (yyvsp[-5].exp);
        memArr[2] = (yyvsp[-3].exp);
        memArr[3] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("For", memArr, 4, 1);
    }
#line 4225 "bin/parser.tab.c"
    break;

  case 195:
#line 1440 "src/parser.y"
             { 
    (yyval.exp) = NULL; 
    }
#line 4233 "bin/parser.tab.c"
    break;

  case 196:
#line 1443 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
    }
#line 4243 "bin/parser.tab.c"
    break;

  case 197:
#line 1449 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 4251 "bin/parser.tab.c"
    break;

  case 198:
#line 1452 "src/parser.y"
                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Expression", memArr, 1, 1);
    }
#line 4261 "bin/parser.tab.c"
    break;

  case 199:
#line 1458 "src/parser.y"
               { 
    (yyval.exp) = NULL ;
    }
#line 4269 "bin/parser.tab.c"
    break;

  case 200:
#line 1461 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
    }
#line 4279 "bin/parser.tab.c"
    break;

  case 201:
#line 1468 "src/parser.y"
                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
        // $$->isDeclaration = DECLARATION;
    }
#line 4290 "bin/parser.tab.c"
    break;

  case 202:
#line 1474 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->t=1;
    }
#line 4302 "bin/parser.tab.c"
    break;

  case 203:
#line 1483 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
    }
#line 4312 "bin/parser.tab.c"
    break;

  case 204:
#line 1490 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("StatementExpression", memArr, 1, 0);
    }
#line 4322 "bin/parser.tab.c"
    break;

  case 205:
#line 1495 "src/parser.y"
                                                        {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-2].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("StatementExpression", memArr, 2, 0);
    }
#line 4333 "bin/parser.tab.c"
    break;

  case 206:
#line 1503 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("break", memArr, 1, 1);
    }
#line 4343 "bin/parser.tab.c"
    break;

  case 207:
#line 1510 "src/parser.y"
    {
        (yyval.exp) = NULL;
    }
#line 4351 "bin/parser.tab.c"
    break;

  case 208:
#line 1512 "src/parser.y"
                  {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4359 "bin/parser.tab.c"
    break;

  case 209:
#line 1517 "src/parser.y"
                                      {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("continue", memArr, 1, 1);
    }
#line 4369 "bin/parser.tab.c"
    break;

  case 210:
#line 1524 "src/parser.y"
                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("return", memArr, 1, 1);
    }
#line 4379 "bin/parser.tab.c"
    break;

  case 211:
#line 1531 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("throw", memArr, 1, 1);
    }
#line 4389 "bin/parser.tab.c"
    break;

  case 212:
#line 1538 "src/parser.y"
                                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("synchronized", memArr, 2, 1);
    }
#line 4400 "bin/parser.tab.c"
    break;

  case 213:
#line 1546 "src/parser.y"
                      {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCatches", memArr, 2, 1);
    }
#line 4411 "bin/parser.tab.c"
    break;

  case 214:
#line 1552 "src/parser.y"
                                    {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCtachesFinally", memArr, 3, 1);
    }
#line 4423 "bin/parser.tab.c"
    break;

  case 215:
#line 1560 "src/parser.y"
             {
        (yyval.exp) = NULL; 
    }
#line 4431 "bin/parser.tab.c"
    break;

  case 216:
#line 1563 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catches", memArr, 1, 1);
    }
#line 4441 "bin/parser.tab.c"
    break;

  case 217:
#line 1570 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("catch", memArr, 1, 0);
    }
#line 4451 "bin/parser.tab.c"
    break;

  case 218:
#line 1575 "src/parser.y"
                          {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catch", memArr, 2, 0);
    }
#line 4462 "bin/parser.tab.c"
    break;

  case 219:
#line 1583 "src/parser.y"
                                                                 {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CatchClause", memArr, 2, 0);
    }
#line 4473 "bin/parser.tab.c"
    break;

  case 220:
#line 1591 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("finally", memArr, 1, 1);
    }
#line 4483 "bin/parser.tab.c"
    break;

  case 221:
#line 1598 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4491 "bin/parser.tab.c"
    break;

  case 222:
#line 1601 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4499 "bin/parser.tab.c"
    break;

  case 223:
#line 1606 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4507 "bin/parser.tab.c"
    break;

  case 224:
#line 1609 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4515 "bin/parser.tab.c"
    break;

  case 225:
#line 1612 "src/parser.y"
                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4523 "bin/parser.tab.c"
    break;

  case 226:
#line 1615 "src/parser.y"
                                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4531 "bin/parser.tab.c"
    break;

  case 227:
#line 1618 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4539 "bin/parser.tab.c"
    break;

  case 228:
#line 1621 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4547 "bin/parser.tab.c"
    break;

  case 229:
#line 1624 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4555 "bin/parser.tab.c"
    break;

  case 230:
#line 1629 "src/parser.y"
                                                                    {
        struct node * memArr[3];
        memArr[0] = makeleaf((yyvsp[-4].data));
        memArr[1] =(yyvsp[-3].exp);
        memArr[2] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ClassInstance", memArr, 3, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 4568 "bin/parser.tab.c"
    break;

  case 231:
#line 1639 "src/parser.y"
               {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArgumentList", memArr, 1, 0);
    }
#line 4578 "bin/parser.tab.c"
    break;

  case 232:
#line 1644 "src/parser.y"
                                    {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-2].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArgumentList", memArr, 2, 0);
    }
#line 4589 "bin/parser.tab.c"
    break;

  case 233:
#line 1652 "src/parser.y"
                                        {
        struct node * memArr[4];
        memArr[0] = makeleaf((yyvsp[-3].data));
        memArr[1] =(yyvsp[-2].exp);
        memArr[2] =(yyvsp[-1].exp);
        memArr[3] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArrayCreation", memArr, 4, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 4603 "bin/parser.tab.c"
    break;

  case 234:
#line 1661 "src/parser.y"
                                                 {
        struct node * memArr[4];
        memArr[0] = makeleaf((yyvsp[-3].data));
        memArr[1] =(yyvsp[-2].exp);
        memArr[2] =(yyvsp[-1].exp);
        memArr[3] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArrayCreation", memArr, 4, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 4617 "bin/parser.tab.c"
    break;

  case 235:
#line 1671 "src/parser.y"
          { 
    (yyval.exp) = NULL; 
    }
#line 4625 "bin/parser.tab.c"
    break;

  case 236:
#line 1674 "src/parser.y"
          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4633 "bin/parser.tab.c"
    break;

  case 237:
#line 1679 "src/parser.y"
            {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 4643 "bin/parser.tab.c"
    break;

  case 238:
#line 1684 "src/parser.y"
                       {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]",memArr,2, 0);
    }
#line 4654 "bin/parser.tab.c"
    break;

  case 239:
#line 1692 "src/parser.y"
                                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 4664 "bin/parser.tab.c"
    break;

  case 240:
#line 1699 "src/parser.y"
                                         {
        (yyval.exp) = makeleaf("[]");
    }
#line 4672 "bin/parser.tab.c"
    break;

  case 241:
#line 1702 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
    }
#line 4680 "bin/parser.tab.c"
    break;

  case 242:
#line 1707 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,(yyvsp[0].data)));
    }
#line 4688 "bin/parser.tab.c"
    break;

  case 243:
#line 1710 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),(yyvsp[0].data)));
    }
#line 4696 "bin/parser.tab.c"
    break;

  case 244:
#line 1715 "src/parser.y"
                                                           {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 1, 1);
    }
#line 4706 "bin/parser.tab.c"
    break;

  case 245:
#line 1720 "src/parser.y"
                                                                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].exp)->data,concatenate_string(" ",(yyvsp[-3].data))), memArr, 1, 1);
    }
#line 4716 "bin/parser.tab.c"
    break;

  case 246:
#line 1725 "src/parser.y"
                                                                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].data),concatenate_string(" ",(yyvsp[-3].data))), memArr, 1, 1);
    }
#line 4726 "bin/parser.tab.c"
    break;

  case 247:
#line 1732 "src/parser.y"
                                                        {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ArrayAccess", memArr, 2, 0);
    }
#line 4737 "bin/parser.tab.c"
    break;

  case 248:
#line 1738 "src/parser.y"
                                                                        {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ArrayAccess", memArr, 2, 0);
    }
#line 4748 "bin/parser.tab.c"
    break;

  case 249:
#line 1746 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4756 "bin/parser.tab.c"
    break;

  case 250:
#line 1749 "src/parser.y"
           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4764 "bin/parser.tab.c"
    break;

  case 251:
#line 1752 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4772 "bin/parser.tab.c"
    break;

  case 252:
#line 1755 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4780 "bin/parser.tab.c"
    break;

  case 253:
#line 1760 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("++", memArr, 1, 1);
    }
#line 4790 "bin/parser.tab.c"
    break;

  case 254:
#line 1767 "src/parser.y"
                                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("--", memArr, 1, 1);
    }
#line 4800 "bin/parser.tab.c"
    break;

  case 255:
#line 1774 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4808 "bin/parser.tab.c"
    break;

  case 256:
#line 1777 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4816 "bin/parser.tab.c"
    break;

  case 257:
#line 1780 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("+", memArr, 1, 1);
    }
#line 4826 "bin/parser.tab.c"
    break;

  case 258:
#line 1785 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("-", memArr, 1, 1);
    }
#line 4836 "bin/parser.tab.c"
    break;

  case 259:
#line 1790 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4844 "bin/parser.tab.c"
    break;

  case 260:
#line 1795 "src/parser.y"
                             {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("++", memArr, 2, 1);
    }
#line 4855 "bin/parser.tab.c"
    break;

  case 261:
#line 1803 "src/parser.y"
                               {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("--", memArr, 2, 1);
    }
#line 4866 "bin/parser.tab.c"
    break;

  case 262:
#line 1811 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4874 "bin/parser.tab.c"
    break;

  case 263:
#line 1814 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("~", memArr, 1, 1);
    }
#line 4884 "bin/parser.tab.c"
    break;

  case 264:
#line 1819 "src/parser.y"
                                  {
         struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("!", memArr, 1, 1);
    }
#line 4894 "bin/parser.tab.c"
    break;

  case 265:
#line 1824 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4902 "bin/parser.tab.c"
    break;

  case 266:
#line 1829 "src/parser.y"
                                                                            {
        struct  node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        char * str = concatenate_string((yyvsp[-3].exp)->data, (yyvsp[-2].exp)->data);
        (yyval.exp) = makeInternalNode(str, memArr, 1, 1);
    }
#line 4913 "bin/parser.tab.c"
    break;

  case 267:
#line 1835 "src/parser.y"
                                                                              {
        struct  node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CastExpression", memArr, 2, 1);
    }
#line 4924 "bin/parser.tab.c"
    break;

  case 268:
#line 1841 "src/parser.y"
                                                                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        char * str = concatenate_string((yyvsp[-3].exp)->data, (yyvsp[-2].exp)->data);
        (yyval.exp) = makeInternalNode(str, memArr, 1, 1);
    }
#line 4935 "bin/parser.tab.c"
    break;

  case 269:
#line 1849 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4943 "bin/parser.tab.c"
    break;

  case 270:
#line 1852 "src/parser.y"
                                                       {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("*", memArr, 2, 1); 
    }
#line 4954 "bin/parser.tab.c"
    break;

  case 271:
#line 1858 "src/parser.y"
                                                      {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("/", memArr, 2, 1); 
    }
#line 4965 "bin/parser.tab.c"
    break;

  case 272:
#line 1864 "src/parser.y"
                                                      {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Modulo", memArr, 2, 1); 
    }
#line 4976 "bin/parser.tab.c"
    break;

  case 273:
#line 1872 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4984 "bin/parser.tab.c"
    break;

  case 274:
#line 1875 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("+", memArr, 2, 1); 
    }
#line 4995 "bin/parser.tab.c"
    break;

  case 275:
#line 1881 "src/parser.y"
                                                               {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("-", memArr, 2, 1); 
    }
#line 5006 "bin/parser.tab.c"
    break;

  case 276:
#line 1889 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5014 "bin/parser.tab.c"
    break;

  case 277:
#line 1892 "src/parser.y"
                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<<", memArr, 2, 1); 
    }
#line 5025 "bin/parser.tab.c"
    break;

  case 278:
#line 1898 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">>", memArr, 2, 1); 
    }
#line 5036 "bin/parser.tab.c"
    break;

  case 279:
#line 1904 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">>>", memArr, 2, 1); 
    }
#line 5047 "bin/parser.tab.c"
    break;

  case 280:
#line 1912 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5055 "bin/parser.tab.c"
    break;

  case 281:
#line 1915 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">", memArr, 2, 1); 
    }
#line 5066 "bin/parser.tab.c"
    break;

  case 282:
#line 1921 "src/parser.y"
                                                       {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<", memArr, 2, 1); 
    }
#line 5077 "bin/parser.tab.c"
    break;

  case 283:
#line 1927 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<=", memArr, 2, 1); 
    }
#line 5088 "bin/parser.tab.c"
    break;

  case 284:
#line 1933 "src/parser.y"
                                                              {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">=", memArr, 2, 1); 
    }
#line 5099 "bin/parser.tab.c"
    break;

  case 285:
#line 1939 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Instanceof", memArr, 2, 1); 
    }
#line 5110 "bin/parser.tab.c"
    break;

  case 286:
#line 1947 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5118 "bin/parser.tab.c"
    break;

  case 287:
#line 1950 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("==", memArr, 2, 1); 
    }
#line 5129 "bin/parser.tab.c"
    break;

  case 288:
#line 1956 "src/parser.y"
                                                         {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("!=", memArr, 2, 1); 
    }
#line 5140 "bin/parser.tab.c"
    break;

  case 289:
#line 1964 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5148 "bin/parser.tab.c"
    break;

  case 290:
#line 1967 "src/parser.y"
                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("&", memArr, 2 ,1); 
    }
#line 5159 "bin/parser.tab.c"
    break;

  case 291:
#line 1975 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5167 "bin/parser.tab.c"
    break;

  case 292:
#line 1978 "src/parser.y"
                                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("xor", memArr, 2 ,1); 
    }
#line 5178 "bin/parser.tab.c"
    break;

  case 293:
#line 1986 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5186 "bin/parser.tab.c"
    break;

  case 294:
#line 1989 "src/parser.y"
                                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("|", memArr, 2, 1); 
    }
#line 5197 "bin/parser.tab.c"
    break;

  case 295:
#line 1997 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5205 "bin/parser.tab.c"
    break;

  case 296:
#line 2000 "src/parser.y"
                                                                 {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("&&", memArr, 2, 1); 
    }
#line 5216 "bin/parser.tab.c"
    break;

  case 297:
#line 2008 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5224 "bin/parser.tab.c"
    break;

  case 298:
#line 2011 "src/parser.y"
                                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("||", memArr, 2, 1); 
    }
#line 5235 "bin/parser.tab.c"
    break;

  case 299:
#line 2019 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5243 "bin/parser.tab.c"
    break;

  case 300:
#line 2022 "src/parser.y"
                                                                                  {
        struct node* memArr[3];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("TernaryOperator", memArr, 3, 1); 
    }
#line 5255 "bin/parser.tab.c"
    break;

  case 301:
#line 2031 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5263 "bin/parser.tab.c"
    break;

  case 302:
#line 2034 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5271 "bin/parser.tab.c"
    break;

  case 303:
#line 2039 "src/parser.y"
                                                         {
    struct node* memArr[2];
    memArr[0] = (yyvsp[-2].exp);
    memArr[1] = (yyvsp[0].exp);
    (yyval.exp) = makeInternalNode("=", memArr, 2, 1);
}
#line 5282 "bin/parser.tab.c"
    break;

  case 304:
#line 2047 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5290 "bin/parser.tab.c"
    break;

  case 305:
#line 2050 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5298 "bin/parser.tab.c"
    break;

  case 306:
#line 2053 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5306 "bin/parser.tab.c"
    break;

  case 307:
#line 2058 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5314 "bin/parser.tab.c"
    break;

  case 308:
#line 2061 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5322 "bin/parser.tab.c"
    break;

  case 309:
#line 2064 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5330 "bin/parser.tab.c"
    break;

  case 310:
#line 2067 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5338 "bin/parser.tab.c"
    break;

  case 311:
#line 2070 "src/parser.y"
                      {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5346 "bin/parser.tab.c"
    break;

  case 312:
#line 2073 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5354 "bin/parser.tab.c"
    break;

  case 313:
#line 2076 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5362 "bin/parser.tab.c"
    break;

  case 314:
#line 2079 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5370 "bin/parser.tab.c"
    break;

  case 315:
#line 2082 "src/parser.y"
                                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5378 "bin/parser.tab.c"
    break;

  case 316:
#line 2085 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5386 "bin/parser.tab.c"
    break;

  case 317:
#line 2088 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5394 "bin/parser.tab.c"
    break;

  case 318:
#line 2091 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5402 "bin/parser.tab.c"
    break;

  case 319:
#line 2095 "src/parser.y"
                                 {
    (yyval.exp) = (yyvsp[0].exp);
}
#line 5410 "bin/parser.tab.c"
    break;


#line 5414 "bin/parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2100 "src/parser.y"



int yyerror(string s)
{
    //printf("Error detected ! %s at [ line number: %lld ] after removing the comments.\nExiting...\n",s,line_number);
    cout << s <<endl <<endl;
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
    struct node* leaf = (struct node*)malloc(sizeof(struct node));
    (leaf->symbol).structuretable = new struct StructureTable;
    strcpy(leaf->data, nodeStr);
    leaf->parentFlag = 1;
    leaf->isDeclaration = NON_DECLARAION;
    leaf->lineNumber = line_number;
    leaf->symbol.line_num = line_number;
    leaf->t = 0;
    leaf->arr.clear();
    leaf->symbol.type.modifier.clear();
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

    viewGlobal(glob_table);

    //ast_print(root,0,0);

    FILE* graph = fopen(output_file,"w");
    fprintf(graph, "digraph AST{ \n");
    generateGraph(root, graph);
    fprintf(graph, "} \n");
    fclose(graph);
    fclose(yyin);

    return 0;

}



