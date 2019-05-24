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
#define YYLAST   591

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

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
       2,     2,     2,    52,     2,     2,     2,    51,     2,     2,
      37,    38,    49,    47,    44,    48,    45,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,    46,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      35,    36,    54,    55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    59,    59,    62,    63,    64,    65,    66,    67,    72,
      73,    75,    81,    82,    86,    87,    88,    89,    92,    97,
     104,   105,   107,   111,   114,   117,   120,   121,   124,   125,
     126,   127,   128,   129,   132,   135,   147,   152,   157,   158,
     162,   163,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   190,   193,   196,   203,   206,   211,   212,
     216,   217,   219,   222,   223,   224,   225,   226
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
  "TOK_FUNCTION", "TOK_INDEX", "TOK_PARAM", "'('", "')'", "'['", "']'",
  "'{'", "'}'", "';'", "','", "'.'", "'='", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'!'", "'^'", "POS", "NEG", "$accept", "start", "program",
  "structdef", "type", "plaintype", "function", "funcident", "block",
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
     285,   286,   287,   288,   289,   290,   291,    40,    41,    91,
      93,   123,   125,    59,    44,    46,    61,    43,    45,    42,
      47,    37,    33,    94,   292,   293
};
# endif

#define YYPACT_NINF -49

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-49)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -49,     5,   106,   -49,    13,   -49,   -49,   -49,   -14,     3,
     516,    -5,   -49,    46,    56,    57,   543,    10,   -49,   -49,
     -49,   543,   152,   -49,   543,   543,    84,    54,   -49,   -49,
     -49,   198,   -49,   -49,   -49,   -49,   -49,   258,   -49,   -49,
      -7,   -49,   -49,   -49,   -49,   543,   543,   -49,   297,    37,
      23,    29,    -6,    33,   523,   313,   -49,    62,   -49,   129,
     129,    47,    68,   -13,   -49,   -49,    70,   543,   543,   543,
     543,   543,   543,   543,   -49,   543,   543,   543,   543,   543,
     543,   543,   -49,   543,   352,   368,   -49,   -49,    74,    75,
      80,    79,    81,    88,   -49,    33,   -49,   -33,   -49,    76,
     -49,   -49,   543,   -49,    85,    33,    85,    85,    85,    85,
     407,    33,   166,   166,   212,   212,    33,    85,    33,   244,
     244,   -49,    96,    93,    23,   105,   -49,   -49,     4,   420,
     -49,    98,   -49,   543,    97,   115,   -49,     2,    17,   116,
     -49,   244,   -49,   459,   102,   121,   -49,   122,   -49,   -49,
     -49,   -49,   111,   -49,   543,   475,   -49
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     1,     0,    14,    15,    16,     0,     0,
       0,     0,    77,     0,     0,     0,    76,    70,    73,    74,
      75,     0,     0,    25,     0,     0,     3,     0,    12,     4,
      29,     0,     5,    28,    30,    31,    32,     0,    57,    58,
       0,    61,    62,     6,     7,     0,     0,    40,     0,     0,
       0,     0,     0,    60,     0,     0,    24,     0,    27,    55,
      56,     0,     0,     0,    23,    26,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,     0,     0,
       0,     0,    66,     0,     0,     0,    41,     9,     0,     0,
       0,     0,     0,     0,    67,    68,    59,     0,    11,     0,
      20,    34,     0,    72,    53,    54,    51,    52,    49,    50,
       0,    42,    43,    44,    45,    46,    48,    47,    69,     0,
       0,    13,     0,     0,     0,     0,    18,    10,     0,     0,
      71,    39,    36,     0,     0,     0,    17,     0,     0,     0,
      35,     0,    37,     0,     0,     0,    19,     0,    21,    38,
      63,    64,     0,    22,     0,     0,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -49,   -49,   -49,   -49,    -1,   -48,   -49,   -49,    14,   -49,
     -19,   -49,   -49,   -49,   -49,   -49,   -10,   -49,   -49,   -49,
     -49,   -49
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    26,    57,    28,    29,   128,    30,    31,
      32,    33,    34,    35,   142,    36,    37,    38,    39,    40,
      41,    42
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    27,    88,    58,    92,     3,    53,     5,     6,     7,
     101,    55,    65,   102,    59,    60,    13,    93,    49,    15,
       5,     6,     7,    45,   100,    62,     5,     6,     7,    13,
     101,    82,    15,   102,    89,    84,    85,    83,    15,    90,
      46,    91,   137,    22,    95,    23,    66,    54,   138,    67,
      68,    69,    70,    71,    72,    43,    44,   104,   105,   106,
     107,   108,   109,   110,    50,   111,   112,   113,   114,   115,
     116,   117,    73,   118,    51,    52,   135,    63,    87,    75,
      76,    77,    78,    79,    80,    97,    81,     5,     6,     7,
      98,    99,   129,   103,   121,   122,    13,   124,    66,    15,
     131,   132,    68,   123,   125,   141,    -2,     4,   126,     5,
       6,     7,     8,   134,     9,    10,    11,    12,    13,   127,
      14,    15,   149,   143,    73,   136,    61,   139,    16,    17,
      18,    19,    20,   133,   144,   145,    80,   147,    81,   148,
     151,   152,    66,    21,   155,   153,    68,    22,   154,    23,
       0,   146,     0,    24,    25,     5,     6,     7,     8,     0,
       9,    10,     0,    12,    13,     0,    14,    15,    73,     0,
       0,     0,     0,     0,    16,    17,    18,    19,    20,    66,
      80,     0,    67,    68,    69,    70,    71,    72,     0,    21,
       0,     0,     0,    22,    56,    23,     0,     0,     0,    24,
      25,     5,     6,     7,     8,    73,     9,    10,     0,    12,
      13,     0,    14,    15,     0,    78,    79,    80,     0,    81,
      16,    17,    18,    19,    20,    66,     0,     0,    67,    68,
      69,    70,    71,    72,     0,    21,     0,     0,     0,    22,
      64,    23,     0,     0,     0,    24,    25,     5,     6,     7,
       8,    73,     9,    10,     0,    12,    13,     0,    14,    15,
       0,     0,     0,    80,     0,    81,    16,    17,    18,    19,
      20,    66,     0,     0,    67,    68,    69,    70,    71,    72,
       0,    21,     0,     0,     0,    22,     0,    23,     0,     0,
       0,    24,    25,     0,     0,     0,     0,    73,     0,     0,
       0,    74,     0,     0,    75,    76,    77,    78,    79,    80,
      66,    81,     0,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,     0,    66,     0,     0,    67,
      68,    69,    70,    71,    72,     0,    73,     0,     0,     0,
      86,     0,     0,    75,    76,    77,    78,    79,    80,     0,
      81,    96,    73,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    66,    81,     0,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
       0,    66,     0,     0,    67,    68,    69,    70,    71,    72,
     119,    73,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,     0,    81,   120,    73,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      66,    81,     0,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,    66,     0,     0,    67,    68,    69,    70,
      71,    72,     0,     0,     0,     0,    73,   130,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    73,
      81,     0,     0,   140,     0,     0,    75,    76,    77,    78,
      79,    80,    66,    81,     0,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,     0,    66,     0,
       0,    67,    68,    69,    70,    71,    72,   150,    73,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,     0,    81,   156,    73,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    12,    81,     0,
      14,     0,     0,     0,    12,     0,     0,    14,    16,    17,
      18,    19,    20,     0,     0,    16,    17,    18,    19,    20,
       0,     0,     0,    21,    12,     0,     0,    14,     0,    47,
      21,    94,     0,    24,    25,    16,    17,    18,    19,    20,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    25
};

