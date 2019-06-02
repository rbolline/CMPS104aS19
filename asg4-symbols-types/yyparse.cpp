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
    TOK_NULLPTR = 269,
    TOK_ARRAY = 270,
    TOK_ARROW = 271,
    TOK_ALLOC = 272,
    TOK_PTR = 273,
    TOK_EQ = 274,
    TOK_NE = 275,
    TOK_LT = 276,
    TOK_LE = 277,
    TOK_GT = 278,
    TOK_GE = 279,
    TOK_NOT = 280,
    TOK_IDENT = 281,
    TOK_INTCON = 282,
    TOK_CHARCON = 283,
    TOK_STRINGCON = 284,
    TOK_ROOT = 285,
    TOK_BLOCK = 286,
    TOK_CALL = 287,
    TOK_NEW = 288,
    ROOT = 289,
    NUMBER = 290,
    IDENT = 291,
    TOK_TYPE_ID = 292,
    TOK_FUNCTION = 293,
    TOK_INDEX = 294,
    TOK_PARAM = 295,
    POS = 296,
    NEG = 297
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

#line 173 "yyparse.cpp" /* yacc.c:358  */

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
#define YYLAST   806

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,     2,     2,    55,     2,     2,
      41,    42,    53,    51,    48,    52,    49,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    47,
       2,    50,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,    57,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    65,    66,    67,    68,    69,    70,    73,
      76,    82,    84,    85,    88,    89,    93,    94,    95,    96,
      97,    98,    99,   100,   103,   108,   113,   120,   121,   124,
     127,   130,   136,   139,   142,   145,   148,   149,   152,   153,
     154,   155,   156,   157,   161,   164,   167,   170,   176,   181,
     184,   189,   193,   194,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   219,   220,   223,   226,   229,   235,
     238,   243,   244,   248,   249,   251,   254,   255,   256,   257,
     258
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_VOID", "TOK_INT", "TOK_STRING",
  "TOK_BOOL", "TOK_REF", "TOK_CHAR", "TOK_IF", "TOK_ELSE", "TOK_WHILE",
  "TOK_RETURN", "TOK_STRUCT", "TOK_NULLPTR", "TOK_ARRAY", "TOK_ARROW",
  "TOK_ALLOC", "TOK_PTR", "TOK_EQ", "TOK_NE", "TOK_LT", "TOK_LE", "TOK_GT",
  "TOK_GE", "TOK_NOT", "TOK_IDENT", "TOK_INTCON", "TOK_CHARCON",
  "TOK_STRINGCON", "TOK_ROOT", "TOK_BLOCK", "TOK_CALL", "TOK_NEW", "ROOT",
  "NUMBER", "IDENT", "TOK_TYPE_ID", "TOK_FUNCTION", "TOK_INDEX",
  "TOK_PARAM", "'('", "')'", "'['", "']'", "'{'", "'}'", "';'", "','",
  "'.'", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'^'", "POS",
  "NEG", "$accept", "start", "program", "structdef", "typeident", "type",
  "plaintype", "function", "funcident", "block", "optstmt", "statement",
  "vardecl", "while", "ifelse", "dangling", "return", "expr", "allocator",
  "call", "callexpr", "variable", "constant", YY_NULLPTR
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
     295,    40,    41,    91,    93,   123,   125,    59,    44,    46,
      61,    43,    45,    42,    47,    37,    33,    94,   296,   297
};
# endif

#define YYPACT_NINF -149

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-149)))

