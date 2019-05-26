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
#define YYLAST   761

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  186

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
static const yytype_uint8 yyrline[] =
{
       0,    62,    62,    65,    66,    67,    68,    69,    70,    73,
      78,    79,    83,    84,    88,    89,    90,    91,    92,    93,
      94,   100,   107,   108,   110,   113,   115,   121,   124,   127,
     130,   133,   134,   137,   138,   139,   140,   141,   142,   147,
     150,   153,   156,   162,   167,   170,   175,   176,   180,   181,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     206,   207,   210,   213,   216,   222,   225,   230,   231,   235,
     236,   238,   241,   242,   243,   244,   245
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

#define YYPACT_NINF -137

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-137)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -137,    14,   112,  -137,     1,  -137,  -137,  -137,  -137,  -137,
    -137,   -17,    -1,   658,    13,  -137,     4,    30,    37,   709,
      25,  -137,  -137,  -137,    77,   709,   166,  -137,   709,   709,
    -137,   -22,  -137,  -137,  -137,   216,  -137,  -137,  -137,  -137,
    -137,   281,  -137,  -137,   -37,  -137,  -137,  -137,  -137,   709,
     709,  -137,   321,   -26,   182,    73,    64,   607,   689,    51,
     337,  -137,   -20,  -137,    -8,    -8,    56,    52,    58,  -137,
      72,   709,   709,   709,   709,   709,   709,   709,  -137,   709,
     709,   709,   709,   709,   709,   709,  -137,   709,   377,   393,
    -137,    77,    84,    86,    88,    89,    96,  -137,   607,   709,
    -137,    61,    26,   709,  -137,   709,   102,  -137,  -137,    -7,
      -7,    -7,    -7,    -7,    -7,   433,   607,   647,   647,    33,
      33,    33,    -7,   607,   266,   266,    85,   109,  -137,    95,
     119,   182,   120,   448,    77,   -16,   104,   488,   501,    97,
    -137,   138,  -137,   103,   105,   709,   110,   131,  -137,  -137,
       0,    26,   111,   -27,   113,  -137,   709,   266,  -137,  -137,
      77,   541,   114,   142,    26,   117,  -137,   140,  -137,  -137,
     554,  -137,  -137,  -137,  -137,   126,  -137,   156,    26,  -137,
     709,    26,  -137,   594,  -137,  -137
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     1,     0,    14,    15,    16,    17,    18,
      19,     0,     0,     0,     0,    86,     0,     0,     0,    85,
      79,    82,    83,    84,     0,     0,     0,    30,     0,     0,
       3,     0,    12,     4,    34,     0,     5,    33,    35,    36,
      37,     0,    65,    66,     0,    70,    71,     6,     7,     0,
       0,    48,     0,     0,     0,     0,     0,    68,     0,     0,
       0,    29,     0,    32,    63,    64,     0,     0,    27,    31,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,     0,
      49,    10,     0,     0,     0,     0,     0,    76,    77,     0,
      67,     0,    22,     0,    39,     0,     0,    28,    81,    61,
      62,    59,    60,    57,    58,     0,    50,    51,    52,    53,
      54,    56,    55,    78,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,    44,    43,     0,     0,     0,     0,     0,    20,    69,
       0,    22,     0,     0,     0,    41,     0,     0,    45,     9,
      10,     0,     0,     0,    22,     0,    23,     0,    21,    40,
       0,    46,    11,    72,    73,     0,    25,     0,    22,    42,
       0,    22,    24,     0,    26,    74
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,  -137,  -137,    36,    -2,   -52,  -137,  -136,    44,
    -137,   -23,  -137,  -137,  -137,  -137,  -137,   -12,  -137,  -137,
    -137,  -137,  -137
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    30,   126,    62,    32,    33,   136,    34,
      35,    36,    37,    38,    39,   158,    40,    41,    42,    43,
      44,    45,    46
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    52,    92,    63,    66,    86,   101,    57,    70,    70,
     151,    87,    69,    60,     3,   166,    64,    65,    26,    91,
      27,    67,    59,    67,    49,    54,   164,   152,   176,     5,
       6,     7,     8,     9,    10,    77,    77,    88,    89,    53,
      50,    16,   182,   165,    18,   184,    98,    47,    48,    70,
      85,    55,    71,    72,    73,    74,    75,    76,    56,   109,
     110,   111,   112,   113,   114,   115,    58,   116,   117,   118,
     119,   120,   121,   122,   134,   123,    77,    96,    93,   147,
       5,     6,     7,     8,     9,    10,    94,   133,    95,   127,
      85,   137,    16,   138,    99,    18,   106,   102,   108,   103,
     135,   141,   142,   104,   103,   107,   105,   128,   104,   129,
     131,   105,    -2,     4,   130,     5,     6,     7,     8,     9,
      10,    11,   132,    12,    13,    14,    15,    16,   139,    17,
      18,   143,   150,   161,   171,   144,   145,    19,    20,    21,
      22,    23,   146,   148,   170,    24,   153,   156,   157,   135,
     159,   162,   160,    25,   163,   167,   174,    26,   127,    27,
     169,   177,   135,    28,    29,   175,   178,   180,   183,     5,
       6,     7,     8,     9,    10,    11,   135,    12,    13,   135,
      15,    16,   181,    17,    18,     5,     6,     7,     8,     9,
      10,    19,    20,    21,    22,    23,   172,   168,     0,    24,
      18,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,    26,    61,    27,     0,     0,     0,    28,    29,     5,
       6,     7,     8,     9,    10,    11,     0,    12,    13,     0,
      15,    16,     0,    17,    18,     0,     0,     0,     0,     0,
       0,    19,    20,    21,    22,    23,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,    26,    68,    27,     0,     0,     0,    28,    29,     5,
       6,     7,     8,     9,    10,    11,     0,    12,    13,     0,
      15,    16,     0,    17,    18,     0,     0,     0,     0,     0,
       0,    19,    20,    21,    22,    23,     0,    70,     0,    24,
      71,    72,    73,    74,    75,    76,     0,    25,     0,     0,
       0,    26,     0,    27,     0,     0,     0,    28,    29,     0,
       0,     0,     0,     0,    77,     0,     0,     0,    78,     0,
       0,    79,    80,    81,    82,    83,    84,    70,    85,     0,
      71,    72,    73,    74,    75,    76,     0,     0,     0,     0,
       0,     0,     0,    70,     0,     0,    71,    72,    73,    74,
      75,    76,     0,     0,    77,     0,     0,     0,    90,     0,
       0,    79,    80,    81,    82,    83,    84,     0,    85,   100,
      77,     0,     0,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    70,    85,     0,    71,    72,    73,    74,
      75,    76,     0,     0,     0,     0,     0,     0,     0,    70,
       0,     0,    71,    72,    73,    74,    75,    76,     0,   124,
      77,     0,     0,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,     0,    85,   125,    77,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    70,
      85,     0,    71,    72,    73,    74,    75,    76,     0,     0,
       0,     0,     0,     0,    70,     0,     0,    71,    72,    73,
      74,    75,    76,     0,     0,     0,    77,   140,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,     0,
      85,    77,   149,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    70,    85,     0,    71,    72,    73,
      74,    75,    76,     0,     0,     0,     0,    70,     0,     0,
      71,    72,    73,    74,    75,    76,     0,     0,     0,     0,
       0,    77,   154,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    77,    85,     0,     0,   155,     0,
       0,    79,    80,    81,    82,    83,    84,    70,    85,     0,
      71,    72,    73,    74,    75,    76,     0,     0,     0,     0,
      70,     0,     0,    71,    72,    73,    74,    75,    76,     0,
       0,     0,     0,   173,    77,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    77,    85,     0,
       0,   179,     0,     0,    79,    80,    81,    82,    83,    84,
      70,    85,     0,    71,    72,    73,    74,    75,    76,     0,
       0,     0,     0,    70,     0,     0,    71,    72,    73,    74,
      75,    76,     0,     0,     0,     0,   185,    77,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      77,    85,     0,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    70,    85,     0,    71,    72,    73,    74,
      75,    76,    15,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,    19,    20,    21,    22,    23,     0,     0,
      77,    24,     0,     0,     0,     0,     0,     0,     0,    25,
      82,    83,    84,    15,    85,    51,    17,     0,     0,    28,
      29,     0,     0,     0,    19,    20,    21,    22,    23,     0,
       0,     0,    24,    15,     0,     0,    17,     0,     0,     0,
      25,    97,     0,     0,    19,    20,    21,    22,    23,     0,
      28,    29,    24,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29
};

