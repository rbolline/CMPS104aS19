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
%token ROOT IDENT NUMBER
%token TOK_TYPE_ID TOK_FUNCTION

%right  '=' 

%left   '+' '-'
%left   '*' '/' 
%right  '^'
%right  POS NEG
%right  TOK_ELSE


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

//$2->symbol = TOK_TYPE_ID

typeident : /* empty */                 { $$ = nullptr; }
        | type TOK_IDENT ';' typeident  
        { destroy($3); 
        $$ = new astree(TOK_TYPE_ID, $1->lloc, "")->adopt($1, $2); }
        ;

type    : plaintype                     { $$ = $1 }
        | TOK_ARRAY '<' plaintype '>'   { destroy($2, $4);
                                          $$ = $1->adopt($3) }
        ;

plaintype : TOK_VOID                              { $$ = $1 }
          | TOK_INT                               { $$ = $1 }
          | TOK_STRING                            { $$ = $1 }
          | TOK_PTR '<' TOK_STRUCT TOK_IDENT '>'  { destroy($2, $3);
                                                    destroy($5);
                                                    $$ = $1->adopt($4); }
          ;

function : type TOK_IDENT '(' funcident ')' block { $3->symbol = TOK_PARAM; $3->adopt($4); 
                                                    $$ = new astree(TOK_FUNCTION, $1->lloc, "")->adopt($2, $3, $6); }
         ;

funcident : /* empty */                 { $$ = nullptr; }
        | type TOK_IDENT funcident      { $$ = $2; }
        | ',' type TOK_IDENT funcident  {}

block   : '{' optstmt '}'       { destroy($3); $1->symbol = TOK_BLOCK;
                                  $$ = $1->adopt($2) }
        | ';'                   { destroy($1); }
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

optexpr : /* empty */           {} //SEPARATE OPTEXPR
        | '=' expr              {}
        | TOK_ELSE statement    {}
        | expr optexpr          {}
        | ',' expr optexpr      {}
        ;

while   : TOK_WHILE '(' expr ')' statement      { destroy($2, $4); $$ = $1->adopt($3, $5);  }
        ;

ifelse  : TOK_IF '(' expr ')' statement dangling { destroy($2, $4); $$ = $1->adopt($3, $5, $6); }
        ;

dangling  : TOK_ELSE statement      { destroy($1); $$ = $2; }
          ; %prec TOK_ELSE          { $$ = nullptr; }

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
        | variable              { $$ = $1; }
        | constant              { $$ = $1; }
        ;

allocator : TOK_ALLOC 
        '<' TOK_STRING '>' '(' expr ')'                  { destroy($2, $4); destroy($5, $7);
                                                           $$ = $1->adopt($3, $6); }
        | TOK_ALLOC 
        '<' TOK_STRUCT TOK_IDENT '>' '(' ')'             { destroy($2, $5); destroy($6, $7);
                                                           destroy($3); $$ = $1->adopt($4); }
        | TOK_ALLOC 
        '<' TOK_ARRAY '<' plaintype '>' '>' '(' expr ')' { destroy($2, $4); destroy($6, $7);
                                                           destroy($8, $10) $$ = $1->adopt($3, $9); }

call    : TOK_IDENT '(' optexpr ')'             {}
        ;

variable : TOK_IDENT             { $$ = $1; }
         | expr '[' expr ']'     { $2->symbol = TOK_INDEX; destroy($4); $$ = $2->adopt($1, $3); }
         | expr '->' TOK_IDENT   { $$ = $2->adopt($1, $3); }
         ; 

constant : TOK_INTCON            {}
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