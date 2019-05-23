/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 8 "parser.y" /* yacc.c:339  */

// $Id: parser.y,v 1.22 2019-04-23 14:07:52-07 - - $
// Actual parser 

#include <cassert>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "astree.h"
#include "lyutils.h"

#line 79 "yyparse.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yyparse.h".  */
#ifndef YY_YY_YYPARSE_H_INCLUDED
# define YY_YY_YYPARSE_H_INCLUDED
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
    TOK_VOID = 258,
    TOK_INT = 259,
    TOK_STRING = 260,
    TOK_IF = 261,
    TOK_ELSE = 262,
    TOK_WHILE = 263,
    TOK_RETURN = 264,
    TOK_STRUCT = 265,
    TOK_NULLPTR = 266,
    TOK_ARRAY = 267,
    TOK_ARROW = 268,
    TOK_ALLOC = 269,
    TOK_PTR = 270,
    TOK_EQ = 271,
    TOK_NE = 272,
    TOK_LT = 273,
    TOK_LE = 274,
    TOK_GT = 275,
    TOK_GE = 276,
    TOK_NOT = 277,
    TOK_IDENT = 278,
    TOK_INTCON = 279,
    TOK_CHARCON = 280,
    TOK_STRINGCON = 281,
    TOK_ROOT = 282,
    TOK_BLOCK = 283,
    TOK_CALL = 284,
    ROOT = 285,
    NUMBER = 286,
    IDENT = 287,
    TOK_TYPE_ID = 288,
    TOK_FUNCTION = 289,
    TOK_INDEX = 290,
    TOK_PARAM = 291,
    POS = 292,
    NEG = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YYPARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 169 "yyparse.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   734

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    51,     2,     2,
      48,    49,    40,    38,    50,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
       2,    37,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,    42,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    45,     2,     2,     2,     2,
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
      35,    36,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
<<<<<<< HEAD
       0,    56,    56,    59,    60,    61,    62,    63,    64,    67,
      71,    72,    76,    77,    81,    82,    83,    84,    89,    97,
      98,   100,   104,   107,   110,   111,   114,   115,   116,   117,
     118,   119,   122,   133,   138,   143,   144,   148,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   174,   177,
     180,   185,   189,   190,   191,   192,   193,   196,   197,   199,
     202,   203,   204,   205,   206
=======
       0,    55,    55,    58,    59,    60,    61,    62,    63,    66,
      70,    71,    75,    76,    80,    81,    82,    83,    88,    96,
      97,    99,   103,   105,   108,   109,   112,   113,   114,   115,
     116,   117,   120,   131,   136,   141,   142,   146,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   168,   172,   176,   182,   186,   187,
     188,   189,   190,   193,   194,   196,   199,   200,   201,   202
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_VOID", "TOK_INT", "TOK_STRING",
  "TOK_IF", "TOK_ELSE", "TOK_WHILE", "TOK_RETURN", "TOK_STRUCT",
  "TOK_NULLPTR", "TOK_ARRAY", "TOK_ARROW", "TOK_ALLOC", "TOK_PTR",
  "TOK_EQ", "TOK_NE", "TOK_LT", "TOK_LE", "TOK_GT", "TOK_GE", "TOK_NOT",
  "TOK_IDENT", "TOK_INTCON", "TOK_CHARCON", "TOK_STRINGCON", "TOK_ROOT",
  "TOK_BLOCK", "TOK_CALL", "ROOT", "NUMBER", "IDENT", "TOK_TYPE_ID",
  "TOK_FUNCTION", "TOK_INDEX", "TOK_PARAM", "'='", "'+'", "'-'", "'*'",
  "'/'", "'^'", "POS", "NEG", "'}'", "';'", "'{'", "'('", "')'", "','",
  "'%'", "'['", "']'", "$accept", "start", "program", "structdef",
  "typeident", "type", "plaintype", "function", "funcident", "block",
  "optstmt", "statement", "vardecl", "while", "ifelse", "dangling",
  "return", "expr", "allocator", "call", "callexpr", "variable",
  "constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    61,    43,    45,
      42,    47,    94,   292,   293,   125,    59,   123,    40,    41,
      44,    37,    91,    93
};
# endif