static const yytype_int16 yycheck[] =
{
      10,     2,    50,    22,    10,     0,    16,     3,     4,     5,
      43,    21,    31,    46,    24,    25,    12,    23,    23,    15,
       3,     4,     5,    37,    37,    26,     3,     4,     5,    12,
      43,    38,    15,    46,     5,    45,    46,    44,    15,    10,
      37,    12,    38,    41,    54,    43,    13,    37,    44,    16,
      17,    18,    19,    20,    21,    42,    43,    67,    68,    69,
      70,    71,    72,    73,    18,    75,    76,    77,    78,    79,
      80,    81,    39,    83,    18,    18,   124,    23,    41,    46,
      47,    48,    49,    50,    51,    23,    53,     3,     4,     5,
      43,    23,   102,    23,    20,    20,    12,    18,    13,    15,
     119,   120,    17,    23,    23,     7,     0,     1,    20,     3,
       4,     5,     6,    20,     8,     9,    10,    11,    12,    43,
      14,    15,   141,   133,    39,    20,    42,   128,    22,    23,
      24,    25,    26,    37,    37,    20,    51,   138,    53,    23,
      38,    20,    13,    37,   154,    23,    17,    41,    37,    43,
      -1,   137,    -1,    47,    48,     3,     4,     5,     6,    -1,
       8,     9,    -1,    11,    12,    -1,    14,    15,    39,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    13,
      51,    -1,    16,    17,    18,    19,    20,    21,    -1,    37,
      -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,    47,
      48,     3,     4,     5,     6,    39,     8,     9,    -1,    11,
      12,    -1,    14,    15,    -1,    49,    50,    51,    -1,    53,
      22,    23,    24,    25,    26,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    37,    -1,    -1,    -1,    41,
      42,    43,    -1,    -1,    -1,    47,    48,     3,     4,     5,
       6,    39,     8,     9,    -1,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    51,    -1,    53,    22,    23,    24,    25,
      26,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    37,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    -1,    46,    47,    48,    49,    50,    51,
      13,    53,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    39,    -1,    -1,    -1,
      43,    -1,    -1,    46,    47,    48,    49,    50,    51,    -1,
      53,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    13,    53,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    -1,    53,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      13,    53,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    39,
      53,    -1,    -1,    43,    -1,    -1,    46,    47,    48,    49,
      50,    51,    13,    53,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    -1,    53,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    11,    53,    -1,
      14,    -1,    -1,    -1,    11,    -1,    -1,    14,    22,    23,
      24,    25,    26,    -1,    -1,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    37,    11,    -1,    -1,    14,    -1,    43,
      37,    38,    -1,    47,    48,    22,    23,    24,    25,    26,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    58,     0,     1,     3,     4,     5,     6,     8,
       9,    10,    11,    12,    14,    15,    22,    23,    24,    25,
      26,    37,    41,    43,    47,    48,    59,    60,    61,    62,
      64,    65,    66,    67,    68,    69,    71,    72,    73,    74,
      75,    76,    77,    42,    43,    37,    37,    43,    72,    23,
      18,    18,    18,    72,    37,    72,    42,    60,    66,    72,
      72,    42,    60,    23,    42,    66,    13,    16,    17,    18,
      19,    20,    21,    39,    43,    46,    47,    48,    49,    50,
      51,    53,    38,    44,    72,    72,    43,    41,    61,     5,
      10,    12,    10,    23,    38,    72,    38,    23,    43,    23,
      37,    43,    46,    23,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    38,
      38,    20,    20,    23,    18,    23,    20,    43,    63,    72,
      40,    66,    66,    37,    20,    61,    20,    38,    44,    60,
      43,     7,    70,    72,    37,    20,    64,    60,    23,    66,
      38,    38,    20,    23,    37,    72,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    58,    58,    58,    58,    58,    59,
      59,    59,    60,    60,    61,    61,    61,    61,    61,    62,
      63,    63,    63,    64,    64,    64,    65,    65,    66,    66,
      66,    66,    66,    66,    67,    67,    68,    69,    70,    70,
      71,    71,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    73,    73,    74,    74,    75,    75,
      76,    76,    76,    77,    77,    77,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     3,     0,     3,
       4,     3,     1,     4,     1,     1,     1,     5,     4,     6,
       0,     3,     4,     2,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     2,     3,     5,     5,     6,     2,     0,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     1,     1,     3,
       2,     1,     1,     7,     7,    10,     2,     3,     3,     3,
       1,     4,     3,     1,     1,     1,     1,     1
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
#line 854 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 4: /* TOK_INT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 860 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 5: /* TOK_STRING  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 866 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 6: /* TOK_IF  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 872 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 7: /* TOK_ELSE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 878 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 8: /* TOK_WHILE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 884 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 9: /* TOK_RETURN  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 890 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 10: /* TOK_STRUCT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 896 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 11: /* TOK_NULLPTR  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 902 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 12: /* TOK_ARRAY  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 908 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 13: /* TOK_ARROW  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 914 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 14: /* TOK_ALLOC  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 920 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 15: /* TOK_PTR  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 926 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 16: /* TOK_EQ  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 932 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 17: /* TOK_NE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 938 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 18: /* TOK_LT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 944 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 19: /* TOK_LE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 950 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 20: /* TOK_GT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 956 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 21: /* TOK_GE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 962 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 22: /* TOK_NOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 968 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 23: /* TOK_IDENT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 974 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 24: /* TOK_INTCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 980 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 25: /* TOK_CHARCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 986 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 26: /* TOK_STRINGCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 992 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 27: /* TOK_ROOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 998 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 28: /* TOK_BLOCK  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1004 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 29: /* TOK_CALL  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1010 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 30: /* ROOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1016 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 31: /* NUMBER  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1022 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 32: /* IDENT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1028 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 33: /* TOK_TYPE_ID  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1034 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 34: /* TOK_FUNCTION  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1040 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 35: /* TOK_INDEX  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1046 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 36: /* TOK_PARAM  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1052 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 37: /* '('  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1058 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 38: /* ')'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1064 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 39: /* '['  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1070 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 40: /* ']'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1076 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 41: /* '{'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1082 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 42: /* '}'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1088 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 43: /* ';'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1094 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 44: /* ','  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1100 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 45: /* '.'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1106 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 46: /* '='  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1112 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 47: /* '+'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1118 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 48: /* '-'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1124 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 49: /* '*'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1130 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 50: /* '/'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1136 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 51: /* '%'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1142 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 52: /* '!'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1148 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 53: /* '^'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1154 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 54: /* POS  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1160 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 55: /* NEG  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1166 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 57: /* start  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1172 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 58: /* program  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1178 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 59: /* structdef  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1184 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 60: /* type  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1190 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 61: /* plaintype  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1196 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 62: /* function  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1202 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 63: /* funcident  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1208 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 64: /* block  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1214 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 65: /* optstmt  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1220 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 66: /* statement  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1226 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 67: /* vardecl  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1232 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 68: /* while  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1238 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 69: /* ifelse  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1244 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 70: /* dangling  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1250 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 71: /* return  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1256 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 72: /* expr  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1262 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 73: /* allocator  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1268 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 74: /* call  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1274 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 75: /* callexpr  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1280 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 76: /* variable  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1286 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 77: /* constant  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1292 "yyparse.cpp" /* yacc.c:684  */
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
#line 1638 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 4: /* TOK_INT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1644 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 5: /* TOK_STRING  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1650 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 6: /* TOK_IF  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1656 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 7: /* TOK_ELSE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1662 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 8: /* TOK_WHILE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1668 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 9: /* TOK_RETURN  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1674 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 10: /* TOK_STRUCT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1680 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 11: /* TOK_NULLPTR  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1686 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 12: /* TOK_ARRAY  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1692 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 13: /* TOK_ARROW  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1698 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 14: /* TOK_ALLOC  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1704 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 15: /* TOK_PTR  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1710 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 16: /* TOK_EQ  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1716 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 17: /* TOK_NE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1722 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 18: /* TOK_LT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1728 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 19: /* TOK_LE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1734 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 20: /* TOK_GT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1740 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 21: /* TOK_GE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1746 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 22: /* TOK_NOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1752 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 23: /* TOK_IDENT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1758 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 24: /* TOK_INTCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1764 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 25: /* TOK_CHARCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1770 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 26: /* TOK_STRINGCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1776 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 27: /* TOK_ROOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1782 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 28: /* TOK_BLOCK  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1788 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 29: /* TOK_CALL  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1794 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 30: /* ROOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1800 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 31: /* NUMBER  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1806 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 32: /* IDENT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1812 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 33: /* TOK_TYPE_ID  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1818 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 34: /* TOK_FUNCTION  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1824 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 35: /* TOK_INDEX  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1830 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 36: /* TOK_PARAM  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1836 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 37: /* '('  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1842 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 38: /* ')'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1848 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 39: /* '['  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1854 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 40: /* ']'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1860 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 41: /* '{'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1866 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 42: /* '}'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1872 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 43: /* ';'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1878 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 44: /* ','  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1884 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 45: /* '.'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1890 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 46: /* '='  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1896 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 47: /* '+'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1902 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 48: /* '-'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1908 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 49: /* '*'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1914 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 50: /* '/'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1920 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 51: /* '%'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1926 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 52: /* '!'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1932 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 53: /* '^'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1938 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 54: /* POS  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1944 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 55: /* NEG  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1950 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 57: /* start  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1956 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 58: /* program  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1962 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 59: /* structdef  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1968 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 60: /* type  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1974 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 61: /* plaintype  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1980 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 62: /* function  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1986 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 63: /* funcident  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1992 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 64: /* block  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1998 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 65: /* optstmt  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2004 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 66: /* statement  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2010 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 67: /* vardecl  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2016 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 68: /* while  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2022 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 69: /* ifelse  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2028 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 70: /* dangling  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2034 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 71: /* return  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2040 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 72: /* expr  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2046 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 73: /* allocator  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2052 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 74: /* call  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2058 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 75: /* callexpr  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2064 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 76: /* variable  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2070 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 77: /* constant  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2076 "yyparse.cpp" /* yacc.c:1257  */
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

#line 2166 "yyparse.cpp" /* yacc.c:1429  */
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
#line 59 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]) = nullptr; }
#line 2348 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 62 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2354 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 63 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2360 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 64 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2366 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 65 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 2372 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 66 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 2378 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 67 "parser.y" /* yacc.c:1646  */
    { (yyval) = parser::root; }
#line 2384 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 72 "parser.y" /* yacc.c:1646  */
    {destroy((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-1]));}