#define YYTABLE_NINF -23

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -149,     4,   106,  -149,    83,  -149,  -149,  -149,  -149,  -149,
    -149,   -18,   -12,   723,    18,  -149,    37,    60,    73,   320,
     -15,  -149,  -149,  -149,   190,   320,   174,  -149,   320,   320,
    -149,   -19,  -149,  -149,  -149,   224,  -149,  -149,  -149,  -149,
    -149,    -2,  -149,  -149,    34,  -149,  -149,  -149,  -149,   320,
     320,    55,  -149,   344,    54,    82,    88,    66,   672,   754,
     320,  -149,    59,   384,  -149,    13,  -149,    -3,    -3,    75,
      84,    79,  -149,   114,   320,   320,   320,   320,   320,   320,
     320,  -149,   320,   320,   320,   320,   320,   320,   320,  -149,
     320,   400,   440,  -149,   190,   119,   121,   120,   124,   122,
     127,  -149,   672,   455,   320,  -149,   -42,   108,  -149,  -149,
     320,   128,  -149,  -149,    41,    41,    41,    41,    41,    41,
     495,   672,   712,   712,    11,    11,    11,    41,   672,   274,
     274,   109,   130,  -149,   123,   137,    82,   138,  -149,   112,
     510,   139,   290,   550,    86,  -149,   153,  -149,   125,   126,
     320,   129,   143,  -149,   320,  -149,   118,    33,   190,    16,
    -149,  -149,   320,   274,  -149,  -149,   190,   566,   132,   146,
     606,  -149,    17,  -149,   140,   336,   619,  -149,  -149,  -149,
    -149,   149,  -149,  -149,   160,   145,    33,  -149,   320,   161,
    -149,  -149,   659,  -149,  -149
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     1,     0,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,    90,     0,     0,     0,    89,
      83,    86,    87,    88,     0,     0,     0,    35,     0,     0,
       3,     0,    14,     4,    39,     0,     5,    38,    40,    41,
      42,     0,    69,    70,     0,    74,    75,     6,     7,     0,
       0,    83,    52,     0,     0,     0,     0,     0,    72,     0,
       0,    22,     0,     0,    34,     0,    37,    67,    68,     0,
       0,    32,    36,     0,     0,     0,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,    53,    13,     0,     0,     0,     0,     0,
       0,    80,    81,     0,     0,    71,     0,     0,    27,    44,
       0,     0,    33,    85,    65,    66,    63,    64,    61,    62,
       0,    54,    55,    56,    57,    58,    60,    59,    82,     0,
       0,     0,     0,    15,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,     0,    84,    49,    48,    10,     0,
       0,     0,     0,    23,     0,    73,     0,     0,     0,     0,
      45,    27,     0,     0,    50,     9,    12,     0,     0,     0,
       0,    25,     0,    28,     0,     0,     0,    51,    11,    76,
      77,     0,    47,    30,     0,     0,     0,    46,     0,     0,
      29,    26,     0,    31,    78
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,  -149,  -149,    40,     1,   -53,  -149,    48,  -148,
    -149,   -25,  -149,  -149,  -149,  -149,  -149,   -13,  -149,  -149,
    -149,  -149,  -149
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    30,   131,    65,    32,    33,   142,    34,
      35,    36,    37,    38,    39,   164,    40,    41,    42,    43,
      44,    45,    46
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    66,    95,    31,     3,   109,    58,    69,   110,   171,
      72,   -22,    63,    73,    73,    67,    68,    74,    75,    76,
      77,    78,    79,    49,    70,    62,    59,    73,    60,    50,
      74,    75,    76,    77,    78,    79,    91,    92,   191,   106,
      80,    80,   173,   183,    54,    81,   102,   103,    82,    83,
      84,    85,    86,    87,    80,    88,   107,    73,    55,   174,
     184,   114,   115,   116,   117,   118,   119,   120,    88,   121,
     122,   123,   124,   125,   126,   127,    89,   128,    26,    99,
      27,    56,    90,   152,    80,     5,     6,     7,     8,     9,
      10,   140,   100,    96,    57,   132,    59,   143,    88,    94,
      18,    97,   104,    98,   146,   147,    -2,     4,    61,     5,
       6,     7,     8,     9,    10,    11,   108,    12,    13,    14,
      15,    16,   109,    17,    18,   110,   112,   161,   111,    47,
      48,    19,    20,    21,    22,    23,   162,   167,   177,    24,
     113,   170,   133,   159,   134,   136,   135,    25,   137,   176,
     138,    26,   141,    27,   144,   148,   149,    28,    29,   172,
     151,   153,   154,   163,   150,   156,   169,   132,   162,   181,
     168,   190,   165,   166,   180,   192,   159,     5,     6,     7,
       8,     9,    10,    11,   185,    12,    13,   193,    15,    16,
     188,    17,    18,     5,     6,     7,     8,     9,    10,    19,
      20,    21,    22,    23,   189,    16,   178,    24,    18,   175,
       0,     0,     0,     0,     0,    25,    61,     0,     0,    26,
      64,    27,     0,     0,     0,    28,    29,     5,     6,     7,
       8,     9,    10,    11,     0,    12,    13,     0,    15,    16,
       0,    17,    18,     0,     0,     0,     0,     0,     0,    19,
      20,    21,    22,    23,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,    26,
      71,    27,     0,     0,     0,    28,    29,     5,     6,     7,
       8,     9,    10,    11,     0,    12,    13,     0,    15,    16,
       0,    17,    18,     5,     6,     7,     8,     9,    10,    19,
      20,    21,    22,    23,     0,    16,     0,    24,    18,     0,
       0,     0,     0,     0,     0,    25,    61,     0,     0,    26,
       0,    27,     0,     0,     0,    28,    29,     0,     0,     0,
       0,     0,   157,     0,    15,     0,     0,    17,   158,     5,
       6,     7,     8,     9,    10,    19,    51,    21,    22,    23,
       0,    16,     0,    24,    18,     0,     0,     0,     0,     0,
      73,    25,    61,    74,    75,    76,    77,    78,    79,     0,
       0,    28,    29,     0,     0,     0,     0,     0,   186,     0,
       0,     0,     0,     0,   158,     0,     0,    80,     0,     0,
       0,    93,     0,     0,    82,    83,    84,    85,    86,    87,
      73,    88,     0,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,     0,     0,    73,     0,     0,    74,
      75,    76,    77,    78,    79,     0,   105,    80,     0,     0,
       0,     0,     0,     0,    82,    83,    84,    85,    86,    87,
       0,    88,   129,    80,     0,     0,     0,     0,     0,     0,
      82,    83,    84,    85,    86,    87,    73,    88,     0,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
       0,    73,     0,     0,    74,    75,    76,    77,    78,    79,
       0,     0,   130,    80,     0,     0,     0,     0,     0,     0,
      82,    83,    84,    85,    86,    87,     0,    88,    80,   139,
       0,     0,     0,     0,     0,    82,    83,    84,    85,    86,
      87,    73,    88,     0,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,     0,    73,     0,     0,    74,
      75,    76,    77,    78,    79,     0,     0,     0,    80,   145,
       0,     0,     0,     0,     0,    82,    83,    84,    85,    86,
      87,     0,    88,    80,   155,     0,     0,     0,     0,     0,
      82,    83,    84,    85,    86,    87,    73,    88,     0,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,    73,     0,     0,    74,    75,    76,    77,    78,
      79,     0,     0,    80,     0,     0,     0,   160,     0,     0,
      82,    83,    84,    85,    86,    87,     0,    88,   179,    80,
       0,     0,     0,     0,     0,     0,    82,    83,    84,    85,
      86,    87,    73,    88,     0,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,    73,     0,     0,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,    80,
       0,     0,     0,   182,     0,     0,    82,    83,    84,    85,
      86,    87,    80,    88,     0,     0,   187,     0,     0,    82,
      83,    84,    85,    86,    87,    73,    88,     0,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,    73,     0,
       0,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,   194,    80,     0,     0,     0,     0,     0,     0,    82,
      83,    84,    85,    86,    87,    80,    88,     0,     0,     0,
       0,     0,    82,    83,    84,    85,    86,    87,    73,    88,
       0,    74,    75,    76,    77,    78,    79,    15,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,    19,    51,
      21,    22,    23,     0,     0,    80,    24,     0,     0,     0,
       0,     0,     0,     0,    25,    85,    86,    87,    15,    88,
      52,    17,     0,     0,    28,    29,     0,     0,     0,    19,
      51,    21,    22,    23,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    25,   101,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29
};

