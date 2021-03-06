#ifndef __SYMTABLE__
#define __SYMTABLE__

#include <string>
#include <unordered_map>
using namespace std;
#include <stdio.h>
#include <assert.h>
#include <errno.h>
#include <libgen.h>
#include <fstream>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h> 
#include <wait.h>
#include <unistd.h>
#include <cassert>
#include <bitset>

#include "astree.h"
#include "auxlib.h"
#include "lyutils.h"

enum class attr {
VOID, INT, PTR, NULLPTR_T, STRING, BOOL, 
STRUCT, ARRAY, FUNCTION, VARIABLE, 
FIELD, TYPEID, PARAM, LOCAL, LVAL, 
CONST, VREG, VADDR, BITSET_SIZE,
};

struct symbol;

const int bitlen = static_cast<int>(attr::BITSET_SIZE);
using attr_bitset = bitset<bitlen>;
using symbol_table = unordered_map<const string*, symbol*>;
using symbol_entry = symbol_table::value_type;

struct symbol { 
    attr_bitset attributes; 
    size_t sequence; 
    symbol_table* fields; 
    location lloc;
    size_t block_nr; 
    vector<symbol*>* parameters; 
    string id = "";
};

void makeSymFile(FILE* outfile, astree* root);
void postordertraversal(FILE* outfile, astree* tree);
symbol* setTypeAttr(astree* tree, symbol* sym);
string getAttr(attr_bitset a, symbol* sym);
void typecheck(astree* tree);
symbol* makeParamSym(astree* param, size_t seq, int bl, symbol* param_sym);
bool matchingParameters(vector<symbol*>* a, vector<symbol*>* b);
symbol* makeVarSym(astree* var, int bl, symbol* var_sym);

#endif

