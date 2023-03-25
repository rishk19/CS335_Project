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
    vector<node*> arr;
    Symbol symbol;
};

struct node* makeInternalNode(char* rule, struct node* memArr[], int n, int isParent);
struct node* makeleaf(char* node);
char* concatenate_string(char* s, char* s1);
int semantic_error(string s);
void help();
long long int line_number=1;
struct GlobalSymbolTable* glob_table = new struct GlobalSymbolTable;
struct SymbolTable* curr = loc_mktable(NULL,"global_scope"); //parameters are parent-pointer,  local-table-name
struct SymbolTable* glob_class_scope = curr;
string class_name = "";
int assign_flag = 0;
string src_file = "";


#line 124 "bin/parser.tab.cc"

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
#ifndef YY_YY_BIN_PARSER_TAB_HH_INCLUDED
# define YY_YY_BIN_PARSER_TAB_HH_INCLUDED
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
#line 61 "src/parser.y"

    char data[100];
    struct node *exp;

#line 315 "bin/parser.tab.cc"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BIN_PARSER_TAB_HH_INCLUDED  */



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
#define YYLAST   1482

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  134
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  153
/* YYNRULES -- Number of rules.  */
#define YYNRULES  317
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  520

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
       0,   141,   141,   148,   151,   155,   159,   163,   167,   173,
     178,   182,   188,   191,   196,   199,   207,   210,   215,   221,
     227,   233,   239,   247,   253,   261,   264,   269,   274,   279,
     284,   290,   297,   306,   309,   314,   323,   328,   338,   341,
     348,   353,   361,   364,   371,   376,   384,   387,   392,   397,
     400,   405,   410,   415,   418,   421,   426,   431,   439,   442,
     445,   448,   451,   454,   457,   460,   463,   466,   470,   500,
     508,   511,   517,   520,   524,   527,   532,   537,   546,   551,
     559,   563,   566,   575,   581,   589,   592,   595,   600,   607,
     613,   700,   705,   713,   723,   734,   739,   746,   749,   754,
     773,   802,   834,   837,   844,   861,   869,   872,   879,   885,
     893,   923,   930,   935,   943,   946,   952,   959,   971,   984,
     991,  1012,  1015,  1022,  1032,  1035,  1042,  1047,  1055,  1059,
    1062,  1069,  1074,  1082,  1086,  1092,  1097,  1102,  1106,  1109,
    1115,  1118,  1123,  1128,  1136,  1141,  1146,  1150,  1153,  1160,
    1165,  1174,  1179,  1187,  1194,  1241,  1244,  1247,  1250,  1253,
    1256,  1261,  1264,  1267,  1270,  1273,  1278,  1281,  1284,  1287,
    1290,  1293,  1296,  1299,  1302,  1307,  1312,  1320,  1328,  1333,
    1336,  1339,  1342,  1345,  1348,  1351,  1356,  1364,  1375,  1386,
    1396,  1404,  1417,  1427,  1430,  1436,  1439,  1445,  1448,  1455,
    1460,  1469,  1476,  1481,  1489,  1496,  1498,  1503,  1510,  1517,
    1524,  1532,  1538,  1546,  1549,  1556,  1561,  1569,  1577,  1584,
    1587,  1592,  1595,  1598,  1601,  1604,  1607,  1610,  1615,  1625,
    1630,  1638,  1647,  1657,  1660,  1665,  1670,  1678,  1685,  1688,
    1693,  1696,  1701,  1745,  1750,  1757,  1795,  1835,  1838,  1841,
    1844,  1849,  1856,  1863,  1866,  1869,  1874,  1879,  1884,  1892,
    1900,  1903,  1908,  1913,  1918,  1924,  1930,  1938,  1941,  1947,
    1953,  1961,  1964,  1970,  1978,  1981,  1987,  1993,  2001,  2004,
    2010,  2016,  2022,  2028,  2036,  2039,  2045,  2053,  2056,  2064,
    2067,  2075,  2078,  2086,  2089,  2097,  2100,  2108,  2111,  2120,
    2123,  2128,  2137,  2147,  2150,  2163,  2166,  2169,  2172,  2175,
    2178,  2181,  2184,  2187,  2190,  2193,  2196,  2200
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
      -1,     2,   151,   152,   153,    84,    85,    86,    87,    88,
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

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
#line 141 "src/parser.y"
                      {
    printf("Parsing stage was successful !\n");
    (yyval.exp) = (yyvsp[0].exp);
}
#line 2152 "bin/parser.tab.cc"
    break;

  case 3:
#line 148 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2160 "bin/parser.tab.cc"
    break;

  case 4:
#line 151 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "float";
    }
#line 2169 "bin/parser.tab.cc"
    break;

  case 5:
#line 155 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "boolean";
    }
#line 2178 "bin/parser.tab.cc"
    break;

  case 6:
#line 159 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "character";
    }
#line 2187 "bin/parser.tab.cc"
    break;

  case 7:
#line 163 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "string";
    }
#line 2196 "bin/parser.tab.cc"
    break;

  case 8:
#line 167 "src/parser.y"
                 {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "null";
    }
#line 2205 "bin/parser.tab.cc"
    break;

  case 9:
#line 173 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";

    }
#line 2215 "bin/parser.tab.cc"
    break;

  case 10:
#line 178 "src/parser.y"
                        {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";
    }
#line 2224 "bin/parser.tab.cc"
    break;

  case 11:
#line 182 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";
    }
#line 2233 "bin/parser.tab.cc"
    break;

  case 12:
#line 188 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2241 "bin/parser.tab.cc"
    break;

  case 13:
#line 191 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2249 "bin/parser.tab.cc"
    break;

  case 14:
#line 196 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2257 "bin/parser.tab.cc"
    break;

  case 15:
#line 199 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "boolean";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 1;
    }
#line 2268 "bin/parser.tab.cc"
    break;

  case 16:
#line 207 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2276 "bin/parser.tab.cc"
    break;

  case 17:
#line 210 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2284 "bin/parser.tab.cc"
    break;

  case 18:
#line 215 "src/parser.y"
         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "byte";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 1;
    }