#define YYPACT_NINF -139

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-139)))

#define YYTABLE_NINF -53

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -139,    10,    94,  -139,   -24,  -139,  -139,  -139,   -34,   -25,
     418,     8,  -139,    14,    23,    27,  -139,    13,  -139,  -139,
    -139,   418,   418,  -139,   240,   418,  -139,    43,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,   323,  -139,  -139,  -139,
    -139,  -139,  -139,   418,   418,   360,    20,    21,    34,    58,
     246,    -9,    -9,    46,   194,  -139,   397,   -31,    55,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   418,   418,
     418,  -139,   418,   418,   434,   471,  -139,    68,    59,    61,
      62,    66,    63,   240,   418,   418,   144,    38,    51,  -139,
    -139,  -139,   418,    15,  -139,    -4,   619,    -4,    -4,    -4,
      -4,   619,   632,   632,   159,   159,    -4,   619,   282,   240,
     240,    44,    69,  -139,    48,    81,    21,    87,  -139,   619,
     144,   418,   418,   418,  -139,  -139,   508,    68,    91,    72,
    -139,   108,  -139,    76,    77,   418,    78,   104,  -139,  -139,
     619,   669,   682,  -139,   106,    15,   -18,   240,  -139,  -139,
      68,   545,    82,   110,    15,  -139,  -139,  -139,  -139,  -139,
    -139,    86,  -139,   418,   582,  -139
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     1,     0,    14,    15,    16,     0,     0,
       0,     0,    74,     0,     0,     0,    73,    67,    70,    71,
      72,     0,     0,    23,     0,     0,     3,     0,    12,     4,
      27,     5,    26,    28,    29,    30,     0,    53,    54,    56,
      57,     6,     7,     0,     0,     0,     0,     0,     0,     0,
      62,    51,    52,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,    37,    10,     0,     0,
       0,     0,     0,     0,     0,     0,    62,     0,     0,    22,
      24,    55,     0,    19,    69,    49,    50,    47,    48,    45,
      46,    38,    39,    40,    41,    42,    43,    44,     0,     0,
       0,     0,     0,    13,     0,     0,     0,     0,    64,    63,
      62,     0,     0,     0,    65,    61,     0,     0,     0,     0,
      68,    36,    33,     0,     0,     0,     0,     0,    17,    66,
      38,    39,    40,    32,     0,    19,     0,     0,    34,     9,
      10,     0,     0,     0,    19,    20,    18,    35,    11,    58,
      59,     0,    21,     0,     0,    60
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,  -139,   -15,     0,   -46,  -139,  -138,    -8,
    -139,   -19,  -139,  -139,  -139,  -139,  -139,   -10,  -139,  -139,
     -83,  -139,  -139
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    26,   111,    53,    28,    29,   129,    30,
      54,    31,    32,    33,    34,   148,    35,    36,    37,    38,
      87,    39,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    78,    27,   124,    58,    55,    92,   155,    60,    58,
       3,    51,    52,    60,    43,    56,   162,    93,     5,     6,
       7,    41,    42,    44,     5,     6,     7,    13,    23,    24,
      15,    46,    47,    74,    75,    90,    15,   139,    70,    79,
      86,    48,    72,    73,    80,    49,    81,    72,    73,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    50,   107,   108,   118,   127,    57,    77,    82,    88,
     137,     5,     6,     7,   119,   120,    86,   112,    94,   113,
      13,   114,   126,    15,   116,   115,   117,   125,    92,   133,
     131,   132,   134,   128,    -2,     4,   135,     5,     6,     7,
       8,   136,     9,    10,    11,    12,    13,   138,    14,    15,
      86,   140,   141,   142,   145,   147,    16,    17,    18,    19,
      20,   146,   149,   150,   153,   151,   152,   144,   157,   154,
     161,   160,    21,    22,   163,   158,     0,     0,   156,     0,
      23,    24,    25,     0,     0,   128,     0,     0,     0,     0,
     112,    83,     0,   164,   128,    12,     0,    58,    14,     0,
      59,    60,    61,    62,    63,    64,    16,    17,    18,    19,
      20,     0,    58,     0,     0,    59,    60,    61,    62,    63,
      64,   121,   122,   123,    68,    69,    70,     0,     0,     0,
       0,     0,    25,     0,    85,    72,    73,     5,     6,     7,
       8,    70,     9,    10,     0,    12,    13,     0,    14,    15,
      72,    73,     0,     0,     0,     0,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,     0,     0,     0,     0,    89,
      23,    24,    25,     5,     6,     7,     8,     0,     9,    10,
       0,    12,    13,    83,    14,    15,     0,    12,     0,     0,
      14,     0,    16,    17,    18,    19,    20,     0,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,    21,    22,
       0,     0,     0,    84,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,    25,    58,    85,     0,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,    67,    68,    69,    70,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,   130,    58,     0,     0,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,    67,    68,    69,    70,     0,     0,     0,    71,
       0,     0,     0,    58,    72,    73,    59,    60,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,     0,     0,     0,    76,     0,     0,     0,
      58,    72,    73,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,     0,    14,     0,    65,    66,    67,    68,    69,    70,
      16,    17,    18,    19,    20,     0,    91,    58,    72,    73,
      59,    60,    61,    62,    63,    64,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       0,    65,    66,    67,    68,    69,    70,     0,     0,     0,
       0,     0,     0,   109,    58,    72,    73,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,     0,     0,     0,     0,     0,     0,
     110,    58,    72,    73,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,    67,    68,    69,
      70,     0,     0,     0,   143,     0,     0,     0,    58,    72,
      73,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,    67,    68,    69,    70,     0,     0,
       0,     0,     0,     0,   159,    58,    72,    73,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,    67,    68,    69,    70,     0,     0,     0,     0,     0,
       0,   165,    58,    72,    73,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,    58,     0,     0,    59,    60,
      61,    62,    63,    64,     0,     0,    65,    66,    67,    68,
      69,    70,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    68,    69,    70,     0,     0,     0,     0,     0,
       0,     0,    58,    72,    73,   -51,    60,   -51,   -51,   -51,
     -51,     0,     0,     0,     0,    58,     0,     0,   -52,    60,
     -52,   -52,   -52,   -52,     0,     0,     0,     0,     0,   -51,
     -51,   -51,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,   -52,   -52,   -52,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73
};