#line 2390 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 73 "parser.y" /* yacc.c:1646  */
    {destroy((yyvsp[0])); 
    (yyval) = (yyvsp[-3])->adopt((new astree(TOK_TYPE_ID, (yyvsp[-3])->lloc, ""))->adopt((yyvsp[-2]), (yyvsp[-1])));}
#line 2397 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 75 "parser.y" /* yacc.c:1646  */
    {destroy((yyvsp[-1]), (yyvsp[0])); (yyval) = (yyvsp[-2]);}
#line 2403 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 81 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2409 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 82 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[0]));
                                          (yyval) = (yyvsp[-3])->adopt((yyvsp[-1])); }
#line 2416 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 86 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2422 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 87 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2428 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 88 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2434 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 89 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-3]), (yyvsp[-2]));
                                                destroy((yyvsp[0]));
                                                (yyval) = (yyvsp[-4])->adopt((yyvsp[-1])); }
#line 2442 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 92 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]));
                                                destroy((yyvsp[0]));
                                                (yyval) = (yyvsp[-3])->adopt((yyvsp[-1])); }
#line 2450 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 97 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1]));
(yyvsp[-3])->symbol = TOK_PARAM; (yyvsp[-3])->adopt((yyvsp[-2])); 
(yyval) = (new astree(TOK_FUNCTION, (yyvsp[-5])->lloc, ""))
        ->adopt((new astree(TOK_TYPE_ID, (yyvsp[-5])->lloc, ""))->adopt((yyvsp[-5]), (yyvsp[-4]))
                , (yyvsp[-3]), (yyvsp[0])); }