#line 2295 "bin/parser.tab.cc"
    break;

  case 19:
#line 221 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "short";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 2;
    }
#line 2306 "bin/parser.tab.cc"
    break;

  case 20:
#line 227 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)-> symbol.size = 4;
    }
#line 2317 "bin/parser.tab.cc"
    break;

  case 21:
#line 233 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "long";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2328 "bin/parser.tab.cc"
    break;

  case 22:
#line 239 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "char";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 2;
    }
#line 2339 "bin/parser.tab.cc"
    break;

  case 23:
#line 247 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.type.name = "float";
        (yyval.exp)->symbol.size = 4;
    }
#line 2350 "bin/parser.tab.cc"
    break;

  case 24:
#line 253 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "double";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2361 "bin/parser.tab.cc"
    break;

  case 25:
#line 261 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2369 "bin/parser.tab.cc"
    break;

  case 26:
#line 264 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2377 "bin/parser.tab.cc"
    break;

  case 27:
#line 269 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2385 "bin/parser.tab.cc"
    break;

  case 28:
#line 274 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2393 "bin/parser.tab.cc"
    break;

  case 29:
#line 279 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2401 "bin/parser.tab.cc"
    break;

  case 30:
#line 284 "src/parser.y"
                                                       {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data)+"[]";
        (yyval.exp)->symbol.type.name = temp;
    }
#line 2412 "bin/parser.tab.cc"
    break;

  case 31:
#line 290 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.type.name = temp;

    }
#line 2424 "bin/parser.tab.cc"
    break;

  case 32:
#line 297 "src/parser.y"
                                                     {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.type.name = temp;

    }
#line 2436 "bin/parser.tab.cc"
    break;

  case 33:
#line 306 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2444 "bin/parser.tab.cc"
    break;

  case 34:
#line 309 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2452 "bin/parser.tab.cc"
    break;

  case 35:
#line 314 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));  
        struct Symbol* lookup_entry = check_scope(curr,(yyvsp[0].data));      
        if(lookup_entry != NULL){
            (yyval.exp)->symbol = *lookup_entry;
        }
    }
#line 2464 "bin/parser.tab.cc"
    break;

  case 36:
#line 323 "src/parser.y"
                        {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,concatenate_string((yyvsp[-1].data),(yyvsp[0].data))));
    }
#line 2472 "bin/parser.tab.cc"
    break;

  case 37:
#line 328 "src/parser.y"
                                                                       {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CompilationUnit", memArr, 3, 1);
        root = (yyval.exp);
    }
#line 2485 "bin/parser.tab.cc"
    break;

  case 38:
#line 338 "src/parser.y"
    { 
        (yyval.exp) = NULL; 
    }
#line 2493 "bin/parser.tab.cc"
    break;

  case 39:
#line 341 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Imports", memArr, 1, 1);
    }
#line 2503 "bin/parser.tab.cc"
    break;

  case 40:
#line 348 "src/parser.y"
                      {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2513 "bin/parser.tab.cc"
    break;

  case 41:
#line 353 "src/parser.y"
                                           {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateImports", memArr, 2, 0);
    }
#line 2524 "bin/parser.tab.cc"
    break;

  case 42:
#line 361 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2532 "bin/parser.tab.cc"
    break;

  case 43:
#line 364 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Declarations", memArr, 1, 0);
    }
#line 2542 "bin/parser.tab.cc"
    break;

  case 44:
#line 371 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2552 "bin/parser.tab.cc"
    break;

  case 45:
#line 376 "src/parser.y"
                                       {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
    }
#line 2563 "bin/parser.tab.cc"
    break;

  case 46:
#line 384 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2571 "bin/parser.tab.cc"
    break;

  case 47:
#line 387 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2579 "bin/parser.tab.cc"
    break;

  case 48:
#line 392 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),concatenate_string(" ",(yyvsp[-1].exp)->data)));
    }
#line 2587 "bin/parser.tab.cc"
    break;

  case 49:
#line 397 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2595 "bin/parser.tab.cc"
    break;

  case 50:
#line 400 "src/parser.y"
                                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2603 "bin/parser.tab.cc"
    break;

  case 51:
#line 405 "src/parser.y"
                          {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data), concatenate_string(" ",(yyvsp[-1].exp)->data)));
    }
#line 2611 "bin/parser.tab.cc"
    break;

  case 52:
#line 410 "src/parser.y"
                                      {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-4].data), concatenate_string(" ",concatenate_string((yyvsp[-3].exp)->data,".*"))));
    }
#line 2619 "bin/parser.tab.cc"
    break;

  case 53:
#line 415 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2627 "bin/parser.tab.cc"
    break;

  case 54:
#line 418 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2635 "bin/parser.tab.cc"
    break;

  case 55:
#line 421 "src/parser.y"
                {
        (yyval.exp) = NULL;
    }
#line 2643 "bin/parser.tab.cc"
    break;

  case 56:
#line 426 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2653 "bin/parser.tab.cc"
    break;

  case 57:
#line 431 "src/parser.y"
                         {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifier", memArr, 2, 0);
    }
#line 2664 "bin/parser.tab.cc"
    break;

  case 58:
#line 439 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2672 "bin/parser.tab.cc"
    break;

  case 59:
#line 442 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2680 "bin/parser.tab.cc"
    break;

  case 60:
#line 445 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2688 "bin/parser.tab.cc"
    break;

  case 61:
#line 448 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2696 "bin/parser.tab.cc"
    break;

  case 62:
#line 451 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2704 "bin/parser.tab.cc"
    break;

  case 63:
#line 454 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2712 "bin/parser.tab.cc"
    break;

  case 64:
#line 457 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2720 "bin/parser.tab.cc"
    break;

  case 65:
#line 460 "src/parser.y"
                   {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2728 "bin/parser.tab.cc"
    break;

  case 66:
#line 463 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2736 "bin/parser.tab.cc"
    break;

  case 67:
#line 466 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2744 "bin/parser.tab.cc"
    break;

  case 68:
#line 470 "src/parser.y"
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
#line 2776 "bin/parser.tab.cc"
    break;

  case 69:
#line 500 "src/parser.y"
                                                                        {
        
        struct node * memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ClassDeclaration", memArr, 2, 0);        
    }
#line 2788 "bin/parser.tab.cc"
    break;

  case 70:
#line 508 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 2796 "bin/parser.tab.cc"
    break;

  case 71:
#line 511 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifiers", memArr, 1, 1);
    }
