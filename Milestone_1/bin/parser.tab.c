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
    int parentFlag;
    struct node* arr[N_NodeChild];

};
struct node* makeInternalNode(char* rule, struct node* memArr[], int n, int isParent);
struct node* makeleaf(char* node);
char* concatenate_string(char* s, char* s1);
void help();
long long int line_number=1;


#line 97 "bin/parser.tab.c"

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
#line 35 "src/parser.y"

    char data[100];
    struct node *exp;

#line 288 "bin/parser.tab.c"

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
#define YYLAST   1415

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  134
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  151
/* YYNRULES -- Number of rules.  */
#define YYNRULES  317
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  508

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
       0,   116,   116,   124,   127,   130,   133,   136,   139,   144,
     147,   150,   155,   158,   163,   166,   171,   174,   179,   182,
     185,   188,   191,   196,   199,   204,   207,   212,   217,   222,
     227,   230,   234,   240,   243,   248,   253,   258,   268,   271,
     278,   283,   291,   294,   301,   306,   314,   317,   322,   327,
     330,   335,   340,   345,   348,   351,   356,   361,   369,   372,
     375,   378,   381,   384,   387,   390,   393,   396,   401,   412,
     415,   421,   424,   428,   431,   436,   441,   450,   455,   463,
     467,   470,   477,   482,   490,   493,   496,   501,   504,   509,
     518,   523,   531,   534,   542,   545,   550,   553,   558,   566,
     574,   584,   587,   594,   599,   605,   608,   615,   620,   628,
     633,   640,   645,   653,   658,   663,   670,   680,   687,   694,
     697,   704,   709,   715,   718,   725,   734,   737,   744,   749,
     757,   761,   764,   771,   776,   784,   787,   792,   797,   802,
     806,   809,   815,   818,   823,   828,   836,   840,   843,   850,
     855,   863,   866,   871,   876,   884,   887,   890,   893,   896,
     899,   904,   907,   910,   913,   916,   921,   924,   927,   930,
     933,   936,   939,   942,   945,   950,   955,   963,   971,   976,
     979,   982,   985,   988,   991,   994,   999,  1007,  1016,  1025,
    1033,  1041,  1051,  1060,  1063,  1069,  1072,  1078,  1081,  1088,
    1093,  1100,  1107,  1112,  1120,  1127,  1129,  1134,  1141,  1148,
    1155,  1163,  1169,  1177,  1180,  1187,  1192,  1200,  1208,  1215,
    1218,  1223,  1226,  1229,  1232,  1235,  1238,  1241,  1246,  1255,
    1260,  1268,  1276,  1285,  1288,  1293,  1298,  1306,  1313,  1316,
    1321,  1324,  1329,  1334,  1339,  1346,  1352,  1360,  1363,  1366,
    1369,  1374,  1381,  1388,  1391,  1394,  1399,  1404,  1409,  1417,
    1425,  1428,  1433,  1438,  1443,  1449,  1455,  1463,  1466,  1472,
    1478,  1486,  1489,  1495,  1503,  1506,  1512,  1518,  1526,  1529,
    1535,  1541,  1547,  1553,  1561,  1564,  1570,  1578,  1581,  1589,
    1592,  1600,  1603,  1611,  1614,  1622,  1625,  1633,  1636,  1645,
    1648,  1653,  1661,  1664,  1667,  1672,  1675,  1678,  1681,  1684,
    1687,  1690,  1693,  1696,  1699,  1702,  1705,  1709
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
      -1,     2,   172,   173,   174,    91,    92,    93,    94,    95,
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
#line 116 "src/parser.y"
                      {
    printf("Parsing was successful !\n");
    (yyval.exp) = (yyvsp[0].exp);
    root = (yyval.exp);
}
#line 2109 "bin/parser.tab.c"
    break;

  case 3:
#line 124 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2117 "bin/parser.tab.c"
    break;

  case 4:
#line 127 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2125 "bin/parser.tab.c"
    break;

  case 5:
#line 130 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2133 "bin/parser.tab.c"
    break;

  case 6:
#line 133 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2141 "bin/parser.tab.c"
    break;

  case 7:
#line 136 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2149 "bin/parser.tab.c"
    break;

  case 8:
#line 139 "src/parser.y"
                 {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2157 "bin/parser.tab.c"
    break;

  case 9:
#line 144 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2165 "bin/parser.tab.c"
    break;

  case 10:
#line 147 "src/parser.y"
                        {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2173 "bin/parser.tab.c"
    break;

  case 11:
#line 150 "src/parser.y"
                          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2181 "bin/parser.tab.c"
    break;

  case 12:
#line 155 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2189 "bin/parser.tab.c"
    break;

  case 13:
#line 158 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2197 "bin/parser.tab.c"
    break;

  case 14:
#line 163 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2205 "bin/parser.tab.c"
    break;

  case 15:
#line 166 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2213 "bin/parser.tab.c"
    break;

  case 16:
#line 171 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2221 "bin/parser.tab.c"
    break;

  case 17:
#line 174 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2229 "bin/parser.tab.c"
    break;

  case 18:
#line 179 "src/parser.y"
         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2237 "bin/parser.tab.c"
    break;

  case 19:
#line 182 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2245 "bin/parser.tab.c"
    break;

  case 20:
#line 185 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2253 "bin/parser.tab.c"
    break;

  case 21:
#line 188 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2261 "bin/parser.tab.c"
    break;

  case 22:
#line 191 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2269 "bin/parser.tab.c"
    break;

  case 23:
#line 196 "src/parser.y"
          {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2277 "bin/parser.tab.c"
    break;

  case 24:
#line 199 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2285 "bin/parser.tab.c"
    break;

  case 25:
#line 204 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2293 "bin/parser.tab.c"
    break;

  case 26:
#line 207 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2301 "bin/parser.tab.c"
    break;

  case 27:
#line 212 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2309 "bin/parser.tab.c"
    break;

  case 28:
#line 217 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2317 "bin/parser.tab.c"
    break;

  case 29:
#line 222 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2325 "bin/parser.tab.c"
    break;

  case 30:
#line 227 "src/parser.y"
                                                       {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
    }
#line 2333 "bin/parser.tab.c"
    break;

  case 31:
#line 230 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));

    }
#line 2342 "bin/parser.tab.c"
    break;

  case 32:
#line 234 "src/parser.y"
                                                     {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));

    }
