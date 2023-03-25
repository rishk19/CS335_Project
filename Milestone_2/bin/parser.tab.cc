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
// int dummy(string name, struct SymbolTable * curr, struct GlobalSymbolTable* glob_insert);
long long int line_number=1;

//vector<struct SymbolTable *> curr_table;
//curr_table.clear();

struct GlobalSymbolTable* glob_table = new struct GlobalSymbolTable;
struct SymbolTable* curr = loc_mktable(NULL,"global_scope"); //parameters are parent-pointer,  local-table-name
//curr_table.push_back(curr);
struct SymbolTable* glob_class_scope = curr;
int class_num = 0;
int assign_flag = 0;
vector<long long int> class_line_number;
//class_line_number.clear();


#line 131 "bin/parser.tab.cc"

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
#line 68 "src/parser.y"

    char data[100];
    struct node *exp;

#line 322 "bin/parser.tab.cc"

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
#define YYLAST   1472

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  134
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  154
/* YYNRULES -- Number of rules.  */
#define YYNRULES  320
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  528

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
       0,   147,   147,   154,   157,   161,   165,   169,   173,   179,
     184,   188,   194,   197,   202,   205,   213,   216,   221,   227,
     233,   239,   245,   253,   259,   267,   270,   275,   280,   285,
     290,   297,   304,   313,   316,   321,   332,   337,   347,   350,
     357,   362,   370,   373,   380,   385,   393,   396,   401,   406,
     409,   414,   419,   424,   427,   430,   435,   440,   448,   451,
     454,   457,   460,   463,   466,   469,   472,   475,   479,   485,
     527,   530,   536,   539,   543,   546,   551,   556,   565,   570,
     578,   582,   585,   615,   621,   629,   632,   635,   640,   643,
     649,   744,   750,   759,   769,   780,   786,   793,   796,   801,
     823,   865,   908,   911,   918,   935,   943,   946,   953,   959,
     967,  1006,  1013,  1018,  1026,  1029,  1035,  1042,  1053,  1060,
    1067,  1070,  1077,  1082,  1088,  1091,  1101,  1111,  1114,  1121,
    1126,  1134,  1138,  1141,  1148,  1153,  1161,  1165,  1171,  1176,
    1181,  1185,  1188,  1194,  1197,  1202,  1207,  1215,  1221,  1226,
    1230,  1233,  1240,  1245,  1254,  1261,  1270,  1277,  1327,  1330,
    1333,  1336,  1339,  1342,  1347,  1350,  1353,  1356,  1359,  1364,
    1367,  1370,  1373,  1376,  1379,  1382,  1385,  1388,  1393,  1398,
    1406,  1414,  1419,  1422,  1425,  1428,  1431,  1434,  1437,  1442,
    1450,  1461,  1472,  1482,  1490,  1503,  1513,  1516,  1522,  1525,
    1531,  1534,  1541,  1547,  1556,  1563,  1568,  1576,  1583,  1585,
    1590,  1597,  1604,  1611,  1619,  1625,  1633,  1636,  1643,  1648,
    1656,  1664,  1671,  1674,  1679,  1682,  1685,  1688,  1691,  1694,
    1697,  1704,  1714,  1719,  1727,  1736,  1746,  1749,  1754,  1759,
    1767,  1774,  1777,  1782,  1785,  1790,  1834,  1839,  1846,  1871,
    1886,  1889,  1892,  1895,  1900,  1907,  1914,  1917,  1920,  1925,
    1930,  1935,  1943,  1951,  1954,  1959,  1964,  1969,  1975,  1981,
    1989,  1992,  1998,  2004,  2012,  2015,  2021,  2029,  2032,  2038,
    2044,  2052,  2055,  2061,  2067,  2073,  2079,  2087,  2090,  2096,
    2104,  2107,  2115,  2118,  2126,  2129,  2137,  2140,  2148,  2151,
    2159,  2162,  2171,  2174,  2179,  2188,  2200,  2204,  2218,  2221,
    2224,  2227,  2230,  2233,  2236,  2239,  2242,  2245,  2248,  2251,
    2255
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
  "Modifier", "Symbol_Table_Change_Class", "ClassDeclaration",
  "Modifiers_opt", "ClassExtend_opt", "Interfaces_opt", "ClassExtend",
  "Interfaces", "InterfaceTypeList", "ClassBody",
  "ClassBodyDeclarations_opt", "ClassBodyDeclarations",
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