static const yytype_int16 yycheck[] =
{
       2,    13,    54,    26,    26,    42,    26,    19,    16,    16,
      26,    48,    35,    25,     0,   151,    28,    29,    45,    45,
      47,    43,    24,    43,    41,    21,    26,    43,   164,     3,
       4,     5,     6,     7,     8,    43,    43,    49,    50,    26,
      41,    15,   178,    43,    18,   181,    58,    46,    47,    16,
      57,    21,    19,    20,    21,    22,    23,    24,    21,    71,
      72,    73,    74,    75,    76,    77,    41,    79,    80,    81,
      82,    83,    84,    85,    48,    87,    43,    13,     5,   131,
       3,     4,     5,     6,     7,     8,    13,    99,    15,    91,
      57,   103,    15,   105,    43,    18,    44,    41,    26,    43,
     102,   124,   125,    47,    43,    47,    50,    23,    47,    23,
      21,    50,     0,     1,    26,     3,     4,     5,     6,     7,
       8,     9,    26,    11,    12,    13,    14,    15,    26,    17,
      18,    46,   134,   145,   157,    26,    41,    25,    26,    27,
      28,    29,    23,    23,   156,    33,    42,    50,    10,   151,
      47,    41,    47,    41,    23,    44,    42,    45,   160,    47,
      47,    44,   164,    51,    52,    23,    26,    41,   180,     3,
       4,     5,     6,     7,     8,     9,   178,    11,    12,   181,
      14,    15,    26,    17,    18,     3,     4,     5,     6,     7,
       8,    25,    26,    27,    28,    29,   160,   153,    -1,    33,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    46,    47,    -1,    -1,    -1,    51,    52,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      14,    15,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    46,    47,    -1,    -1,    -1,    51,    52,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      14,    15,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    16,    -1,    33,
      19,    20,    21,    22,    23,    24,    -1,    41,    -1,    -1,
      -1,    45,    -1,    47,    -1,    -1,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    16,    57,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    43,    -1,    -1,    -1,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    -1,    57,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    16,    57,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    -1,    57,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    16,
      57,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    -1,
      57,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    16,    57,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    43,    57,    -1,    -1,    47,    -1,
      -1,    50,    51,    52,    53,    54,    55,    16,    57,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    43,    57,    -1,
      -1,    47,    -1,    -1,    50,    51,    52,    53,    54,    55,
      16,    57,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      43,    57,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    16,    57,    -1,    19,    20,    21,    22,
      23,    24,    14,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,    -1,
      43,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      53,    54,    55,    14,    57,    47,    17,    -1,    -1,    51,
      52,    -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    33,    14,    -1,    -1,    17,    -1,    -1,    -1,
      41,    42,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      51,    52,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52
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
      41,    47,    77,    26,    21,    21,    21,    77,    41,    65,
      77,    46,    65,    71,    77,    77,    26,    43,    46,    71,
      16,    19,    20,    21,    22,    23,    24,    43,    47,    50,
      51,    52,    53,    54,    55,    57,    42,    48,    77,    77,
      47,    45,    66,     5,    13,    15,    13,    42,    77,    43,
      42,    26,    41,    43,    47,    50,    44,    47,    26,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    42,    42,    64,    65,    23,    23,
      26,    21,    26,    77,    48,    65,    68,    77,    77,    26,
      44,    71,    71,    46,    26,    41,    23,    66,    23,    44,
      65,    26,    43,    42,    44,    47,    50,    10,    75,    47,
      47,    77,    41,    23,    26,    43,    68,    44,    69,    47,
      77,    71,    64,    42,    42,    23,    68,    44,    26,    47,
      41,    26,    68,    77,    68,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    62,    62,    62,    62,    63,
      64,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      66,    67,    68,    68,    68,    68,    68,    69,    69,    69,
      69,    70,    70,    71,    71,    71,    71,    71,    71,    72,
      72,    72,    72,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    78,    78,    78,    79,    79,    80,    80,    81,
      81,    81,    82,    82,    82,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     3,     0,     6,
       0,     4,     1,     4,     1,     1,     1,     1,     1,     1,
       5,     6,     0,     3,     5,     4,     6,     2,     3,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     2,     3,
       6,     5,     7,     5,     5,     6,     2,     0,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     1,     1,     3,     2,     5,
       1,     1,     7,     7,    10,     2,     3,     3,     3,     1,
       4,     3,     1,     1,     1,     1,     1
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
#line 904 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 4: /* TOK_INT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 910 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 5: /* TOK_STRING  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 916 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 6: /* TOK_BOOL  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 922 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 7: /* TOK_REF  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 928 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 8: /* TOK_CHAR  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 934 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 9: /* TOK_IF  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 940 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 10: /* TOK_ELSE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 946 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 11: /* TOK_WHILE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 952 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 12: /* TOK_RETURN  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 958 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 13: /* TOK_STRUCT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 964 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 14: /* TOK_NULLPTR  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 970 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 15: /* TOK_ARRAY  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 976 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 16: /* TOK_ARROW  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 982 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 17: /* TOK_ALLOC  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 988 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 18: /* TOK_PTR  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 994 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 19: /* TOK_EQ  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1000 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 20: /* TOK_NE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1006 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 21: /* TOK_LT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1012 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 22: /* TOK_LE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1018 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 23: /* TOK_GT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1024 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 24: /* TOK_GE  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1030 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 25: /* TOK_NOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1036 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 26: /* TOK_IDENT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1042 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 27: /* TOK_INTCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1048 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 28: /* TOK_CHARCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1054 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 29: /* TOK_STRINGCON  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1060 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 30: /* TOK_ROOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1066 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 31: /* TOK_BLOCK  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1072 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 32: /* TOK_CALL  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1078 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 33: /* TOK_NEW  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1084 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 34: /* ROOT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1090 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 35: /* NUMBER  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1096 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 36: /* IDENT  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1102 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 37: /* TOK_TYPE_ID  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1108 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 38: /* TOK_FUNCTION  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1114 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 39: /* TOK_INDEX  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1120 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 40: /* TOK_PARAM  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1126 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 41: /* '('  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1132 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 42: /* ')'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1138 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 43: /* '['  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1144 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 44: /* ']'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1150 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 45: /* '{'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1156 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 46: /* '}'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1162 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 47: /* ';'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1168 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 48: /* ','  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1174 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 49: /* '.'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1180 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 50: /* '='  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1186 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 51: /* '+'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1192 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 52: /* '-'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1198 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 53: /* '*'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1204 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 54: /* '/'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1210 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 55: /* '%'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1216 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 56: /* '!'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1222 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 57: /* '^'  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1228 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 58: /* POS  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1234 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 59: /* NEG  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1240 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 61: /* start  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1246 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 62: /* program  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1252 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 63: /* structdef  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1258 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 64: /* typeident  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1264 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 65: /* type  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1270 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 66: /* plaintype  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1276 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 67: /* function  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1282 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 68: /* funcident  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1288 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 69: /* block  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1294 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 70: /* optstmt  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1300 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 71: /* statement  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1306 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 72: /* vardecl  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1312 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 73: /* while  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1318 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 74: /* ifelse  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1324 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 75: /* dangling  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1330 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 76: /* return  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1336 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 77: /* expr  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1342 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 78: /* allocator  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1348 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 79: /* call  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1354 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 80: /* callexpr  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1360 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 81: /* variable  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1366 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 82: /* constant  */
#line 28 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1372 "yyparse.cpp" /* yacc.c:684  */
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
#line 1718 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 4: /* TOK_INT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1724 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 5: /* TOK_STRING  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1730 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 6: /* TOK_BOOL  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1736 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 7: /* TOK_REF  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1742 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 8: /* TOK_CHAR  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1748 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 9: /* TOK_IF  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1754 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 10: /* TOK_ELSE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1760 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 11: /* TOK_WHILE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1766 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 12: /* TOK_RETURN  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1772 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 13: /* TOK_STRUCT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1778 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 14: /* TOK_NULLPTR  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1784 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 15: /* TOK_ARRAY  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1790 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 16: /* TOK_ARROW  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1796 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 17: /* TOK_ALLOC  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1802 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 18: /* TOK_PTR  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1808 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 19: /* TOK_EQ  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1814 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 20: /* TOK_NE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1820 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 21: /* TOK_LT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1826 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 22: /* TOK_LE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1832 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 23: /* TOK_GT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1838 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 24: /* TOK_GE  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1844 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 25: /* TOK_NOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1850 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 26: /* TOK_IDENT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1856 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 27: /* TOK_INTCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1862 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 28: /* TOK_CHARCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1868 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 29: /* TOK_STRINGCON  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1874 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 30: /* TOK_ROOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1880 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 31: /* TOK_BLOCK  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1886 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 32: /* TOK_CALL  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1892 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 33: /* TOK_NEW  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1898 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 34: /* ROOT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1904 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 35: /* NUMBER  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1910 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 36: /* IDENT  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1916 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 37: /* TOK_TYPE_ID  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1922 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 38: /* TOK_FUNCTION  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1928 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 39: /* TOK_INDEX  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1934 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 40: /* TOK_PARAM  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1940 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 41: /* '('  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1946 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 42: /* ')'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1952 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 43: /* '['  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1958 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 44: /* ']'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1964 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 45: /* '{'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1970 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 46: /* '}'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1976 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 47: /* ';'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1982 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 48: /* ','  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1988 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 49: /* '.'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1994 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 50: /* '='  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2000 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 51: /* '+'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2006 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 52: /* '-'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2012 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 53: /* '*'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2018 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 54: /* '/'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2024 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 55: /* '%'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2030 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 56: /* '!'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2036 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 57: /* '^'  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2042 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 58: /* POS  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2048 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 59: /* NEG  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2054 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 61: /* start  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2060 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 62: /* program  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2066 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 63: /* structdef  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2072 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 64: /* typeident  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2078 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 65: /* type  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2084 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 66: /* plaintype  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2090 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 67: /* function  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2096 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 68: /* funcident  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2102 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 69: /* block  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2108 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 70: /* optstmt  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2114 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 71: /* statement  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2120 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 72: /* vardecl  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2126 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 73: /* while  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2132 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 74: /* ifelse  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2138 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 75: /* dangling  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2144 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 76: /* return  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2150 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 77: /* expr  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2156 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 78: /* allocator  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2162 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 79: /* call  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2168 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 80: /* callexpr  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2174 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 81: /* variable  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2180 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 82: /* constant  */
#line 27 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2186 "yyparse.cpp" /* yacc.c:1257  */
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

#line 2276 "yyparse.cpp" /* yacc.c:1429  */
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
#line 2458 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 65 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2464 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 66 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2470 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2476 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 2482 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 2488 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 70 "parser.y" /* yacc.c:1646  */
    { (yyval) = parser::root; }
#line 2494 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 74 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-3]), (yyvsp[-1])); destroy((yyvsp[0])); 
              (yyvsp[-4])->symbol = TOK_TYPE_ID; (yyval) = (yyvsp[-5])->adopt ((yyvsp[-4]), (yyvsp[-2])); }