static const yytype_int16 yycheck[] =
{
      13,    26,    55,     2,     0,    47,    19,    26,    50,   157,
      35,    26,    25,    16,    16,    28,    29,    19,    20,    21,
      22,    23,    24,    41,    43,    24,    41,    16,    43,    41,
      19,    20,    21,    22,    23,    24,    49,    50,   186,    26,
      43,    43,    26,    26,    26,    47,    59,    60,    50,    51,
      52,    53,    54,    55,    43,    57,    43,    16,    21,    43,
      43,    74,    75,    76,    77,    78,    79,    80,    57,    82,
      83,    84,    85,    86,    87,    88,    42,    90,    45,    13,
      47,    21,    48,   136,    43,     3,     4,     5,     6,     7,
       8,   104,    26,     5,    21,    94,    41,   110,    57,    45,
      18,    13,    43,    15,   129,   130,     0,     1,    26,     3,
       4,     5,     6,     7,     8,     9,    41,    11,    12,    13,
      14,    15,    47,    17,    18,    50,    47,    41,    44,    46,
      47,    25,    26,    27,    28,    29,    50,   150,   163,    33,
      26,   154,    23,   142,    23,    21,    26,    41,    26,   162,
      23,    45,    44,    47,    26,    46,    26,    51,    52,   158,
      23,    23,    50,    10,    41,    26,    23,   166,    50,    23,
      41,    26,    47,    47,    42,   188,   175,     3,     4,     5,
       6,     7,     8,     9,    44,    11,    12,    26,    14,    15,
      41,    17,    18,     3,     4,     5,     6,     7,     8,    25,
      26,    27,    28,    29,    44,    15,   166,    33,    18,   161,
      -1,    -1,    -1,    -1,    -1,    41,    26,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    51,    52,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    14,    15,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    51,    52,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    14,    15,
      -1,    17,    18,     3,     4,     5,     6,     7,     8,    25,
      26,    27,    28,    29,    -1,    15,    -1,    33,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    26,    -1,    -1,    45,
      -1,    47,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    14,    -1,    -1,    17,    48,     3,
       4,     5,     6,     7,     8,    25,    26,    27,    28,    29,
      -1,    15,    -1,    33,    18,    -1,    -1,    -1,    -1,    -1,
      16,    41,    26,    19,    20,    21,    22,    23,    24,    -1,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    43,    -1,    -1,
      -1,    47,    -1,    -1,    50,    51,    52,    53,    54,    55,
      16,    57,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      -1,    57,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    16,    57,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    -1,    57,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    16,    57,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    -1,    57,    43,    44,    -1,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    16,    57,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    43,    -1,    -1,    -1,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    -1,    57,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    16,    57,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,
      54,    55,    43,    57,    -1,    -1,    47,    -1,    -1,    50,
      51,    52,    53,    54,    55,    16,    57,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    43,    57,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    16,    57,
      -1,    19,    20,    21,    22,    23,    24,    14,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    -1,    43,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    53,    54,    55,    14,    57,
      47,    17,    -1,    -1,    51,    52,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,    62,     0,     1,     3,     4,     5,     6,     7,
       8,     9,    11,    12,    13,    14,    15,    17,    18,    25,
      26,    27,    28,    29,    33,    41,    45,    47,    51,    52,
      63,    65,    66,    67,    69,    70,    71,    72,    73,    74,
      76,    77,    78,    79,    80,    81,    82,    46,    47,    41,
      41,    26,    47,    77,    26,    21,    21,    21,    77,    41,
      43,    26,    65,    77,    46,    65,    71,    77,    77,    26,
      43,    46,    71,    16,    19,    20,    21,    22,    23,    24,
      43,    47,    50,    51,    52,    53,    54,    55,    57,    42,
      48,    77,    77,    47,    45,    66,     5,    13,    15,    13,
      26,    42,    77,    77,    43,    42,    26,    43,    41,    47,
      50,    44,    47,    26,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    42,
      42,    64,    65,    23,    23,    26,    21,    26,    23,    44,
      77,    44,    68,    77,    26,    44,    71,    71,    46,    26,
      41,    23,    66,    23,    50,    44,    26,    42,    48,    65,
      47,    41,    50,    10,    75,    47,    47,    77,    41,    23,
      77,    69,    65,    26,    43,    68,    77,    71,    64,    42,
      42,    23,    47,    26,    43,    44,    42,    47,    41,    44,
      26,    69,    77,    26,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    62,    62,    62,    62,    63,
      63,    64,    64,    64,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    67,    67,    68,    68,    68,
      68,    68,    69,    69,    69,    69,    70,    70,    71,    71,
      71,    71,    71,    71,    72,    72,    72,    72,    73,    74,
      74,    75,    76,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    78,    78,    78,    79,
      79,    80,    80,    81,    81,    81,    82,    82,    82,    82,
      82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     3,     0,     6,
       5,     4,     3,     0,     1,     4,     1,     1,     1,     1,
       1,     1,     1,     5,     4,     6,     8,     0,     3,     5,
       4,     6,     2,     3,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     2,     3,     5,     7,     7,     5,     5,
       6,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     1,
       1,     3,     2,     5,     1,     1,     7,     7,    10,     2,
       3,     3,     3,     1,     4,     3,     1,     1,     1,     1,
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
#line 918 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 4: /* TOK_INT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 924 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 5: /* TOK_STRING  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 930 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 6: /* TOK_BOOL  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 936 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 7: /* TOK_REF  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 942 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 8: /* TOK_CHAR  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 948 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 9: /* TOK_IF  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 954 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 10: /* TOK_ELSE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 960 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 11: /* TOK_WHILE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 966 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 12: /* TOK_RETURN  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 972 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 13: /* TOK_STRUCT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 978 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 14: /* TOK_NULLPTR  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 984 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 15: /* TOK_ARRAY  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 990 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 16: /* TOK_ARROW  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 996 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 17: /* TOK_ALLOC  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1002 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 18: /* TOK_PTR  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1008 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 19: /* TOK_EQ  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1014 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 20: /* TOK_NE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1020 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 21: /* TOK_LT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1026 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 22: /* TOK_LE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1032 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 23: /* TOK_GT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1038 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 24: /* TOK_GE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1044 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 25: /* TOK_NOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1050 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 26: /* TOK_IDENT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1056 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 27: /* TOK_INTCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1062 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 28: /* TOK_CHARCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1068 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 29: /* TOK_STRINGCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1074 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 30: /* TOK_ROOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1080 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 31: /* TOK_BLOCK  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1086 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 32: /* TOK_CALL  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1092 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 33: /* TOK_NEW  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1098 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 34: /* ROOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1104 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 35: /* NUMBER  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1110 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 36: /* IDENT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1116 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 37: /* TOK_TYPE_ID  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1122 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 38: /* TOK_FUNCTION  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1128 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 39: /* TOK_INDEX  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1134 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 40: /* TOK_PARAM  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1140 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 41: /* '('  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1146 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 42: /* ')'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1152 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 43: /* '['  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1158 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 44: /* ']'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1164 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 45: /* '{'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1170 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 46: /* '}'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1176 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 47: /* ';'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1182 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 48: /* ','  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1188 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 49: /* '.'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1194 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 50: /* '='  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1200 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 51: /* '+'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1206 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 52: /* '-'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1212 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 53: /* '*'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1218 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 54: /* '/'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1224 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 55: /* '%'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1230 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 56: /* '!'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1236 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 57: /* '^'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1242 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 58: /* POS  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1248 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 59: /* NEG  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1254 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 61: /* start  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1260 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 62: /* program  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1266 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 63: /* structdef  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1272 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 64: /* typeident  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1278 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 65: /* type  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1284 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 66: /* plaintype  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1290 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 67: /* function  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1296 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 68: /* funcident  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1302 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 69: /* block  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1308 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 70: /* optstmt  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1314 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 71: /* statement  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1320 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 72: /* vardecl  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1326 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 73: /* while  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1332 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 74: /* ifelse  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1338 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 75: /* dangling  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1344 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 76: /* return  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1350 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 77: /* expr  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1356 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 78: /* allocator  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1362 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 79: /* call  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1368 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 80: /* callexpr  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1374 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 81: /* variable  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1380 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 82: /* constant  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1386 "yyparse.cpp" /* yacc.c:684  */
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
#line 1732 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 4: /* TOK_INT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1738 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 5: /* TOK_STRING  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1744 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 6: /* TOK_BOOL  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1750 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 7: /* TOK_REF  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1756 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 8: /* TOK_CHAR  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1762 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 9: /* TOK_IF  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1768 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 10: /* TOK_ELSE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1774 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 11: /* TOK_WHILE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1780 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 12: /* TOK_RETURN  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1786 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 13: /* TOK_STRUCT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1792 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 14: /* TOK_NULLPTR  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1798 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 15: /* TOK_ARRAY  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1804 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 16: /* TOK_ARROW  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1810 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 17: /* TOK_ALLOC  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1816 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 18: /* TOK_PTR  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1822 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 19: /* TOK_EQ  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1828 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 20: /* TOK_NE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1834 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 21: /* TOK_LT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1840 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 22: /* TOK_LE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1846 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 23: /* TOK_GT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1852 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 24: /* TOK_GE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1858 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 25: /* TOK_NOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1864 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 26: /* TOK_IDENT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1870 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 27: /* TOK_INTCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1876 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 28: /* TOK_CHARCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1882 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 29: /* TOK_STRINGCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1888 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 30: /* TOK_ROOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1894 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 31: /* TOK_BLOCK  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1900 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 32: /* TOK_CALL  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1906 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 33: /* TOK_NEW  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1912 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 34: /* ROOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1918 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 35: /* NUMBER  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1924 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 36: /* IDENT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1930 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 37: /* TOK_TYPE_ID  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1936 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 38: /* TOK_FUNCTION  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1942 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 39: /* TOK_INDEX  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1948 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 40: /* TOK_PARAM  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1954 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 41: /* '('  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1960 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 42: /* ')'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1966 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 43: /* '['  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1972 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 44: /* ']'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1978 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 45: /* '{'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1984 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 46: /* '}'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1990 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 47: /* ';'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1996 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 48: /* ','  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2002 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 49: /* '.'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2008 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 50: /* '='  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2014 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 51: /* '+'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2020 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 52: /* '-'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2026 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 53: /* '*'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2032 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 54: /* '/'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2038 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 55: /* '%'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2044 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 56: /* '!'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2050 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 57: /* '^'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2056 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 58: /* POS  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2062 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 59: /* NEG  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2068 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 61: /* start  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2074 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 62: /* program  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2080 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 63: /* structdef  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2086 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 64: /* typeident  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2092 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 65: /* type  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2098 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 66: /* plaintype  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2104 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 67: /* function  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2110 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 68: /* funcident  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2116 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 69: /* block  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2122 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 70: /* optstmt  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2128 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 71: /* statement  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2134 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 72: /* vardecl  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2140 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 73: /* while  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2146 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 74: /* ifelse  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2152 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 75: /* dangling  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2158 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 76: /* return  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2164 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 77: /* expr  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2170 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 78: /* allocator  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2176 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 79: /* call  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2182 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 80: /* callexpr  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2188 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 81: /* variable  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2194 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 82: /* constant  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2200 "yyparse.cpp" /* yacc.c:1257  */
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

#line 2290 "yyparse.cpp" /* yacc.c:1429  */
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
#line 2472 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 65 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2478 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 66 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2484 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2490 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 2496 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 2502 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 70 "parser.y" /* yacc.c:1646  */
    { (yyval) = parser::root; }
#line 2508 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 74 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-3]), (yyvsp[-1])); destroy((yyvsp[0])); 
              (yyvsp[-4])->symbol = TOK_TYPE_ID; (yyval) = (yyvsp[-5])->adopt ((yyvsp[-4]), (yyvsp[-2])); }