#define YYPACT_NINF (-464)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-308)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,   -16,   115,  -464,    -7,  -464,  -464,   -14,  -464,  -464,
    -464,   -16,   664,    -7,  -464,  -464,  -464,  -464,    53,     7,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,
    -464,  -464,   785,  -464,   298,  -464,  -464,    12,  -464,  -464,
    -464,  -464,   -36,  -464,  -464,    70,    99,    96,   144,   134,
    -464,   -16,   122,   126,   165,  -464,  -464,   129,   568,  -464,
     -16,   -16,   188,  -464,   127,  -464,   139,   141,  1304,  -464,
    -464,  -464,  -464,  -464,  -464,   -16,   143,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,   158,  -464,  -464,   159,   140,  -464,
    -464,  -464,  -464,  -464,   142,   -47,  -464,  -464,  -464,  -464,
     149,  1305,  -464,  -464,   -15,   146,    45,  -464,   -37,   -15,
     151,   153,   155,   -16,   152,   127,   163,  1337,  -464,  -464,
    -464,  -464,    46,  -464,  -464,  -464,   161,   -16,   162,  -464,
    -464,   184,  -464,   166,   168,  -464,  -464,  -464,  -464,  -464,
     167,   169,   217,  -464,  -464,   884,  -464,  -464,  -464,   350,
    -464,   178,  -464,  -464,  -464,  -464,   350,  -464,   176,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,   168,   951,  1132,
    1132,  1132,  1132,  1132,  1132,  -464,  -464,  1285,  -464,  -464,
     179,   181,  -464,  -464,  1014,  -464,  1306,    57,  -464,  -464,
    -464,  -464,  -464,  -464,  -464,     5,   -26,    34,   -24,    82,
     154,   164,   156,   175,   -55,  -464,  -464,  -464,  1342,  -464,
    -464,   350,   185,   202,  -464,  -464,   186,   202,  1132,  1132,
     167,  -464,   195,  -464,  1132,   184,    15,  -464,   197,   884,
    -464,  -464,   198,  -464,  -464,  -464,  -464,  -464,   199,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,    56,
      91,    57,    68,    89,  -464,  -464,  -464,  -464,  -464,   184,
     218,   204,  -464,   -16,   219,   219,   221,   240,  -464,   229,
     231,   224,  1329,   227,    72,  -464,  -464,  -464,  -464,  -464,
    -464,  -464,  -464,  1132,  1132,   248,  1132,  -464,  -464,  1132,
    1132,  1132,  1132,  1132,  1132,  1132,  1132,   350,  1132,  1132,
    1132,  1132,  1132,  1132,  1132,  1132,  1132,  1132,  1132,  1132,
    -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,  -464,
    -464,  -464,  1132,  -464,   233,    -3,  -464,  -464,   234,   235,
     236,  1132,   245,   246,   250,  -464,   289,   251,  1016,   253,
     260,   727,  -464,  -464,  -464,  -464,   254,  -464,   350,  -464,
    1132,   257,  -464,   257,  1132,   256,  -464,   264,   168,   258,
     262,   261,  1086,   -42,  1243,   265,   273,  -464,   266,   269,
     267,  -464,  -464,  -464,     5,     5,   -26,   -26,   -26,   140,
    -464,    34,    34,    34,    34,   -24,   -24,    82,   154,   164,
     156,   263,   175,  -464,  -464,   277,   279,   884,  -464,  -464,
    1197,  1132,   281,  -464,  -464,  -464,   280,   311,   -12,  -464,
    1132,  -464,  -464,  -464,   282,  1086,  -464,  -464,  -464,   287,
    1132,  -464,  -464,  -464,  1132,   288,  1243,  -464,  -464,  1132,
    -464,  1132,  -464,  1132,  1132,  1132,   301,  -464,  -464,   305,
    -464,   314,   309,   167,   350,   167,  -464,  -464,   316,  -464,
    -464,   317,  -464,  -464,  -464,  -464,   318,  -464,   319,   323,
    -464,  1132,  1221,  1044,  -464,   324,  -464,  1016,  -464,  -464,
     331,   333,   334,  -464,  -464,  -464,  -464,   338,  -464,   360,
     363,  -464,  -464,  -464,  -464,   167,  -464,  -464,  -464,  1221,
     340,   341,   342,  1044,  -464,  1016,  -464,  -464,   337,  -464,
     314,  1197,  1132,  1132,  -464,  -464,  1016,   345,   344,   355,
    -464,  -464,  1132,  1044,  1044,  -464,   361,   408,  -464,  1221,
    1044,  -464,   366,  -464,  1044,  -464,  -464,  -464
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      46,     0,     0,     2,    38,    47,    35,     0,    33,    34,
       1,     0,    70,    39,    40,    49,    50,    48,     0,     0,
      62,    65,    60,    59,    58,    66,    63,    61,    67,    64,
      55,    37,    70,    44,    71,    56,    53,    68,    54,    41,
      36,    51,     0,    45,    57,     0,     0,     0,   127,     0,
      52,     0,     0,   128,    72,    29,   129,    27,    70,   126,
       0,     0,    74,    73,     0,   138,     0,     0,    70,   134,
     136,   137,   130,    28,    76,     0,     0,    75,    15,    24,
      18,    20,    19,    22,     0,    21,    23,     0,    12,    14,
      16,    17,    13,    25,    26,    27,   139,   131,   135,    78,
      77,    70,   149,   148,   102,    95,     0,    91,    93,   102,
       0,     0,     0,     0,    61,     0,     0,    70,    83,    85,
      88,    89,     0,    86,    87,    69,     0,     0,     0,   101,
     103,     0,    90,     0,     0,   100,    30,    32,    31,    79,
       0,    33,   102,    80,    84,   150,   149,    99,   149,   106,
     112,   111,   105,    95,    92,    96,     0,   225,     0,     5,
       8,     9,    10,    11,     4,     6,     7,   141,     0,     0,
       0,     0,     0,     0,     0,   224,     3,   251,    94,    98,
     250,   222,   227,   223,   228,   229,   230,   263,   252,   253,
     270,   256,   257,   260,   266,   274,   277,   281,   287,   290,
     292,   294,   296,   298,   300,   302,   320,   303,     0,    97,
     149,   106,     0,   208,   148,   148,     0,   208,     0,   198,
       0,   148,    35,   178,     0,     0,   305,   169,     0,   151,
     152,   154,     0,   155,   158,   170,   159,   171,     0,   160,
     161,   162,   163,   172,   173,   174,   176,   175,   177,   227,
     229,     0,   185,   186,   183,   184,   182,   115,   114,     0,
       0,   107,   108,     0,     0,    28,     0,     0,   145,   143,
     142,   236,   251,     0,   251,   228,   230,   265,   264,   261,
     262,   258,   259,   124,     0,     0,     0,   254,   255,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     308,   312,   313,   309,   310,   317,   319,   318,   311,   314,
     315,   316,     0,   116,     0,   120,   117,   209,     0,     0,
       0,     0,     0,     0,     0,   199,   216,     0,     0,     0,
     157,     0,   147,   153,   156,   181,   110,   104,     0,   113,
       0,   236,   238,   236,   124,   244,   144,     0,     0,     0,
       0,   237,     0,     0,   226,     0,   125,   232,     0,   243,
       0,   271,   272,   273,   275,   276,   278,   279,   280,     0,
     286,   285,   284,   283,   282,   288,   289,   291,   293,   295,
     297,     0,   299,   304,   118,     0,     0,   150,   121,   210,
     196,     0,     0,   207,   212,   211,     0,     0,   214,   218,
       0,   179,   226,   109,     0,     0,   234,   239,   235,     0,
     124,   140,   146,   241,     0,     0,     0,   268,   245,     0,
     248,   124,   249,     0,   124,   124,     0,   203,   205,     0,
     197,   202,     0,     0,     0,     0,   215,   219,     0,   240,
     231,     0,   267,   242,   269,   233,     0,   301,     0,     0,
     119,   198,     0,     0,   213,     0,   221,     0,   247,   246,
       0,     0,     0,   206,   148,   148,   148,    35,   149,     0,
     158,   165,   166,   167,   168,     0,   149,   122,   123,   200,
       0,     0,     0,     0,   189,     0,   220,   192,     0,   201,
     204,   196,     0,     0,   180,   149,     0,     0,     0,     0,
     190,   149,   198,     0,     0,   194,     0,     0,   149,   200,
       0,   193,     0,   149,     0,   191,   149,   195
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -464,  -464,  -464,  -464,   -62,  -143,  -464,  -464,  -464,   170,
     -46,  -120,   -33,  -464,    -1,   335,  -464,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,   436,  -464,  -464,   424,  -464,   425,
    -464,  -464,    -6,  -464,  -464,  -464,  -464,  -464,  -464,  -464,
    -464,   343,  -464,   -60,   237,   327,   206,  -163,  -464,   -56,
     -71,   374,   252,  -464,  -339,  -464,  -464,  -464,  -464,  -464,
    -464,  -464,  -464,  -464,  -343,  -464,  -464,  -464,  -464,  -464,
    -464,   398,  -464,  -464,  -464,  -464,  -464,  -464,  -116,   -81,
    -145,    74,  -464,   243,  -464,  -388,  -306,  -395,  -424,  -464,
    -464,  -464,  -464,  -392,  -464,  -464,  -464,  -464,  -464,  -464,
    -464,   -32,  -430,   -45,  -464,  -464,  -463,  -464,   270,  -464,
    -464,  -464,  -464,  -464,  -464,  -464,    65,  -464,  -464,  -464,
     -79,  -464,  -464,  -252,   210,  -160,   205,   563,   -25,   584,
     -10,    39,    54,  -153,   108,   180,  -341,  -464,  -146,   -83,
     -78,  -100,   174,   177,   187,   173,   183,  -464,    51,   190,
     189,  -464,  -464,   431
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   175,   176,   225,    88,    89,    90,    91,    92,
      93,    74,    56,    94,   177,     8,     9,     3,    12,    13,
      31,    32,     4,     5,    14,    15,    16,    33,    34,    35,
      46,    36,    37,    62,    76,    63,    77,   100,   102,   116,
     117,   118,   119,    65,   106,   107,   108,   178,   121,    66,
     129,   104,   260,   261,   262,   130,   151,   147,   123,   124,
     142,   326,   397,   398,   365,    38,    52,    53,    59,    67,
      68,    69,    70,    71,   179,   269,   357,   270,   227,   126,
     125,   228,   229,   230,   231,   232,   233,   479,   234,   235,
     236,   481,   237,   238,   239,   240,   482,   241,   483,   242,
     484,   439,   334,   498,   440,   499,   441,   243,   328,   244,
     245,   246,   247,   248,   407,   408,   409,   446,   180,   181,
     182,   366,   183,   360,   351,   352,   361,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   322,   367
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   257,    87,   258,   268,    55,   148,   150,   438,   413,
      19,   419,   437,   264,    55,    73,   277,   278,   279,   280,
     281,   282,   297,   427,   210,   271,   500,    72,   127,    55,
     395,   472,   411,   140,    11,    40,   266,   406,   135,   480,
      18,   120,    99,   308,   112,   122,     1,   426,  -217,   425,
      57,   309,    64,    87,   133,     6,   500,   120,   134,    57,
      57,   122,    64,    95,   396,   323,   249,    55,    45,   480,
     473,   212,    17,    18,    57,    47,   128,   451,   298,   299,
     139,    73,   516,   292,   293,   454,   -27,   259,   456,   480,
     480,   458,   459,    41,    42,   115,   480,   438,   504,   416,
     480,   418,    18,   283,   336,   465,   341,   300,   301,   438,
     265,   115,    57,   437,    95,    10,   289,   290,   517,   518,
     250,   291,  -251,  -251,    40,   523,    57,   438,   131,   526,
     145,   132,   146,   329,   330,   251,   371,   372,   373,  -188,
     337,    48,  -188,   349,   226,  -188,   374,   375,    95,   259,
     249,   294,   295,   296,   379,    57,    78,   478,    49,    18,
     283,   486,    79,   284,   287,   288,    80,   272,   274,   274,
     274,   274,   274,   274,  -187,  -252,  -252,  -187,    81,    82,
    -187,    83,    50,   302,   252,    84,   303,   411,    85,   505,
     156,   417,    86,   417,    51,   422,  -253,  -253,     6,   253,
     511,   157,   385,   386,   250,    54,    58,   478,   486,    60,
      95,   376,   377,   378,   505,    61,    18,    73,   511,   251,
     381,   382,   383,   384,    75,    96,    97,   101,   226,   103,
     105,   110,   113,   111,  -148,   158,  -148,   159,   160,     6,
     161,   162,   163,   136,   164,   137,   165,   138,   143,   149,
     166,   145,   167,   254,   152,   153,   168,   211,   155,   249,
     127,   263,    57,   267,   169,   170,   285,   304,   252,   325,
     306,   452,   286,   327,   331,   171,   172,   173,   174,   305,
     307,   338,   342,   253,   344,   345,   259,   348,   274,   274,
     274,   274,   274,   274,   274,   274,    95,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   347,   274,   354,
     350,   355,   356,   250,   358,   359,   364,    20,   249,   369,
     399,   249,   394,   400,   401,   255,    21,   464,   251,   466,
      22,   403,   404,   494,   256,    23,   405,   254,   406,   410,
      24,   497,   412,   131,   420,   133,    25,    95,   415,   421,
     423,   424,   425,    26,   428,    27,   429,   431,   430,   432,
     510,    28,   433,   274,    29,   434,   515,   435,   444,   496,
     443,   445,   250,   521,   449,   250,   450,   252,   525,    78,
     453,   527,   259,   249,   249,    79,   460,   251,   249,    80,
     251,   461,   253,   490,   491,   492,   226,   462,   463,   226,
     495,    81,    82,  -164,    83,   467,   468,   469,   470,   255,
     249,    85,   471,   485,   249,    86,   249,   487,   256,   488,
     489,     6,   249,   274,   493,   274,   506,   249,   501,   502,
     503,   512,   274,   513,   249,   249,   252,   250,   250,   252,
     249,   249,   250,    95,   514,   249,   254,   519,   520,    39,
     141,   253,   251,   251,   253,   524,    43,   251,   154,    44,
     144,   109,   340,   324,   250,   346,    98,   380,   250,   507,
     250,   436,   343,   447,   522,   353,   250,   363,   387,   251,
     390,   250,   388,   251,   457,   251,     0,   332,   250,   250,
       0,   251,   392,   389,   250,   250,   251,     0,     0,   250,
     226,   252,   252,   251,   251,   254,   252,     0,   254,   251,
     251,     0,   393,     0,   251,     0,   253,   253,   255,     0,
       0,   253,     0,     0,     0,     0,     0,   256,   252,     0,
       0,     0,   252,     0,   252,     0,     0,     0,     0,     0,
     252,     0,     0,   253,     0,   252,     0,   253,     0,   253,
       0,     0,   252,   252,     0,   253,     0,     0,   252,   252,
     253,     0,     0,   252,     0,   209,     0,   253,   253,     0,
     254,   254,     0,   253,   253,   254,     0,   255,   253,     0,
     255,     0,     0,     0,     0,     0,   256,    20,     0,   256,
       0,     0,     0,     0,     0,     0,    21,   254,   209,   273,
      22,   254,     0,   254,     0,    23,     0,     0,     0,   254,
      24,     0,     0,     0,   254,     0,    25,     0,     0,     0,
       0,   254,   254,    26,     0,    27,     0,   254,   254,     0,
       0,    28,   254,     0,    29,     0,     0,     0,     0,     0,
       0,     0,   255,   255,     0,     0,     0,   255,     0,   333,
     335,   256,   256,  -132,     0,   339,   256,     0,     0,     0,
       0,     0,     0,     0,   -42,     0,     0,     0,     0,   255,
       0,     0,     0,   255,     0,   255,     0,     0,   256,     0,
       0,   255,   256,    20,   256,     0,   255,     0,     0,     0,
     256,     0,    21,   255,   255,   256,    22,     0,     0,   255,
     255,    23,   256,   256,   255,     0,    24,     0,   256,   256,
       0,     0,    25,   256,     0,   368,     0,   370,     0,    26,
       0,    27,     0,     0,     0,     0,     0,    28,     0,     0,
      29,     0,   275,   275,   275,   275,   275,   275,     0,   391,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
      30,     0,     0,   276,   276,   276,   276,   276,   276,     0,
     157,     0,   402,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,     0,     0,     0,     0,     0,     0,     0,
       0,   414,     0,     0,     0,   -43,     0,     0,     0,   209,
       0,     0,     0,   368,   158,     0,   159,   160,     6,   161,
     162,   163,     0,   164,    20,   165,     0,     0,     0,   166,
       0,     0,     0,    21,     0,   168,     0,    22,     0,   138,
       0,     0,    23,   169,   170,     0,     0,    24,     0,     0,
       0,     0,   442,    25,   171,   172,   173,   174,     0,     0,
      26,   448,    27,     0,     0,     0,   414,     0,    28,     0,
       0,    29,   275,   275,   275,   275,   275,   275,   275,   275,
     455,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,    30,   275,   276,   276,   276,   276,   276,   276,   276,
     276,     0,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   335,   276,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,   214,   156,     0,     0,     0,
     215,     0,   216,    78,     0,     0,     0,   157,   217,    79,
       0,     0,   218,    80,     0,     0,     0,   275,     0,     0,
       0,   219,     0,   508,   509,    81,    82,   220,    83,     0,
       0,     0,     0,   335,     0,    85,     0,     0,   276,    86,
       0,   158,   221,   159,   160,   222,   161,   162,   163,     0,
     164,     0,   165,     0,     0,     0,   166,     0,   145,     0,
     223,     0,   224,   156,     0,     0,     0,     0,     0,     0,
      78,     0,     0,     0,   157,     0,    79,   275,     0,   275,
      80,   171,   172,     0,     0,     0,   275,     0,     0,     0,
       0,     0,    81,    82,     0,    83,     0,     0,   276,     0,
     276,     0,    85,     0,     0,     0,    86,   276,   158,     0,
     159,   160,     6,   161,   162,   163,     0,   164,     0,   165,
       0,     0,     0,   166,     0,     0,   213,   214,   156,   168,
       0,     0,   215,     0,   216,     0,     0,   169,   170,   157,
     217,     0,     0,     0,   218,     0,     0,     0,   171,   172,
     173,   174,     0,   219,   213,   474,   156,     0,     0,   220,
     475,     0,   216,     0,     0,     0,     0,   157,   217,     0,
       0,     0,   218,   158,   221,   159,   160,   222,   161,   162,
     163,   219,   164,     0,   165,     0,     0,   220,   166,     0,
     145,     0,   223,     0,   224,     0,     0,     0,   156,  -306,
       0,   158,   476,   159,   160,   477,   161,   162,   163,   157,
     164,     0,   165,   171,   172,     0,   166,     0,   145,     0,
     223,     0,   224,     0,  -306,  -306,  -306,  -306,  -306,  -306,
    -306,  -306,  -306,  -306,  -306,     0,     0,     0,     0,     0,
       0,   171,   172,   158,   156,   159,   160,     6,   161,   162,
     163,     0,   164,     0,   165,   157,     0,     0,   166,     0,
       0,     0,     0,     0,   168,     0,     0,     0,   423,     0,
       0,     0,   169,   170,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,   172,   173,   174,     0,     0,   158,
       0,   159,   160,     6,   161,   162,   163,     0,   164,     0,
     165,     0,     0,     0,   166,     0,     0,     0,     0,   156,
     168,     0,     0,     0,     0,     0,    78,     0,   169,   170,
     157,     0,    79,     0,     0,     0,    80,     0,     0,   171,
     172,   173,   174,   156,     0,     0,     0,     0,    81,    82,
       0,    83,     0,     0,   157,     0,     0,     0,    85,     0,
       0,     0,    86,     0,   158,   156,   159,   160,     6,   161,
     162,   163,     0,   164,     0,   165,   157,     0,     0,   166,
       0,     0,     0,     0,     0,   224,     0,     0,   158,     0,
     159,   160,     6,   161,   162,   163,     0,   164,     0,   165,
       0,     0,     0,   166,   171,   172,     0,     0,     0,   224,
     158,     0,   159,   160,     6,   161,   162,   163,     0,   164,
       0,   165,     0,    20,    20,   166,     0,     0,   171,   172,
       0,   168,    21,    21,     0,     0,    22,    22,     0,   169,
     170,    23,    23,     0,     0,     0,    24,    24,     0,     0,
       0,     0,    25,    25,     0,     0,    20,     0,     0,    26,
      26,    27,   114,     0,     0,    21,     0,    28,    28,    22,
      29,    29,    18,   283,    23,     0,   284,     0,     0,    24,
    -305,     0,     0,     0,     0,    25,     0,     0,     0,  -133,
     -81,     0,    26,     0,   114,     0,     0,     0,     0,     0,
      28,  -307,     0,    29,     0,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,    18,   283,     0,     0,
     362,     0,   -82,     0,  -305,     0,  -307,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,   310,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
       0,     0,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321
};