#line 2501 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 78 "parser.y" /* yacc.c:1646  */
    { (yyval) = nullptr; }
#line 2507 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 79 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1])); 
(yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-3])->lloc, ""))->adopt((yyvsp[-3]), (yyvsp[-2])); }
#line 2514 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 83 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2520 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 84 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[0]));
                                          (yyval) = (yyvsp[-3])->adopt((yyvsp[-1])); }
#line 2527 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 88 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2533 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 89 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2539 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 90 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2545 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 91 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2551 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 92 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2557 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 93 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2563 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 94 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-3]), (yyvsp[-2]));
                                                destroy((yyvsp[0]));
                                                (yyval) = (yyvsp[-4])->adopt((yyvsp[-1])); }
#line 2571 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 100 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1]));
(yyvsp[-3])->symbol = TOK_PARAM; (yyvsp[-3])->adopt((yyvsp[-2])); 
(yyval) = (new astree(TOK_FUNCTION, (yyvsp[-5])->lloc, ""))
        ->adopt((new astree(TOK_TYPE_ID, (yyvsp[-5])->lloc, ""))->adopt((yyvsp[-5]), (yyvsp[-4]))
                , (yyvsp[-3]), (yyvsp[0])); }
#line 2581 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 107 "parser.y" /* yacc.c:1646  */
    { (yyval) = nullptr; }
