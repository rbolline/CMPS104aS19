/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