#line 2806 "bin/parser.tab.cc"
    break;

  case 72:
#line 517 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2814 "bin/parser.tab.cc"
    break;

  case 73:
#line 520 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2822 "bin/parser.tab.cc"
    break;

  case 74:
#line 524 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2830 "bin/parser.tab.cc"
    break;

  case 75:
#line 527 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2838 "bin/parser.tab.cc"
    break;

  case 76:
#line 532 "src/parser.y"
                      {
        (yyval.exp) = makeleaf((yyvsp[0].exp)->data);
    }
#line 2846 "bin/parser.tab.cc"
    break;

  case 77:
#line 537 "src/parser.y"
                                 {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 1);

    }
#line 2858 "bin/parser.tab.cc"
    break;

  case 78:
#line 546 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2868 "bin/parser.tab.cc"
    break;

  case 79:
#line 551 "src/parser.y"
                                            {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("InterfaceList", memArr, 2, 0);
    }
#line 2879 "bin/parser.tab.cc"
    break;

  case 80:
#line 559 "src/parser.y"
                                                             {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 2887 "bin/parser.tab.cc"
    break;

  case 81:
#line 563 "src/parser.y"
                            { 
        (yyval.exp) = NULL ;
    }
#line 2895 "bin/parser.tab.cc"
    break;

  case 82:
#line 566 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        //cout << "Class Declarations Reached !" <<endl;
        (yyval.exp) = makeInternalNode("ClassBody", memArr, 1, 1);
        
    }
#line 2907 "bin/parser.tab.cc"
    break;

  case 83:
#line 575 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ClassBody", memArr, 1, 0);

    }
#line 2918 "bin/parser.tab.cc"
    break;

  case 84:
#line 581 "src/parser.y"
                                                 {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
    }
#line 2929 "bin/parser.tab.cc"
    break;

  case 85:
#line 589 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2937 "bin/parser.tab.cc"
    break;

  case 86:
#line 592 "src/parser.y"
                        {
        (yyval.exp)=(yyvsp[0].exp);
    }
#line 2945 "bin/parser.tab.cc"
    break;

  case 87:
#line 595 "src/parser.y"
                             {
        (yyval.exp)=(yyvsp[0].exp);
    }
#line 2953 "bin/parser.tab.cc"
    break;

  case 88:
#line 600 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
        struct Symbol* class_entry = loc_lookup(glob_class_scope,class_name);
        if(class_entry != NULL){
            class_entry->size += (yyval.exp)->symbol.size;
        }
    }
#line 2965 "bin/parser.tab.cc"
    break;

  case 89:
#line 607 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);

    }
#line 2974 "bin/parser.tab.cc"
    break;

  case 90:
#line 613 "src/parser.y"
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


                (yyval.exp)->symbol.name = name;
                long long int x  = loc_insert(curr,(yyval.exp)->symbol);;
                if(x < 0)
                {
                    semantic_error("Declaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x) );
                }

            }
        }

    }
#line 3064 "bin/parser.tab.cc"
    break;

  case 91:
#line 700 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 3074 "bin/parser.tab.cc"
    break;

  case 92:
#line 705 "src/parser.y"
                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 2, 0);
    }
#line 3085 "bin/parser.tab.cc"
    break;

  case 93:
#line 713 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->t = 0;
        (yyval.exp)->symbol.name = (yyvsp[0].exp)->symbol.name;


    }
#line 3100 "bin/parser.tab.cc"
    break;

  case 94:
#line 723 "src/parser.y"
                                                       {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("=", memArr, 2, 1);
        (yyval.exp)->isDeclaration = INITIALIZATION;
        (yyval.exp)->t = 0;
        (yyval.exp)->symbol.name = (yyvsp[-2].exp)->symbol.name;
    }
#line 3114 "bin/parser.tab.cc"
    break;

  case 95:
#line 734 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        string temp  = string((yyvsp[0].data));
        (yyval.exp)->symbol.name = temp;
    }
#line 3124 "bin/parser.tab.cc"
    break;

  case 96:
#line 739 "src/parser.y"
                                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.name = temp;
    }
#line 3134 "bin/parser.tab.cc"
    break;

  case 97:
#line 746 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3142 "bin/parser.tab.cc"
    break;

  case 98:
#line 749 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3150 "bin/parser.tab.cc"
    break;

  case 99:
#line 754 "src/parser.y"
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

    }
#line 3172 "bin/parser.tab.cc"
    break;

  case 100:
#line 773 "src/parser.y"
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
        glob_insert(line_number,class_name,(yyval.exp)->symbol.name,(yyval.exp)->symbol.type,curr,glob_table);
        
    }
#line 3206 "bin/parser.tab.cc"
    break;

  case 101:
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

        glob_insert(line_number,class_name,(yyval.exp)->symbol.name,(yyval.exp)->symbol.type,curr,glob_table);
        
    }
#line 3241 "bin/parser.tab.cc"
    break;

  case 102:
#line 834 "src/parser.y"
    { 
        (yyval.exp) = NULL;
    }
#line 3249 "bin/parser.tab.cc"
    break;

  case 103:
#line 837 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Throws", memArr, 1, 1);
    }
#line 3259 "bin/parser.tab.cc"
    break;

  case 104:
#line 844 "src/parser.y"
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
#line 3281 "bin/parser.tab.cc"
    break;

  case 105:
#line 861 "src/parser.y"
                                                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-2].exp)->data,"[]"), memArr, 1, 0);
        string temp = string((yyvsp[-2].exp)->data)+ "[]";
        (yyval.exp)->symbol.name = temp;
    }
#line 3293 "bin/parser.tab.cc"
    break;

  case 106:
#line 869 "src/parser.y"
                          {
        (yyval.exp) = NULL;
    }
#line 3301 "bin/parser.tab.cc"
    break;

  case 107:
#line 872 "src/parser.y"
                          {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameters", memArr, 1, 1);
    }