#line 2515 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[0])); 
              (yyvsp[-3])->symbol = TOK_TYPE_ID; (yyval) = (yyvsp[-4])->adopt ((yyvsp[-3]), (yyvsp[-1])); }
#line 2522 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 82 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[-1]));
                                           (yyval) = (yyvsp[-3])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2529 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 84 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-1])); }
#line 2535 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 85 "parser.y" /* yacc.c:1646  */
    { (yyval) = nullptr; }
#line 2541 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 88 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2547 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 89 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[0]));
                                          (yyval) = (yyvsp[-3])->adopt((yyvsp[-1])); }
#line 2554 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 93 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2560 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 94 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2566 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 95 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2572 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 96 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2578 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 97 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2584 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 98 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2590 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 99 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2596 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 100 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-3]), (yyvsp[-2]));
                                                destroy((yyvsp[0]));
                                                (yyval) = (yyvsp[-4])->adopt((yyvsp[-1])); }
#line 2604 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 103 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[0]));
                                                (yyval) = (yyvsp[-3])->adopt((yyvsp[-1])); }
#line 2611 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 108 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1]));
(yyvsp[-3])->symbol = TOK_PARAM; (yyvsp[-3])->adopt((yyvsp[-2])); 
(yyval) = (new astree(TOK_FUNCTION, (yyvsp[-5])->lloc, ""))
        ->adopt((new astree(TOK_TYPE_ID, (yyvsp[-5])->lloc, ""))->adopt((yyvsp[-5]), (yyvsp[-4]))
                , (yyvsp[-3]), (yyvsp[0])); }
