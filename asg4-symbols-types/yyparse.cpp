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
    TOK_BOOL = 261,
    TOK_REF = 262,
    TOK_CHAR = 263,
    TOK_IF = 264,
    TOK_ELSE = 265,
    TOK_WHILE = 266,
    TOK_RETURN = 267,
    TOK_STRUCT = 268,
    TOK_FIELD = 269,
    TOK_NULLPTR = 270,
    TOK_ARRAY = 271,
    TOK_ARROW = 272,
    TOK_ALLOC = 273,
    TOK_PTR = 274,
    TOK_EQ = 275,
    TOK_NE = 276,
    TOK_LT = 277,
    TOK_LE = 278,
    TOK_GT = 279,
    TOK_GE = 280,
    TOK_NOT = 281,
    TOK_IDENT = 282,
    TOK_INTCON = 283,
    TOK_CHARCON = 284,
    TOK_STRINGCON = 285,
    TOK_ROOT = 286,
    TOK_BLOCK = 287,
    TOK_CALL = 288,
    TOK_NEW = 289,
    ROOT = 290,
    NUMBER = 291,
    IDENT = 292,
    TOK_TYPE_ID = 293,
    TOK_FUNCTION = 294,
    TOK_INDEX = 295,
    TOK_PARAM = 296,
    POS = 297,
    NEG = 298
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

#line 174 "yyparse.cpp" /* yacc.c:358  */

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
#define YYLAST   803

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  203

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,     2,    56,     2,     2,
      42,    43,    54,    52,    49,    53,    50,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
       2,    51,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    65,    66,    67,    68,    69,    70,    73,
      75,    77,    79,    84,    86,    91,    92,    96,    97,    98,
      99,   100,   101,   102,   103,   106,   111,   115,   120,   125,
     131,   133,   135,   137,   142,   145,   148,   151,   154,   155,
     158,   159,   160,   161,   162,   163,   167,   169,   172,   175,
     181,   186,   189,   194,   195,   199,   200,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   225,   226,   229,
     232,   235,   241,   244,   249,   250,   254,   255,   257,   260,
     261,   262,   263,   264
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_VOID", "TOK_INT", "TOK_STRING",
  "TOK_BOOL", "TOK_REF", "TOK_CHAR", "TOK_IF", "TOK_ELSE", "TOK_WHILE",
  "TOK_RETURN", "TOK_STRUCT", "TOK_FIELD", "TOK_NULLPTR", "TOK_ARRAY",
  "TOK_ARROW", "TOK_ALLOC", "TOK_PTR", "TOK_EQ", "TOK_NE", "TOK_LT",
  "TOK_LE", "TOK_GT", "TOK_GE", "TOK_NOT", "TOK_IDENT", "TOK_INTCON",
  "TOK_CHARCON", "TOK_STRINGCON", "TOK_ROOT", "TOK_BLOCK", "TOK_CALL",
  "TOK_NEW", "ROOT", "NUMBER", "IDENT", "TOK_TYPE_ID", "TOK_FUNCTION",
  "TOK_INDEX", "TOK_PARAM", "'('", "')'", "'['", "']'", "'{'", "'}'",
  "';'", "','", "'.'", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'",
  "'^'", "POS", "NEG", "$accept", "start", "program", "structdef",
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    40,    41,    91,    93,   123,   125,    59,    44,
      46,    61,    43,    45,    42,    47,    37,    33,    94,   297,
     298
};
# endif

#define YYPACT_NINF -139

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-139)))