#line 3311 "bin/parser.tab.cc"
    break;

  case 108:
#line 879 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameter", memArr, 1, 0);
        
    }
#line 3322 "bin/parser.tab.cc"
    break;

  case 109:
#line 885 "src/parser.y"
                                               {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameter", memArr, 2,0);
    }
#line 3333 "bin/parser.tab.cc"
    break;

  case 110:
#line 893 "src/parser.y"
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
    }
#line 3366 "bin/parser.tab.cc"
    break;

  case 111:
#line 923 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("throws", memArr, 1, 1);
    }
#line 3376 "bin/parser.tab.cc"
    break;

  case 112:
#line 930 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 1, 0);
    }
#line 3386 "bin/parser.tab.cc"
    break;

  case 113:
#line 935 "src/parser.y"
                                    {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp); 
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 2, 0);
    }
#line 3397 "bin/parser.tab.cc"
    break;

  case 114:
#line 943 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3405 "bin/parser.tab.cc"
    break;

  case 115:
#line 946 "src/parser.y"
                                 {
        (yyval.exp) = NULL;
    }
#line 3413 "bin/parser.tab.cc"
    break;

  case 116:
#line 952 "src/parser.y"
                                                       {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("static", memArr, 1, 1);
    }
#line 3423 "bin/parser.tab.cc"
    break;

  case 117:
#line 959 "src/parser.y"
                                                                                     {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-3].exp);
        memArr[2] = (yyvsp[-2].exp);
        memArr[3] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 4, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        if((yyvsp[-4].exp) != NULL);
    }
#line 3438 "bin/parser.tab.cc"
    break;

  case 118:
#line 971 "src/parser.y"
                                                                                            {
        
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-4].exp)->data, memArr, 1, 0);
        if(string((yyvsp[-4].exp)->data) != class_name){
            semantic_error("Constructor Declaration at line number " + to_string(line_number) +  " is not declared properly." );
        }
        (yyval.exp)->symbol.name = (yyvsp[-4].exp)->data;
        
    }
#line 3454 "bin/parser.tab.cc"
    break;

  case 119:
#line 984 "src/parser.y"
                                                                                         {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ConstructorInvocation", memArr, 2, 1);
    }
#line 3465 "bin/parser.tab.cc"
    break;

  case 120:
#line 991 "src/parser.y"
                                    { 
    (yyval.exp) = NULL; 
    }
#line 3473 "bin/parser.tab.cc"
    break;

  case 121:
#line 1012 "src/parser.y"
                  {
    (yyval.exp) = NULL; 
    }
#line 3481 "bin/parser.tab.cc"
    break;

  case 122:
#line 1015 "src/parser.y"
                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Arguments", memArr, 1, 0);
    }
#line 3491 "bin/parser.tab.cc"
    break;

  case 123:
#line 1022 "src/parser.y"
                                                                           {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = makeleaf((yyvsp[-3].data));
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-2].data), memArr, 4, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3505 "bin/parser.tab.cc"
    break;

  case 124:
#line 1032 "src/parser.y"
                        {
    (yyval.exp) = NULL;
    }
#line 3513 "bin/parser.tab.cc"
    break;

  case 125:
#line 1035 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 1);
    }
#line 3523 "bin/parser.tab.cc"
    break;

  case 126:
#line 1042 "src/parser.y"
                          {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 0);
    }
#line 3533 "bin/parser.tab.cc"
    break;

  case 127:
#line 1047 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 2, 0);
    }
#line 3544 "bin/parser.tab.cc"
    break;

  case 128:
#line 1055 "src/parser.y"
                                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3552 "bin/parser.tab.cc"
    break;

  case 129:
#line 1059 "src/parser.y"
                                 {
        (yyval.exp) = NULL;
    }
#line 3560 "bin/parser.tab.cc"
    break;

  case 130:
#line 1062 "src/parser.y"
                                  {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interfaces", memArr, 1, 1);
    }
#line 3570 "bin/parser.tab.cc"
    break;

  case 131:
#line 1069 "src/parser.y"
                               {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 1, 0);
    }
#line 3580 "bin/parser.tab.cc"
    break;

  case 132:
#line 1074 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 0);
    }
#line 3591 "bin/parser.tab.cc"
    break;

  case 133:
#line 1082 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3600 "bin/parser.tab.cc"
    break;

  case 134:
#line 1086 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3609 "bin/parser.tab.cc"
    break;

  case 135:
#line 1092 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3617 "bin/parser.tab.cc"
    break;

  case 136:
#line 1097 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3625 "bin/parser.tab.cc"
    break;

  case 137:
#line 1102 "src/parser.y"
                                                                      {
        (yyval.exp) = (yyvsp[-2].exp);
    }
#line 3633 "bin/parser.tab.cc"
    break;

  case 138:
#line 1106 "src/parser.y"
                          {
        (yyval.exp) = NULL; 
    }
#line 3641 "bin/parser.tab.cc"
    break;

  case 139:
#line 1109 "src/parser.y"
                           {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("VariableInitializers", memArr, 1, 1);
    }
#line 3651 "bin/parser.tab.cc"
    break;

  case 140:
#line 1115 "src/parser.y"
            {
        (yyval.exp) = NULL; 
    }
#line 3659 "bin/parser.tab.cc"
    break;

  case 141:
#line 1118 "src/parser.y"
            {
        (yyval.exp) = NULL;
    }
#line 3667 "bin/parser.tab.cc"
    break;

  case 142:
#line 1123 "src/parser.y"
                        {
       struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 3677 "bin/parser.tab.cc"
    break;

  case 143:
#line 1128 "src/parser.y"
                                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Initializer", memArr, 2, 0);
    }
#line 3688 "bin/parser.tab.cc"
    break;

  case 144:
#line 1136 "src/parser.y"
                                                       {    
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3696 "bin/parser.tab.cc"
    break;

  case 145:
#line 1141 "src/parser.y"
    { 
        curr = loc_mktable(curr,"local");
    }
#line 3704 "bin/parser.tab.cc"
    break;

  case 146:
#line 1146 "src/parser.y"
    {
        curr = curr->parent;
    }
#line 3712 "bin/parser.tab.cc"
    break;

  case 147:
#line 1150 "src/parser.y"
                      {
     (yyval.exp) = NULL; 
     }
#line 3720 "bin/parser.tab.cc"
    break;

  case 148:
#line 1153 "src/parser.y"
                      {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("statements", memArr, 1, 1);
    }
#line 3730 "bin/parser.tab.cc"
    break;

  case 149:
#line 1160 "src/parser.y"
                   {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Blocks", memArr, 1, 0);
    }
#line 3740 "bin/parser.tab.cc"
    break;

  case 150:
#line 1165 "src/parser.y"
                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Block", memArr, 2, 0);
        
    }
#line 3752 "bin/parser.tab.cc"
    break;

  case 151:
#line 1174 "src/parser.y"
                                      {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("LocalVariableDeclarationStatement", memArr, 1, 1);
    }
#line 3762 "bin/parser.tab.cc"
    break;

  case 152:
#line 1179 "src/parser.y"
                {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Statement", memArr, 1, 1);

    }
#line 3773 "bin/parser.tab.cc"
    break;

  case 153:
#line 1187 "src/parser.y"
                                       {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 1, 0);
    }
#line 3783 "bin/parser.tab.cc"
    break;

  case 154:
#line 1194 "src/parser.y"
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
    }
#line 3833 "bin/parser.tab.cc"
    break;

  case 155:
#line 1241 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3841 "bin/parser.tab.cc"
    break;

  case 156:
#line 1244 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3849 "bin/parser.tab.cc"
    break;

  case 157:
#line 1247 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3857 "bin/parser.tab.cc"
    break;

  case 158:
#line 1250 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3865 "bin/parser.tab.cc"
    break;

  case 159:
#line 1253 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3873 "bin/parser.tab.cc"
    break;

  case 160:
#line 1256 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3881 "bin/parser.tab.cc"
    break;

  case 161:
#line 1261 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3889 "bin/parser.tab.cc"
    break;

  case 162:
#line 1264 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3897 "bin/parser.tab.cc"
    break;

  case 163:
#line 1267 "src/parser.y"
                                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3905 "bin/parser.tab.cc"
    break;

  case 164:
#line 1270 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3913 "bin/parser.tab.cc"
    break;

  case 165:
#line 1273 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3921 "bin/parser.tab.cc"
    break;

  case 166:
#line 1278 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3929 "bin/parser.tab.cc"
    break;

  case 167:
#line 1281 "src/parser.y"
                     {
        (yyval.exp) = NULL;
    }
#line 3937 "bin/parser.tab.cc"
    break;

  case 168:
#line 1284 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3945 "bin/parser.tab.cc"
    break;

  case 169:
#line 1287 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3953 "bin/parser.tab.cc"
    break;

  case 170:
#line 1290 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3961 "bin/parser.tab.cc"
    break;

  case 171:
#line 1293 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3969 "bin/parser.tab.cc"
    break;

  case 172:
#line 1296 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3977 "bin/parser.tab.cc"
    break;

  case 173:
#line 1299 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3985 "bin/parser.tab.cc"
    break;

  case 174:
#line 1302 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3993 "bin/parser.tab.cc"
    break;

  case 175:
#line 1307 "src/parser.y"
              {
        (yyval.exp) = NULL;
    }
#line 4001 "bin/parser.tab.cc"
    break;

  case 176:
#line 1312 "src/parser.y"
                                   {
        struct node* memArr[2];
        memArr[0] = makeleaf((yyvsp[-2].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("LabeledStatements", memArr, 2, 0);
    }
#line 4012 "bin/parser.tab.cc"
    break;

  case 177:
#line 1320 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = makeleaf((yyvsp[-2].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfThen", memArr, 2, 0);
    }
#line 4023 "bin/parser.tab.cc"
    break;

  case 178:
#line 1328 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4031 "bin/parser.tab.cc"
    break;

  case 179:
#line 1333 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4039 "bin/parser.tab.cc"
    break;

  case 180:
#line 1336 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4047 "bin/parser.tab.cc"
    break;

  case 181:
#line 1339 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4055 "bin/parser.tab.cc"
    break;

  case 182:
#line 1342 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4063 "bin/parser.tab.cc"
    break;

  case 183:
#line 1345 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4071 "bin/parser.tab.cc"
    break;

  case 184:
#line 1348 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4079 "bin/parser.tab.cc"
    break;

  case 185:
#line 1351 "src/parser.y"
                                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4087 "bin/parser.tab.cc"
    break;

  case 186:
#line 1356 "src/parser.y"
                                                                                                   {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("IfThen", memArr, 2, 1);
    }
#line 4098 "bin/parser.tab.cc"
    break;

  case 187:
#line 1364 "src/parser.y"
                                                                                                                          {
        
        struct node* memArr[3];
        memArr[0] = (yyvsp[-5].exp);
        memArr[1] = (yyvsp[-3].exp);
        memArr[2] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("IfElse", memArr, 3, 1);
        
    }
#line 4112 "bin/parser.tab.cc"
    break;

  case 188:
#line 1375 "src/parser.y"
                                                                                                                                    {
        
        struct node* memArr[3];
        memArr[0] = (yyvsp[-5].exp);
        memArr[1] = (yyvsp[-3].exp);
        memArr[2] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("IfElseIf", memArr, 3, 1);
        
    }
#line 4126 "bin/parser.tab.cc"
    break;

  case 189:
#line 1386 "src/parser.y"
                                                                                                      {
        
        struct node* memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("While", memArr, 2, 1);
        
    }
#line 4139 "bin/parser.tab.cc"
    break;

  case 190:
#line 1396 "src/parser.y"
                                                                                                               {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("While", memArr, 2, 1);
    }
#line 4150 "bin/parser.tab.cc"
    break;

  case 191:
#line 1404 "src/parser.y"
                                                                                                                                                     {
        
        struct node* memArr[4];
        memArr[0] = (yyvsp[-7].exp);
        memArr[1] = (yyvsp[-5].exp);
        memArr[2] = (yyvsp[-3].exp);
        memArr[3] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("For", memArr, 4, 1);
        (yyval.exp)->t = 2;

    }
#line 4166 "bin/parser.tab.cc"
    break;

  case 192:
#line 1417 "src/parser.y"
                                                                                                                                                              {
        
        struct node* memArr[4];
        memArr[0] = (yyvsp[-7].exp);
        memArr[1] = (yyvsp[-5].exp);
        memArr[2] = (yyvsp[-3].exp);
        memArr[3] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("For", memArr, 4, 1);
    }
#line 4180 "bin/parser.tab.cc"
    break;

  case 193:
#line 1427 "src/parser.y"
             { 
    (yyval.exp) = NULL; 
    }
#line 4188 "bin/parser.tab.cc"
    break;

  case 194:
#line 1430 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
    }