static const yytype_int16 yycheck[] =
{
      10,    47,     2,    86,    13,    24,    37,   145,    17,    13,
       0,    21,    22,    17,    48,    25,   154,    48,     3,     4,
       5,    45,    46,    48,     3,     4,     5,    12,    46,    47,
      15,    23,    18,    43,    44,    54,    15,   120,    42,     5,
      50,    18,    51,    52,    10,    18,    12,    51,    52,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    48,    72,    73,    83,    50,    23,    47,    10,    23,
     116,     3,     4,     5,    84,    85,    86,    77,    23,    20,
      12,    20,    92,    15,    18,    23,    23,    49,    37,    45,
     109,   110,    23,    93,     0,     1,    48,     3,     4,     5,
       6,    20,     8,     9,    10,    11,    12,    20,    14,    15,
     120,   121,   122,   123,    23,     7,    22,    23,    24,    25,
      26,    49,    46,    46,    20,   135,    48,   127,   147,    23,
      20,    49,    38,    39,    48,   150,    -1,    -1,   146,    -1,
      46,    47,    48,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     150,     7,    -1,   163,   154,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,    37,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,     3,     4,     5,
       6,    42,     8,     9,    -1,    11,    12,    -1,    14,    15,
      51,    52,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,     3,     4,     5,     6,    -1,     8,     9,
      -1,    11,    12,     7,    14,    15,    -1,    11,    -1,    -1,
      14,    -1,    22,    23,    24,    25,    26,    -1,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    -1,    37,    38,    39,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    48,    13,    50,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    53,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    13,    51,    52,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      13,    51,    52,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    14,    -1,    37,    38,    39,    40,    41,    42,
      22,    23,    24,    25,    26,    -1,    49,    13,    51,    52,
      16,    17,    18,    19,    20,    21,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    13,    51,    52,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    13,    51,    52,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    13,    51,
      52,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    13,    51,    52,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    13,    51,    52,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    51,    52,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    56,     0,     1,     3,     4,     5,     6,     8,
       9,    10,    11,    12,    14,    15,    22,    23,    24,    25,
      26,    38,    39,    46,    47,    48,    57,    59,    60,    61,
      63,    65,    66,    67,    68,    70,    71,    72,    73,    75,
      76,    45,    46,    48,    48,    71,    23,    18,    18,    18,
      48,    71,    71,    59,    64,    65,    71,    23,    13,    16,
      17,    18,    19,    20,    21,    37,    38,    39,    40,    41,
      42,    46,    51,    52,    71,    71,    46,    47,    60,     5,
      10,    12,    10,     7,    37,    50,    71,    74,    23,    45,
      65,    49,    37,    48,    23,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    49,
      49,    58,    59,    20,    20,    23,    18,    23,    65,    71,
      71,    37,    38,    39,    74,    49,    71,    50,    59,    62,
      53,    65,    65,    45,    23,    48,    20,    60,    20,    74,
      71,    71,    71,    46,    59,    23,    49,     7,    69,    46,
      46,    71,    48,    20,    23,    62,    63,    65,    58,    49,
      49,    20,    62,    48,    71,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    56,    56,    56,    57,
      58,    58,    59,    59,    60,    60,    60,    60,    61,    62,
      62,    62,    63,    63,    64,    64,    65,    65,    65,    65,
      65,    65,    66,    67,    68,    69,    69,    70,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    72,    72,
      72,    73,    74,    74,    74,    74,    74,    75,    75,    75,
      76,    76,    76,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     3,     0,     6,
       0,     4,     1,     4,     1,     1,     1,     5,     6,     0,
       3,     4,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     5,     5,     6,     2,     0,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     1,     1,     3,     1,     1,     7,     7,
      10,     4,     0,     2,     2,     2,     3,     1,     4,     3,
       1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
          case 3: /* TOK_VOID  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 885 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 4: /* TOK_INT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 891 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 5: /* TOK_STRING  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 897 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 6: /* TOK_IF  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 903 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 7: /* TOK_ELSE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 909 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 8: /* TOK_WHILE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 915 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 9: /* TOK_RETURN  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 921 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 10: /* TOK_STRUCT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 927 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 11: /* TOK_NULLPTR  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 933 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 12: /* TOK_ARRAY  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 939 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 13: /* TOK_ARROW  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 945 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 14: /* TOK_ALLOC  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 951 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 15: /* TOK_PTR  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 957 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 16: /* TOK_EQ  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 963 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 17: /* TOK_NE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 969 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 18: /* TOK_LT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 975 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 19: /* TOK_LE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 981 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 20: /* TOK_GT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 987 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 21: /* TOK_GE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 993 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 22: /* TOK_NOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 999 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 23: /* TOK_IDENT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1005 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 24: /* TOK_INTCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1011 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 25: /* TOK_CHARCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1017 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 26: /* TOK_STRINGCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1023 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 27: /* TOK_ROOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1029 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 28: /* TOK_BLOCK  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1035 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 29: /* TOK_CALL  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1041 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 30: /* ROOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1047 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 31: /* NUMBER  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1053 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 32: /* IDENT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1059 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 33: /* TOK_TYPE_ID  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1065 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 34: /* TOK_FUNCTION  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1071 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 35: /* TOK_INDEX  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1077 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 36: /* TOK_PARAM  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1083 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 37: /* '='  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1089 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 38: /* '+'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1095 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 39: /* '-'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1101 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 40: /* '*'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1107 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 41: /* '/'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1113 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 42: /* '^'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1119 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 43: /* POS  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1125 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 44: /* NEG  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1131 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 45: /* '}'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1137 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 46: /* ';'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1143 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 47: /* '{'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1149 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 48: /* '('  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1155 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 49: /* ')'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1161 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 50: /* ','  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1167 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 51: /* '%'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1173 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 52: /* '['  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1179 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 53: /* ']'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1185 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 55: /* start  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1191 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 56: /* program  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1197 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 57: /* structdef  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1203 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 58: /* typeident  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1209 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 59: /* type  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1215 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 60: /* plaintype  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1221 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 61: /* function  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1227 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 62: /* funcident  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1233 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 63: /* block  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1239 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 64: /* optstmt  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1245 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 65: /* statement  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1251 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 66: /* vardecl  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1257 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 67: /* while  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1263 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 68: /* ifelse  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1269 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 69: /* dangling  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1275 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 70: /* return  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1281 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 71: /* expr  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1287 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 72: /* allocator  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1293 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 73: /* call  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1299 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 74: /* callexpr  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1305 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 75: /* variable  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1311 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 76: /* constant  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1317 "yyparse.cpp" /* yacc.c:684  */
        break;


      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
  switch (yytype)
    {
          case 3: /* TOK_VOID  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1663 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 4: /* TOK_INT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1669 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 5: /* TOK_STRING  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1675 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 6: /* TOK_IF  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1681 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 7: /* TOK_ELSE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1687 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 8: /* TOK_WHILE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1693 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 9: /* TOK_RETURN  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1699 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 10: /* TOK_STRUCT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1705 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 11: /* TOK_NULLPTR  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1711 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 12: /* TOK_ARRAY  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1717 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 13: /* TOK_ARROW  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1723 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 14: /* TOK_ALLOC  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1729 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 15: /* TOK_PTR  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1735 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 16: /* TOK_EQ  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1741 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 17: /* TOK_NE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1747 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 18: /* TOK_LT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1753 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 19: /* TOK_LE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1759 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 20: /* TOK_GT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1765 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 21: /* TOK_GE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1771 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 22: /* TOK_NOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1777 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 23: /* TOK_IDENT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1783 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 24: /* TOK_INTCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1789 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 25: /* TOK_CHARCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1795 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 26: /* TOK_STRINGCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1801 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 27: /* TOK_ROOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1807 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 28: /* TOK_BLOCK  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1813 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 29: /* TOK_CALL  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1819 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 30: /* ROOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1825 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 31: /* NUMBER  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1831 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 32: /* IDENT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1837 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 33: /* TOK_TYPE_ID  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1843 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 34: /* TOK_FUNCTION  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1849 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 35: /* TOK_INDEX  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1855 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 36: /* TOK_PARAM  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1861 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 37: /* '='  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1867 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 38: /* '+'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1873 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 39: /* '-'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1879 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 40: /* '*'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1885 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 41: /* '/'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1891 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 42: /* '^'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1897 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 43: /* POS  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1903 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 44: /* NEG  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1909 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 45: /* '}'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1915 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 46: /* ';'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1921 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 47: /* '{'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1927 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 48: /* '('  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1933 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 49: /* ')'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1939 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 50: /* ','  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1945 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 51: /* '%'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1951 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 52: /* '['  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1957 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 53: /* ']'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1963 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 55: /* start  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1969 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 56: /* program  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1975 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 57: /* structdef  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1981 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 58: /* typeident  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1987 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 59: /* type  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1993 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 60: /* plaintype  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1999 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 61: /* function  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2005 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 62: /* funcident  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2011 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 63: /* block  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2017 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 64: /* optstmt  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2023 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 65: /* statement  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2029 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 66: /* vardecl  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2035 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 67: /* while  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2041 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 68: /* ifelse  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2047 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 69: /* dangling  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2053 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 70: /* return  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2059 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 71: /* expr  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2065 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 72: /* allocator  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2071 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 73: /* call  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2077 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 74: /* callexpr  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2083 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 75: /* variable  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2089 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 76: /* constant  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2095 "yyparse.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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

/* User initialization code.  */
#line 30 "parser.y" /* yacc.c:1429  */
{
   parser::root = new astree (TOK_ROOT, {0, 0, 0}, "");
}

#line 2185 "yyparse.cpp" /* yacc.c:1429  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 56 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]) = nullptr; }
#line 2367 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2373 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 60 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2379 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 61 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2385 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 62 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 2391 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 63 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 2397 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 64 "parser.y" /* yacc.c:1646  */
    { (yyval) = parser::root; }
#line 2403 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 68 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-3]), (yyvsp[-1])); destroy((yyvsp[0])); (yyval) = (yyvsp[-5])->adopt ((yyvsp[-4]), (yyvsp[-2])); }
#line 2409 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 71 "parser.y" /* yacc.c:1646  */
    { (yyval) = nullptr; }
#line 2415 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 72 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1])); 
(yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-3])->lloc, ""))->adopt((yyvsp[-3]), (yyvsp[-2])); }
<<<<<<< HEAD
#line 2422 "yyparse.cpp" /* yacc.c:1646  */
=======
#line 2384 "yyparse.cpp" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    break;

  case 12:
#line 76 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2428 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 77 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[0]));
                                          (yyval) = (yyvsp[-3])->adopt((yyvsp[-1])); }
#line 2435 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 81 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2441 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 82 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2447 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 83 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2453 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 84 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-3]), (yyvsp[-2]));
                                                destroy((yyvsp[0]));
                                                (yyval) = (yyvsp[-4])->adopt((yyvsp[-1])); }
<<<<<<< HEAD
#line 2461 "yyparse.cpp" /* yacc.c:1646  */
=======
#line 2423 "yyparse.cpp" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    break;

  case 18:
#line 89 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1]));
(yyvsp[-3])->symbol = TOK_PARAM; (yyvsp[-3])->adopt((yyvsp[-2])); 
(yyval) = (new astree(TOK_FUNCTION, (yyvsp[-5])->lloc, ""))
        ->adopt((new astree(TOK_TYPE_ID, (yyvsp[-5])->lloc, ""))->adopt((yyvsp[-5]), (yyvsp[-4]))
                , (yyvsp[-3]), (yyvsp[0])); }
<<<<<<< HEAD
#line 2471 "yyparse.cpp" /* yacc.c:1646  */
=======
#line 2433 "yyparse.cpp" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    break;

  case 19:
#line 97 "parser.y" /* yacc.c:1646  */
    { (yyval) = nullptr; }