#line 2587 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 109 "parser.y" /* yacc.c:1646  */
    {(yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-2])->lloc, ""))->adopt((yyvsp[-2]), (yyvsp[-1]));}
#line 2593 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 111 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-3]), (yyvsp[-2]));
          (yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-4])->lloc, ""))->adopt((yyvsp[-4]), (yyvsp[-1]));}
#line 2600 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 114 "parser.y" /* yacc.c:1646  */
    {(yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-3])->lloc, ""))->adopt((yyvsp[-2]), (yyvsp[-1]));}
#line 2606 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 116 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-3]), (yyvsp[-2]));
          (yyval) = (new astree(TOK_TYPE_ID, (yyvsp[-5])->lloc, ""))->adopt((yyvsp[-4]), (yyvsp[-1]));}
#line 2613 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 121 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); 
                                          (yyvsp[-1])->symbol = TOK_BLOCK;
                                          (yyval) = (yyvsp[-1]); }
#line 2621 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 124 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1]), (yyvsp[0])); 
                                          (yyvsp[-2])->symbol = TOK_BLOCK;
                                          (yyval) = (yyvsp[-2]); }
#line 2629 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 127 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0]));
                                          (yyvsp[-1])->symbol = TOK_BLOCK;
                                          (yyval) = (yyvsp[-1]); }