#line 2621 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 113 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1]));
(yyvsp[-3])->symbol = TOK_PARAM; (yyvsp[-3])->adopt((yyvsp[-2])); destroy((yyvsp[-6]), (yyvsp[-5]));
(yyval) = (new astree(TOK_FUNCTION, (yyvsp[-7])->lloc, ""))
        ->adopt((new astree(TOK_TYPE_ID, (yyvsp[-7])->lloc, ""))->adopt((yyvsp[-7]), (yyvsp[-4]))
                , (yyvsp[-3]), (yyvsp[0])); }
#line 2631 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 120 "parser.y" /* yacc.c:1646  */
    { (yyval) = nullptr; }
#line 2637 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 122 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]);
          (yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-1])->lloc, ""))->adopt((yyvsp[-1]), (yyvsp[0]));}
#line 2644 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 125 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[-1])); (yyval) = (yyvsp[-4]);
          (yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-3])->lloc, ""))->adopt((yyvsp[-3]), (yyvsp[0]));}
#line 2651 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 128 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2])); (yyval) = (yyvsp[-3]);
          (yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-1])->lloc, ""))->adopt((yyvsp[-1]), (yyvsp[0]));}
#line 2658 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 131 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[-1])); destroy((yyvsp[-4])); (yyval) = (yyvsp[-5]);
          (yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-3])->lloc, ""))->adopt((yyvsp[-3]), (yyvsp[0]));}