#line 2477 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 20:
<<<<<<< HEAD
#line 99 "parser.y" /* yacc.c:1646  */
    {(yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-2])->lloc, ""))->adopt((yyvsp[-2]), (yyvsp[-1]));}
#line 2483 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 101 "parser.y" /* yacc.c:1646  */
    {(yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-3])->lloc, ""))->adopt((yyvsp[-2]), (yyvsp[-1]));}
#line 2489 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 104 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); 
                                            (yyvsp[-2])->symbol = TOK_BLOCK;
                                            (yyval) = (yyvsp[-2])->adopt((yyvsp[-1])); }
#line 2497 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 107 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); }
#line 2503 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 114 "parser.y" /* yacc.c:1646  */
=======
#line 98 "parser.y" /* yacc.c:1646  */
    {(yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-2])->lloc, ""))->adopt((yyvsp[-2]), (yyvsp[-1]));}
#line 2445 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 100 "parser.y" /* yacc.c:1646  */
    {(yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-3])->lloc, ""))->adopt((yyvsp[-2]), (yyvsp[-1]));}
#line 2451 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 103 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyvsp[-2])->symbol = TOK_BLOCK;
                                  (yyval) = (yyvsp[-2])->adopt((yyvsp[-1])); }
#line 2458 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 105 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); }
#line 2464 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 108 "parser.y" /* yacc.c:1646  */
    { (yyval) = nullptr; }