#line 2637 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 130 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); }
#line 2643 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 133 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2649 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 134 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2655 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 137 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2661 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 138 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2667 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 139 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2673 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 140 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2679 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 141 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2685 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 142 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2691 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 147 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1])->symbol = TOK_TYPE_ID;
                                               destroy((yyvsp[0]));
                                               (yyval) = (yyvsp[-2])->adopt((yyvsp[-1])); }
#line 2699 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 150 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-4])->symbol = TOK_TYPE_ID;
                                               destroy((yyvsp[-3]), (yyvsp[-1])); destroy((yyvsp[0]));
                                               (yyval) = (yyvsp[-5])->adopt((yyvsp[-4])); }
#line 2707 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 153 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-3])->symbol = TOK_TYPE_ID;
                                               destroy((yyvsp[0]));
                                               (yyval) = (yyvsp[-2])->adopt((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1])); }
#line 2715 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 156 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-3])->symbol = TOK_TYPE_ID;
                                               destroy((yyvsp[0])); destroy((yyvsp[-5]), (yyvsp[-4])); 
                                               (yyval) = (yyvsp[-2])->adopt((yyvsp[-6]), (yyvsp[-3]), (yyvsp[-1])); }
#line 2723 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 163 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-3]), (yyvsp[-1])); (yyval) = (yyvsp[-4])->adopt((yyvsp[-2]), (yyvsp[0]));  }
#line 2729 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 168 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[-3]), (yyvsp[-1]));
                                        (yyval) =(yyvsp[-4])->adopt((yyvsp[-2]),(yyvsp[0])); }