#line 2460 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 104 "parser.y" /* yacc.c:1646  */
    { (yyval) = nullptr; }
#line 2466 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 106 "parser.y" /* yacc.c:1646  */
    {(yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-1])->lloc, ""))->adopt((yyvsp[-1]), (yyvsp[0]));}
#line 2472 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 108 "parser.y" /* yacc.c:1646  */
    {(yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-1])->lloc, ""))->adopt((yyvsp[-1]), (yyvsp[0]));}
#line 2478 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 111 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); 
                                          (yyvsp[-1])->symbol = TOK_BLOCK;
                                          (yyval) = (yyvsp[-1]); }
#line 2486 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 114 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0]));
                                          (yyvsp[-1])->symbol = TOK_BLOCK;
                                          (yyval) = (yyvsp[-1]); }
#line 2494 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 117 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); }
#line 2500 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 120 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2506 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 121 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2512 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 124 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2518 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 125 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2524 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 126 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2530 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 127 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2536 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 128 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2542 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 129 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2548 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 132 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->symbol = TOK_TYPE_ID;
                                          destroy((yyvsp[0]));
                                          (yyval) = (yyvsp[-2])->adopt((yyvsp[-1])); }
#line 2556 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 135 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-3])->symbol = TOK_TYPE_ID;
                                          destroy((yyvsp[0]));
                                          (yyval) = (yyvsp[-2])->adopt((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1])); }