#define YYTABLE_NINF -24

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -139,    59,   113,  -139,    -9,  -139,  -139,  -139,  -139,  -139,
    -139,    36,    37,   704,    69,  -139,    84,    89,   108,   750,
     -18,  -139,  -139,  -139,    96,   750,   169,  -139,   750,   750,
    -139,    -2,  -139,  -139,  -139,   220,  -139,  -139,  -139,  -139,
    -139,   286,  -139,  -139,    46,  -139,  -139,  -139,  -139,   750,
     750,    65,  -139,   326,    88,    78,    75,    31,   655,   721,
     750,  -139,    94,   342,  -139,     1,  -139,    12,    12,    85,
      92,   104,  -139,   129,   750,   750,   750,   750,   750,   750,
     750,  -139,   750,   750,   750,   750,   750,   750,   750,  -139,
     750,   382,   398,  -139,   186,   237,   133,   134,   135,   141,
     137,   143,  -139,   655,   438,   750,  -139,   -41,   123,   678,
    -139,   750,   102,   142,  -139,  -139,    32,    32,    32,    32,
      32,    32,   453,   655,    -3,    -3,    10,    10,    10,    32,
     655,   271,   271,   122,   152,   153,   155,  -139,   158,   159,
      78,   180,  -139,   156,   493,   179,   -43,    13,   506,   -43,
      96,    93,  -139,   198,  -139,  -139,   161,  -139,   162,   750,
     170,   190,  -139,   750,  -139,   167,  -139,  -139,   174,  -139,
    -139,    16,   685,   750,   105,   271,  -139,  -139,  -139,   546,
     177,   206,   559,   207,  -139,   192,   -43,   599,   -43,  -139,
    -139,  -139,   209,  -139,  -139,   225,  -139,  -139,  -139,   750,
    -139,   615,  -139
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     1,     0,    17,    18,    19,    20,    21,
      22,     0,     0,     0,     0,    93,     0,     0,     0,    92,
      86,    89,    90,    91,     0,     0,     0,    37,     0,     0,
       3,     0,    15,     4,    41,     0,     5,    40,    42,    43,
      44,     0,    72,    73,     0,    77,    78,     6,     7,     0,
       0,    86,    55,     0,     0,     0,     0,     0,    75,     0,
       0,    23,     0,     0,    36,     0,    39,    70,    71,     0,
       0,    34,    38,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,    56,     0,     0,     0,     0,     0,     0,
       0,     0,    83,    84,     0,     0,    74,     0,     0,     0,
      46,     0,     0,     0,    35,    88,    68,    69,    66,    67,
      64,    65,     0,    57,    58,    59,    60,    61,    63,    62,
      85,     0,     0,     9,     0,    12,     0,    16,     0,     0,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,    51,    50,    10,     0,    11,     0,     0,
       0,     0,    24,     0,    76,     0,    29,    32,     0,    47,
      26,     0,     0,     0,     0,     0,    52,    14,    13,     0,
       0,     0,     0,     0,    30,     0,     0,     0,     0,    53,
      79,    80,     0,    49,    33,     0,    27,    48,    28,     0,
      31,     0,    81
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,  -139,  -139,    -1,   -53,  -139,   106,  -138,
    -139,   -22,  -139,  -139,  -139,  -139,  -139,   -13,  -139,  -139,
    -139,  -139,  -139
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    30,    95,    65,    32,    33,   112,    34,
      35,    36,    37,    38,    39,   176,    40,    41,    42,    43,
      44,    45,    46
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    31,    96,    26,    66,    27,    58,   110,   166,   -23,
     111,   170,    63,    72,    73,    67,    68,    74,    75,    76,
      77,    78,    79,    62,    59,    69,    60,    73,   107,    73,
      74,    75,    76,    77,    78,    79,    91,    92,    47,    48,
     167,    80,    70,   184,   100,   108,   103,   104,   196,    73,
     198,    85,    86,    87,    80,    88,    80,   168,   101,     3,
     185,   116,   117,   118,   119,   120,   121,   122,    88,   123,
     124,   125,   126,   127,   128,   129,    80,   130,    49,    50,
      97,     5,     6,     7,     8,     9,    10,   161,    98,    89,
      88,    99,   144,   134,   136,    90,    54,    18,   148,     5,
       6,     7,     8,     9,    10,    61,    55,    59,   147,   153,
     154,    56,    16,    -2,     4,    18,     5,     6,     7,     8,
       9,    10,    11,    61,    12,    13,    14,   109,    15,    16,
      57,    17,    18,   110,    94,   172,   111,   113,   105,    19,
      20,    21,    22,    23,   173,   149,   179,    24,   188,   171,
     182,   150,   114,   189,   150,    25,   115,   137,   138,    26,
     187,    27,   139,   140,   141,    28,    29,   142,   145,   151,
     155,   147,     5,     6,     7,     8,     9,    10,    11,   156,
      12,    13,   158,   160,    15,    16,   201,    17,    18,     5,
       6,     7,     8,     9,    10,    19,    20,    21,    22,    23,
     159,   157,    16,    24,   162,    18,   165,   163,   175,   177,
     178,    25,   180,    61,   181,    26,    64,    27,   173,   183,
     191,    28,    29,     5,     6,     7,     8,     9,    10,    11,
     192,    12,    13,   133,   194,    15,    16,   195,    17,    18,
       5,     6,     7,     8,     9,    10,    19,    20,    21,    22,
      23,   199,   200,    16,    24,     0,    18,   174,     0,     0,
       0,     0,    25,     0,    61,     0,    26,    71,    27,     0,
       0,     0,    28,    29,     5,     6,     7,     8,     9,    10,
      11,     0,    12,    13,   135,     0,    15,    16,     0,    17,
      18,     0,     0,     0,     0,     0,     0,    19,    20,    21,
      22,    23,     0,    73,     0,    24,    74,    75,    76,    77,
      78,    79,     0,    25,     0,     0,     0,    26,     0,    27,
       0,     0,     0,    28,    29,     0,     0,     0,     0,     0,
      80,     0,     0,     0,    81,     0,     0,    82,    83,    84,
      85,    86,    87,    73,    88,     0,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    73,
       0,     0,    74,    75,    76,    77,    78,    79,     0,     0,
      80,     0,     0,     0,    93,     0,     0,    82,    83,    84,
      85,    86,    87,     0,    88,   106,    80,     0,     0,     0,
       0,     0,     0,    82,    83,    84,    85,    86,    87,    73,
      88,     0,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,     0,     0,    73,     0,     0,    74,    75,
      76,    77,    78,    79,     0,   131,    80,     0,     0,     0,
       0,     0,     0,    82,    83,    84,    85,    86,    87,     0,
      88,   132,    80,     0,     0,     0,     0,     0,     0,    82,
      83,    84,    85,    86,    87,    73,    88,     0,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
      73,     0,     0,    74,    75,    76,    77,    78,    79,     0,
       0,     0,    80,   143,     0,     0,     0,     0,     0,    82,
      83,    84,    85,    86,    87,     0,    88,    80,   152,     0,
       0,     0,     0,     0,    82,    83,    84,    85,    86,    87,
      73,    88,     0,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,    73,     0,     0,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,    80,   164,     0,
       0,     0,     0,     0,    82,    83,    84,    85,    86,    87,
      80,    88,     0,     0,   169,     0,     0,    82,    83,    84,
      85,    86,    87,    73,    88,     0,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,    73,     0,     0,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,   190,
      80,     0,     0,     0,     0,     0,     0,    82,    83,    84,
      85,    86,    87,    80,    88,     0,     0,   193,     0,     0,
      82,    83,    84,    85,    86,    87,    73,    88,     0,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,    73,     0,     0,    74,    75,    76,    77,    78,
      79,     0,     0,    80,     0,     0,     0,   197,     0,     0,
      82,    83,    84,    85,    86,    87,     0,    88,   202,    80,
       0,     0,     0,     0,     0,     0,    82,    83,    84,    85,
      86,    87,    73,    88,     0,    74,    75,    76,    77,    78,
      79,     5,     6,     7,     8,     9,    10,     0,     5,     6,
       7,     8,     9,    10,    16,     0,     0,    18,     0,    80,
       0,    16,     0,     0,    18,    61,    82,    83,    84,    85,
      86,    87,    61,    88,     0,     0,     0,     0,     0,    15,
       0,   146,    17,     0,     0,     0,     0,     0,   186,     0,
      19,    51,    21,    22,    23,     0,    15,     0,    24,    17,
       0,     0,     0,     0,     0,     0,    25,    19,    51,    21,
      22,    23,    52,     0,     0,    24,    28,    29,     0,     0,
       0,     0,     0,    25,   102,    15,     0,     0,    17,     0,
       0,     0,     0,    28,    29,     0,    19,    51,    21,    22,
      23,     0,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29
};

