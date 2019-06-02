/*
Rohith Bollineni
rbolline
Ani Chaloyan
achaloya
*/
#include<iostream>
#include <string>
#include <vector>
using namespace std;

#include <assert.h>
#include <errno.h>
#include <libgen.h>
#include <fstream>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <wait.h>
#include <unistd.h>
#include <cassert>
#include <bitset>

#include "string_set.h"
#include "astree.h"
#include "auxlib.h"
#include "emitter.h"
#include "lyutils.h"
#include "symtable.h"

//Post order traversal of AST
//typechecking grammar implementation
//Call from oc.cpp
int next_block = 1;
symbol_table struct_hash;
symbol_table global_ident;   //identifiers or functions
symbol_table local_ident;    //declared in functions, parameters


void postordertraversal (FILE* outfile, astree* tree){

    //3 types of symbols: type, field, function/variable

    int tok = tree->symbol;

    if (tok == TOK_STRUCT){
        //create symbol
        symbol* sym = new symbol;
        int index = static_cast<int>(attr::STRUCT);
        sym->attributes[index] = 1;
        sym->block_nr = 0;
        sym->parameters = nullptr;
        sym->lloc = tree->lloc;
        symbol_table* field_table = new symbol_table;

        //loop through fields
        for (int i = 0; i<tree->children[1]->children.size(); i++){
            //add fields to field_table
            //how are fields added to the AST??
        }
        sym->fields = field_table;
        //sequence??

        //hash key
        string* name = const_cast<string*>(tree->children[0]->lexinfo);

        //add entry to struct_hash
        symbol_entry struct_entry (name, sym);
        struct_hash.insert(struct_entry);
    }
    else if (tok == TOK_FUNCTION){
        next_block++;
    }


    for (astree* child: tree->children) {
        postordertraversal(outfile, child);  
    }

    //astree::print(outfile, tree, 0);
}