static const yytype_int16 yycheck[] =
{
       1,   146,    64,   148,   167,    51,   122,   127,   400,   348,
      11,   354,   400,   156,    60,    61,   169,   170,   171,   172,
     173,   174,    46,   364,   140,   168,   489,    60,    43,    75,
      33,   461,   338,   114,    41,    71,   156,    49,   109,   463,
      87,   101,    75,    98,    91,   101,    27,    89,    60,    91,
      51,   106,    58,   115,    91,    71,   519,   117,    95,    60,
      61,   117,    68,    64,    67,   210,   145,   113,    56,   493,
     462,   142,    86,    87,    75,   111,    91,   420,   102,   103,
     113,   127,   512,   109,   110,   426,    71,   149,   431,   513,
     514,   434,   435,    86,    87,   101,   520,   489,   493,   351,
     524,   353,    87,    88,   220,   444,    91,   131,   132,   501,
     156,   117,   113,   501,   115,     0,   111,   112,   513,   514,
     145,   116,   107,   108,    71,   520,   127,   519,    83,   524,
      84,    86,    86,   214,   215,   145,   289,   290,   291,    83,
     221,    71,    86,   263,   145,    89,   292,   293,   149,   211,
     229,   117,   118,   119,   297,   156,    29,   463,    59,    87,
      88,   467,    35,    91,   107,   108,    39,   168,   169,   170,
     171,   172,   173,   174,    83,   107,   108,    86,    51,    52,
      89,    54,    86,   101,   145,    58,   104,   493,    61,   495,
      22,   351,    65,   353,    50,   358,   107,   108,    71,   145,
     506,    33,   302,   303,   229,    71,    84,   513,   514,    83,
     211,   294,   295,   296,   520,    50,    87,   263,   524,   229,
     298,   299,   300,   301,    36,    86,    85,    84,   229,    71,
      71,    91,    83,    91,    88,    67,    84,    69,    70,    71,
      72,    73,    74,    92,    76,    92,    78,    92,    85,    88,
      82,    84,    84,   145,    92,    71,    88,    88,    92,   338,
      43,    83,   263,    87,    96,    97,    87,   113,   229,    84,
     114,   424,    91,    71,    88,   107,   108,   109,   110,   115,
     105,    86,    85,   229,    86,    86,   348,    83,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,    89,   309,    88,
      91,    71,    83,   338,    83,    91,    89,    19,   397,    71,
      86,   400,    89,    88,    88,   145,    28,   443,   338,   445,
      32,    86,    86,   478,   145,    37,    86,   229,    49,    88,
      42,   486,    89,    83,    88,    91,    48,   348,    91,    85,
      92,    89,    91,    55,    89,    57,    83,    88,    92,    92,
     505,    63,    99,   364,    66,    88,   511,    88,    88,   485,
      89,    60,   397,   518,    92,   400,    89,   338,   523,    29,
      92,   526,   444,   462,   463,    35,    85,   397,   467,    39,
     400,    86,   338,   474,   475,   476,   397,    83,    89,   400,
      40,    51,    52,    40,    54,    89,    89,    89,    89,   229,
     489,    61,    89,    89,   493,    65,   495,    86,   229,    86,
      86,    71,   501,   424,    86,   426,    89,   506,    88,    88,
      88,    86,   433,    89,   513,   514,   397,   462,   463,   400,
     519,   520,   467,   444,    89,   524,   338,    86,    40,    13,
     115,   397,   462,   463,   400,    89,    32,   467,   131,    34,
     117,    87,   225,   211,   489,   259,    68,   297,   493,   501,
     495,   397,   229,   408,   519,   265,   501,   272,   304,   489,
     307,   506,   305,   493,   433,   495,    -1,   217,   513,   514,
      -1,   501,   309,   306,   519,   520,   506,    -1,    -1,   524,
     501,   462,   463,   513,   514,   397,   467,    -1,   400,   519,
     520,    -1,   322,    -1,   524,    -1,   462,   463,   338,    -1,
      -1,   467,    -1,    -1,    -1,    -1,    -1,   338,   489,    -1,
      -1,    -1,   493,    -1,   495,    -1,    -1,    -1,    -1,    -1,
     501,    -1,    -1,   489,    -1,   506,    -1,   493,    -1,   495,
      -1,    -1,   513,   514,    -1,   501,    -1,    -1,   519,   520,
     506,    -1,    -1,   524,    -1,   134,    -1,   513,   514,    -1,
     462,   463,    -1,   519,   520,   467,    -1,   397,   524,    -1,
     400,    -1,    -1,    -1,    -1,    -1,   397,    19,    -1,   400,
      -1,    -1,    -1,    -1,    -1,    -1,    28,   489,   167,   168,
      32,   493,    -1,   495,    -1,    37,    -1,    -1,    -1,   501,
      42,    -1,    -1,    -1,   506,    -1,    48,    -1,    -1,    -1,
      -1,   513,   514,    55,    -1,    57,    -1,   519,   520,    -1,
      -1,    63,   524,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   462,   463,    -1,    -1,    -1,   467,    -1,   218,
     219,   462,   463,    85,    -1,   224,   467,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     0,    -1,    -1,    -1,    -1,   489,
      -1,    -1,    -1,   493,    -1,   495,    -1,    -1,   489,    -1,
      -1,   501,   493,    19,   495,    -1,   506,    -1,    -1,    -1,
     501,    -1,    28,   513,   514,   506,    32,    -1,    -1,   519,
     520,    37,   513,   514,   524,    -1,    42,    -1,   519,   520,
      -1,    -1,    48,   524,    -1,   284,    -1,   286,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    -1,   169,   170,   171,   172,   173,   174,    -1,   308,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      86,    -1,    -1,   169,   170,   171,   172,   173,   174,    -1,
      33,    -1,   331,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   350,    -1,    -1,    -1,     0,    -1,    -1,    -1,   358,
      -1,    -1,    -1,   362,    67,    -1,    69,    70,    71,    72,
      73,    74,    -1,    76,    19,    78,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    28,    -1,    88,    -1,    32,    -1,    92,
      -1,    -1,    37,    96,    97,    -1,    -1,    42,    -1,    -1,
      -1,    -1,   401,    48,   107,   108,   109,   110,    -1,    -1,
      55,   410,    57,    -1,    -1,    -1,   415,    -1,    63,    -1,
      -1,    66,   289,   290,   291,   292,   293,   294,   295,   296,
     429,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,    86,   309,   289,   290,   291,   292,   293,   294,   295,
     296,    -1,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   461,   309,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      -1,    -1,    38,    39,    -1,    -1,    -1,   364,    -1,    -1,
      -1,    47,    -1,   502,   503,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,   512,    -1,    61,    -1,    -1,   364,    65,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    -1,    78,    -1,    -1,    -1,    82,    -1,    84,    -1,
      86,    -1,    88,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    -1,    35,   424,    -1,   426,
      39,   107,   108,    -1,    -1,    -1,   433,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    -1,    -1,   424,    -1,
     426,    -1,    61,    -1,    -1,    -1,    65,   433,    67,    -1,
      69,    70,    71,    72,    73,    74,    -1,    76,    -1,    78,
      -1,    -1,    -1,    82,    -1,    -1,    20,    21,    22,    88,
      -1,    -1,    26,    -1,    28,    -1,    -1,    96,    97,    33,
      34,    -1,    -1,    -1,    38,    -1,    -1,    -1,   107,   108,
     109,   110,    -1,    47,    20,    21,    22,    -1,    -1,    53,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,    38,    67,    68,    69,    70,    71,    72,    73,
      74,    47,    76,    -1,    78,    -1,    -1,    53,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,    -1,    -1,    22,    95,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    33,
      76,    -1,    78,   107,   108,    -1,    82,    -1,    84,    -1,
      86,    -1,    88,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,    -1,    -1,    -1,    -1,    -1,
      -1,   107,   108,    67,    22,    69,    70,    71,    72,    73,
      74,    -1,    76,    -1,    78,    33,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,   109,   110,    -1,    -1,    67,
      -1,    69,    70,    71,    72,    73,    74,    -1,    76,    -1,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    22,
      88,    -1,    -1,    -1,    -1,    -1,    29,    -1,    96,    97,
      33,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,   107,
     108,   109,   110,    22,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    -1,    -1,    33,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    65,    -1,    67,    22,    69,    70,    71,    72,
      73,    74,    -1,    76,    -1,    78,    33,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    67,    -1,
      69,    70,    71,    72,    73,    74,    -1,    76,    -1,    78,
      -1,    -1,    -1,    82,   107,   108,    -1,    -1,    -1,    88,
      67,    -1,    69,    70,    71,    72,    73,    74,    -1,    76,
      -1,    78,    -1,    19,    19,    82,    -1,    -1,   107,   108,
      -1,    88,    28,    28,    -1,    -1,    32,    32,    -1,    96,
      97,    37,    37,    -1,    -1,    -1,    42,    42,    -1,    -1,
      -1,    -1,    48,    48,    -1,    -1,    19,    -1,    -1,    55,
      55,    57,    57,    -1,    -1,    28,    -1,    63,    63,    32,
      66,    66,    87,    88,    37,    -1,    91,    -1,    -1,    42,
      95,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    85,
      85,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      63,    95,    -1,    66,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,    87,    88,    -1,    -1,
      91,    -1,    85,    -1,    95,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      -1,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    27,   135,   151,   156,   157,    71,   148,   149,   150,
       0,    41,   152,   153,   158,   159,   160,    86,    87,   148,
      19,    28,    32,    37,    42,    48,    55,    57,    63,    66,
      86,   154,   155,   161,   162,   163,   165,   166,   199,   158,
      71,    86,    87,   161,   163,    56,   164,   111,    71,    59,
      86,    50,   200,   201,    71,   144,   146,   148,    84,   202,
      83,    50,   167,   169,   166,   177,   183,   203,   204,   205,
     206,   207,   146,   144,   145,    36,   168,   170,    29,    35,
      39,    51,    52,    54,    58,    61,    65,   138,   139,   140,
     141,   142,   143,   144,   147,   148,    86,    85,   205,   146,
     171,    84,   172,    71,   185,    71,   178,   179,   180,   185,
      91,    91,    91,    83,    57,   166,   173,   174,   175,   176,
     177,   182,   183,   192,   193,   214,   213,    43,    91,   184,
     189,    83,    86,    91,    95,   184,    92,    92,    92,   146,
     213,   149,   194,    85,   175,    84,    86,   191,   212,    88,
     145,   190,    92,    71,   179,    92,    22,    33,    67,    69,
      70,    72,    73,    74,    76,    78,    82,    84,    88,    96,
      97,   107,   108,   109,   110,   136,   137,   148,   181,   208,
     252,   253,   254,   256,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   287,
     212,    88,   184,    20,    21,    26,    28,    34,    38,    47,
      53,    68,    71,    86,    88,   138,   148,   212,   215,   216,
     217,   218,   219,   220,   222,   223,   224,   226,   227,   228,
     229,   231,   233,   241,   243,   244,   245,   246,   247,   254,
     262,   264,   265,   266,   268,   269,   284,   214,   214,   138,
     186,   187,   188,    83,   139,   144,   145,    87,   181,   209,
     211,   139,   148,   287,   148,   261,   263,   267,   267,   267,
     267,   267,   267,    88,    91,    87,    91,   107,   108,   111,
     112,   116,   109,   110,   117,   118,   119,    46,   102,   103,
     131,   132,   101,   104,   113,   115,   114,   105,    98,   106,
      95,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   286,   214,   186,    84,   195,    71,   242,   213,
     213,    88,   242,   287,   236,   287,   212,   213,    86,   287,
     178,    91,    85,   217,    86,    86,   180,    89,    83,   145,
      91,   258,   259,   258,    88,    71,    83,   210,    83,    91,
     257,   260,    91,   260,    89,   198,   255,   287,   287,    71,
     287,   267,   267,   267,   272,   272,   273,   273,   273,   139,
     143,   274,   274,   274,   274,   275,   275,   276,   277,   278,
     279,   287,   280,   283,    89,    33,    67,   196,   197,    86,
      88,    88,   287,    86,    86,    86,    49,   248,   249,   250,
      88,   220,    89,   188,   287,    91,   257,   259,   257,   198,
      88,    85,   181,    92,    89,    91,    89,   270,    89,    83,
      92,    88,    92,    99,    88,    88,   215,   219,   227,   235,
     238,   240,   287,    89,    88,    60,   251,   250,   287,    92,
      89,   198,   267,    92,   270,   287,   198,   282,   198,   198,
      85,    86,    83,    89,   212,   188,   212,    89,    89,    89,
      89,    89,   236,   227,    21,    26,    68,    71,   220,   221,
     222,   225,   230,   232,   234,    89,   220,    86,    86,    86,
     213,   213,   213,    86,   214,    40,   212,   214,   237,   239,
     240,    88,    88,    88,   221,   220,    89,   235,   287,   287,
     214,   220,    86,    89,    89,   214,   236,   221,   221,    86,
      40,   214,   237,   221,    89,   214,   221,   214
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
     196,   196,   197,   197,   198,   198,   199,   200,   200,   201,
     201,   202,   203,   203,   204,   204,   205,   205,   206,   207,
     208,   209,   209,   210,   210,   211,   211,   212,   213,   214,
     215,   215,   216,   216,   217,   217,   218,   219,   220,   220,
     220,   220,   220,   220,   221,   221,   221,   221,   221,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   223,   224,
     225,   226,   227,   227,   227,   227,   227,   227,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   235,   236,   236,
     237,   237,   238,   238,   239,   240,   240,   241,   242,   242,
     243,   244,   245,   246,   247,   247,   248,   248,   249,   249,
     250,   251,   252,   252,   253,   253,   253,   253,   253,   253,
     253,   254,   255,   255,   256,   256,   257,   257,   258,   258,
     259,   260,   260,   261,   261,   262,   262,   262,   263,   263,
     264,   264,   264,   264,   265,   266,   267,   267,   267,   267,
     267,   268,   269,   270,   270,   270,   270,   271,   271,   271,
     272,   272,   272,   272,   273,   273,   273,   274,   274,   274,
     274,   275,   275,   275,   275,   275,   275,   276,   276,   276,
     277,   277,   278,   278,   279,   279,   280,   280,   281,   281,
     282,   282,   283,   283,   284,   285,   285,   285,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     287
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
       1,     1,     1,     1,     1,     1,     1,     1,     0,     8,
       0,     1,     0,     1,     0,     1,     2,     2,     1,     3,
       3,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       4,     1,     3,     1,     3,     1,     3,     1,     1,     2,
       4,     4,     0,     1,     5,     3,     0,     1,     1,     3,
       2,     2,     1,     3,     2,     2,     4,     4,     4,     4,
       0,     1,     5,     5,     0,     1,     5,     0,     1,     2,
       3,     3,     0,     1,     1,     2,     1,     1,     1,     2,
       4,     0,     1,     0,     1,     1,     3,     3,     0,     0,
       0,     1,     1,     2,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     7,
       9,     9,     7,     7,    11,    11,     0,     1,     0,     1,
       0,     1,     1,     1,     1,     1,     3,     3,     0,     1,
       3,     3,     3,     5,     3,     4,     0,     1,     1,     2,
       5,     2,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     5,     1,     3,     4,     4,     0,     1,     1,     2,
       3,     2,     3,     3,     3,     4,     6,     6,     4,     4,
       1,     1,     1,     1,     2,     2,     1,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     5,     4,     5,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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
#line 147 "src/parser.y"
                      {
    printf("Parsing stage was successful !\n");
    (yyval.exp) = (yyvsp[0].exp);
}
#line 2164 "bin/parser.tab.cc"
    break;

  case 3:
#line 154 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2172 "bin/parser.tab.cc"
    break;

  case 4:
#line 157 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "float";
    }