static const yytype_int16 yycheck[] =
{
      13,     2,    55,    46,    26,    48,    19,    48,   146,    27,
      51,   149,    25,    35,    17,    28,    29,    20,    21,    22,
      23,    24,    25,    24,    42,    27,    44,    17,    27,    17,
      20,    21,    22,    23,    24,    25,    49,    50,    47,    48,
      27,    44,    44,    27,    13,    44,    59,    60,   186,    17,
     188,    54,    55,    56,    44,    58,    44,    44,    27,     0,
      44,    74,    75,    76,    77,    78,    79,    80,    58,    82,
      83,    84,    85,    86,    87,    88,    44,    90,    42,    42,
       5,     3,     4,     5,     6,     7,     8,   140,    13,    43,
      58,    16,   105,    94,    95,    49,    27,    19,   111,     3,
       4,     5,     6,     7,     8,    27,    22,    42,   109,   131,
     132,    22,    16,     0,     1,    19,     3,     4,     5,     6,
       7,     8,     9,    27,    11,    12,    13,    42,    15,    16,
      22,    18,    19,    48,    46,    42,    51,    45,    44,    26,
      27,    28,    29,    30,    51,    43,   159,    34,    43,   150,
     163,    49,    48,   175,    49,    42,    27,    24,    24,    46,
     173,    48,    27,    22,    27,    52,    53,    24,    45,    27,
      48,   172,     3,     4,     5,     6,     7,     8,     9,    27,
      11,    12,    27,    24,    15,    16,   199,    18,    19,     3,
       4,     5,     6,     7,     8,    26,    27,    28,    29,    30,
      42,    48,    16,    34,    24,    19,    27,    51,    10,    48,
      48,    42,    42,    27,    24,    46,    47,    48,    51,    45,
      43,    52,    53,     3,     4,     5,     6,     7,     8,     9,
      24,    11,    12,    47,    27,    15,    16,    45,    18,    19,
       3,     4,     5,     6,     7,     8,    26,    27,    28,    29,
      30,    42,    27,    16,    34,    -1,    19,   151,    -1,    -1,
      -1,    -1,    42,    -1,    27,    -1,    46,    47,    48,    -1,
      -1,    -1,    52,    53,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    47,    -1,    15,    16,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    -1,    17,    -1,    34,    20,    21,    22,    23,
      24,    25,    -1,    42,    -1,    -1,    -1,    46,    -1,    48,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    17,    58,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      44,    -1,    -1,    -1,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    58,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    17,
      58,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    56,    -1,
      58,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    17,    58,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      17,    58,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      44,    58,    -1,    -1,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    17,    58,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    56,    44,    58,    -1,    -1,    48,    -1,    -1,
      51,    52,    53,    54,    55,    56,    17,    58,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    -1,
      51,    52,    53,    54,    55,    56,    -1,    58,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    17,    58,    -1,    20,    21,    22,    23,    24,
      25,     3,     4,     5,     6,     7,     8,    -1,     3,     4,
       5,     6,     7,     8,    16,    -1,    -1,    19,    -1,    44,
      -1,    16,    -1,    -1,    19,    27,    51,    52,    53,    54,
      55,    56,    27,    58,    -1,    -1,    -1,    -1,    -1,    15,
      -1,    43,    18,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      26,    27,    28,    29,    30,    -1,    15,    -1,    34,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    26,    27,    28,
      29,    30,    48,    -1,    -1,    34,    52,    53,    -1,    -1,
      -1,    -1,    -1,    42,    43,    15,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    52,    53,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    62,    63,     0,     1,     3,     4,     5,     6,     7,
       8,     9,    11,    12,    13,    15,    16,    18,    19,    26,
      27,    28,    29,    30,    34,    42,    46,    48,    52,    53,
      64,    66,    67,    68,    70,    71,    72,    73,    74,    75,
      77,    78,    79,    80,    81,    82,    83,    47,    48,    42,
      42,    27,    48,    78,    27,    22,    22,    22,    78,    42,
      44,    27,    66,    78,    47,    66,    72,    78,    78,    27,
      44,    47,    72,    17,    20,    21,    22,    23,    24,    25,
      44,    48,    51,    52,    53,    54,    55,    56,    58,    43,
      49,    78,    78,    48,    46,    65,    67,     5,    13,    16,
      13,    27,    43,    78,    78,    44,    43,    27,    44,    42,
      48,    51,    69,    45,    48,    27,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    43,    43,    47,    66,    47,    66,    24,    24,    27,
      22,    27,    24,    45,    78,    45,    43,    66,    78,    43,
      49,    27,    45,    72,    72,    48,    27,    48,    27,    42,
      24,    67,    24,    51,    45,    27,    70,    27,    44,    48,
      70,    66,    42,    51,    69,    10,    76,    48,    48,    78,
      42,    24,    78,    45,    27,    44,    43,    78,    43,    72,
      43,    43,    24,    48,    27,    45,    70,    48,    70,    42,
      27,    78,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    63,    63,    63,    63,    64,
      64,    64,    64,    65,    65,    66,    66,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    68,    68,    68,    68,
      69,    69,    69,    69,    70,    70,    70,    70,    71,    71,
      72,    72,    72,    72,    72,    72,    73,    73,    73,    73,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    79,
      79,    79,    80,    80,    81,    81,    82,    82,    82,    83,
      83,    83,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     3,     0,     4,
       5,     5,     4,     4,     4,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     5,     4,     5,     7,     7,     5,
       4,     6,     3,     5,     2,     3,     2,     1,     2,     2,
       1,     1,     1,     1,     1,     2,     3,     5,     7,     7,
       5,     5,     6,     2,     0,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     1,     1,     3,     2,     5,     1,     1,     7,
       7,    10,     2,     3,     3,     3,     1,     4,     3,     1,
       1,     1,     1,     1
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
#line 924 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 4: /* TOK_INT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 930 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 5: /* TOK_STRING  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 936 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 6: /* TOK_BOOL  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 942 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 7: /* TOK_REF  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 948 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 8: /* TOK_CHAR  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 954 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 9: /* TOK_IF  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 960 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 10: /* TOK_ELSE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 966 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 11: /* TOK_WHILE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 972 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 12: /* TOK_RETURN  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 978 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 13: /* TOK_STRUCT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 984 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 14: /* TOK_FIELD  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 990 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 15: /* TOK_NULLPTR  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 996 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 16: /* TOK_ARRAY  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1002 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 17: /* TOK_ARROW  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1008 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 18: /* TOK_ALLOC  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1014 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 19: /* TOK_PTR  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1020 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 20: /* TOK_EQ  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1026 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 21: /* TOK_NE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1032 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 22: /* TOK_LT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1038 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 23: /* TOK_LE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1044 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 24: /* TOK_GT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1050 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 25: /* TOK_GE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1056 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 26: /* TOK_NOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1062 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 27: /* TOK_IDENT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1068 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 28: /* TOK_INTCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1074 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 29: /* TOK_CHARCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1080 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 30: /* TOK_STRINGCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1086 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 31: /* TOK_ROOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1092 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 32: /* TOK_BLOCK  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1098 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 33: /* TOK_CALL  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1104 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 34: /* TOK_NEW  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1110 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 35: /* ROOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1116 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 36: /* NUMBER  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1122 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 37: /* IDENT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1128 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 38: /* TOK_TYPE_ID  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1134 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 39: /* TOK_FUNCTION  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1140 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 40: /* TOK_INDEX  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1146 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 41: /* TOK_PARAM  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1152 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 42: /* '('  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1158 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 43: /* ')'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1164 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 44: /* '['  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1170 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 45: /* ']'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1176 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 46: /* '{'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1182 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 47: /* '}'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1188 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 48: /* ';'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1194 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 49: /* ','  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1200 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 50: /* '.'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1206 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 51: /* '='  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1212 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 52: /* '+'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1218 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 53: /* '-'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1224 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 54: /* '*'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1230 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 55: /* '/'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1236 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 56: /* '%'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1242 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 57: /* '!'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1248 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 58: /* '^'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1254 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 59: /* POS  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1260 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 60: /* NEG  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1266 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 62: /* start  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1272 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 63: /* program  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1278 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 64: /* structdef  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1284 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 65: /* typeident  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1290 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 66: /* type  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1296 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 67: /* plaintype  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1302 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 68: /* function  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1308 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 69: /* funcident  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1314 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 70: /* block  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1320 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 71: /* optstmt  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1326 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 72: /* statement  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1332 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 73: /* vardecl  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1338 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 74: /* while  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1344 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 75: /* ifelse  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1350 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 76: /* dangling  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1356 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 77: /* return  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1362 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 78: /* expr  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1368 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 79: /* allocator  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1374 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 80: /* call  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1380 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 81: /* callexpr  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1386 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 82: /* variable  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1392 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 83: /* constant  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1398 "yyparse.cpp" /* yacc.c:684  */
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
#line 1744 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 4: /* TOK_INT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1750 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 5: /* TOK_STRING  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1756 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 6: /* TOK_BOOL  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1762 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 7: /* TOK_REF  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1768 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 8: /* TOK_CHAR  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1774 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 9: /* TOK_IF  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1780 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 10: /* TOK_ELSE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1786 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 11: /* TOK_WHILE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1792 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 12: /* TOK_RETURN  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1798 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 13: /* TOK_STRUCT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1804 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 14: /* TOK_FIELD  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1810 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 15: /* TOK_NULLPTR  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1816 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 16: /* TOK_ARRAY  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1822 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 17: /* TOK_ARROW  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1828 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 18: /* TOK_ALLOC  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1834 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 19: /* TOK_PTR  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1840 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 20: /* TOK_EQ  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1846 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 21: /* TOK_NE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1852 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 22: /* TOK_LT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1858 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 23: /* TOK_LE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1864 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 24: /* TOK_GT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1870 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 25: /* TOK_GE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1876 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 26: /* TOK_NOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1882 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 27: /* TOK_IDENT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1888 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 28: /* TOK_INTCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1894 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 29: /* TOK_CHARCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1900 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 30: /* TOK_STRINGCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1906 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 31: /* TOK_ROOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1912 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 32: /* TOK_BLOCK  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1918 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 33: /* TOK_CALL  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1924 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 34: /* TOK_NEW  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1930 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 35: /* ROOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1936 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 36: /* NUMBER  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1942 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 37: /* IDENT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1948 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 38: /* TOK_TYPE_ID  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1954 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 39: /* TOK_FUNCTION  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1960 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 40: /* TOK_INDEX  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1966 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 41: /* TOK_PARAM  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1972 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 42: /* '('  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1978 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 43: /* ')'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1984 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 44: /* '['  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1990 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 45: /* ']'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1996 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 46: /* '{'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2002 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 47: /* '}'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2008 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 48: /* ';'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2014 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 49: /* ','  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2020 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 50: /* '.'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2026 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 51: /* '='  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2032 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 52: /* '+'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2038 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 53: /* '-'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2044 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 54: /* '*'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2050 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 55: /* '/'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2056 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 56: /* '%'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2062 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 57: /* '!'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2068 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 58: /* '^'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2074 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 59: /* POS  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2080 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 60: /* NEG  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2086 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 62: /* start  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2092 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 63: /* program  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2098 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 64: /* structdef  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2104 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 65: /* typeident  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2110 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 66: /* type  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2116 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 67: /* plaintype  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2122 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 68: /* function  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2128 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 69: /* funcident  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2134 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 70: /* block  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2140 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 71: /* optstmt  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2146 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 72: /* statement  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2152 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 73: /* vardecl  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2158 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 74: /* while  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2164 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 75: /* ifelse  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2170 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 76: /* dangling  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2176 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 77: /* return  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2182 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 78: /* expr  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2188 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 79: /* allocator  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2194 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 80: /* call  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2200 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 81: /* callexpr  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2206 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 82: /* variable  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2212 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 83: /* constant  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2218 "yyparse.cpp" /* yacc.c:1257  */
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

#line 2308 "yyparse.cpp" /* yacc.c:1429  */
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
#line 62 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]) = nullptr; }
#line 2490 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 65 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2496 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 66 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2502 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2508 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 2514 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 2520 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 70 "parser.y" /* yacc.c:1646  */
    { (yyval) = parser::root; }
#line 2526 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 73 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1]), (yyvsp[0]));
                                                      (yyval) = (yyvsp[-3])->adopt ((yyvsp[-2])); }
