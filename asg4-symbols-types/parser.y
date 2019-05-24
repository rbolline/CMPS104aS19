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
   parser::root = new astree (TOK_ROOT, {0, 0, 0}, "");
}


%token TOK_VOID TOK_INT TOK_STRING
%token TOK_IF TOK_ELSE TOK_WHILE TOK_RETURN TOK_STRUCT
%token TOK_NULLPTR TOK_ARRAY TOK_ARROW TOK_ALLOC TOK_PTR
%token TOK_EQ TOK_NE TOK_LT TOK_LE TOK_GT TOK_GE TOK_NOT
%token TOK_IDENT TOK_INTCON TOK_CHARCON TOK_STRINGCON
%token TOK_ROOT TOK_BLOCK TOK_CALL
%token ROOT NUMBER IDENT 
%token TOK_TYPE_ID TOK_FUNCTION TOK_INDEX TOK_PARAM

%token  '('  ')'  '['  ']'  '{'  '}'  ';'  ','  '.'
%token  '='  '+'  '-'  '*'  '/'  '%'  '!' 

%right  '=' 
%left   '+' '-'
%left   '*' '/' 
%left   TOK_LT TOK_LE TOK_GT TOK_GE TOK_EQ
%right  '^'
%right  POS NEG
%right  TOK_ELSE



%%
/*{*/
start     : program               { $$ = $1 = nullptr; }
          ;

program   : program structdef     { $$ = $1->adopt ($2); }
          | program function      { $$ = $1->adopt ($2); }
          | program statement     { $$ = $1->adopt ($2); }
          | program error '}'     { destroy($3); $$ = $1; }
          | program error ';'     { destroy($3); $$ = $1; }
          |                       { $$ = parser::root; } 
          ;


          
structdef : TOK_STRUCT TOK_IDENT '{' {destroy($3); $$ = $1->adopt($2);}
        | structdef type TOK_IDENT ';'  {destroy($4); 
    $$ = $1->adopt((new astree(TOK_TYPE_ID, $1->lloc, ""))->adopt($2, $3));} 
        | structdef '}' ';'             {destroy($2, $3); $$ = $1;}
        ;


          ;

type      : plaintype                     { $$ = $1; }
          | TOK_ARRAY TOK_LT plaintype TOK_GT   { destroy($2, $4);
                                          $$ = $1->adopt($3); }
          ;

plaintype : TOK_VOID                              { $$ = $1; }
          | TOK_INT                               { $$ = $1; }
          | TOK_STRING                            { $$ = $1; }
      | TOK_PTR TOK_LT TOK_STRUCT TOK_IDENT TOK_GT  { destroy($2, $3);
                                                destroy($5);
                                                $$ = $1->adopt($4); }
      | TOK_PTR TOK_LT TOK_IDENT TOK_GT  { destroy($2);
                                                destroy($4);
                                                $$ = $1->adopt($3); }
          ;

function  : type TOK_IDENT '(' funcident ')' block { destroy($5);
$3->symbol = TOK_PARAM; $3->adopt($4); 
$$ = (new astree(TOK_FUNCTION, $1->lloc, ""))
        ->adopt((new astree(TOK_TYPE_ID, $1->lloc, ""))->adopt($1, $2)
                , $3, $6); }
          ;

funcident : /* empty */                   { $$ = nullptr; }
          | funcident type TOK_IDENT       
        {$$ = (new astree(TOK_TYPE_ID, $2->lloc, ""))->adopt($2, $3);}
          | funcident ',' type TOK_IDENT 
        {$$ = (new astree(TOK_TYPE_ID, $3->lloc, ""))->adopt($3, $4);}
          ;

block     : optstmt '}'                 { destroy($2); 
                                          $1->symbol = TOK_BLOCK;
                                          $$ = $1; }
          | '{' '}'                     { destroy($2);
                                          $1->symbol = TOK_BLOCK;
                                          $$ = $1; }
          | ';'                         { destroy($1); }
        ;

optstmt   : optstmt statement           { $$ = $1->adopt($2); }  
          | '{' statement               { $$ = $1->adopt($2); }
          ;

statement : vardecl               { $$ = $1; }
          | block                 { $$ = $1; }
          | while                 { $$ = $1; }
          | ifelse                { $$ = $1; }
          | return                { $$ = $1; }
          | expr ';'              { destroy($2); $$ = $1; }
          ;