#line 2181 "bin/parser.tab.cc"
    break;

  case 5:
#line 161 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "boolean";
    }
#line 2190 "bin/parser.tab.cc"
    break;

  case 6:
#line 165 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "character";
    }
#line 2199 "bin/parser.tab.cc"
    break;

  case 7:
#line 169 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "string";
    }
#line 2208 "bin/parser.tab.cc"
    break;

  case 8:
#line 173 "src/parser.y"
                 {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "null";
    }
#line 2217 "bin/parser.tab.cc"
    break;

  case 9:
#line 179 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";

    }
#line 2227 "bin/parser.tab.cc"
    break;

  case 10:
#line 184 "src/parser.y"
                        {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";
    }
#line 2236 "bin/parser.tab.cc"
    break;

  case 11:
#line 188 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";
    }
#line 2245 "bin/parser.tab.cc"
    break;

  case 12:
#line 194 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2253 "bin/parser.tab.cc"
    break;

  case 13:
#line 197 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2261 "bin/parser.tab.cc"
    break;

  case 14:
#line 202 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2269 "bin/parser.tab.cc"
    break;

  case 15:
#line 205 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "boolean";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 1;
    }
#line 2280 "bin/parser.tab.cc"
    break;

  case 16:
#line 213 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2288 "bin/parser.tab.cc"
    break;

  case 17:
#line 216 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2296 "bin/parser.tab.cc"
    break;

  case 18:
#line 221 "src/parser.y"
         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "byte";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 1;
    }
#line 2307 "bin/parser.tab.cc"
    break;

  case 19:
#line 227 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "short";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 2;
    }
#line 2318 "bin/parser.tab.cc"
    break;

  case 20:
#line 233 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "int";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)-> symbol.size = 4;
    }
#line 2329 "bin/parser.tab.cc"
    break;

  case 21:
#line 239 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "long";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2340 "bin/parser.tab.cc"
    break;

  case 22:
#line 245 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "char";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 2;
    }
#line 2351 "bin/parser.tab.cc"
    break;

  case 23:
#line 253 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.type.name = "float";
        (yyval.exp)->symbol.size = 4;
    }
#line 2362 "bin/parser.tab.cc"
    break;

  case 24:
#line 259 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        (yyval.exp)->symbol.type.name = "double";
        (yyval.exp)->symbol.type.t = 0;
        (yyval.exp)->symbol.size = 8;
    }
#line 2373 "bin/parser.tab.cc"
    break;

  case 25:
#line 267 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2381 "bin/parser.tab.cc"
    break;

  case 26:
#line 270 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2389 "bin/parser.tab.cc"
    break;

  case 27:
#line 275 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2397 "bin/parser.tab.cc"
    break;

  case 28:
#line 280 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2405 "bin/parser.tab.cc"
    break;

  case 29:
#line 285 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2413 "bin/parser.tab.cc"
    break;

  case 30:
#line 290 "src/parser.y"
                                                       {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        //cout << $1->data <<endl;
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data)+"[]";
        (yyval.exp)->symbol.type.name = temp;
    }
#line 2425 "bin/parser.tab.cc"
    break;

  case 31:
#line 297 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.type.name = temp;

    }
#line 2437 "bin/parser.tab.cc"
    break;

  case 32:
#line 304 "src/parser.y"
                                                     {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        (yyval.exp)->symbol.type.t = 1;
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.type.name = temp;

    }
#line 2449 "bin/parser.tab.cc"
    break;

  case 33:
#line 313 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2457 "bin/parser.tab.cc"
    break;

  case 34:
#line 316 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2465 "bin/parser.tab.cc"
    break;

  case 35:
#line 321 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));  
        struct Symbol* lookup_entry = check_scope(curr,(yyvsp[0].data));      
        if(lookup_entry != NULL){
            //$$->symbol.type = lookup_entry->type;
            (yyval.exp)->symbol = *lookup_entry;
            //cout << symbol.type.name <<endl;
        }
    }
#line 2479 "bin/parser.tab.cc"
    break;

  case 36:
#line 332 "src/parser.y"
                        {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,concatenate_string((yyvsp[-1].data),(yyvsp[0].data))));
    }
#line 2487 "bin/parser.tab.cc"
    break;

  case 37:
#line 337 "src/parser.y"
                                                                       {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CompilationUnit", memArr, 3, 1);
        root = (yyval.exp);
    }
#line 2500 "bin/parser.tab.cc"
    break;

  case 38:
#line 347 "src/parser.y"
    { 
        (yyval.exp) = NULL; 
    }
#line 2508 "bin/parser.tab.cc"
    break;

  case 39:
#line 350 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Imports", memArr, 1, 1);
    }
#line 2518 "bin/parser.tab.cc"
    break;

  case 40:
#line 357 "src/parser.y"
                      {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2528 "bin/parser.tab.cc"
    break;

  case 41:
#line 362 "src/parser.y"
                                           {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateImports", memArr, 2, 0);
    }
#line 2539 "bin/parser.tab.cc"
    break;

  case 42:
#line 370 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2547 "bin/parser.tab.cc"
    break;

  case 43:
#line 373 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Declarations", memArr, 1, 0);
    }
#line 2557 "bin/parser.tab.cc"
    break;

  case 44:
#line 380 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2567 "bin/parser.tab.cc"
    break;

  case 45:
#line 385 "src/parser.y"
                                       {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
    }
#line 2578 "bin/parser.tab.cc"
    break;

  case 46:
#line 393 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2586 "bin/parser.tab.cc"
    break;

  case 47:
#line 396 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2594 "bin/parser.tab.cc"
    break;

  case 48:
#line 401 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),concatenate_string(" ",(yyvsp[-1].exp)->data)));
    }
#line 2602 "bin/parser.tab.cc"
    break;

  case 49:
#line 406 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2610 "bin/parser.tab.cc"
    break;

  case 50:
#line 409 "src/parser.y"
                                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2618 "bin/parser.tab.cc"
    break;

  case 51:
#line 414 "src/parser.y"
                          {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data), concatenate_string(" ",(yyvsp[-1].exp)->data)));
    }
#line 2626 "bin/parser.tab.cc"
    break;

  case 52:
#line 419 "src/parser.y"
                                      {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-4].data), concatenate_string(" ",concatenate_string((yyvsp[-3].exp)->data,".*"))));
    }
#line 2634 "bin/parser.tab.cc"
    break;

  case 53:
#line 424 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2642 "bin/parser.tab.cc"
    break;

  case 54:
#line 427 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2650 "bin/parser.tab.cc"
    break;

  case 55:
#line 430 "src/parser.y"
                {
        (yyval.exp) = NULL;
    }
#line 2658 "bin/parser.tab.cc"
    break;

  case 56:
#line 435 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2668 "bin/parser.tab.cc"
    break;

  case 57:
#line 440 "src/parser.y"
                         {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifier", memArr, 2, 0);
    }
#line 2679 "bin/parser.tab.cc"
    break;

  case 58:
#line 448 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2687 "bin/parser.tab.cc"
    break;

  case 59:
#line 451 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2695 "bin/parser.tab.cc"
    break;

  case 60:
#line 454 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2703 "bin/parser.tab.cc"
    break;

  case 61:
#line 457 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2711 "bin/parser.tab.cc"
    break;

  case 62:
#line 460 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2719 "bin/parser.tab.cc"
    break;

  case 63:
#line 463 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2727 "bin/parser.tab.cc"
    break;

  case 64:
#line 466 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2735 "bin/parser.tab.cc"
    break;

  case 65:
#line 469 "src/parser.y"
                   {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2743 "bin/parser.tab.cc"
    break;

  case 66:
#line 472 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2751 "bin/parser.tab.cc"
    break;

  case 67:
#line 475 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2759 "bin/parser.tab.cc"
    break;

  case 68:
#line 479 "src/parser.y"
                            {
    curr = loc_mktable(curr,"local");
    class_line_number.push_back(line_number);
}
#line 2768 "bin/parser.tab.cc"
    break;

  case 69:
#line 485 "src/parser.y"
                                                                                                                       {
        
        struct node * memArr[6];
        memArr[0] = (yyvsp[-7].exp);
        memArr[1] = makeleaf((yyvsp[-5].data));
        memArr[2] = makeleaf((yyvsp[-4].data));
        memArr[3] = (yyvsp[-3].exp);
        memArr[4] = (yyvsp[-2].exp);
        memArr[5] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ClassDeclaration", memArr, 6, 1);
        
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->t = 1;
        if((yyvsp[-7].exp)!=NULL)
            for(int i = 0; i<(yyvsp[-7].exp)->arr.size(); i++){
                if((yyvsp[-7].exp)->arr[i]!=NULL)
                    (yyval.exp)->symbol.type.modifier.push_back(string((yyvsp[-7].exp)->arr[i]->data));
        }
        (yyval.exp)->symbol.name = (yyvsp[-4].data);
        if((yyvsp[-3].exp)!=NULL)
            (yyval.exp)->symbol.type.extendClass = string((yyvsp[-3].exp)->data);
        
        if((yyvsp[-1].exp) != NULL){
            (yyval.exp)->symbol.size = (yyvsp[-1].exp)->symbol.size;
            //$$->symbol.structuretable = $7->symbol.structuretable;
        }

        (yyval.exp)->symbol.offset = 0;
        (yyval.exp)->symbol.type.name = (yyvsp[-5].data);
        (yyval.exp)->symbol.type.t = 1;        
        (yyval.exp)->symbol.line_num = class_line_number[class_num];
        class_num +=1;
        //loc_insert(curr, $$->symbol);
        long long int x  = loc_insert(curr,(yyval.exp)->symbol);
        //cout << x <<endl;
        if(x < 0)
        {
            semantic_error("Declaration of class" +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x) + ".");
        }
        
    }
#line 2814 "bin/parser.tab.cc"
    break;

  case 70:
#line 527 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 2822 "bin/parser.tab.cc"
    break;

  case 71:
#line 530 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifiers", memArr, 1, 1);
    }
#line 2832 "bin/parser.tab.cc"
    break;

  case 72:
#line 536 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2840 "bin/parser.tab.cc"
    break;

  case 73:
#line 539 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2848 "bin/parser.tab.cc"
    break;

  case 74:
#line 543 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2856 "bin/parser.tab.cc"
    break;

  case 75:
#line 546 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2864 "bin/parser.tab.cc"
    break;

  case 76:
#line 551 "src/parser.y"
                      {
        (yyval.exp) = makeleaf((yyvsp[0].exp)->data);
    }
#line 2872 "bin/parser.tab.cc"
    break;

  case 77:
#line 556 "src/parser.y"
                                 {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 1);

    }
#line 2884 "bin/parser.tab.cc"
    break;

  case 78:
#line 565 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2894 "bin/parser.tab.cc"
    break;

  case 79:
#line 570 "src/parser.y"
                                            {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("InterfaceList", memArr, 2, 0);
    }
#line 2905 "bin/parser.tab.cc"
    break;

  case 80:
#line 578 "src/parser.y"
                                                             {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 2913 "bin/parser.tab.cc"
    break;

  case 81:
#line 582 "src/parser.y"
                            { 
        (yyval.exp) = NULL ;
    }
#line 2921 "bin/parser.tab.cc"
    break;

  case 82:
#line 585 "src/parser.y"
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
        
    }
#line 2954 "bin/parser.tab.cc"
    break;

  case 83:
#line 615 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ClassBody", memArr, 1, 0);

    }
#line 2965 "bin/parser.tab.cc"
    break;

  case 84:
#line 621 "src/parser.y"
                                                 {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
    }
#line 2976 "bin/parser.tab.cc"
    break;

  case 85:
#line 629 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2984 "bin/parser.tab.cc"
    break;

  case 86:
#line 632 "src/parser.y"
                        {
        (yyval.exp)=(yyvsp[0].exp);
    }
#line 2992 "bin/parser.tab.cc"
    break;

  case 87:
#line 635 "src/parser.y"
                             {
        (yyval.exp)=(yyvsp[0].exp);
    }
#line 3000 "bin/parser.tab.cc"
    break;

  case 88:
#line 640 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3008 "bin/parser.tab.cc"
    break;

  case 89:
#line 643 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);

    }
#line 3017 "bin/parser.tab.cc"
    break;

  case 90:
#line 649 "src/parser.y"
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
                (yyval.exp)->symbol.size = (yyvsp[-2].exp)->symbol.size;
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
                /*
                $$->symbol.structuretable->field_type.push_back($$->symbol.type);
                $$->symbol.structuretable->field_name.push_back(name);
                */
            }
        }

        else{
            for(int j =0; j< (yyvsp[-1].exp)->arr.size(); j++)
            {
                (yyval.exp)->symbol.size = (yyvsp[-2].exp)->symbol.size;
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

                /*
                $$->symbol.structuretable->field_type.push_back(temp);
                $$->symbol.structuretable->field_name.push_back(name);
                */
            }
        }

    }
#line 3115 "bin/parser.tab.cc"
    break;

  case 91:
#line 744 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        // $$->isDeclaration = DECLARATION;
    }
#line 3126 "bin/parser.tab.cc"
    break;

  case 92:
#line 750 "src/parser.y"
                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 2, 0);
        // $$->isDeclaration = DECLARATION;
    }
#line 3138 "bin/parser.tab.cc"
    break;

  case 93:
#line 759 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->t = 0;
        (yyval.exp)->symbol.name = (yyvsp[0].exp)->symbol.name;


    }
#line 3153 "bin/parser.tab.cc"
    break;

  case 94:
#line 769 "src/parser.y"
                                                       {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("=", memArr, 2, 1);
        (yyval.exp)->isDeclaration = INITIALIZATION;
        (yyval.exp)->t = 0;
        (yyval.exp)->symbol.name = (yyvsp[-2].exp)->symbol.name;
    }
#line 3167 "bin/parser.tab.cc"
    break;

  case 95:
#line 780 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
        string temp  = string((yyvsp[0].data));
        (yyval.exp)->symbol.name = temp;
        //$$->symbol.line_num = line_number;
    }
#line 3178 "bin/parser.tab.cc"
    break;

  case 96:
#line 786 "src/parser.y"
                                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
        string temp = string((yyvsp[-2].exp)->data) + "[]";
        (yyval.exp)->symbol.name = temp;
    }
#line 3188 "bin/parser.tab.cc"
    break;

  case 97:
#line 793 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3196 "bin/parser.tab.cc"
    break;

  case 98:
#line 796 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3204 "bin/parser.tab.cc"
    break;

  case 99:
#line 801 "src/parser.y"
                           {
        
        
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr,2, 1);
        (yyval.exp)->symbol = (yyvsp[-1].exp)->symbol;
        (yyval.exp)->isDeclaration = DECLARATION;
        
        //glob_insert("scope",$1->symbol.name,$1->symbol.type,curr,glob_table);
        //curr = curr->parent;

        long long int x  = loc_insert(curr,(yyvsp[-1].exp)->symbol);
        if(x < 0)
        {
            semantic_error("Declaration of " +(yyvsp[-1].exp)->symbol.name + " already exists at line number " + to_string(-x) + ".");
        }

    }
#line 3229 "bin/parser.tab.cc"
    break;

  case 100:
#line 823 "src/parser.y"
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
        /*
        $$->symbol.structuretable->field_type.push_back($$->symbol.type);
        $$->symbol.structuretable->field_name.push_back($$->symbol.name);
        */

        //loc_insert(curr,$$->symbol);
        glob_insert(line_number,to_string(class_num),(yyval.exp)->symbol.name,(yyval.exp)->symbol.type,curr,glob_table);
        /*
        func_params = $$->symbol;
        symb_insert = 1;
        */
        
    }
#line 3276 "bin/parser.tab.cc"
    break;

  case 101:
#line 865 "src/parser.y"
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

        /*

        $$->symbol.structuretable->field_type.push_back($$->symbol.type);
        $$->symbol.structuretable->field_name.push_back($$->symbol.name);
        */
        /*
        func_params = $$->symbol;
        symb_insert = 1;
        */

    }
#line 3322 "bin/parser.tab.cc"
    break;

  case 102:
#line 908 "src/parser.y"
    { 
        (yyval.exp) = NULL;
    }
#line 3330 "bin/parser.tab.cc"
    break;

  case 103:
#line 911 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Throws", memArr, 1, 1);
    }
#line 3340 "bin/parser.tab.cc"
    break;

  case 104:
#line 918 "src/parser.y"
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
#line 3362 "bin/parser.tab.cc"
    break;

  case 105:
#line 935 "src/parser.y"
                                                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-2].exp)->data,"[]"), memArr, 1, 0);
        string temp = string((yyvsp[-2].exp)->data)+ "[]";
        (yyval.exp)->symbol.name = temp;
    }