#line 2533 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 75 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[-1])); destroy((yyvsp[0]));
                                                      (yyval) = (yyvsp[-4])->adopt ((yyvsp[-3])); }
#line 2540 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 78 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1]), (yyvsp[0])); (yyvsp[-2])->symbol = TOK_FIELD; (yyval) = (yyvsp[-4])->adopt ((yyvsp[-3]), (yyvsp[-2])); }
#line 2546 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 80 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyvsp[-1])->symbol = TOK_FIELD; (yyval) = (yyvsp[-3])->adopt ((yyvsp[-2]), (yyvsp[-1])); }
#line 2552 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 84 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0]));
          (yyval) = (yyvsp[-3])->adopt((new astree(TOK_TYPE_ID, (yyvsp[-3])->lloc, ""))->adopt((yyvsp[-2]), (yyvsp[-1]))); }
#line 2559 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 86 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0]));
          (yyval) = (yyvsp[-3])->adopt((new astree(TOK_TYPE_ID, (yyvsp[-3])->lloc, ""))->adopt((yyvsp[-2]), (yyvsp[-1]))); }
#line 2566 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 91 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2572 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 92 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[0]));
                                          (yyval) = (yyvsp[-3])->adopt((yyvsp[-1])); }
#line 2579 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2585 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 97 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2591 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 98 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2597 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 99 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2603 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 100 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2609 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 101 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2615 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 102 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2621 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 103 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-3]), (yyvsp[-2]));
                                                destroy((yyvsp[0]));
                                                (yyval) = (yyvsp[-4])->adopt((yyvsp[-1])); }