#line 2736 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 171 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-4]), (yyvsp[-2])); (yyval) = (yyvsp[-5])->adopt((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 2742 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 175 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-1])); (yyval) = (yyvsp[0]); }
#line 2748 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 176 "parser.y" /* yacc.c:1646  */
    { (yyval) = nullptr; }
#line 2754 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 180 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2760 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 181 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-1])); }
#line 2766 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 185 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2772 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2778 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 187 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2784 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 188 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2790 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 189 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2796 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 190 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2802 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 191 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2808 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 192 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2814 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 193 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2820 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 194 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2826 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 195 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2832 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 196 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2838 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 197 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2844 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 198 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt_sym ((yyvsp[0]), POS); }
#line 2850 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 199 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt_sym ((yyvsp[0]), NEG); }
#line 2856 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 200 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2862 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 201 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2868 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 202 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[-2]), (yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2874 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 203 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2880 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 204 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[0]));
                                                 (yyval) = (yyvsp[-4])->adopt((yyvsp[-3]), (yyvsp[-1])); }
#line 2887 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2893 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 207 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2899 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 211 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-5]), (yyvsp[-3])); destroy((yyvsp[-2]), (yyvsp[0]));
                (yyval) = (yyvsp[-6])->adopt((yyvsp[-4]), (yyvsp[-1])); }