#line 2351 "bin/parser.tab.c"
    break;

  case 33:
#line 240 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2359 "bin/parser.tab.c"
    break;

  case 34:
#line 243 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2367 "bin/parser.tab.c"
    break;

  case 35:
#line 248 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2375 "bin/parser.tab.c"
    break;

  case 36:
#line 253 "src/parser.y"
                        {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,concatenate_string((yyvsp[-1].data),(yyvsp[0].data))));
    }
#line 2383 "bin/parser.tab.c"
    break;

  case 37:
#line 258 "src/parser.y"
                                                                       {

        struct node * memArr[3];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CompilationUnit", memArr, 3, 1);
    }
#line 2396 "bin/parser.tab.c"
    break;

  case 38:
#line 268 "src/parser.y"
    { 
        (yyval.exp) = NULL; 
    }
#line 2404 "bin/parser.tab.c"
    break;

  case 39:
#line 271 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Imports", memArr, 1, 1);
    }
#line 2414 "bin/parser.tab.c"
    break;

  case 40:
#line 278 "src/parser.y"
                      {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2424 "bin/parser.tab.c"
    break;

  case 41:
#line 283 "src/parser.y"
                                           {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateImports", memArr, 2, 0);
    }
#line 2435 "bin/parser.tab.c"
    break;

  case 42:
#line 291 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2443 "bin/parser.tab.c"
    break;

  case 43:
#line 294 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Declarations", memArr, 1, 1);
    }
#line 2453 "bin/parser.tab.c"
    break;

  case 44:
#line 301 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2463 "bin/parser.tab.c"
    break;

  case 45:
#line 306 "src/parser.y"
                                       {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
    }
#line 2474 "bin/parser.tab.c"
    break;

  case 46:
#line 314 "src/parser.y"
    { 
        (yyval.exp) = NULL;
     }
#line 2482 "bin/parser.tab.c"
    break;

  case 47:
#line 317 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2490 "bin/parser.tab.c"
    break;

  case 48:
#line 322 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),concatenate_string("_",(yyvsp[-1].exp)->data)));
    }
#line 2498 "bin/parser.tab.c"
    break;

  case 49:
#line 327 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2506 "bin/parser.tab.c"
    break;

  case 50:
#line 330 "src/parser.y"
                                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2514 "bin/parser.tab.c"
    break;

  case 51:
#line 335 "src/parser.y"
                          {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data), concatenate_string("_",(yyvsp[-1].exp)->data)));
    }
#line 2522 "bin/parser.tab.c"
    break;

  case 52:
#line 340 "src/parser.y"
                                      {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-4].data), concatenate_string("_",concatenate_string((yyvsp[-3].exp)->data,".*"))));
    }
#line 2530 "bin/parser.tab.c"
    break;

  case 53:
#line 345 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2538 "bin/parser.tab.c"
    break;

  case 54:
#line 348 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2546 "bin/parser.tab.c"
    break;

  case 55:
#line 351 "src/parser.y"
                {
        (yyval.exp) = NULL;
    }
#line 2554 "bin/parser.tab.c"
    break;

  case 56:
#line 356 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2564 "bin/parser.tab.c"
    break;

  case 57:
#line 361 "src/parser.y"
                         {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifier", memArr, 2, 0);
    }
#line 2575 "bin/parser.tab.c"
    break;

  case 58:
#line 369 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2583 "bin/parser.tab.c"
    break;

  case 59:
#line 372 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2591 "bin/parser.tab.c"
    break;

  case 60:
#line 375 "src/parser.y"
              {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2599 "bin/parser.tab.c"
    break;

  case 61:
#line 378 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2607 "bin/parser.tab.c"
    break;

  case 62:
#line 381 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2615 "bin/parser.tab.c"
    break;

  case 63:
#line 384 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2623 "bin/parser.tab.c"
    break;

  case 64:
#line 387 "src/parser.y"
             {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2631 "bin/parser.tab.c"
    break;

  case 65:
#line 390 "src/parser.y"
                   {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2639 "bin/parser.tab.c"
    break;

  case 66:
#line 393 "src/parser.y"
                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2647 "bin/parser.tab.c"
    break;

  case 67:
#line 396 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2655 "bin/parser.tab.c"
    break;

  case 68:
#line 401 "src/parser.y"
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
#line 2670 "bin/parser.tab.c"
    break;

  case 69:
#line 412 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 2678 "bin/parser.tab.c"
    break;

  case 70:
#line 415 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Modifiers", memArr, 1, 1);
    }
#line 2688 "bin/parser.tab.c"
    break;

  case 71:
#line 421 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2696 "bin/parser.tab.c"
    break;

  case 72:
#line 424 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2704 "bin/parser.tab.c"
    break;

  case 73:
#line 428 "src/parser.y"
                 { 
    (yyval.exp) = NULL; 
    }
#line 2712 "bin/parser.tab.c"
    break;

  case 74:
#line 431 "src/parser.y"
                 {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2720 "bin/parser.tab.c"
    break;

  case 75:
#line 436 "src/parser.y"
                      {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-1].data), concatenate_string("_",(yyvsp[0].exp)->data)));
    }
#line 2728 "bin/parser.tab.c"
    break;

  case 76:
#line 441 "src/parser.y"
                                 {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 1);

    }
#line 2740 "bin/parser.tab.c"
    break;

  case 77:
#line 450 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 2750 "bin/parser.tab.c"
    break;

  case 78:
#line 455 "src/parser.y"
                                            {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("InterfaceList", memArr, 2, 0);
    }
#line 2761 "bin/parser.tab.c"
    break;

  case 79:
#line 463 "src/parser.y"
                                                             {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 2769 "bin/parser.tab.c"
    break;

  case 80:
#line 467 "src/parser.y"
                            { 
        (yyval.exp) = NULL ;
    }
#line 2777 "bin/parser.tab.c"
    break;

  case 81:
#line 470 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ClassBody", memArr, 1, 1);
    }
#line 2787 "bin/parser.tab.c"
    break;

  case 82:
#line 477 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ClassBody", memArr, 1, 0);
    }
#line 2797 "bin/parser.tab.c"
    break;

  case 83:
#line 482 "src/parser.y"
                                                 {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IntermediateDeclaration", memArr, 2, 0);
    }
#line 2808 "bin/parser.tab.c"
    break;

  case 84:
#line 490 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2816 "bin/parser.tab.c"
    break;

  case 85:
#line 493 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2824 "bin/parser.tab.c"
    break;

  case 86:
#line 496 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2832 "bin/parser.tab.c"
    break;

  case 87:
#line 501 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2840 "bin/parser.tab.c"
    break;

  case 88:
#line 504 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2848 "bin/parser.tab.c"
    break;

  case 89:
#line 509 "src/parser.y"
                                                     {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("FieldDeclaration", memArr, 3, 0);
    }
#line 2860 "bin/parser.tab.c"
    break;

  case 90:
#line 518 "src/parser.y"
                       {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("VariableDeclaration", memArr, 1, 0);
    }
#line 2870 "bin/parser.tab.c"
    break;

  case 91:
#line 523 "src/parser.y"
                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("VariableDeclarator", memArr, 2, 0);
    }
#line 2881 "bin/parser.tab.c"
    break;

  case 92:
#line 531 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2889 "bin/parser.tab.c"
    break;

  case 93:
#line 534 "src/parser.y"
                                                       {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Initilization", memArr, 2, 0);
    }
#line 2900 "bin/parser.tab.c"
    break;

  case 94:
#line 542 "src/parser.y"
               {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 2908 "bin/parser.tab.c"
    break;

  case 95:
#line 545 "src/parser.y"
                                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
    }
#line 2916 "bin/parser.tab.c"
    break;

  case 96:
#line 550 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2924 "bin/parser.tab.c"
    break;

  case 97:
#line 553 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 2932 "bin/parser.tab.c"
    break;

  case 98:
#line 558 "src/parser.y"
                            {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr,2, 1);
    }
#line 2943 "bin/parser.tab.c"
    break;

  case 99:
#line 566 "src/parser.y"
                                                   {
        struct node * memArr[4];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 4, 0);
    }
#line 2956 "bin/parser.tab.c"
    break;

  case 100:
#line 574 "src/parser.y"
                                                     {
        struct node * memArr[4];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = makeleaf((yyvsp[-2].data));
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-1].exp)->data, memArr, 4, 0);
    }
#line 2969 "bin/parser.tab.c"
    break;

  case 101:
#line 584 "src/parser.y"
    { 
        (yyval.exp) = NULL;
    }
#line 2977 "bin/parser.tab.c"
    break;

  case 102:
#line 587 "src/parser.y"
             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Throws", memArr, 1, 1);
    }
#line 2987 "bin/parser.tab.c"
    break;

  case 103:
#line 594 "src/parser.y"
                                                                        {
        struct node * memArr[1];
        memArr[0]  = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].data), memArr,1, 0);
    }
#line 2997 "bin/parser.tab.c"
    break;

  case 104:
#line 599 "src/parser.y"
                                                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-2].exp)->data,"[]"), memArr, 1, 0);
    }
#line 3007 "bin/parser.tab.c"
    break;

  case 105:
#line 605 "src/parser.y"
                          {
        (yyval.exp) = NULL;
    }
#line 3015 "bin/parser.tab.c"
    break;

  case 106:
#line 608 "src/parser.y"
                          {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameters", memArr, 1, 1);
    }
#line 3025 "bin/parser.tab.c"
    break;

  case 107:
#line 615 "src/parser.y"
                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameter", memArr, 1, 0);
    }
#line 3035 "bin/parser.tab.c"
    break;

  case 108:
#line 620 "src/parser.y"
                                               {
         struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Parameter", memArr, 1, 0);
    }
#line 3046 "bin/parser.tab.c"
    break;

  case 109:
#line 628 "src/parser.y"
                              {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-1].exp)->data, concatenate_string("_", (yyvsp[0].exp)->data)));
    }
#line 3054 "bin/parser.tab.c"
    break;

  case 110:
#line 633 "src/parser.y"
                         {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("throws", memArr, 1, 1);
    }
#line 3064 "bin/parser.tab.c"
    break;

  case 111:
#line 640 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 1, 0);
    }
#line 3074 "bin/parser.tab.c"
    break;

  case 112:
#line 645 "src/parser.y"
                                    {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp); 
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("class", memArr, 2, 0);
    }
#line 3085 "bin/parser.tab.c"
    break;

  case 113:
#line 653 "src/parser.y"
          {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("MethodBody", memArr, 1, 1);
    }
#line 3095 "bin/parser.tab.c"
    break;

  case 114:
#line 658 "src/parser.y"
                {
        (yyval.exp) = NULL;
    }
#line 3103 "bin/parser.tab.c"
    break;

  case 115:
#line 663 "src/parser.y"
                 {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("static", memArr, 1, 1);
    }
#line 3113 "bin/parser.tab.c"
    break;

  case 116:
#line 670 "src/parser.y"
                                                                   {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-2].exp)->data, memArr, 4, 1);
    }
#line 3126 "bin/parser.tab.c"
    break;

  case 117:
#line 680 "src/parser.y"
                                                                        {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 1, 0);
    }
#line 3136 "bin/parser.tab.c"
    break;

  case 118:
#line 687 "src/parser.y"
                                                                                         {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ConstructorInvocation", memArr, 2, 1);
    }
#line 3147 "bin/parser.tab.c"
    break;

  case 119:
#line 694 "src/parser.y"
                                    { 
    (yyval.exp) = NULL; 
    }
#line 3155 "bin/parser.tab.c"
    break;

  case 120:
#line 697 "src/parser.y"
                                    {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ExplicitConstructorInvocation", memArr, 1, 1);
    }
#line 3165 "bin/parser.tab.c"
    break;

  case 121:
#line 704 "src/parser.y"
                                                                     {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode("this", memArr, 1, 0);
    }
#line 3175 "bin/parser.tab.c"
    break;

  case 122:
#line 709 "src/parser.y"
                                                                        {
        struct node* memArr[1];
        memArr[0] = (yyvsp[-2].exp);
        (yyval.exp) = makeInternalNode("super", memArr, 1, 0);
    }
#line 3185 "bin/parser.tab.c"
    break;

  case 123:
#line 715 "src/parser.y"
                  {
    (yyval.exp) = NULL; 
    }