#line 2629 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 106 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[0]));
                                                (yyval) = (yyvsp[-3])->adopt((yyvsp[-1])); }
#line 2636 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 111 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1])); (yyvsp[-2])->symbol = TOK_PARAM;
          (yyval) = (new astree(TOK_FUNCTION, (yyvsp[-4])->lloc, ""))
          ->adopt((new astree(TOK_TYPE_ID, (yyvsp[-4])->lloc, ""))->adopt((yyvsp[-4]), (yyvsp[-3]))
                , (yyvsp[-2]), (yyvsp[0])); }
#line 2645 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 115 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[-1]));
(yyvsp[-3])->symbol = TOK_PARAM; destroy((yyvsp[-5]), (yyvsp[-4]));
(yyval) = (new astree(TOK_FUNCTION, (yyvsp[-6])->lloc, ""))
        ->adopt((new astree(TOK_TYPE_ID, (yyvsp[-6])->lloc, ""))->adopt((yyvsp[-6]), (yyvsp[-3]))
                , (yyvsp[-2]), (yyvsp[0])); }
#line 2655 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 120 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1]));
(yyvsp[-3])->symbol = TOK_PARAM; destroy((yyvsp[-5]), (yyvsp[-4]));
(yyval) = (new astree(TOK_FUNCTION, (yyvsp[-6])->lloc, ""))
        ->adopt((new astree(TOK_TYPE_ID, (yyvsp[-6])->lloc, ""))->adopt((yyvsp[-6]), (yyvsp[-3]))
                , (yyvsp[-2]), (yyvsp[0])); }