#line 3374 "bin/parser.tab.cc"
    break;

  case 106:
#line 943 "src/parser.y"
                          {
        (yyval.exp) = NULL;
    }
#line 3382 "bin/parser.tab.cc"
    break;

  case 107:
#line 946 "src/parser.y"
                          {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameters", memArr, 1, 1);
    }
#line 3392 "bin/parser.tab.cc"
    break;

  case 108:
#line 953 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameter", memArr, 1, 0);
        
    }
#line 3403 "bin/parser.tab.cc"
    break;

  case 109:
#line 959 "src/parser.y"
                                               {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameter", memArr, 2,0);
    }
#line 3414 "bin/parser.tab.cc"
    break;

  case 110:
#line 967 "src/parser.y"
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
        long long int x  = loc_insert(curr,(yyval.exp)->symbol);
        //cout << x <<endl;
        if(x < 0)
        {
            semantic_error("Declaration of " +(yyval.exp)->symbol.name + " already exists at line number " + to_string(-x) + "." );
        }
    }
#line 3456 "bin/parser.tab.cc"
    break;

  case 111:
#line 1006 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("throws", memArr, 1, 1);
    }
#line 3466 "bin/parser.tab.cc"
    break;

  case 112:
#line 1013 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 1, 0);
    }
#line 3476 "bin/parser.tab.cc"
    break;

  case 113:
#line 1018 "src/parser.y"
                                    {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp); 
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 2, 0);
    }
#line 3487 "bin/parser.tab.cc"
    break;

  case 114:
#line 1026 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3495 "bin/parser.tab.cc"
    break;

  case 115:
#line 1029 "src/parser.y"
                                 {
        (yyval.exp) = NULL;
    }
#line 3503 "bin/parser.tab.cc"
    break;

  case 116:
#line 1035 "src/parser.y"
                                                       {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("static", memArr, 1, 1);
    }
#line 3513 "bin/parser.tab.cc"
    break;

  case 117:
#line 1042 "src/parser.y"
                                                                   {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-2].exp)->data, memArr, 4, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3527 "bin/parser.tab.cc"
    break;

  case 118:
#line 1053 "src/parser.y"
                                                                        {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 1, 0);
    }
#line 3537 "bin/parser.tab.cc"
    break;

  case 119:
#line 1060 "src/parser.y"
                                                                                         {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ConstructorInvocation", memArr, 2, 1);
    }
#line 3548 "bin/parser.tab.cc"
    break;

  case 120:
#line 1067 "src/parser.y"
                                    { 
    (yyval.exp) = NULL; 
    }
#line 3556 "bin/parser.tab.cc"
    break;

  case 121:
#line 1070 "src/parser.y"
                                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ExplicitConstructorInvocation", memArr, 1, 1);
    }
#line 3566 "bin/parser.tab.cc"
    break;

  case 122:
#line 1077 "src/parser.y"
                                                                     {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode("this", memArr, 1, 0);
    }
#line 3576 "bin/parser.tab.cc"
    break;

  case 123:
#line 1082 "src/parser.y"
                                                                        {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode("super", memArr, 1, 0);
    }
#line 3586 "bin/parser.tab.cc"
    break;

  case 124:
#line 1088 "src/parser.y"
                  {
    (yyval.exp) = NULL; 
    }
#line 3594 "bin/parser.tab.cc"
    break;

  case 125:
#line 1091 "src/parser.y"
                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Arguments", memArr, 1, 0);
        //$$ = $1;
        //view_symbol($$->symbol);
        //$$->symbol = $1->symbol;
    }
#line 3607 "bin/parser.tab.cc"
    break;

  case 126:
#line 1101 "src/parser.y"
                                                                           {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = makeleaf((yyvsp[-3].data));
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-2].data), memArr, 4, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3621 "bin/parser.tab.cc"
    break;

  case 127:
#line 1111 "src/parser.y"
                        {
    (yyval.exp) = NULL;
    }
#line 3629 "bin/parser.tab.cc"
    break;

  case 128:
#line 1114 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 1);
    }
#line 3639 "bin/parser.tab.cc"
    break;

  case 129:
#line 1121 "src/parser.y"
                          {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 0);
    }
#line 3649 "bin/parser.tab.cc"
    break;

  case 130:
#line 1126 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 2, 0);
    }
#line 3660 "bin/parser.tab.cc"
    break;

  case 131:
#line 1134 "src/parser.y"
                                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3668 "bin/parser.tab.cc"
    break;

  case 132:
#line 1138 "src/parser.y"
                                 {
        (yyval.exp) = NULL;
    }
#line 3676 "bin/parser.tab.cc"
    break;

  case 133:
#line 1141 "src/parser.y"
                                  {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interfaces", memArr, 1, 1);
    }
#line 3686 "bin/parser.tab.cc"
    break;

  case 134:
#line 1148 "src/parser.y"
                               {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 1, 0);
    }
#line 3696 "bin/parser.tab.cc"
    break;

  case 135:
#line 1153 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 0);
    }
#line 3707 "bin/parser.tab.cc"
    break;

  case 136:
#line 1161 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3716 "bin/parser.tab.cc"
    break;

  case 137:
#line 1165 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 3725 "bin/parser.tab.cc"
    break;

  case 138:
#line 1171 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3733 "bin/parser.tab.cc"
    break;

  case 139:
#line 1176 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3741 "bin/parser.tab.cc"
    break;

  case 140:
#line 1181 "src/parser.y"
                                                                      {
        (yyval.exp) = (yyvsp[-2].exp);
    }
#line 3749 "bin/parser.tab.cc"
    break;

  case 141:
#line 1185 "src/parser.y"
                          {
        (yyval.exp) = NULL; 
    }
#line 3757 "bin/parser.tab.cc"
    break;

  case 142:
#line 1188 "src/parser.y"
                           {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("VariableInitializers", memArr, 1, 1);
    }
#line 3767 "bin/parser.tab.cc"
    break;

  case 143:
#line 1194 "src/parser.y"
            {
        (yyval.exp) = NULL; 
    }
#line 3775 "bin/parser.tab.cc"
    break;

  case 144:
#line 1197 "src/parser.y"
            {
        (yyval.exp) = NULL;
    }
#line 3783 "bin/parser.tab.cc"
    break;

  case 145:
#line 1202 "src/parser.y"
                        {
       struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 3793 "bin/parser.tab.cc"
    break;

  case 146:
#line 1207 "src/parser.y"
                                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Initializer", memArr, 2, 0);
    }
#line 3804 "bin/parser.tab.cc"
    break;

  case 147:
#line 1215 "src/parser.y"
                                                       {    
        (yyval.exp) = (yyvsp[-1].exp);
        //cout << "After block !" << endl;
    }
#line 3813 "bin/parser.tab.cc"
    break;

  case 148:
#line 1221 "src/parser.y"
    { 
        curr = loc_mktable(curr,"local");
    }
#line 3821 "bin/parser.tab.cc"
    break;

  case 149:
#line 1226 "src/parser.y"
    {
        curr = curr->parent;
    }
#line 3829 "bin/parser.tab.cc"
    break;

  case 150:
#line 1230 "src/parser.y"
                      {
     (yyval.exp) = NULL; 
     }
#line 3837 "bin/parser.tab.cc"
    break;

  case 151:
#line 1233 "src/parser.y"
                      {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("statements", memArr, 1, 1);
    }
#line 3847 "bin/parser.tab.cc"
    break;

  case 152:
#line 1240 "src/parser.y"
                   {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Blocks", memArr, 1, 0);
    }
#line 3857 "bin/parser.tab.cc"
    break;

  case 153:
#line 1245 "src/parser.y"
                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Block", memArr, 2, 0);
        
    }
#line 3869 "bin/parser.tab.cc"
    break;

  case 154:
#line 1254 "src/parser.y"
                                      {
        //$$ = $1;
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("LocalVariableDeclarationStatement", memArr, 1, 1);
        //cout << "LocalVariableDeclaration" <<endl;
    }
#line 3881 "bin/parser.tab.cc"
    break;

  case 155:
#line 1261 "src/parser.y"
                {
        //$$ = $1;
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Statement", memArr, 1, 1);

    }
#line 3893 "bin/parser.tab.cc"
    break;

  case 156:
#line 1270 "src/parser.y"
                                       {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 1, 0);
    }
#line 3903 "bin/parser.tab.cc"
    break;

  case 157:
#line 1277 "src/parser.y"
                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Declaration", memArr, 2, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
        //cout << "Local Variable Declaration" <<endl;
        for(int j = 0 ; j< (yyvsp[0].exp)->arr.size(); j++)
            {
                (yyval.exp)->symbol.type.name = (yyvsp[-1].exp)->symbol.type.name;
                (yyval.exp)-> symbol.type.t = (yyvsp[-1].exp)->symbol.type.t;
                (yyval.exp)->symbol.name= (yyvsp[0].exp)->arr[j]->symbol.name;
                (yyval.exp)->symbol.size += (yyvsp[-1].exp)->symbol.size;
                (yyval.exp)->symbol.source_file = (yyvsp[0].exp)->arr[j]->symbol.source_file;
                (yyval.exp)->symbol.offset = (yyvsp[0].exp)->arr[j]->symbol.offset;
                //$$->symbol.structuretable = $2->arr[j]->symbol.structuretable;
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
        //cout << "Local Variable Declaration ended " <<endl;
    }
#line 3956 "bin/parser.tab.cc"
    break;

  case 158:
#line 1327 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3964 "bin/parser.tab.cc"
    break;

  case 159:
#line 1330 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3972 "bin/parser.tab.cc"
    break;

  case 160:
#line 1333 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3980 "bin/parser.tab.cc"
    break;

  case 161:
#line 1336 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3988 "bin/parser.tab.cc"
    break;

  case 162:
#line 1339 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3996 "bin/parser.tab.cc"
    break;

  case 163:
#line 1342 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4004 "bin/parser.tab.cc"
    break;

  case 164:
#line 1347 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4012 "bin/parser.tab.cc"
    break;

  case 165:
#line 1350 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4020 "bin/parser.tab.cc"
    break;

  case 166:
#line 1353 "src/parser.y"
                                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4028 "bin/parser.tab.cc"
    break;

  case 167:
#line 1356 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4036 "bin/parser.tab.cc"
    break;

  case 168:
#line 1359 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4044 "bin/parser.tab.cc"
    break;

  case 169:
#line 1364 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4052 "bin/parser.tab.cc"
    break;

  case 170:
#line 1367 "src/parser.y"
                     {
        (yyval.exp) = NULL;
    }
#line 4060 "bin/parser.tab.cc"
    break;

  case 171:
#line 1370 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4068 "bin/parser.tab.cc"
    break;

  case 172:
#line 1373 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4076 "bin/parser.tab.cc"
    break;

  case 173:
#line 1376 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4084 "bin/parser.tab.cc"
    break;

  case 174:
#line 1379 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4092 "bin/parser.tab.cc"
    break;

  case 175:
#line 1382 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4100 "bin/parser.tab.cc"
    break;

  case 176:
#line 1385 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4108 "bin/parser.tab.cc"
    break;

  case 177:
#line 1388 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4116 "bin/parser.tab.cc"
    break;

  case 178:
#line 1393 "src/parser.y"
              {
        (yyval.exp) = NULL;
    }
#line 4124 "bin/parser.tab.cc"
    break;

  case 179:
#line 1398 "src/parser.y"
                                   {
        struct node* memArr[2];
        memArr[0] = makeleaf((yyvsp[-2].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("LabeledStatements", memArr, 2, 0);
    }
#line 4135 "bin/parser.tab.cc"
    break;

  case 180:
#line 1406 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = makeleaf((yyvsp[-2].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfThen", memArr, 2, 0);
    }
#line 4146 "bin/parser.tab.cc"
    break;

  case 181:
#line 1414 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4154 "bin/parser.tab.cc"
    break;

  case 182:
#line 1419 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4162 "bin/parser.tab.cc"
    break;

  case 183:
#line 1422 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4170 "bin/parser.tab.cc"
    break;

  case 184:
#line 1425 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4178 "bin/parser.tab.cc"
    break;

  case 185:
#line 1428 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4186 "bin/parser.tab.cc"
    break;

  case 186:
#line 1431 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4194 "bin/parser.tab.cc"
    break;

  case 187:
#line 1434 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4202 "bin/parser.tab.cc"
    break;

  case 188:
#line 1437 "src/parser.y"
                                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4210 "bin/parser.tab.cc"
    break;

  case 189:
#line 1442 "src/parser.y"
                                                                                                   {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("IfThen", memArr, 2, 1);
    }
#line 4221 "bin/parser.tab.cc"
    break;

  case 190:
#line 1450 "src/parser.y"
                                                                                                                          {
        
        struct node* memArr[3];
        memArr[0] = (yyvsp[-5].exp);
        memArr[1] = (yyvsp[-3].exp);
        memArr[2] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("IfElse", memArr, 3, 1);
        
    }
#line 4235 "bin/parser.tab.cc"
    break;

  case 191:
#line 1461 "src/parser.y"
                                                                                                                                    {
        
        struct node* memArr[3];
        memArr[0] = (yyvsp[-5].exp);
        memArr[1] = (yyvsp[-3].exp);
        memArr[2] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("IfElseIf", memArr, 3, 1);
        
    }
#line 4249 "bin/parser.tab.cc"
    break;

  case 192:
#line 1472 "src/parser.y"
                                                                                                      {
        
        struct node* memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("While", memArr, 2, 1);
        
    }
#line 4262 "bin/parser.tab.cc"
    break;

  case 193:
#line 1482 "src/parser.y"
                                                                                                               {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("While", memArr, 2, 1);
    }
#line 4273 "bin/parser.tab.cc"
    break;

  case 194:
#line 1490 "src/parser.y"
                                                                                                                                                     {
        
        struct node* memArr[4];
        memArr[0] = (yyvsp[-7].exp);
        memArr[1] = (yyvsp[-5].exp);
        memArr[2] = (yyvsp[-3].exp);
        memArr[3] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("For", memArr, 4, 1);
        (yyval.exp)->t = 2;

    }
#line 4289 "bin/parser.tab.cc"
    break;

  case 195:
#line 1503 "src/parser.y"
                                                                                                                                                              {
        
        struct node* memArr[4];
        memArr[0] = (yyvsp[-7].exp);
        memArr[1] = (yyvsp[-5].exp);
        memArr[2] = (yyvsp[-3].exp);
        memArr[3] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("For", memArr, 4, 1);
    }
#line 4303 "bin/parser.tab.cc"
    break;

  case 196:
#line 1513 "src/parser.y"
             { 
    (yyval.exp) = NULL; 
    }
#line 4311 "bin/parser.tab.cc"
    break;

  case 197:
#line 1516 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
    }
#line 4321 "bin/parser.tab.cc"
    break;

  case 198:
#line 1522 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 4329 "bin/parser.tab.cc"
    break;

  case 199:
#line 1525 "src/parser.y"
                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Expression", memArr, 1, 1);
    }
#line 4339 "bin/parser.tab.cc"
    break;

  case 200:
#line 1531 "src/parser.y"
               { 
    (yyval.exp) = NULL ;
    }
#line 4347 "bin/parser.tab.cc"
    break;

  case 201:
#line 1534 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
    }
#line 4357 "bin/parser.tab.cc"
    break;

  case 202:
#line 1541 "src/parser.y"
                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
        // $$->isDeclaration = DECLARATION;
    }
#line 4368 "bin/parser.tab.cc"
    break;

  case 203:
#line 1547 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
        (yyval.exp)->t=1;
    }
#line 4380 "bin/parser.tab.cc"
    break;

  case 204:
#line 1556 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
    }
#line 4390 "bin/parser.tab.cc"
    break;

  case 205:
#line 1563 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("StatementExpression", memArr, 1, 0);
    }
#line 4400 "bin/parser.tab.cc"
    break;

  case 206:
#line 1568 "src/parser.y"
                                                        {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-2].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("StatementExpression", memArr, 2, 0);
    }
#line 4411 "bin/parser.tab.cc"
    break;

  case 207:
#line 1576 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("break", memArr, 1, 1);
    }
#line 4421 "bin/parser.tab.cc"
    break;

  case 208:
#line 1583 "src/parser.y"
    {
        (yyval.exp) = NULL;
    }
#line 4429 "bin/parser.tab.cc"
    break;

  case 209:
#line 1585 "src/parser.y"
                  {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4437 "bin/parser.tab.cc"
    break;

  case 210:
#line 1590 "src/parser.y"
                                      {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("continue", memArr, 1, 1);
    }
#line 4447 "bin/parser.tab.cc"
    break;

  case 211:
#line 1597 "src/parser.y"
                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("return", memArr, 1, 1);
    }
#line 4457 "bin/parser.tab.cc"
    break;

  case 212:
#line 1604 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("throw", memArr, 1, 1);
    }
#line 4467 "bin/parser.tab.cc"
    break;

  case 213:
#line 1611 "src/parser.y"
                                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("synchronized", memArr, 2, 1);
    }
#line 4478 "bin/parser.tab.cc"
    break;

  case 214:
#line 1619 "src/parser.y"
                      {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCatches", memArr, 2, 1);
    }
#line 4489 "bin/parser.tab.cc"
    break;

  case 215:
#line 1625 "src/parser.y"
                                    {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCtachesFinally", memArr, 3, 1);
    }
#line 4501 "bin/parser.tab.cc"
    break;

  case 216:
#line 1633 "src/parser.y"
             {
        (yyval.exp) = NULL; 
    }
#line 4509 "bin/parser.tab.cc"
    break;

  case 217:
#line 1636 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catches", memArr, 1, 1);
    }
#line 4519 "bin/parser.tab.cc"
    break;

  case 218:
#line 1643 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("catch", memArr, 1, 0);
    }
#line 4529 "bin/parser.tab.cc"
    break;

  case 219:
#line 1648 "src/parser.y"
                          {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catch", memArr, 2, 0);
    }
#line 4540 "bin/parser.tab.cc"
    break;

  case 220:
#line 1656 "src/parser.y"
                                                                 {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CatchClause", memArr, 2, 0);
    }
#line 4551 "bin/parser.tab.cc"
    break;

  case 221:
#line 1664 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("finally", memArr, 1, 1);
    }
#line 4561 "bin/parser.tab.cc"
    break;

  case 222:
#line 1671 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4569 "bin/parser.tab.cc"
    break;

  case 223:
#line 1674 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4577 "bin/parser.tab.cc"
    break;

  case 224:
#line 1679 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4585 "bin/parser.tab.cc"
    break;

  case 225:
#line 1682 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4593 "bin/parser.tab.cc"
    break;

  case 226:
#line 1685 "src/parser.y"
                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4601 "bin/parser.tab.cc"
    break;

  case 227:
#line 1688 "src/parser.y"
                                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4609 "bin/parser.tab.cc"
    break;

  case 228:
#line 1691 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4617 "bin/parser.tab.cc"
    break;

  case 229:
#line 1694 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4625 "bin/parser.tab.cc"
    break;

  case 230:
#line 1697 "src/parser.y"
                  {
        //cout << "Hello " <<endl;
        (yyval.exp) = (yyvsp[0].exp);
        //cout << $$->symbol.type.name <<endl;
    }
#line 4635 "bin/parser.tab.cc"
    break;

  case 231:
#line 1704 "src/parser.y"
                                                                    {
        struct node * memArr[3];
        memArr[0] = makeleaf((yyvsp[-4].data));
        memArr[1] =(yyvsp[-3].exp);
        memArr[2] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ClassInstance", memArr, 3, 1);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 4648 "bin/parser.tab.cc"
    break;

  case 232:
#line 1714 "src/parser.y"
               {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArgumentList", memArr, 1, 0);
    }
#line 4658 "bin/parser.tab.cc"
    break;

  case 233:
#line 1719 "src/parser.y"
                                    {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-2].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArgumentList", memArr, 2, 0);
    }
#line 4669 "bin/parser.tab.cc"
    break;

  case 234:
#line 1727 "src/parser.y"
                                        {
        struct node * memArr[4];
        memArr[0] = makeleaf((yyvsp[-3].data));
        memArr[1] =(yyvsp[-2].exp);
        memArr[2] =(yyvsp[-1].exp);
        memArr[3] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArrayCreation", memArr, 4, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 4683 "bin/parser.tab.cc"
    break;

  case 235:
#line 1736 "src/parser.y"
                                                 {
        struct node * memArr[4];
        memArr[0] = makeleaf((yyvsp[-3].data));
        memArr[1] =(yyvsp[-2].exp);
        memArr[2] =(yyvsp[-1].exp);
        memArr[3] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArrayCreation", memArr, 4, 0);
        (yyval.exp)->isDeclaration = DECLARATION;
    }
#line 4697 "bin/parser.tab.cc"
    break;

  case 236:
#line 1746 "src/parser.y"
          { 
    (yyval.exp) = NULL; 
    }
#line 4705 "bin/parser.tab.cc"
    break;

  case 237:
#line 1749 "src/parser.y"
          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4713 "bin/parser.tab.cc"
    break;

  case 238:
#line 1754 "src/parser.y"
            {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 4723 "bin/parser.tab.cc"
    break;

  case 239:
#line 1759 "src/parser.y"
                       {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]",memArr,2, 0);
    }
#line 4734 "bin/parser.tab.cc"
    break;

  case 240:
#line 1767 "src/parser.y"
                                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 4744 "bin/parser.tab.cc"
    break;

  case 241:
#line 1774 "src/parser.y"
                                         {
        (yyval.exp) = makeleaf("[]");
    }
#line 4752 "bin/parser.tab.cc"
    break;

  case 242:
#line 1777 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
    }
#line 4760 "bin/parser.tab.cc"
    break;

  case 243:
#line 1782 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,(yyvsp[0].data)));
    }
#line 4768 "bin/parser.tab.cc"
    break;

  case 244:
#line 1785 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),(yyvsp[0].data)));
    }
#line 4776 "bin/parser.tab.cc"
    break;

  case 245:
#line 1790 "src/parser.y"
                                                           {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 1, 1);

        // Checking If function has been defined
        struct GlobalSymbol * glob_entry = glob_lookup(to_string(class_num), (yyvsp[-3].exp)->data, glob_table);
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
#line 4825 "bin/parser.tab.cc"
    break;

  case 246:
#line 1834 "src/parser.y"
                                                                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].exp)->data,concatenate_string(" ",(yyvsp[-3].data))), memArr, 1, 1);
    }
#line 4835 "bin/parser.tab.cc"
    break;

  case 247:
#line 1839 "src/parser.y"
                                                                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].data),concatenate_string(" ",(yyvsp[-3].data))), memArr, 1, 1);
    }
#line 4845 "bin/parser.tab.cc"
    break;

  case 248:
#line 1846 "src/parser.y"
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
        (yyval.exp)->symbol.type.name = name;
        if((yyvsp[-1].exp)->symbol.type.name != "byte" && (yyvsp[-1].exp)->symbol.type.name != "short" && (yyvsp[-1].exp)->symbol.type.name != "int" && (yyvsp[-1].exp)->symbol.type.name != "long"  )
        {
            semantic_error("Invalid array access at line number " + to_string(line_number) + " as the expression " + (yyvsp[-1].exp)->symbol.name + " is not of type int.");
        }
    }
