/*
Rohith Bollineni
rbolline
Ani Chaloyan
achaloya
*/

%{
// $Id: parser.y,v 1.22 2019-04-23 14:07:52-07 - - $
// Actual parser 

#include <cassert>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "astree.h"
#include "lyutils.h"
%}

%debug
%defines
%error-verbose
%token-table
%verbose

%destructor { destroy ($$); } <>
%printer { astree::dump (yyoutput, $$); } <>

%initial-action {
   parser::root = new astree (TOK_ROOT, {0, 0, 0}, "<<ROOT>>");
}


%token TOK_VOID TOK_INT TOK_STRING
%token TOK_IF TOK_ELSE TOK_WHILE TOK_RETURN TOK_STRUCT
%token TOK_NULLPTR TOK_ARRAY TOK_ARROW TOK_ALLOC TOK_PTR
%token TOK_EQ TOK_NE TOK_LT TOK_LE TOK_GT TOK_GE TOK_NOT
%token TOK_IDENT TOK_INTCON TOK_CHARCON TOK_STRINGCON
%token TOK_ROOT TOK_BLOCK TOK_CALL
%token ROOT IDENT NUMBER STRINGCON CHARCON

%right  '=' 

%left   '+' '-'
%left   '*' '/' 
%right  '^'
%right  POS NEG

%%
/*{*/
start   : program               { yyparse_astree = $1; }
        ;

program : program structdef     { $$ = $1->adopt ($2); }
        | program function      { $$ = $1->adopt ($2); }
        | program statement     { $$ = $1->adopt ($2); }
        | program error ’}’     { $$ = $1; }
        | program error ’;’     { $$ = $1; }
        |                       { $$ = parser::root; } 
        ;

structdef : TOK_STRUCT TOK_IDENT '{' typeident '}' ';' 
{ destroy($3, $5); destroy($6); $$ = $1->adopt ($2, $4); }

typeident : /* empty */                 { $$ = nullptr; }
        | type TOK_IDENT ';' typeident  {}
        | type TOK_IDENT typeident      {}
        | ',' type TOK_IDENT typeident  {}
        ;

type    : plaintype
        | TOK_ARRAY '<' plaintype '>'
        ;

plaintype : TOK_VOID                            {}
        | TOK_INT                               {}
        | TOK_STRING                            {}
        | TOK_PTR '<' TOK_STRUCT TOK_IDENT '>'  {}
        ;

function : type TOK_IDENT '(' typeident ')' block {}
         ;

block   : '{' optstmt '}'       {}
        | ';'                   {}
        ;

optstmt : /* empty */           {}
        | statement optstmt     {}
        ;

statement : vardecl             {}
        | block                 {}
        | while                 {}
        | ifelse                {}
        | return                {}
        | expr ';'              {}
        ;

vardecl : type TOK_IDENT optexpr ';'    {}
        ;

optexpr : /* empty */           {}
        | '=' expr              {}
        | TOK_ELSE statement    {}
        | expr optexpr          {}
        | ',' expr optexpr      {}
        ;

while   : TOK_WHILE '(' expr ')' statement      {}
        ;

ifelse  : TOK_IF '(' expr ')' statement optexpr {}
        ;

return  : TOK_RETURN optexpr    {}
        ;

expr    : expr '=' expr         { $$ = $2->adopt ($1, $3); }
        | expr '+' expr         { $$ = $2->adopt ($1, $3); }
        | expr '-' expr         { $$ = $2->adopt ($1, $3); }
        | expr '*' expr         { $$ = $2->adopt ($1, $3); }
        | expr '/' expr         { $$ = $2->adopt ($1, $3); }
        | expr '^' expr         { $$ = $2->adopt ($1, $3); }
        | '+' expr %prec POS    { $$ = $1->adopt_sym ($2, POS); }
        | '-' expr %prec NEG    { $$ = $1->adopt_sym ($2, NEG); }
        | allocator             {}
        | call                  {}
        | '(' expr ')'          { destroy ($1, $3); $$ = $2; }
        | TOK_IDENT             { $$ = $1; }
        | TOK_NUMBER            { $$ = $1; }
        ;

allocator : TOK_ALLOC 
        '<' TOK_STRING '>' '(' expr ')'                  {}
        | TOK_ALLOC 
        '<' TOK_STRUCT TOK_IDENT '>' '(' ')'             {}
        | TOK_ALLOC 
        '<' TOK_ARRAY '<' plaintype '>' '>' '(' expr ')' {}

call    : TOK_IDENT '(' optexpr ')'             {}
        ;

variable : TOK_IDENT            {}
        | expr '[' expr ']'     {}
        | expr '->' TOK_IDENT   {}
        ; 

constant : TOK_INTCON           {}
        | TOK_CHARCON           {}
        | TOK_STRINGCON         {}
        | TOK_NULLPTR           {}

%%

const char* parser::get_tname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}

bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}