#line 2906 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 214 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-5]), (yyvsp[-2])); destroy((yyvsp[-1]), (yyvsp[0]));
                destroy((yyvsp[-4])); (yyval) = (yyvsp[-6])->adopt((yyvsp[-3])); }
#line 2913 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 217 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-8]), (yyvsp[-6])); destroy((yyvsp[-4]), (yyvsp[-3]));
                destroy((yyvsp[-2]), (yyvsp[0])); (yyval) = (yyvsp[-9])->adopt((yyvsp[-7]), (yyvsp[-1])); }
#line 2920 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 222 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[0]));
                                               (yyvsp[-1])->symbol = TOK_CALL;
                                               (yyval) = (yyvsp[-1]); }
#line 2928 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 225 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[0]));
                                                (yyvsp[-1])->symbol = TOK_CALL;
                                                (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2])); }
#line 2936 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 230 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2942 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 231 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[-1]));
                                             (yyval) = (yyvsp[-2])->adopt ((yyvsp[0])); }
#line 2949 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 235 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2955 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyvsp[-2])->symbol = TOK_INDEX; destroy((yyvsp[0])); (yyval) = (yyvsp[-2])->adopt((yyvsp[-3]), (yyvsp[-1]));}
#line 2961 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 238 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2967 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 241 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2973 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 242 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2979 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 243 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2985 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 244 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2991 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 245 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2997 "yyparse.cpp" /* yacc.c:1646  */
    break;


#line 3001 "yyparse.cpp" /* yacc.c:1646  */
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
#line 248 "parser.y" /* yacc.c:1906  */


const char* parser::get_tname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}

bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}