#line 2564 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 148 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-3]), (yyvsp[-1])); (yyval) = (yyvsp[-4])->adopt((yyvsp[-2]), (yyvsp[0]));  }
#line 2570 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 153 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-4]), (yyvsp[-2])); (yyval) = (yyvsp[-5])->adopt((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 2576 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 157 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1])); (yyval) = (yyvsp[0]); }
#line 2582 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 158 "parser.y" /* yacc.c:1646  */
    { (yyval) = nullptr; }
#line 2588 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 162 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2594 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 163 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-1])); }
#line 2600 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 167 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2606 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 168 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2612 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 169 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2618 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 170 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2624 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 171 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2630 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 172 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2636 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 173 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2642 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 174 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2648 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 175 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2654 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 176 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2660 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 177 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2666 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 178 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2672 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 179 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2678 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 180 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt_sym ((yyvsp[0]), POS); }
#line 2684 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 181 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt_sym ((yyvsp[0]), NEG); }
#line 2690 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 182 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2696 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 183 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2702 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 184 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[-2]), (yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2708 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 185 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2714 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2720 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 187 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2726 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 191 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-5]), (yyvsp[-3])); destroy((yyvsp[-2]), (yyvsp[0]));
                (yyval) = (yyvsp[-6])->adopt((yyvsp[-4]), (yyvsp[-1])); }
