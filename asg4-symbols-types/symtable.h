#ifndef __SYMTABLE__
#define __SYMTABLE__

#include <string>
#include <unordered_map>
using namespace std;
#include <stdio.h>

using attr_bitset = bitset<attr::BITSET_SIZE>;
using symbol_table = unordered_map<const string*, symbol*>;
using symbol_entry = symbol_table::value_type;

enum class attr {
VOID, INT, NULLPTR_T, STRING, 
STRUCT, ARRAY, FUNCTION, VARIABLE, 
FIELD, TYPEID, PARAM, LOCAL, LVAL, 
CONST, VREG, VADDR, BITSET_SIZE,
};

struct symbol { 
    attr_bitset attributes; 
    size_t sequence; 
    symbol_table* fields; 
    location lloc;
    size_t block_nr; 
    vector<symbol*>* parameters; 
};



#endif