#line 3193 "bin/parser.tab.c"
    break;

  case 124:
#line 718 "src/parser.y"
                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Arguments", memArr, 1, 1);
    }
#line 3203 "bin/parser.tab.c"
    break;

  case 125:
#line 725 "src/parser.y"
                                                                           {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = makeleaf((yyvsp[-3].data));
        memArr[2] = (yyvsp[-1].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-2].data), memArr, 4, 1);
    }
#line 3216 "bin/parser.tab.c"
    break;

  case 126:
#line 734 "src/parser.y"
                        {
    (yyval.exp) = NULL;
    }
#line 3224 "bin/parser.tab.c"
    break;

  case 127:
#line 737 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 1);
    }
#line 3234 "bin/parser.tab.c"
    break;

  case 128:
#line 744 "src/parser.y"
                          {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 1, 0);
    }
#line 3244 "bin/parser.tab.c"
    break;

  case 129:
#line 749 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("extends", memArr, 2, 0);
    }
#line 3255 "bin/parser.tab.c"
    break;

  case 130:
#line 757 "src/parser.y"
                                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3263 "bin/parser.tab.c"
    break;

  case 131:
#line 761 "src/parser.y"
                                 {
        (yyval.exp) = NULL;
    }
#line 3271 "bin/parser.tab.c"
    break;

  case 132:
#line 764 "src/parser.y"
                                  {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interfaces", memArr, 1, 1);
    }
#line 3281 "bin/parser.tab.c"
    break;

  case 133:
#line 771 "src/parser.y"
                               {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 1, 0);
    }
#line 3291 "bin/parser.tab.c"
    break;

  case 134:
#line 776 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Interface", memArr, 2, 0);
    }
#line 3302 "bin/parser.tab.c"
    break;

  case 135:
#line 784 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3310 "bin/parser.tab.c"
    break;

  case 136:
#line 787 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3318 "bin/parser.tab.c"
    break;

  case 137:
#line 792 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3326 "bin/parser.tab.c"
    break;

  case 138:
#line 797 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3334 "bin/parser.tab.c"
    break;

  case 139:
#line 802 "src/parser.y"
                                                                      {
        (yyval.exp) = (yyvsp[-2].exp);
    }
#line 3342 "bin/parser.tab.c"
    break;

  case 140:
#line 806 "src/parser.y"
                          {
        (yyval.exp) = NULL; 
    }
#line 3350 "bin/parser.tab.c"
    break;

  case 141:
#line 809 "src/parser.y"
                           {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("VariableInitializers", memArr, 1, 1);
    }
#line 3360 "bin/parser.tab.c"
    break;

  case 142:
#line 815 "src/parser.y"
            {
        (yyval.exp) = NULL; 
    }
#line 3368 "bin/parser.tab.c"
    break;

  case 143:
#line 818 "src/parser.y"
            {
        (yyval.exp) = NULL;
    }
#line 3376 "bin/parser.tab.c"
    break;

  case 144:
#line 823 "src/parser.y"
                        {
       struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode((yyvsp[0].exp)->data, memArr, 1, 0);
    }
#line 3386 "bin/parser.tab.c"
    break;

  case 145:
#line 828 "src/parser.y"
                                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Initializer", memArr, 2, 0);
    }
#line 3397 "bin/parser.tab.c"
    break;

  case 146:
#line 836 "src/parser.y"
                                                       {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3405 "bin/parser.tab.c"
    break;

  case 147:
#line 840 "src/parser.y"
                      {
     (yyval.exp) = NULL; 
     }
#line 3413 "bin/parser.tab.c"
    break;

  case 148:
#line 843 "src/parser.y"
                      {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("statements", memArr, 1, 1);
    }
#line 3423 "bin/parser.tab.c"
    break;

  case 149:
#line 850 "src/parser.y"
                   {
        struct node* memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Blocks", memArr, 1, 0);
    }
#line 3433 "bin/parser.tab.c"
    break;

  case 150:
#line 855 "src/parser.y"
                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Block", memArr, 2, 0);
    }
#line 3444 "bin/parser.tab.c"
    break;

  case 151:
#line 863 "src/parser.y"
                                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3452 "bin/parser.tab.c"
    break;

  case 152:
#line 866 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3460 "bin/parser.tab.c"
    break;

  case 153:
#line 871 "src/parser.y"
                                       {
        (yyval.exp) =(yyvsp[-1].exp);
    }
#line 3468 "bin/parser.tab.c"
    break;

  case 154:
#line 876 "src/parser.y"
                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Declaration", memArr, 2, 0);
    }
#line 3479 "bin/parser.tab.c"
    break;

  case 155:
#line 884 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3487 "bin/parser.tab.c"
    break;

  case 156:
#line 887 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3495 "bin/parser.tab.c"
    break;

  case 157:
#line 890 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3503 "bin/parser.tab.c"
    break;

  case 158:
#line 893 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3511 "bin/parser.tab.c"
    break;

  case 159:
#line 896 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3519 "bin/parser.tab.c"
    break;

  case 160:
#line 899 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3527 "bin/parser.tab.c"
    break;

  case 161:
#line 904 "src/parser.y"
                                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3535 "bin/parser.tab.c"
    break;

  case 162:
#line 907 "src/parser.y"
                                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3543 "bin/parser.tab.c"
    break;

  case 163:
#line 910 "src/parser.y"
                                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3551 "bin/parser.tab.c"
    break;

  case 164:
#line 913 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3559 "bin/parser.tab.c"
    break;

  case 165:
#line 916 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3567 "bin/parser.tab.c"
    break;

  case 166:
#line 921 "src/parser.y"
          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3575 "bin/parser.tab.c"
    break;

  case 167:
#line 924 "src/parser.y"
                     {
        (yyval.exp) = NULL;
    }
#line 3583 "bin/parser.tab.c"
    break;

  case 168:
#line 927 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3591 "bin/parser.tab.c"
    break;

  case 169:
#line 930 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3599 "bin/parser.tab.c"
    break;

  case 170:
#line 933 "src/parser.y"
                        {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3607 "bin/parser.tab.c"
    break;

  case 171:
#line 936 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3615 "bin/parser.tab.c"
    break;

  case 172:
#line 939 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3623 "bin/parser.tab.c"
    break;

  case 173:
#line 942 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3631 "bin/parser.tab.c"
    break;

  case 174:
#line 945 "src/parser.y"
                   {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3639 "bin/parser.tab.c"
    break;

  case 175:
#line 950 "src/parser.y"
              {
        (yyval.exp) = NULL;
    }
#line 3647 "bin/parser.tab.c"
    break;

  case 176:
#line 955 "src/parser.y"
                                   {
        struct node* memArr[2];
        memArr[0] = makeleaf((yyvsp[-2].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("LabeledStatements", memArr, 2, 0);
    }
#line 3658 "bin/parser.tab.c"
    break;

  case 177:
#line 963 "src/parser.y"
                                            {
        struct node* memArr[2];
        memArr[0] = makeleaf((yyvsp[-2].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfThen", memArr, 2, 0);
    }
#line 3669 "bin/parser.tab.c"
    break;

  case 178:
#line 971 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 3677 "bin/parser.tab.c"
    break;

  case 179:
#line 976 "src/parser.y"
               {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3685 "bin/parser.tab.c"
    break;

  case 180:
#line 979 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3693 "bin/parser.tab.c"
    break;

  case 181:
#line 982 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3701 "bin/parser.tab.c"
    break;

  case 182:
#line 985 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3709 "bin/parser.tab.c"
    break;

  case 183:
#line 988 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3717 "bin/parser.tab.c"
    break;

  case 184:
#line 991 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3725 "bin/parser.tab.c"
    break;

  case 185:
#line 994 "src/parser.y"
                                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 3733 "bin/parser.tab.c"
    break;

  case 186:
#line 999 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfThen", memArr, 2, 1);
    }
#line 3744 "bin/parser.tab.c"
    break;

  case 187:
#line 1007 "src/parser.y"
                                                                                     {
        struct node* memArr[3];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfElse", memArr, 3, 1);
    }
#line 3756 "bin/parser.tab.c"
    break;

  case 188:
#line 1016 "src/parser.y"
                                                                                              {
        struct node* memArr[3];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("IfElse_If", memArr, 3, 1);
    }
#line 3768 "bin/parser.tab.c"
    break;

  case 189:
#line 1025 "src/parser.y"
                                                                {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("While", memArr, 2, 1);
    }
#line 3779 "bin/parser.tab.c"
    break;

  case 190:
#line 1033 "src/parser.y"
                                                                         {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("While", memArr, 2, 1);
    }
#line 3790 "bin/parser.tab.c"
    break;

  case 191:
#line 1041 "src/parser.y"
                                                                                                                {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-6].exp);
        memArr[1] = (yyvsp[-4].exp);
        memArr[2] = (yyvsp[-2].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("For", memArr, 4, 1);
    }
#line 3803 "bin/parser.tab.c"
    break;

  case 192:
#line 1051 "src/parser.y"
                                                                                                                         {
        struct node* memArr[4];
        memArr[0] = (yyvsp[-6].exp);
        memArr[1] = (yyvsp[-4].exp);
        memArr[2] = (yyvsp[-2].exp);
        memArr[3] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("For", memArr, 4, 1);
    }
#line 3816 "bin/parser.tab.c"
    break;

  case 193:
#line 1060 "src/parser.y"
             { 
    (yyval.exp) = NULL; 
    }
#line 3824 "bin/parser.tab.c"
    break;

  case 194:
#line 1063 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
    }
#line 3834 "bin/parser.tab.c"
    break;

  case 195:
#line 1069 "src/parser.y"
                { 
    (yyval.exp) = NULL; 
    }
#line 3842 "bin/parser.tab.c"
    break;

  case 196:
#line 1072 "src/parser.y"
                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Expression", memArr, 1, 1);
    }
#line 3852 "bin/parser.tab.c"
    break;

  case 197:
#line 1078 "src/parser.y"
               { 
    (yyval.exp) = NULL ;
    }
#line 3860 "bin/parser.tab.c"
    break;

  case 198:
#line 1081 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
    }
#line 3870 "bin/parser.tab.c"
    break;

  case 199:
#line 1088 "src/parser.y"
                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
    }
#line 3880 "bin/parser.tab.c"
    break;

  case 200:
#line 1093 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForInit", memArr, 1, 1);
    }
#line 3890 "bin/parser.tab.c"
    break;

  case 201:
#line 1100 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ForUpdate", memArr, 1, 1);
    }
#line 3900 "bin/parser.tab.c"
    break;

  case 202:
#line 1107 "src/parser.y"
                        {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("StatementExpression", memArr, 1, 0);
    }
#line 3910 "bin/parser.tab.c"
    break;

  case 203:
#line 1112 "src/parser.y"
                                                        {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-2].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("StatementExpression", memArr, 2, 0);
    }
#line 3921 "bin/parser.tab.c"
    break;

  case 204:
#line 1120 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("break", memArr, 1, 1);
    }
#line 3931 "bin/parser.tab.c"
    break;

  case 205:
#line 1127 "src/parser.y"
    {
        (yyval.exp) = NULL;
    }
#line 3939 "bin/parser.tab.c"
    break;

  case 206:
#line 1129 "src/parser.y"
                  {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 3947 "bin/parser.tab.c"
    break;

  case 207:
#line 1134 "src/parser.y"
                                      {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("continue", memArr, 1, 1);
    }
#line 3957 "bin/parser.tab.c"
    break;

  case 208:
#line 1141 "src/parser.y"
                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("return", memArr, 1, 1);
    }
#line 3967 "bin/parser.tab.c"
    break;

  case 209:
#line 1148 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("throw", memArr, 1, 1);
    }
#line 3977 "bin/parser.tab.c"
    break;

  case 210:
#line 1155 "src/parser.y"
                                                                   {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("synchronized", memArr, 2, 1);
    }
#line 3988 "bin/parser.tab.c"
    break;

  case 211:
#line 1163 "src/parser.y"
                      {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-1].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCatches", memArr, 2, 1);
    }
#line 3999 "bin/parser.tab.c"
    break;

  case 212:
#line 1169 "src/parser.y"
                                    {
        struct node * memArr[3];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[-1].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("tryCtachesFinally", memArr, 3, 1);
    }
#line 4011 "bin/parser.tab.c"
    break;

  case 213:
#line 1177 "src/parser.y"
             {
        (yyval.exp) = NULL; 
    }
#line 4019 "bin/parser.tab.c"
    break;

  case 214:
#line 1180 "src/parser.y"
              {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catches", memArr, 1, 1);
    }
#line 4029 "bin/parser.tab.c"
    break;

  case 215:
#line 1187 "src/parser.y"
                {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("catch", memArr, 1, 0);
    }
#line 4039 "bin/parser.tab.c"
    break;

  case 216:
#line 1192 "src/parser.y"
                          {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Catch", memArr, 2, 0);
    }
#line 4050 "bin/parser.tab.c"
    break;

  case 217:
#line 1200 "src/parser.y"
                                                                 {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CatchClause", memArr, 2, 0);
    }
#line 4061 "bin/parser.tab.c"
    break;

  case 218:
#line 1208 "src/parser.y"
                  {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("finally", memArr, 1, 1);
    }
#line 4071 "bin/parser.tab.c"
    break;

  case 219:
#line 1215 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4079 "bin/parser.tab.c"
    break;

  case 220:
#line 1218 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4087 "bin/parser.tab.c"
    break;

  case 221:
#line 1223 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4095 "bin/parser.tab.c"
    break;

  case 222:
#line 1226 "src/parser.y"
           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4103 "bin/parser.tab.c"
    break;

  case 223:
#line 1229 "src/parser.y"
                                                   {
        (yyval.exp) = (yyvsp[-1].exp);
    }
#line 4111 "bin/parser.tab.c"
    break;

  case 224:
#line 1232 "src/parser.y"
                                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4119 "bin/parser.tab.c"
    break;

  case 225:
#line 1235 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4127 "bin/parser.tab.c"
    break;

  case 226:
#line 1238 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4135 "bin/parser.tab.c"
    break;

  case 227:
#line 1241 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4143 "bin/parser.tab.c"
    break;

  case 228:
#line 1246 "src/parser.y"
                                                                    {
        struct node * memArr[3];
        memArr[0] = makeleaf((yyvsp[-4].data));
        memArr[1] =(yyvsp[-3].exp);
        memArr[2] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ClassInstance", memArr, 3, 1);
    }
#line 4155 "bin/parser.tab.c"
    break;

  case 229:
#line 1255 "src/parser.y"
               {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArgumentList", memArr, 1, 0);
    }
#line 4165 "bin/parser.tab.c"
    break;

  case 230:
#line 1260 "src/parser.y"
                                    {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-2].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArgumentList", memArr, 2, 0);
    }
#line 4176 "bin/parser.tab.c"
    break;

  case 231:
#line 1268 "src/parser.y"
                                        {
        struct node * memArr[4];
        memArr[0] = makeleaf((yyvsp[-3].data));
        memArr[1] =(yyvsp[-2].exp);
        memArr[2] =(yyvsp[-1].exp);
        memArr[3] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArrayCreation", memArr, 4, 0);
    }
#line 4189 "bin/parser.tab.c"
    break;

  case 232:
#line 1276 "src/parser.y"
                                                 {
        struct node * memArr[4];
        memArr[0] = makeleaf((yyvsp[-3].data));
        memArr[1] =(yyvsp[-2].exp);
        memArr[2] =(yyvsp[-1].exp);
        memArr[3] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("ArrayCreation", memArr, 4, 0);
    }
#line 4202 "bin/parser.tab.c"
    break;

  case 233:
#line 1285 "src/parser.y"
          { 
    (yyval.exp) = NULL; 
    }
#line 4210 "bin/parser.tab.c"
    break;

  case 234:
#line 1288 "src/parser.y"
          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4218 "bin/parser.tab.c"
    break;

  case 235:
#line 1293 "src/parser.y"
            {
        struct node * memArr[1];
        memArr[0] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 4228 "bin/parser.tab.c"
    break;

  case 236:
#line 1298 "src/parser.y"
                       {
        struct node * memArr[2];
        memArr[0] =(yyvsp[-1].exp);
        memArr[1] =(yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("[]",memArr,2, 0);
    }
#line 4239 "bin/parser.tab.c"
    break;

  case 237:
#line 1306 "src/parser.y"
                                                    {
        struct node * memArr[1];
        memArr[0] =(yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("[]", memArr, 1, 0);
    }
#line 4249 "bin/parser.tab.c"
    break;

  case 238:
#line 1313 "src/parser.y"
                                         {
        (yyval.exp) = makeleaf("[]");
    }
#line 4257 "bin/parser.tab.c"
    break;

  case 239:
#line 1316 "src/parser.y"
                                                {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,"[]"));
    }
#line 4265 "bin/parser.tab.c"
    break;

  case 240:
#line 1321 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].exp)->data,(yyvsp[0].data)));
    }
#line 4273 "bin/parser.tab.c"
    break;

  case 241:
#line 1324 "src/parser.y"
                           {
        (yyval.exp) = makeleaf(concatenate_string((yyvsp[-2].data),(yyvsp[0].data)));
    }
#line 4281 "bin/parser.tab.c"
    break;

  case 242:
#line 1329 "src/parser.y"
                                                           {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode((yyvsp[-3].exp)->data, memArr, 1, 1);
    }
#line 4291 "bin/parser.tab.c"
    break;

  case 243:
#line 1334 "src/parser.y"
                                                                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].exp)->data,concatenate_string("_",(yyvsp[-3].data))), memArr, 1, 1);
    }
#line 4301 "bin/parser.tab.c"
    break;

  case 244:
#line 1339 "src/parser.y"
                                                                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode(concatenate_string((yyvsp[-5].data),concatenate_string("_",(yyvsp[-3].data))), memArr, 1, 1);
    }
#line 4311 "bin/parser.tab.c"
    break;

  case 245:
#line 1346 "src/parser.y"
                                                        {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ArrayAccess", memArr, 2, 0);
    }
#line 4322 "bin/parser.tab.c"
    break;

  case 246:
#line 1352 "src/parser.y"
                                                                        {
        struct node * memArr[2];
        memArr[0] = (yyvsp[-3].exp);
        memArr[1] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("ArrayAccess", memArr, 2, 0);
    }
#line 4333 "bin/parser.tab.c"
    break;

  case 247:
#line 1360 "src/parser.y"
            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4341 "bin/parser.tab.c"
    break;

  case 248:
#line 1363 "src/parser.y"
           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4349 "bin/parser.tab.c"
    break;

  case 249:
#line 1366 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4357 "bin/parser.tab.c"
    break;

  case 250:
#line 1369 "src/parser.y"
                              {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4365 "bin/parser.tab.c"
    break;

  case 251:
#line 1374 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("PostIncrement", memArr, 1, 1);
    }
#line 4375 "bin/parser.tab.c"
    break;

  case 252:
#line 1381 "src/parser.y"
                                 {
        struct node * memArr[1];
        memArr[0] = (yyvsp[-1].exp);
        (yyval.exp) = makeInternalNode("PostIncrement", memArr, 1, 1);
    }
#line 4385 "bin/parser.tab.c"
    break;

  case 253:
#line 1388 "src/parser.y"
                           {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4393 "bin/parser.tab.c"
    break;

  case 254:
#line 1391 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4401 "bin/parser.tab.c"
    break;

  case 255:
#line 1394 "src/parser.y"
                               {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("UnaryAddition", memArr, 1, 1);
    }
#line 4411 "bin/parser.tab.c"
    break;

  case 256:
#line 1399 "src/parser.y"
                                   {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("UnarySubstraction", memArr, 1, 1);
    }
#line 4421 "bin/parser.tab.c"
    break;

  case 257:
#line 1404 "src/parser.y"
                                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4429 "bin/parser.tab.c"
    break;

  case 258:
#line 1409 "src/parser.y"
                             {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("PreIncrement", memArr, 2, 1);
    }
#line 4440 "bin/parser.tab.c"
    break;

  case 259:
#line 1417 "src/parser.y"
                               {
        struct node * memArr[2];
        memArr[0] = makeleaf((yyvsp[-1].data));
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("PreDecrement", memArr, 2, 1);
    }
#line 4451 "bin/parser.tab.c"
    break;

  case 260:
#line 1425 "src/parser.y"
                      {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4459 "bin/parser.tab.c"
    break;

  case 261:
#line 1428 "src/parser.y"
                            {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Tilde", memArr, 1, 1);
    }
#line 4469 "bin/parser.tab.c"
    break;

  case 262:
#line 1433 "src/parser.y"
                                  {
         struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("Not", memArr, 1, 1);
    }
#line 4479 "bin/parser.tab.c"
    break;

  case 263:
#line 1438 "src/parser.y"
                     {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4487 "bin/parser.tab.c"
    break;

  case 264:
#line 1443 "src/parser.y"
                                                                            {
        struct  node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        char * str = concatenate_string((yyvsp[-3].exp)->data, (yyvsp[-2].exp)->data);
        (yyval.exp) = makeInternalNode(str, memArr, 1, 1);
    }
#line 4498 "bin/parser.tab.c"
    break;

  case 265:
#line 1449 "src/parser.y"
                                                                              {
        struct  node * memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp) = makeInternalNode("CastExpression", memArr, 2, 1);
    }
#line 4509 "bin/parser.tab.c"
    break;

  case 266:
#line 1455 "src/parser.y"
                                                                             {
        struct node * memArr[1];
        memArr[0] = (yyvsp[0].exp);
        char * str = concatenate_string((yyvsp[-3].exp)->data, (yyvsp[-2].exp)->data);
        (yyval.exp) = makeInternalNode(str, memArr, 1, 1);
    }
#line 4520 "bin/parser.tab.c"
    break;

  case 267:
#line 1463 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4528 "bin/parser.tab.c"
    break;

  case 268:
#line 1466 "src/parser.y"
                                                       {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Multiply", memArr, 2, 1); 
    }
#line 4539 "bin/parser.tab.c"
    break;

  case 269:
#line 1472 "src/parser.y"
                                                      {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Divide", memArr, 2, 1); 
    }
#line 4550 "bin/parser.tab.c"
    break;

  case 270:
#line 1478 "src/parser.y"
                                                      {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Modulo", memArr, 2, 1); 
    }
#line 4561 "bin/parser.tab.c"
    break;

  case 271:
#line 1486 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4569 "bin/parser.tab.c"
    break;

  case 272:
#line 1489 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Addition", memArr, 2, 1); 
    }
#line 4580 "bin/parser.tab.c"
    break;

  case 273:
#line 1495 "src/parser.y"
                                                               {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Substraction", memArr, 2, 1); 
    }
#line 4591 "bin/parser.tab.c"
    break;

  case 274:
#line 1503 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4599 "bin/parser.tab.c"
    break;

  case 275:
#line 1506 "src/parser.y"
                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("LeftShift", memArr, 2, 1); 
    }
#line 4610 "bin/parser.tab.c"
    break;

  case 276:
#line 1512 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("RightShift", memArr, 2, 1); 
    }
#line 4621 "bin/parser.tab.c"
    break;

  case 277:
#line 1518 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("UnsignedRightShift", memArr, 2, 1); 
    }
#line 4632 "bin/parser.tab.c"
    break;

  case 278:
#line 1526 "src/parser.y"
                    {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4640 "bin/parser.tab.c"
    break;

  case 279:
#line 1529 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("LessThan", memArr, 2, 1); 
    }
#line 4651 "bin/parser.tab.c"
    break;

  case 280:
#line 1535 "src/parser.y"
                                                       {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("GreaterThan", memArr, 2, 1); 
    }
#line 4662 "bin/parser.tab.c"
    break;

  case 281:
#line 1541 "src/parser.y"
                                                           {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("LessThanEqualTo", memArr, 2, 1); 
    }
#line 4673 "bin/parser.tab.c"
    break;

  case 282:
#line 1547 "src/parser.y"
                                                              {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("GreaterThanEqualTo", memArr, 2, 1); 
    }
#line 4684 "bin/parser.tab.c"
    break;

  case 283:
#line 1553 "src/parser.y"
                                                    {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Instanceof", memArr, 2, 1); 
    }
#line 4695 "bin/parser.tab.c"
    break;

  case 284:
#line 1561 "src/parser.y"
                         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4703 "bin/parser.tab.c"
    break;

  case 285:
#line 1564 "src/parser.y"
                                                             {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Equalto_Equalto", memArr, 2, 1); 
    }
#line 4714 "bin/parser.tab.c"
    break;

  case 286:
#line 1570 "src/parser.y"
                                                         {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("Not_Equalto", memArr, 2, 1); 
    }
#line 4725 "bin/parser.tab.c"
    break;

  case 287:
#line 1578 "src/parser.y"
                       {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4733 "bin/parser.tab.c"
    break;

  case 288:
#line 1581 "src/parser.y"
                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("BitwiseAnd", memArr, 2 ,1); 
    }
#line 4744 "bin/parser.tab.c"
    break;

  case 289:
#line 1589 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4752 "bin/parser.tab.c"
    break;

  case 290:
#line 1592 "src/parser.y"
                                                     {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("xor", memArr, 2 ,1); 
    }
#line 4763 "bin/parser.tab.c"
    break;

  case 291:
#line 1600 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4771 "bin/parser.tab.c"
    break;

  case 292:
#line 1603 "src/parser.y"
                                                            {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("BitwiseOR", memArr, 2, 1); 
    }
#line 4782 "bin/parser.tab.c"
    break;

  case 293:
#line 1611 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4790 "bin/parser.tab.c"
    break;

  case 294:
#line 1614 "src/parser.y"
                                                                 {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("BitwiseAND", memArr, 2, 1); 
    }
#line 4801 "bin/parser.tab.c"
    break;

  case 295:
#line 1622 "src/parser.y"
                             {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4809 "bin/parser.tab.c"
    break;

  case 296:
#line 1625 "src/parser.y"
                                                                  {
        struct node* memArr[2];
        memArr[0] = (yyvsp[-2].exp);
        memArr[1] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("OR", memArr, 2, 1); 
    }
#line 4820 "bin/parser.tab.c"
    break;

  case 297:
#line 1633 "src/parser.y"
                            {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4828 "bin/parser.tab.c"
    break;

  case 298:
#line 1636 "src/parser.y"
                                                                                  {
        struct node* memArr[3];
        memArr[0] = (yyvsp[-4].exp);
        memArr[1] = (yyvsp[-2].exp);
        memArr[2] = (yyvsp[0].exp);
        (yyval.exp)  = makeInternalNode("?:TernaryOperator", memArr, 3, 1); 
    }
#line 4840 "bin/parser.tab.c"
    break;

  case 299:
#line 1645 "src/parser.y"
                          {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4848 "bin/parser.tab.c"
    break;

  case 300:
#line 1648 "src/parser.y"
                {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4856 "bin/parser.tab.c"
    break;

  case 301:
#line 1653 "src/parser.y"
                                                         {
    struct node* memArr[2];
    memArr[0] = (yyvsp[-2].exp);
    memArr[1] = (yyvsp[0].exp);
    (yyval.exp) = makeInternalNode("assignment", memArr, 2, 1);
}
#line 4867 "bin/parser.tab.c"
    break;

  case 302:
#line 1661 "src/parser.y"
         {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4875 "bin/parser.tab.c"
    break;

  case 303:
#line 1664 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4883 "bin/parser.tab.c"
    break;

  case 304:
#line 1667 "src/parser.y"
                  {
        (yyval.exp) = (yyvsp[0].exp);
    }
#line 4891 "bin/parser.tab.c"
    break;

  case 305:
#line 1672 "src/parser.y"
            {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4899 "bin/parser.tab.c"
    break;

  case 306:
#line 1675 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4907 "bin/parser.tab.c"
    break;

  case 307:
#line 1678 "src/parser.y"
                    {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4915 "bin/parser.tab.c"
    break;

  case 308:
#line 1681 "src/parser.y"
                     {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4923 "bin/parser.tab.c"
    break;

  case 309:
#line 1684 "src/parser.y"
                      {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4931 "bin/parser.tab.c"
    break;

  case 310:
#line 1687 "src/parser.y"
                           {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4939 "bin/parser.tab.c"
    break;

  case 311:
#line 1690 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4947 "bin/parser.tab.c"
    break;

  case 312:
#line 1693 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4955 "bin/parser.tab.c"
    break;

  case 313:
#line 1696 "src/parser.y"
                                {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4963 "bin/parser.tab.c"
    break;

  case 314:
#line 1699 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4971 "bin/parser.tab.c"
    break;

  case 315:
#line 1702 "src/parser.y"
                         {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4979 "bin/parser.tab.c"
    break;

  case 316:
#line 1705 "src/parser.y"
                       {
        (yyval.exp) = makeleaf((yyvsp[0].data));
    }
#line 4987 "bin/parser.tab.c"
    break;

  case 317:
#line 1709 "src/parser.y"
                                 {
    (yyval.exp) = (yyvsp[0].exp);
}
#line 4995 "bin/parser.tab.c"
    break;


#line 4999 "bin/parser.tab.c"

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
#line 1714 "src/parser.y"



int yyerror(char* s)
{
    printf("Error detected ! %s at line number %lld\n",s,line_number);
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


void ast_print(struct node* root, int d){

    if(root == NULL){
        return;
    }

    printf("%s",root->data);
    printf("\n");
    int i =0;

    
    for(;i<100;i++){
        if(root->arr[i]!= NULL){
            for(int i = 0 ; i<=d+1; i++)
            printf("\t");
            ast_print(root->arr[i],d+1);
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
        {   fprintf(graph,"\ti%s_%d_%d [label= \"%s\"]",root->data, depth, child_num, root->data);
            fprintf(graph, "\ti%s_%d_%d ->{ i%s_%d_0", root->data, depth, child_num, (root->arr[i])->data, depth + 1);
            leaf_flag = 1;
            break;
        }
    }
    if (!leaf_flag)
    {
        fprintf(graph,"\ti%s_%d_%d [label= \"%s\"]",root->data, depth, child_num, root->data);
        fprintf(graph, "\ti%s_%d_%d ->{}\n", root->data, depth, child_num);
        return;
    }

    for (int j = i+1; j < N_NodeChild; j++)
    {
        if (root->arr[j] != NULL)
        {
            fprintf(graph, " ,i%s_%d_%d", (root->arr[j])->data, depth + 1, j);
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

    FILE* graph = fopen(output_file,"w");
    fprintf(graph, "digraph AST{ \n");
    graph_maker(root, graph,0,0);
    fprintf(graph, "} \n");

    fclose(graph);
    fclose(yyin);

    return 0;

}