#line 2733 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 194 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-5]), (yyvsp[-2])); destroy((yyvsp[-1]), (yyvsp[0]));
                destroy((yyvsp[-4])); (yyval) = (yyvsp[-6])->adopt((yyvsp[-3])); }
#line 2740 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 198 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-8]), (yyvsp[-6])); destroy((yyvsp[-4]), (yyvsp[-3]));
                destroy((yyvsp[-2]), (yyvsp[0])); (yyval) = (yyvsp[-9])->adopt((yyvsp[-7]), (yyvsp[-1])); }
#line 2747 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 203 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[0]));
                                               (yyvsp[-1])->symbol = TOK_CALL;
                                               (yyval) = (yyvsp[-1]); }
#line 2755 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 206 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[0]));
                                                (yyvsp[-1])->symbol = TOK_CALL;
                                                (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2])); }
#line 2763 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 211 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2769 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 212 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[-1]));
                                             (yyval) = (yyvsp[-2])->adopt ((yyvsp[0])); }
#line 2776 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 216 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2782 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 218 "parser.y" /* yacc.c:1646  */
    {(yyvsp[-2])->symbol = TOK_INDEX; destroy((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-3]), (yyvsp[-1]));}
#line 2788 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 219 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2794 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2800 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 223 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2806 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 224 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2812 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 225 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2818 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 226 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2824 "yyparse.cpp" /* yacc.c:1646  */
    break;


#line 2828 "yyparse.cpp" /* yacc.c:1646  */
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
#line 228 "parser.y" /* yacc.c:1906  */


const char* parser::get_tname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}

bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}
