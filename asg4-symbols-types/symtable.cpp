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
    
    for (astree* child: tree->children) {
        postordertraversal(outfile, child);  
    }
    //3 types of symbols: type, field, function/variable

    int tok = tree->symbol;

    if (tok == TOK_STRUCT){
        //create symbol
        symbol* sym = new symbol;
        sym->attributes[static_cast<int>(attr::STRUCT)] = 1;
        sym->block_nr = 0;
        sym->parameters = nullptr;
        sym->lloc = tree->lloc;
        symbol_table* field_table = new symbol_table;

        //loop through fields
        for (uint i = 0; i < tree->children[1]->children.size(); i++){
            //add fields to field_table
            //how are fields added to the AST??
        }
        sym->fields = field_table;
        sym->sequence = 0;

        //hash key
        string* name = const_cast<string*>(tree->children[0]->lexinfo);

        //add entry to struct_hash
        symbol_entry struct_entry (name, sym);
        struct_hash.insert(struct_entry);
    }
    else if (tok == TOK_FUNCTION){
        next_block++;

        //create symbol
        symbol* sym = new symbol;
        sym->attributes[static_cast<int>(attr::FUNCTION)] = 1;
        sym->block_nr = 0;
        sym->fields = nullptr;
        sym->lloc = tree->lloc;
        sym->sequence = 0;
        sym->parameters = new vector<symbol*>;
          
        //function name
        string* func_name = const_cast<string*>(
            tree->children[0]->children[1]->lexinfo);

        //insert parameters into symbol table

        for (astree* param: tree->children[1]->children){
            
            symbol* param_sym = new symbol;
            param_sym->lloc = param->lloc;
            int ind = static_cast<int>(attr::PARAM);
            param_sym->attributes[ind] = 1;
            ind = static_cast<int>(attr::VARIABLE);
            param_sym->attributes[ind] = 1;
            ind = static_cast<int>(attr::LVAL);
            setTypeAttr(param, param_sym);

            sym->parameters->push_back(param_sym);

            string* param_name = 
            const_cast<string*>(param->children[1]->lexinfo);

            symbol_entry param_entry (param_name, param_sym);
            local_ident.insert(param_entry);
        }

        //insert in global hash
        symbol_entry func_entry (func_name, sym);
        global_ident.insert(func_entry);

    }


    

    //astree::print(outfile, tree, 0);
}

//incomplete
void setTypeAttr (astree* tree, symbol* sym){
    int tok = tree->children[0]->symbol;
    if (tok == TOK_VOID){
        sym->attributes[static_cast<int>(attr::VOID)];
    }
    else if (tok == TOK_INT){
        sym->attributes[static_cast<int>(attr::INT)];
    }
    else if (tok == TOK_STRING){
        sym->attributes[static_cast<int>(attr::STRING)];
    }
}