#line 2665 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 125 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1])); (yyvsp[-2])->symbol = TOK_PARAM; 
(yyval) = (new astree(TOK_FUNCTION, (yyvsp[-4])->lloc, ""))
        ->adopt((new astree(TOK_TYPE_ID, (yyvsp[-4])->lloc, ""))->adopt((yyvsp[-4]), (yyvsp[-3]))
                , (yyvsp[-2]), (yyvsp[0])); }
#line 2674 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 131 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]));
          (yyval) = (yyvsp[-3])->adopt((new astree(TOK_TYPE_ID, (yyvsp[-3])->lloc, ""))->adopt((yyvsp[-1]), (yyvsp[0]))); }
#line 2681 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 133 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-4])); destroy((yyvsp[-2]), (yyvsp[-1]));
          (yyval) = (yyvsp[-5])->adopt((new astree(TOK_TYPE_ID, (yyvsp[-5])->lloc, ""))->adopt((yyvsp[-3]), (yyvsp[0]))); }
#line 2688 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 135 "parser.y" /* yacc.c:1646  */
    { 
          (yyval) = (yyvsp[-2])->adopt((new astree(TOK_TYPE_ID, (yyvsp[-2])->lloc, ""))->adopt((yyvsp[-1]), (yyvsp[0]))); }