#line 4198 "bin/parser.tab.cc"
    break;

  case 195:
#line 1436 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 4206 "bin/parser.tab.cc"
    break;

  case 196:
#line 1439 "src/parser.y"
                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Expression", memArr, 1, 1);
    }
#line 4216 "bin/parser.tab.cc"
    break;

  case 197:
#line 1445 "src/parser.y"
               { 
    (yyval.exp) = NULL ;
    }
#line 4224 "bin/parser.tab.cc"
    break;

  case 198:
#line 1448 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
    }
#line 4234 "bin/parser.tab.cc"
    break;

  case 199:
#line 1455 "src/parser.y"
                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
    }
#line 4244 "bin/parser.tab.cc"
    break;

  case 200:
#line 1460 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->t=1;
    }
#line 4256 "bin/parser.tab.cc"
    break;

  case 201:
#line 1469 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
    }
#line 4266 "bin/parser.tab.cc"
    break;

  case 202:
#line 1476 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("StatementExpression", memArr, 1, 0);
    }
#line 4276 "bin/parser.tab.cc"
    break;

  case 203:
#line 1481 "src/parser.y"
                                                        {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-2].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("StatementExpression", memArr, 2, 0);
    }
#line 4287 "bin/parser.tab.cc"
    break;

  case 204:
#line 1489 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("break", memArr, 1, 1);
    }
#line 4297 "bin/parser.tab.cc"
    break;

  case 205:
#line 1496 "src/parser.y"
    {
        (yyval.exp) = NULL;
    }
#line 4305 "bin/parser.tab.cc"
    break;

  case 206:
#line 1498 "src/parser.y"
                  {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4313 "bin/parser.tab.cc"
    break;

  case 207:
#line 1503 "src/parser.y"
                                      {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("continue", memArr, 1, 1);
    }
#line 4323 "bin/parser.tab.cc"
    break;

  case 208:
#line 1510 "src/parser.y"
                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("return", memArr, 1, 1);
    }
#line 4333 "bin/parser.tab.cc"
    break;

  case 209:
#line 1517 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("throw", memArr, 1, 1);
    }
#line 4343 "bin/parser.tab.cc"
    break;

  case 210:
#line 1524 "src/parser.y"
                                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("synchronized", memArr, 2, 1);
    }
#line 4354 "bin/parser.tab.cc"
    break;

  case 211:
#line 1532 "src/parser.y"
                      {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCatches", memArr, 2, 1);
    }
#line 4365 "bin/parser.tab.cc"
    break;

  case 212:
#line 1538 "src/parser.y"
                                    {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCtachesFinally", memArr, 3, 1);
    }
#line 4377 "bin/parser.tab.cc"
    break;

  case 213:
#line 1546 "src/parser.y"
             {
        (yyval.exp) = NULL; 
    }
#line 4385 "bin/parser.tab.cc"
    break;

  case 214:
#line 1549 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catches", memArr, 1, 1);
    }
#line 4395 "bin/parser.tab.cc"
    break;

  case 215:
#line 1556 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("catch", memArr, 1, 0);
    }
#line 4405 "bin/parser.tab.cc"
    break;

  case 216:
#line 1561 "src/parser.y"
                          {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catch", memArr, 2, 0);
    }
#line 4416 "bin/parser.tab.cc"
    break;

  case 217:
#line 1569 "src/parser.y"
                                                                 {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CatchClause", memArr, 2, 0);
    }
#line 4427 "bin/parser.tab.cc"
    break;

  case 218:
#line 1577 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("finally", memArr, 1, 1);
    }
#line 4437 "bin/parser.tab.cc"
    break;

  case 219:
#line 1584 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4445 "bin/parser.tab.cc"
    break;

  case 220:
#line 1587 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4453 "bin/parser.tab.cc"
    break;

  case 221:
#line 1592 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4461 "bin/parser.tab.cc"
    break;

  case 222:
#line 1595 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4469 "bin/parser.tab.cc"
    break;

  case 223:
#line 1598 "src/parser.y"
                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4477 "bin/parser.tab.cc"
    break;

  case 224:
#line 1601 "src/parser.y"
                                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4485 "bin/parser.tab.cc"
    break;

  case 225:
#line 1604 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4493 "bin/parser.tab.cc"
    break;

  case 226:
#line 1607 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4501 "bin/parser.tab.cc"
    break;

  case 227:
#line 1610 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4509 "bin/parser.tab.cc"
    break;

  case 228:
#line 1615 "src/parser.y"
                                                                    {
        struct node * memArr[3];
        memArr[0] = makeleaf((yyvsp[-4].data));
        memArr[1] =(yyvsp[-3].exp);
        memArr[2] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ClassInstance", memArr, 3, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 4522 "bin/parser.tab.cc"
    break;

  case 229:
#line 1625 "src/parser.y"
               {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArgumentList", memArr, 1, 0);
    }
#line 4532 "bin/parser.tab.cc"
    break;

  case 230:
#line 1630 "src/parser.y"
                                    {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-2].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArgumentList", memArr, 2, 0);
    }
#line 4543 "bin/parser.tab.cc"
    break;

  case 231:
#line 1638 "src/parser.y"
                                        {
        struct node * memArr[4];
        memArr[0] = makeleaf((yyvsp[-3].data));
        memArr[1] =(yyvsp[-2].exp);
        memArr[2] =(yyvsp[-1].exp);
        memArr[3] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArrayCreation", memArr, 4, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 4557 "bin/parser.tab.cc"
    break;

  case 232:
#line 1647 "src/parser.y"
                                                 {
        struct node * memArr[4];
        memArr[0] = makeleaf((yyvsp[-3].data));
        memArr[1] =(yyvsp[-2].exp);
        memArr[2] =(yyvsp[-1].exp);
        memArr[3] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArrayCreation", memArr, 4, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 4571 "bin/parser.tab.cc"
    break;

  case 233:
#line 1657 "src/parser.y"
          { 
    (yyval.exp) = NULL; 
    }
#line 4579 "bin/parser.tab.cc"
    break;

  case 234:
#line 1660 "src/parser.y"
          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4587 "bin/parser.tab.cc"
    break;

  case 235:
#line 1665 "src/parser.y"
            {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 4597 "bin/parser.tab.cc"
    break;

  case 236:
#line 1670 "src/parser.y"
                       {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]",memArr,2, 0);
    }
#line 4608 "bin/parser.tab.cc"
    break;

  case 237:
#line 1678 "src/parser.y"
                                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 4618 "bin/parser.tab.cc"
    break;

  case 238:
#line 1685 "src/parser.y"
                                         {
        (yyval.exp) = makeleaf("[]");
    }
#line 4626 "bin/parser.tab.cc"
    break;

  case 239:
#line 1688 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
    }
#line 4634 "bin/parser.tab.cc"
    break;

  case 240:
#line 1693 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,(yyvsp[0].data)));
    }
#line 4642 "bin/parser.tab.cc"
    break;

  case 241:
#line 1696 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),(yyvsp[0].data)));
    }
#line 4650 "bin/parser.tab.cc"
    break;

  case 242:
#line 1701 "src/parser.y"
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


    }
#line 4699 "bin/parser.tab.cc"
    break;

  case 243:
#line 1745 "src/parser.y"
                                                                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].exp)->data,concatenate_string(" ",(yyvsp[-3].data))), memArr, 1, 1);
    }
#line 4709 "bin/parser.tab.cc"
    break;

  case 244:
#line 1750 "src/parser.y"
                                                                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].data),concatenate_string(" ",(yyvsp[-3].data))), memArr, 1, 1);
    }
#line 4719 "bin/parser.tab.cc"
    break;

  case 245:
#line 1757 "src/parser.y"
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
    }
#line 4762 "bin/parser.tab.cc"
    break;

  case 246:
#line 1795 "src/parser.y"
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
    }
#line 4805 "bin/parser.tab.cc"
    break;

  case 247:
#line 1835 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4813 "bin/parser.tab.cc"
    break;

  case 248:
#line 1838 "src/parser.y"
           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4821 "bin/parser.tab.cc"
    break;

  case 249:
#line 1841 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4829 "bin/parser.tab.cc"
    break;

  case 250:
#line 1844 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4837 "bin/parser.tab.cc"
    break;

  case 251:
#line 1849 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("++", memArr, 1, 1);
    }
#line 4847 "bin/parser.tab.cc"
    break;

  case 252:
#line 1856 "src/parser.y"
                                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("--", memArr, 1, 1);
    }
#line 4857 "bin/parser.tab.cc"
    break;

  case 253:
#line 1863 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4865 "bin/parser.tab.cc"
    break;

  case 254:
#line 1866 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4873 "bin/parser.tab.cc"
    break;

  case 255:
#line 1869 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("+", memArr, 1, 1);
    }
#line 4883 "bin/parser.tab.cc"
    break;

  case 256:
#line 1874 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("-", memArr, 1, 1);
    }
#line 4893 "bin/parser.tab.cc"
    break;

  case 257:
#line 1879 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4901 "bin/parser.tab.cc"
    break;

  case 258:
#line 1884 "src/parser.y"
                             {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("++", memArr, 2, 1);
    }
#line 4912 "bin/parser.tab.cc"
    break;

  case 259:
#line 1892 "src/parser.y"
                               {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("--", memArr, 2, 1);
    }
#line 4923 "bin/parser.tab.cc"
    break;

  case 260:
#line 1900 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4931 "bin/parser.tab.cc"
    break;

  case 261:
#line 1903 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("~", memArr, 1, 1);
    }
#line 4941 "bin/parser.tab.cc"
    break;

  case 262:
#line 1908 "src/parser.y"
                                  {
         struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("!", memArr, 1, 1);
    }
#line 4951 "bin/parser.tab.cc"
    break;

  case 263:
#line 1913 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4959 "bin/parser.tab.cc"
    break;

  case 264:
#line 1918 "src/parser.y"
                                                                            {
        struct  node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        char * str = concatenate_string((yyvsp[-3].exp)->data, (yyvsp[-2].exp)->data);
        (yyval.exp) = makeInternalNode(str, memArr, 1, 1);
    }
#line 4970 "bin/parser.tab.cc"
    break;

  case 265:
#line 1924 "src/parser.y"
                                                                              {
        struct  node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CastExpression", memArr, 2, 1);
    }
#line 4981 "bin/parser.tab.cc"
    break;

  case 266:
#line 1930 "src/parser.y"
                                                                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        char * str = concatenate_string((yyvsp[-3].exp)->data, (yyvsp[-2].exp)->data);
        (yyval.exp) = makeInternalNode(str, memArr, 1, 1);
    }
#line 4992 "bin/parser.tab.cc"
    break;

  case 267:
#line 1938 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5000 "bin/parser.tab.cc"
    break;

  case 268:
#line 1941 "src/parser.y"
                                                       {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("*", memArr, 2, 1); 
    }
#line 5011 "bin/parser.tab.cc"
    break;

  case 269:
#line 1947 "src/parser.y"
                                                      {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("/", memArr, 2, 1); 
    }
#line 5022 "bin/parser.tab.cc"
    break;

  case 270:
#line 1953 "src/parser.y"
                                                      {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Modulo", memArr, 2, 1); 
    }
#line 5033 "bin/parser.tab.cc"
    break;

  case 271:
#line 1961 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5041 "bin/parser.tab.cc"
    break;

  case 272:
#line 1964 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("+", memArr, 2, 1); 
    }