#line 2470 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 109 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2476 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 112 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[0]); }
#line 2509 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 27:
<<<<<<< HEAD
#line 115 "parser.y" /* yacc.c:1646  */
=======
#line 113 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[0]); }
#line 2515 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 28:
<<<<<<< HEAD
#line 116 "parser.y" /* yacc.c:1646  */
=======
#line 114 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[0]); }
#line 2521 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 29:
<<<<<<< HEAD
#line 117 "parser.y" /* yacc.c:1646  */
=======
#line 115 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[0]); }
#line 2527 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 30:
<<<<<<< HEAD
#line 118 "parser.y" /* yacc.c:1646  */
=======
#line 116 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[0]); }
#line 2533 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 31:
<<<<<<< HEAD
#line 119 "parser.y" /* yacc.c:1646  */
=======
#line 117 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2539 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 32:
<<<<<<< HEAD
#line 122 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[0])); 
(yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-4])->lloc, ""))->adopt((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1])); }
#line 2546 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 134 "parser.y" /* yacc.c:1646  */
=======
#line 120 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[0])); 
(yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-4])->lloc, ""))->adopt((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1])); }
#line 2519 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 132 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { destroy((yyvsp[-3]), (yyvsp[-1])); (yyval) = (yyvsp[-4])->adopt((yyvsp[-2]), (yyvsp[0]));  }
#line 2552 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 34:
<<<<<<< HEAD
#line 139 "parser.y" /* yacc.c:1646  */
=======
#line 137 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { destroy((yyvsp[-4]), (yyvsp[-2])); (yyval) = (yyvsp[-5])->adopt((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 2558 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 35:
<<<<<<< HEAD
#line 143 "parser.y" /* yacc.c:1646  */
=======
#line 141 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { destroy((yyvsp[-1])); (yyval) = (yyvsp[0]); }
#line 2564 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 36:
<<<<<<< HEAD
#line 144 "parser.y" /* yacc.c:1646  */
=======
#line 142 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = nullptr; }
#line 2570 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 37:
<<<<<<< HEAD
#line 148 "parser.y" /* yacc.c:1646  */
=======
#line 146 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    {destroy((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-1])); }
#line 2576 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 38:
<<<<<<< HEAD
#line 152 "parser.y" /* yacc.c:1646  */
=======
#line 150 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2582 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 39:
<<<<<<< HEAD
#line 153 "parser.y" /* yacc.c:1646  */
=======
#line 151 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2588 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 40:
<<<<<<< HEAD
#line 154 "parser.y" /* yacc.c:1646  */
=======
#line 152 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2594 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 41:
<<<<<<< HEAD
#line 155 "parser.y" /* yacc.c:1646  */
=======
#line 153 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2600 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 42:
<<<<<<< HEAD
#line 156 "parser.y" /* yacc.c:1646  */
=======
#line 154 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2606 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 43:
<<<<<<< HEAD
#line 157 "parser.y" /* yacc.c:1646  */
=======
#line 155 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2612 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 44:
<<<<<<< HEAD
#line 158 "parser.y" /* yacc.c:1646  */
=======
#line 156 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2618 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 45:
<<<<<<< HEAD
#line 159 "parser.y" /* yacc.c:1646  */
=======
#line 157 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2624 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 46:
<<<<<<< HEAD
#line 160 "parser.y" /* yacc.c:1646  */
=======
#line 158 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2630 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 47:
<<<<<<< HEAD
#line 161 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2636 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 162 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2642 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 163 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2648 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 164 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2654 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 165 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt_sym ((yyvsp[0]), POS); }
#line 2660 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 166 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt_sym ((yyvsp[0]), NEG); }
#line 2666 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 167 "parser.y" /* yacc.c:1646  */
=======
#line 159 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt_sym ((yyvsp[0]), POS); }
#line 2609 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 160 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt_sym ((yyvsp[0]), NEG); }
#line 2615 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 161 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2621 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 162 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2627 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 163 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[-2]), (yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2633 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 164 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2639 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 165 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[0]); }
#line 2672 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 54:
<<<<<<< HEAD
#line 168 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2678 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 169 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[-2]), (yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2684 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 170 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2690 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 171 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2696 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 175 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-5]), (yyvsp[-3])); destroy((yyvsp[-2]), (yyvsp[0]));
                (yyval) = (yyvsp[-6])->adopt((yyvsp[-4]), (yyvsp[-1])); }