#line 2695 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 137 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[-1])); 
          (yyval) = (yyvsp[-4])->adopt((new astree(TOK_TYPE_ID, (yyvsp[-4])->lloc, ""))->adopt((yyvsp[-3]), (yyvsp[0]))); }
#line 2702 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 142 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); 
                                          (yyvsp[-1])->symbol = TOK_BLOCK;
                                          (yyval) = (yyvsp[-1]); }
#line 2710 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 145 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1]), (yyvsp[0])); 
                                          (yyvsp[-2])->symbol = TOK_BLOCK;
                                          (yyval) = (yyvsp[-2]); }
#line 2718 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 148 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0]));
                                          (yyvsp[-1])->symbol = TOK_BLOCK;
                                          (yyval) = (yyvsp[-1]); }
#line 2726 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 151 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = nullptr; }
#line 2732 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 154 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2738 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 155 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2744 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 158 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2750 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 159 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2756 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 160 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2762 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 161 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2768 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 162 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2774 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 163 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2780 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 167 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0]));
                                               (yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-2])->lloc, ""))->adopt((yyvsp[-2]), (yyvsp[-1])); }
#line 2787 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 169 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2])->symbol = TOK_TYPE_ID;
                                               destroy((yyvsp[0]));
                                               (yyval) = (yyvsp[-2])->adopt((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1])); }
