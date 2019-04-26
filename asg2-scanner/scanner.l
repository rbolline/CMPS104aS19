%{

#include "lyutils.h"

#define YY_USER_ACTION  { lexer::advance(); }

%}

%option 8bit
%option debug
%option nobackup
%option nodefault
%option noinput
%option nounput
%option noyywrap
%option warn