vardecl   : type TOK_IDENT ';'          { $2->symbol = TOK_TYPE_ID;
                                          destroy($3);
                                          $$ = $1->adopt($2); }
          | type TOK_IDENT '=' expr ';' { $2->symbol = TOK_TYPE_ID;
                                          destroy($5);
                                          $$ = $3->adopt($1, $2, $4); }

optexpr   : /* empty */           { $$ = nullptr; } //SEPARATE OPTEXPR
          | '=' expr              { $$ = $2; }
          | TOK_ELSE statement    { $$ = $2; }
          | expr optexpr          { $$ = $1; }
          | ',' expr optexpr      { $$ = $2; }
          ;


while     : TOK_WHILE '(' expr ')' statement      
{ destroy($2, $4); $$ = $1->adopt($3, $5);  }
          ;


ifelse    : TOK_IF '(' expr ')' statement dangling 
{ destroy($2, $4); $$ = $1->adopt($3, $5, $6); }
          ;


dangling  : TOK_ELSE statement       { destroy($1); $$ = $2; }
          | %prec TOK_ELSE           { $$ = nullptr; }
          ;


return    : TOK_RETURN ';'       { destroy($2); $$ = $1; }
          | TOK_RETURN expr ';'  { destroy($3); $$ = $1->adopt($2); }
          ;


expr      : expr '=' expr         { $$ = $2->adopt ($1, $3); }
          | expr '+' expr         { $$ = $2->adopt ($1, $3); }
          | expr '-' expr         { $$ = $2->adopt ($1, $3); }
          | expr '*' expr         { $$ = $2->adopt ($1, $3); }
          | expr '/' expr         { $$ = $2->adopt ($1, $3); }
          | expr '^' expr         { $$ = $2->adopt ($1, $3); }
          | expr '%' expr         { $$ = $2->adopt ($1, $3); }
          | expr TOK_GT expr      { $$ = $2->adopt ($1, $3); }
          | expr TOK_GE expr      { $$ = $2->adopt ($1, $3); }
          | expr TOK_LT expr      { $$ = $2->adopt ($1, $3); }
          | expr TOK_LE expr      { $$ = $2->adopt ($1, $3); }
          | expr TOK_EQ expr      { $$ = $2->adopt ($1, $3); }
          | expr TOK_NE expr      { $$ = $2->adopt ($1, $3); }
          | '+' expr %prec POS    { $$ = $1->adopt_sym ($2, POS); }
          | '-' expr %prec NEG    { $$ = $1->adopt_sym ($2, NEG); }
          | allocator             { $$ = $1; }
          | call                  { $$ = $1; }
          | '(' expr ')'          { destroy ($1, $3); $$ = $2; }
          | TOK_NOT expr          { $$ = $2; }
          | variable              { $$ = $1; }
          | constant              { $$ = $1; }
          ;

allocator : TOK_ALLOC TOK_LT TOK_STRING TOK_GT '(' expr ')'                  
              { destroy($2, $4); destroy($5, $7);
                $$ = $1->adopt($3, $6); }
          | TOK_ALLOC TOK_LT TOK_STRUCT TOK_IDENT TOK_GT '(' ')'             
              { destroy($2, $5); destroy($6, $7);
                destroy($3); $$ = $1->adopt($4); }
          |TOK_ALLOC TOK_LT TOK_ARRAY TOK_LT 
             plaintype TOK_GT TOK_GT '(' expr ')' 
              { destroy($2, $4); destroy($6, $7);
                destroy($8, $10); $$ = $1->adopt($3, $9); }
          ;


call      : callexpr ')'                     { destroy ($2);
                                               $1->symbol = TOK_CALL;
                                               $$ = $1; }
          | TOK_IDENT '(' ')'                 { destroy ($3);
                                                $2->symbol = TOK_CALL;
                                                $$ = $2->adopt ($1); }
          ;

callexpr  : TOK_IDENT '(' expr             { $$ = $2->adopt ($1, $3); }
          | callexpr ',' expr              { destroy ($2);
                                             $$ = $1->adopt ($3); }
          ;

variable  : TOK_IDENT             { $$ = $1; }
          | expr '[' expr ']'     
    {$2->symbol = TOK_INDEX; destroy($4); $$ = $2->adopt($1, $3);}
          | expr TOK_ARROW TOK_IDENT   { $$ = $2->adopt($1, $3); }
          ; 

constant  : TOK_INTCON            { $$ = $1; }
          | TOK_CHARCON           { $$ = $1; }
          | TOK_STRINGCON         { $$ = $1; }
          | TOK_NOT               { $$ = $1; }
          | TOK_NULLPTR           { $$ = $1; }
          ;
%%

const char* parser::get_tname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}

bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}