#line 5052 "bin/parser.tab.cc"
    break;

  case 273:
#line 1970 "src/parser.y"
                                                               {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("-", memArr, 2, 1); 
    }
#line 5063 "bin/parser.tab.cc"
    break;

  case 274:
#line 1978 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5071 "bin/parser.tab.cc"
    break;

  case 275:
#line 1981 "src/parser.y"
                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<<", memArr, 2, 1); 
    }
#line 5082 "bin/parser.tab.cc"
    break;

  case 276:
#line 1987 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">>", memArr, 2, 1); 
    }
#line 5093 "bin/parser.tab.cc"
    break;

  case 277:
#line 1993 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">>>", memArr, 2, 1); 
    }
#line 5104 "bin/parser.tab.cc"
    break;

  case 278:
#line 2001 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5112 "bin/parser.tab.cc"
    break;

  case 279:
#line 2004 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">", memArr, 2, 1); 
    }
#line 5123 "bin/parser.tab.cc"
    break;

  case 280:
#line 2010 "src/parser.y"
                                                       {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<", memArr, 2, 1); 
    }
#line 5134 "bin/parser.tab.cc"
    break;

  case 281:
#line 2016 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<=", memArr, 2, 1); 
    }
#line 5145 "bin/parser.tab.cc"
    break;

  case 282:
#line 2022 "src/parser.y"
                                                              {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">=", memArr, 2, 1); 
    }
#line 5156 "bin/parser.tab.cc"
    break;

  case 283:
#line 2028 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Instanceof", memArr, 2, 1); 
    }
#line 5167 "bin/parser.tab.cc"
    break;

  case 284:
#line 2036 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5175 "bin/parser.tab.cc"
    break;

  case 285:
#line 2039 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("==", memArr, 2, 1); 
    }
#line 5186 "bin/parser.tab.cc"
    break;

  case 286:
#line 2045 "src/parser.y"
                                                         {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("!=", memArr, 2, 1); 
    }
#line 5197 "bin/parser.tab.cc"
    break;

  case 287:
#line 2053 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5205 "bin/parser.tab.cc"
    break;

  case 288:
#line 2056 "src/parser.y"
                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("&", memArr, 2 ,1); 
    }
#line 5216 "bin/parser.tab.cc"
    break;

  case 289:
#line 2064 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5224 "bin/parser.tab.cc"
    break;

  case 290:
#line 2067 "src/parser.y"
                                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("xor", memArr, 2 ,1); 
    }
#line 5235 "bin/parser.tab.cc"
    break;

  case 291:
#line 2075 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5243 "bin/parser.tab.cc"
    break;

  case 292:
#line 2078 "src/parser.y"
                                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("|", memArr, 2, 1); 
    }
#line 5254 "bin/parser.tab.cc"
    break;

  case 293:
#line 2086 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5262 "bin/parser.tab.cc"
    break;

  case 294:
#line 2089 "src/parser.y"
                                                                 {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("&&", memArr, 2, 1); 
    }
#line 5273 "bin/parser.tab.cc"
    break;

  case 295:
#line 2097 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5281 "bin/parser.tab.cc"
    break;

  case 296:
#line 2100 "src/parser.y"
                                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("||", memArr, 2, 1); 
    }
#line 5292 "bin/parser.tab.cc"
    break;

  case 297:
#line 2108 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5300 "bin/parser.tab.cc"
    break;

  case 298:
#line 2111 "src/parser.y"
                                                                                  {
        struct node* memArr[3];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("TernaryOperator", memArr, 3, 1); 
    }
#line 5312 "bin/parser.tab.cc"
    break;

  case 299:
#line 2120 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5320 "bin/parser.tab.cc"
    break;

  case 300:
#line 2123 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5328 "bin/parser.tab.cc"
    break;

  case 301:
#line 2128 "src/parser.y"
                                                         {
    struct node* memArr[2];
    memArr[0] = (yyvsp[-2].exp);
    memArr[1] = (yyvsp[0].exp);
    (yyval.exp) = makeInternalNode("=", memArr, 2, 1);

}
#line 5340 "bin/parser.tab.cc"
    break;

  case 302:
#line 2137 "src/parser.y"
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
#line 5355 "bin/parser.tab.cc"
    break;

  case 303:
#line 2147 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5363 "bin/parser.tab.cc"
    break;

  case 304:
#line 2150 "src/parser.y"
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
#line 5379 "bin/parser.tab.cc"
    break;

  case 305:
#line 2163 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5387 "bin/parser.tab.cc"
    break;

  case 306:
#line 2166 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5395 "bin/parser.tab.cc"
    break;

  case 307:
#line 2169 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5403 "bin/parser.tab.cc"
    break;

  case 308:
#line 2172 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5411 "bin/parser.tab.cc"
    break;

  case 309:
#line 2175 "src/parser.y"
                      {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5419 "bin/parser.tab.cc"
    break;

  case 310:
#line 2178 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5427 "bin/parser.tab.cc"
    break;

  case 311:
#line 2181 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5435 "bin/parser.tab.cc"
    break;

  case 312:
#line 2184 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5443 "bin/parser.tab.cc"
    break;

  case 313:
#line 2187 "src/parser.y"
                                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5451 "bin/parser.tab.cc"
    break;

  case 314:
#line 2190 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5459 "bin/parser.tab.cc"
    break;

  case 315:
#line 2193 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5467 "bin/parser.tab.cc"
    break;

  case 316:
#line 2196 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5475 "bin/parser.tab.cc"
    break;

  case 317:
#line 2200 "src/parser.y"
                                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5483 "bin/parser.tab.cc"
    break;


#line 5487 "bin/parser.tab.cc"

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
#line 2205 "src/parser.y"



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
    src_file = string(input_file);

    if(yyin == NULL){
        printf("No such Input file found ! \n");
        return 0;
    }

    yyparse();
    view_symbol_table(*glob_class_scope);
    FILE* graph = fopen(output_file,"w");
    fprintf(graph, "digraph AST{ \n");
    generateGraph(root, graph);
    fprintf(graph, "} \n");
    fclose(graph);
    fclose(yyin);

    return 0;

}