#line 2703 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 178 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-5]), (yyvsp[-2])); destroy((yyvsp[-1]), (yyvsp[0]));
                destroy((yyvsp[-4])); (yyval) = (yyvsp[-6])->adopt((yyvsp[-3])); }
#line 2710 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 181 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-8]), (yyvsp[-6])); destroy((yyvsp[-4]), (yyvsp[-3]));
                destroy((yyvsp[-2]), (yyvsp[0])); (yyval) = (yyvsp[-9])->adopt((yyvsp[-7]), (yyvsp[-1])); }
#line 2717 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2])->symbol = TOK_CALL; destroy((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-3]), (yyvsp[-1])); }
#line 2723 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 189 "parser.y" /* yacc.c:1646  */
    { (yyval) = nullptr; }
#line 2729 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 190 "parser.y" /* yacc.c:1646  */
=======
#line 170 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-5]), (yyvsp[-3])); destroy((yyvsp[-2]), (yyvsp[0]));
                (yyval) = (yyvsp[-6])->adopt((yyvsp[-4]), (yyvsp[-1])); }
#line 2652 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 174 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-5]), (yyvsp[-2])); destroy((yyvsp[-1]), (yyvsp[0]));
                destroy((yyvsp[-4])); (yyval) = (yyvsp[-6])->adopt((yyvsp[-3])); }