#line 2665 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 136 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); 
                                          (yyvsp[-1])->symbol = TOK_BLOCK;
                                          (yyval) = (yyvsp[-1]); }
#line 2673 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 139 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1]), (yyvsp[0])); 
                                          (yyvsp[-2])->symbol = TOK_BLOCK;
                                          (yyval) = (yyvsp[-2]); }
#line 2681 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 142 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0]));
                                          (yyvsp[-1])->symbol = TOK_BLOCK;
                                          (yyval) = (yyvsp[-1]); }
#line 2689 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 145 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = nullptr; }
#line 2695 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 148 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2701 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 149 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2707 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 152 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2713 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 153 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2719 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 154 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2725 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 155 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2731 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 156 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2737 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 157 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2743 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 161 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->symbol = TOK_TYPE_ID;
                                               destroy((yyvsp[0]));
                                               (yyval) = (yyvsp[-2])->adopt((yyvsp[-1])); }
#line 2751 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 164 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-3])->symbol = TOK_TYPE_ID;
                                               destroy((yyvsp[0]));
                                               (yyval) = (yyvsp[-2])->adopt((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1])); }
#line 2759 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 167 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-3])->symbol = TOK_TYPE_ID;
                                               destroy((yyvsp[0])); destroy((yyvsp[-5]), (yyvsp[-4])); 
                                               (yyval) = (yyvsp[-2])->adopt((yyvsp[-6]), (yyvsp[-3]), (yyvsp[-1])); }