#line 2795 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 172 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2])->symbol = TOK_ARRAY;
                                               destroy((yyvsp[0])); destroy((yyvsp[-5]), (yyvsp[-4])); 
                                               (yyval) = (yyvsp[-2])->adopt((yyvsp[-6]), (yyvsp[-3]), (yyvsp[-1])); }
#line 2803 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 175 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2])->symbol = TOK_TYPE_ID;
                                               destroy((yyvsp[0])); destroy((yyvsp[-5]), (yyvsp[-3])); 
                                               (yyval) = (yyvsp[-2])->adopt((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1])); }
#line 2811 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 182 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-3]), (yyvsp[-1])); (yyval) = (yyvsp[-4])->adopt((yyvsp[-2]), (yyvsp[0]));  }
#line 2817 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 187 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[-3]), (yyvsp[-1]));
                                        (yyval) =(yyvsp[-4])->adopt((yyvsp[-2]),(yyvsp[0])); }
#line 2824 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 190 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-4]), (yyvsp[-2])); (yyval) = (yyvsp[-5])->adopt((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 2830 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 194 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1])); (yyval) = (yyvsp[0]); }
#line 2836 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 195 "parser.y" /* yacc.c:1646  */
    { (yyval) = nullptr; }
#line 2842 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 199 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2848 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 200 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-1])); }
#line 2854 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 204 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2860 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 205 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2866 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2872 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 207 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2878 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 208 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2884 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 209 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2890 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 210 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2896 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 211 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2902 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 212 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2908 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 213 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2914 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 214 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2920 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 215 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2926 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 216 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2932 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 217 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt_sym ((yyvsp[0]), POS); }
#line 2938 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 218 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt_sym ((yyvsp[0]), NEG); }
#line 2944 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 219 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2950 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 220 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2956 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 221 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[-2]), (yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2962 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2968 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 223 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[0]));
                                                 (yyval) = (yyvsp[-4])->adopt((yyvsp[-3]), (yyvsp[-1])); }
#line 2975 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 225 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2981 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 226 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2987 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 230 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-5]), (yyvsp[-3])); destroy((yyvsp[-2]), (yyvsp[0]));
                (yyval) = (yyvsp[-6])->adopt((yyvsp[-4]), (yyvsp[-1])); }
#line 2994 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 233 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-5]), (yyvsp[-2])); destroy((yyvsp[-1]), (yyvsp[0]));
                destroy((yyvsp[-4])); (yyval) = (yyvsp[-6])->adopt((yyvsp[-3])); }
#line 3001 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 236 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-8]), (yyvsp[-6])); destroy((yyvsp[-4]), (yyvsp[-3]));
                destroy((yyvsp[-2]), (yyvsp[0])); destroy((yyvsp[-7])); (yyval) = (yyvsp[-9])->adopt((yyvsp[-5]), (yyvsp[-1])); }
#line 3008 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 241 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[0]));
                                               (yyvsp[-1])->symbol = TOK_CALL;
                                               (yyval) = (yyvsp[-1]); }
#line 3016 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 244 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[0]));
                                                (yyvsp[-1])->symbol = TOK_CALL;
                                                (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2])); }
#line 3024 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 249 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 3030 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 250 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[-1]));
                                             (yyval) = (yyvsp[-2])->adopt ((yyvsp[0])); }
#line 3037 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3043 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 256 "parser.y" /* yacc.c:1646  */
    {(yyvsp[-2])->symbol = TOK_INDEX; destroy((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-3]), (yyvsp[-1]));}
#line 3049 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 257 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 3055 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3061 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 261 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3067 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 262 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3073 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 263 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3079 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 264 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3085 "yyparse.cpp" /* yacc.c:1646  */
    break;


#line 3089 "yyparse.cpp" /* yacc.c:1646  */
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
#line 269 "parser.y" /* yacc.c:1906  */


const char* parser::get_tname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}

bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}