#line 2659 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 178 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-8]), (yyvsp[-6])); destroy((yyvsp[-4]), (yyvsp[-3]));
                destroy((yyvsp[-2]), (yyvsp[0])); (yyval) = (yyvsp[-9])->adopt((yyvsp[-7]), (yyvsp[-1])); }
#line 2666 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 183 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2])->symbol = TOK_CALL; destroy((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-3]), (yyvsp[-1])); }
#line 2672 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyval) = nullptr; }
#line 2678 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 187 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2684 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 188 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2690 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 189 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2696 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 190 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2702 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 193 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[0]); }
#line 2735 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 64:
<<<<<<< HEAD
#line 191 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2741 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 192 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2747 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 193 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2753 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 196 "parser.y" /* yacc.c:1646  */
=======
#line 195 "parser.y" /* yacc.c:1646  */
    {(yyvsp[-2])->symbol = TOK_INDEX; destroy((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-3]), (yyvsp[-1]));}
#line 2714 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 196 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2720 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 199 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2726 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 200 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[0]); }
#line 2759 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 68:
<<<<<<< HEAD
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyvsp[-2])->symbol = TOK_INDEX; destroy((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-3]), (yyvsp[-1]));}
#line 2765 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 199 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2771 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 202 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2777 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 203 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2783 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 204 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2789 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 205 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2795 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 206 "parser.y" /* yacc.c:1646  */
=======
#line 201 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2738 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 202 "parser.y" /* yacc.c:1646  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb
    { (yyval) = (yyvsp[0]); }
#line 2801 "yyparse.cpp" /* yacc.c:1646  */
    break;


#line 2805 "yyparse.cpp" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
<<<<<<< HEAD
#line 208 "parser.y" /* yacc.c:1906  */
=======
#line 204 "parser.y" /* yacc.c:1906  */
>>>>>>> 64c3117e55c3cc402f7311f54182f312917adcbb


const char* parser::get_tname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}

bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}