#line 2767 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 170 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-6])->symbol = TOK_TYPE_ID;
                                               destroy((yyvsp[0])); destroy((yyvsp[-5]), (yyvsp[-3])); 
                                               (yyval) = (yyvsp[-2])->adopt((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1])); }
#line 2775 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 177 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-3]), (yyvsp[-1])); (yyval) = (yyvsp[-4])->adopt((yyvsp[-2]), (yyvsp[0]));  }
#line 2781 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 182 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[-3]), (yyvsp[-1]));
                                        (yyval) =(yyvsp[-4])->adopt((yyvsp[-2]),(yyvsp[0])); }
#line 2788 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 185 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-4]), (yyvsp[-2])); (yyval) = (yyvsp[-5])->adopt((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 2794 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 189 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1])); (yyval) = (yyvsp[0]); }
#line 2800 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 193 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2806 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 194 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-1])); }
#line 2812 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 198 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2818 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 199 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2824 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 200 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2830 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 201 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2836 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 202 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2842 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 203 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2848 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 204 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2854 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 205 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2860 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2866 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 207 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2872 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 208 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2878 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 209 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2884 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 210 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2890 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 211 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt_sym ((yyvsp[0]), POS); }
#line 2896 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 212 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt_sym ((yyvsp[0]), NEG); }
#line 2902 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 213 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2908 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 214 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2914 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 215 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[-2]), (yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2920 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 216 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2926 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 217 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[0]));
                                                 (yyval) = (yyvsp[-4])->adopt((yyvsp[-3]), (yyvsp[-1])); }