#line 4875 "bin/parser.tab.cc"
    break;

  case 249:
#line 1871 "src/parser.y"
                                                                        {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("PrimaryNoNewArrayAccess", memArr, 2, 1);
        (yyval.exp)->symbol = (yyvsp[-3].exp)->symbol;

        // Checking if Expression is a Integer
        if((yyvsp[-1].exp)->symbol.type.name != "byte" && (yyvsp[-1].exp)->symbol.type.name != "short" && (yyvsp[-1].exp)->symbol.type.name != "int" && (yyvsp[-1].exp)->symbol.type.name != "long"  )
        {
            semantic_error("Invalid array access at line number " + to_string(line_number) + " as the expression " + (yyvsp[-1].exp)->symbol.name + " is not of type int.");
        }
    }
#line 4893 "bin/parser.tab.cc"
    break;

  case 250:
#line 1886 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4901 "bin/parser.tab.cc"
    break;

  case 251:
#line 1889 "src/parser.y"
           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4909 "bin/parser.tab.cc"
    break;

  case 252:
#line 1892 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4917 "bin/parser.tab.cc"
    break;

  case 253:
#line 1895 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4925 "bin/parser.tab.cc"
    break;

  case 254:
#line 1900 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("++", memArr, 1, 1);
    }
#line 4935 "bin/parser.tab.cc"
    break;

  case 255:
#line 1907 "src/parser.y"
                                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("--", memArr, 1, 1);
    }
#line 4945 "bin/parser.tab.cc"
    break;

  case 256:
#line 1914 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4953 "bin/parser.tab.cc"
    break;

  case 257:
#line 1917 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4961 "bin/parser.tab.cc"
    break;

  case 258:
#line 1920 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("+", memArr, 1, 1);
    }
#line 4971 "bin/parser.tab.cc"
    break;

  case 259:
#line 1925 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("-", memArr, 1, 1);
    }
#line 4981 "bin/parser.tab.cc"
    break;

  case 260:
#line 1930 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4989 "bin/parser.tab.cc"
    break;

  case 261:
#line 1935 "src/parser.y"
                             {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("++", memArr, 2, 1);
    }
#line 5000 "bin/parser.tab.cc"
    break;

  case 262:
#line 1943 "src/parser.y"
                               {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("--", memArr, 2, 1);
    }
#line 5011 "bin/parser.tab.cc"
    break;

  case 263:
#line 1951 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5019 "bin/parser.tab.cc"
    break;

  case 264:
#line 1954 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("~", memArr, 1, 1);
    }
#line 5029 "bin/parser.tab.cc"
    break;

  case 265:
#line 1959 "src/parser.y"
                                  {
         struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("!", memArr, 1, 1);
    }
#line 5039 "bin/parser.tab.cc"
    break;

  case 266:
#line 1964 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5047 "bin/parser.tab.cc"
    break;

  case 267:
#line 1969 "src/parser.y"
                                                                            {
        struct  node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        char * str = concatenate_string((yyvsp[-3].exp)->data, (yyvsp[-2].exp)->data);
        (yyval.exp) = makeInternalNode(str, memArr, 1, 1);
    }
#line 5058 "bin/parser.tab.cc"
    break;

  case 268:
#line 1975 "src/parser.y"
                                                                              {
        struct  node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CastExpression", memArr, 2, 1);
    }
#line 5069 "bin/parser.tab.cc"
    break;

  case 269:
#line 1981 "src/parser.y"
                                                                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        char * str = concatenate_string((yyvsp[-3].exp)->data, (yyvsp[-2].exp)->data);
        (yyval.exp) = makeInternalNode(str, memArr, 1, 1);
    }
#line 5080 "bin/parser.tab.cc"
    break;

  case 270:
#line 1989 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5088 "bin/parser.tab.cc"
    break;

  case 271:
#line 1992 "src/parser.y"
                                                       {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("*", memArr, 2, 1); 
    }
#line 5099 "bin/parser.tab.cc"
    break;

  case 272:
#line 1998 "src/parser.y"
                                                      {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("/", memArr, 2, 1); 
    }
#line 5110 "bin/parser.tab.cc"
    break;

  case 273:
#line 2004 "src/parser.y"
                                                      {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Modulo", memArr, 2, 1); 
    }
#line 5121 "bin/parser.tab.cc"
    break;

  case 274:
#line 2012 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5129 "bin/parser.tab.cc"
    break;

  case 275:
#line 2015 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("+", memArr, 2, 1); 
    }
#line 5140 "bin/parser.tab.cc"
    break;

  case 276:
#line 2021 "src/parser.y"
                                                               {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("-", memArr, 2, 1); 
    }
#line 5151 "bin/parser.tab.cc"
    break;

  case 277:
#line 2029 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5159 "bin/parser.tab.cc"
    break;

  case 278:
#line 2032 "src/parser.y"
                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<<", memArr, 2, 1); 
    }
#line 5170 "bin/parser.tab.cc"
    break;

  case 279:
#line 2038 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">>", memArr, 2, 1); 
    }
#line 5181 "bin/parser.tab.cc"
    break;

  case 280:
#line 2044 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">>>", memArr, 2, 1); 
    }
#line 5192 "bin/parser.tab.cc"
    break;

  case 281:
#line 2052 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5200 "bin/parser.tab.cc"
    break;

  case 282:
#line 2055 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">", memArr, 2, 1); 
    }
#line 5211 "bin/parser.tab.cc"
    break;

  case 283:
#line 2061 "src/parser.y"
                                                       {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<", memArr, 2, 1); 
    }
#line 5222 "bin/parser.tab.cc"
    break;

  case 284:
#line 2067 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("<=", memArr, 2, 1); 
    }
#line 5233 "bin/parser.tab.cc"
    break;

  case 285:
#line 2073 "src/parser.y"
                                                              {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode(">=", memArr, 2, 1); 
    }
#line 5244 "bin/parser.tab.cc"
    break;

  case 286:
#line 2079 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Instanceof", memArr, 2, 1); 
    }
#line 5255 "bin/parser.tab.cc"
    break;

  case 287:
#line 2087 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5263 "bin/parser.tab.cc"
    break;

  case 288:
#line 2090 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("==", memArr, 2, 1); 
    }
#line 5274 "bin/parser.tab.cc"
    break;

  case 289:
#line 2096 "src/parser.y"
                                                         {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("!=", memArr, 2, 1); 
    }
#line 5285 "bin/parser.tab.cc"
    break;

  case 290:
#line 2104 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5293 "bin/parser.tab.cc"
    break;

  case 291:
#line 2107 "src/parser.y"
                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("&", memArr, 2 ,1); 
    }
#line 5304 "bin/parser.tab.cc"
    break;

  case 292:
#line 2115 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5312 "bin/parser.tab.cc"
    break;

  case 293:
#line 2118 "src/parser.y"
                                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("xor", memArr, 2 ,1); 
    }
#line 5323 "bin/parser.tab.cc"
    break;

  case 294:
#line 2126 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5331 "bin/parser.tab.cc"
    break;

  case 295:
#line 2129 "src/parser.y"
                                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("|", memArr, 2, 1); 
    }
#line 5342 "bin/parser.tab.cc"
    break;

  case 296:
#line 2137 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5350 "bin/parser.tab.cc"
    break;

  case 297:
#line 2140 "src/parser.y"
                                                                 {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("&&", memArr, 2, 1); 
    }
#line 5361 "bin/parser.tab.cc"
    break;

  case 298:
#line 2148 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5369 "bin/parser.tab.cc"
    break;

  case 299:
#line 2151 "src/parser.y"
                                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("||", memArr, 2, 1); 
    }
#line 5380 "bin/parser.tab.cc"
    break;

  case 300:
#line 2159 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5388 "bin/parser.tab.cc"
    break;

  case 301:
#line 2162 "src/parser.y"
                                                                                  {
        struct node* memArr[3];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("TernaryOperator", memArr, 3, 1); 
    }
#line 5400 "bin/parser.tab.cc"
    break;

  case 302:
#line 2171 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5408 "bin/parser.tab.cc"
    break;

  case 303:
#line 2174 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5416 "bin/parser.tab.cc"
    break;

  case 304:
#line 2179 "src/parser.y"
                                                         {
    struct node* memArr[2];
    memArr[0] = (yyvsp[-2].exp);
    memArr[1] = (yyvsp[0].exp);
    (yyval.exp) = makeInternalNode("=", memArr, 2, 1);

}
#line 5428 "bin/parser.tab.cc"
    break;

  case 305:
#line 2188 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
        struct Symbol * lookup_entry = check_scope(curr , string((yyvsp[0].exp)->data));
        if(lookup_entry == NULL){
            semantic_error("The identifier " + string((yyvsp[0].exp)->data) + " at line number " + to_string(line_number) +  " has not been declared in the scope." );
        }
        else{
            //cout << "The identifier " << $1->data  << " at line number " << line_number << " has been declared at line number "<< lookup_entry->line_num << endl <<endl;
            (yyval.exp)->symbol.type = lookup_entry->type;
        }
        //assign_flag = 1;
    }
#line 5445 "bin/parser.tab.cc"
    break;

  case 306:
#line 2200 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
        //assign_flag = 2;
    }
#line 5454 "bin/parser.tab.cc"
    break;

  case 307:
#line 2204 "src/parser.y"
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
        //assign_flag = 3;
    }
#line 5471 "bin/parser.tab.cc"
    break;

  case 308:
#line 2218 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5479 "bin/parser.tab.cc"
    break;

  case 309:
#line 2221 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5487 "bin/parser.tab.cc"
    break;

  case 310:
#line 2224 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5495 "bin/parser.tab.cc"
    break;

  case 311:
#line 2227 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5503 "bin/parser.tab.cc"
    break;

  case 312:
#line 2230 "src/parser.y"
                      {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5511 "bin/parser.tab.cc"
    break;

  case 313:
#line 2233 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5519 "bin/parser.tab.cc"
    break;

  case 314:
#line 2236 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5527 "bin/parser.tab.cc"
    break;

  case 315:
#line 2239 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5535 "bin/parser.tab.cc"
    break;

  case 316:
#line 2242 "src/parser.y"
                                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5543 "bin/parser.tab.cc"
    break;

  case 317:
#line 2245 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5551 "bin/parser.tab.cc"
    break;

  case 318:
#line 2248 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5559 "bin/parser.tab.cc"
    break;

  case 319:
#line 2251 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 5567 "bin/parser.tab.cc"
    break;

  case 320:
#line 2255 "src/parser.y"
                                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 5575 "bin/parser.tab.cc"
    break;


#line 5579 "bin/parser.tab.cc"

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
#line 2260 "src/parser.y"



int yyerror(string s)
{
    //printf("Error detected ! %s at [ line number: %lld ] after removing the comments.\nExiting...\n",s,line_number);
    //cout << s <<endl <<endl;
    cout << "Error detected !" << s << " at [ line number: " << line_number << " ] after removing the comments.\nExiting...\n";
    return 0;
}

int semantic_error(string s)
{
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
    //(leaf->symbol).structuretable = new struct StructureTable;
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
    //(internalNode->symbol).structuretable = new struct StructureTable;
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
    //view_symbol_table_with_children_hierarchy(curr);
    //viewGlobal(glob_table);

    //ast_print(root,0,0);

    FILE* graph = fopen(output_file,"w");
    fprintf(graph, "digraph AST{ \n");
    generateGraph(root, graph);
    fprintf(graph, "} \n");
    fclose(graph);
    fclose(yyin);

    return 0;

}