#line 2933 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 219 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2939 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 220 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2945 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 224 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-5]), (yyvsp[-3])); destroy((yyvsp[-2]), (yyvsp[0]));
                (yyval) = (yyvsp[-6])->adopt((yyvsp[-4]), (yyvsp[-1])); }
#line 2952 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 227 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-5]), (yyvsp[-2])); destroy((yyvsp[-1]), (yyvsp[0]));
                destroy((yyvsp[-4])); (yyval) = (yyvsp[-6])->adopt((yyvsp[-3])); }
#line 2959 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 230 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-8]), (yyvsp[-6])); destroy((yyvsp[-4]), (yyvsp[-3]));
                destroy((yyvsp[-2]), (yyvsp[0])); destroy((yyvsp[-7])); (yyval) = (yyvsp[-9])->adopt((yyvsp[-5]), (yyvsp[-1])); }
#line 2966 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 235 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[0]));
                                               (yyvsp[-1])->symbol = TOK_CALL;
                                               (yyval) = (yyvsp[-1]); }
#line 2974 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 238 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[0]));
                                                (yyvsp[-1])->symbol = TOK_CALL;
                                                (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2])); }
#line 2982 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 243 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2988 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 244 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[-1]));
                                             (yyval) = (yyvsp[-2])->adopt ((yyvsp[0])); }
#line 2995 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 248 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3001 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 250 "parser.y" /* yacc.c:1646  */
    {(yyvsp[-2])->symbol = TOK_INDEX; destroy((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-3]), (yyvsp[-1]));}
#line 3007 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 3013 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3019 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3025 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 256 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3031 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 257 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3037 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3043 "yyparse.cpp" /* yacc.c:1646  */
    break;


#line 3047 "yyparse.cpp" /* yacc.c:1646  */
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
#line 263 "parser.y" /* yacc.c:1906  */


const char* parser::get_tname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}

bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}
