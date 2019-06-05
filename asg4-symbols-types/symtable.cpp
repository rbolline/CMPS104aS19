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

#include "symtable.h"

//Post order traversal of AST
//typechecking grammar implementation
//Call from oc.cpp
int next_block = 0;
symbol_table struct_hash;
symbol_table global_ident;   //identifiers or functions
symbol_table local_ident;    //declared in functions, parameters


void postordertraversal (FILE* outfile, astree* tree){

    //3 types of symbols: type, field, function/variable

    int tok = tree->symbol;

    if (tok == TOK_STRUCT){
        //create symbol
        symbol* sym = new symbol;
        sym->attributes[static_cast<int>(attr::STRUCT)] = 1;
        sym->attributes[static_cast<int>(attr::TYPEID)] = 1;
        sym->block_nr = 0;
        sym->parameters = nullptr;
        sym->lloc = tree->lloc;
        symbol_table* field_table = new symbol_table;

        //hash key
        string* struct_name = const_cast<string*>(tree->children[0]->lexinfo);
        sym->id = *struct_name;

        //print struct to file
        fprintf (outfile, "%s (%zu.%zu.%zu) {%zu} %s\n", struct_name->c_str(), 
            sym->lloc.filenr, sym->lloc.linenr, sym->lloc.offset, sym->block_nr, 
            getAttr(sym->attributes, sym).c_str());

        //loop through fields
        if (tree->children.size() > 1){
            next_block++;
            size_t seq = 0;

            for (astree* field: tree->children[1]->children){

                //print offset
                for (int i = 0; i < next_block; i++) {
                    fprintf(outfile, "   ");
                }

                symbol* field_sym = new symbol;
                field_sym->lloc = field->lloc;
                field_sym->block_nr = next_block;
                field_sym->sequence = seq;
                field_sym->attributes[static_cast<int>(attr::FIELD)] = 1;

                string* field_name = const_cast<string*>(field->children[1]->lexinfo);

                field_sym = setTypeAttr(field->children[0], field_sym);

                //print fields to file
                fprintf (outfile, "%s (%zu.%zu.%zu) %s%zu\n", field_name->c_str(), 
                field_sym->lloc.filenr, field_sym->lloc.linenr, field_sym->lloc.offset,
                getAttr(field_sym->attributes, field_sym).c_str(), seq);

                seq++;
                symbol_entry field_entry (field_name, field_sym);
                field_table->insert(field_entry);
            }
        }
        else {
            field_table = nullptr;
        }

        sym->fields = field_table;

        //add entry to struct_hash
        symbol_entry struct_entry (struct_name, sym);
        struct_hash.insert(struct_entry);

    }
    else if (tok == TOK_FUNCTION){
        //create symbol
        symbol* sym = new symbol;
        sym->attributes[static_cast<int>(attr::FUNCTION)] = 1;
        sym->block_nr = next_block;
        sym->fields = nullptr;
        sym->lloc = tree->lloc;
        sym = setTypeAttr(tree->children[0]->children[0], sym);
        vector<symbol*>* param_vector = new vector<symbol*>;
        
        //function name
        string* func_name = const_cast<string*>(
            tree->children[0]->children[1]->lexinfo);

        //print function to file
        fprintf (outfile, "%s (%zu.%zu.%zu) {%zu} %s\n", func_name->c_str(), 
            sym->lloc.filenr, sym->lloc.linenr, sym->lloc.offset, 
            sym->block_nr, getAttr(sym->attributes, sym).c_str());

        next_block++;

        //insert parameters into symbol table
        if (tree->children[1]->children.size() > 0){
            size_t seq = 0;
            for (astree* param: tree->children[1]->children){

                //print offset
                for (int i = 0; i < next_block; i++) {
                    fprintf(outfile, "   ");
                }
            
                symbol* param_sym = new symbol;
                param_sym->lloc = param->lloc;
                param_sym->attributes[static_cast<int>(attr::PARAM)] = 1;
                param_sym->attributes[static_cast<int>(attr::VARIABLE)] = 1;
                param_sym->attributes[static_cast<int>(attr::LVAL)] = 1;
                param_sym = setTypeAttr(param->children[0], param_sym);
                param_sym->sequence = seq;
                param_vector->push_back(param_sym);
                param_sym->block_nr = next_block;

                string* param_name = const_cast<string*>(param->children[1]->lexinfo);
                
                //print params to file
                fprintf (outfile, "%s (%zu.%zu.%zu) {%zu} %s%zu\n", param_name->c_str(), 
                param_sym->lloc.filenr, param_sym->lloc.linenr, param_sym->lloc.offset,
                param_sym->block_nr, getAttr(param_sym->attributes, param_sym).c_str(), seq);

                seq++;
                symbol_entry param_entry (param_name, param_sym);
                local_ident.insert(param_entry);
            }

            sym->parameters = param_vector;
        }

        //loop through block
        if (tree->children.size() > 2){
            if (tree->children[2]->children.size() > 0){
                size_t seq = 0;
                for (astree* line: tree->children[2]->children){

                    //print offset
                    for (int i = 0; i < next_block; i++) {
                        fprintf(outfile, "   ");
                    }

                    if (line->symbol == TOK_TYPE_ID){
                        symbol* line_sym = new symbol;
                        line_sym->lloc = line->lloc;
                        line_sym->attributes[static_cast<int>(attr::LOCAL)] = 1;
                        line_sym->attributes[static_cast<int>(attr::VARIABLE)] = 1;
                        line_sym->attributes[static_cast<int>(attr::LVAL)] = 1;
                        line_sym = setTypeAttr(line->children[0], line_sym);
                        line_sym->sequence = seq;
                        line_sym->block_nr = next_block;

                        string* line_name = const_cast<string*>(line->children[1]->lexinfo);
                
                        //print lines to file
                        fprintf (outfile, "%s (%zu.%zu.%zu) {%zu} %s%zu\n", line_name->c_str(), 
                        line_sym->lloc.filenr, line_sym->lloc.linenr, line_sym->lloc.offset,
                        line_sym->block_nr, getAttr(line_sym->attributes, line_sym).c_str(), seq);

                        seq++;
                
                        //insert local variables to table???
                    }
                }
            }
        }
        else {
            //sym->attributes[static_cast<int>(attr::PROTOTYPE)] = 1;
        }

        //insert in global hash
        symbol_entry func_entry (func_name, sym);
        global_ident.insert(func_entry);

    } else if (tok == TOK_TYPE_ID){
        symbol* var_sym = new symbol;
        var_sym->attributes[static_cast<int>(attr::VARIABLE)] = 1;
        var_sym = setTypeAttr(tree->children[0], var_sym);
        var_sym->lloc = tree->lloc;

        string* var_name = const_cast<string*>(tree->children[1]->lexinfo);

        symbol_entry var_entry (var_name, var_sym);
        global_ident.insert(var_entry);
    }

    for (astree* child: tree->children) {
        next_block = 0;
        postordertraversal(outfile, child);  
    }

    //astree::print(outfile, tree, 0);
}

string getAttr(attr_bitset a, symbol* sym){
    string str = "";
    if (a[static_cast<int>(attr::VOID)])
        str += "void ";
    if (a[static_cast<int>(attr::INT)])
        str += "int ";
    if (a[static_cast<int>(attr::PTR)])
        str += "ptr <struct "+sym->id+"> ";
    if (a[static_cast<int>(attr::NULLPTR_T)])
        str += "null ";
    if (a[static_cast<int>(attr::STRING)])
        str += "string ";
    if (a[static_cast<int>(attr::STRUCT)])
        str += "struct ";
    if (a[static_cast<int>(attr::ARRAY)])
        str += "array ";
    if (a[static_cast<int>(attr::FUNCTION)])
        str += "function ";
    if (a[static_cast<int>(attr::VARIABLE)])
        str += "variable ";
    if (a[static_cast<int>(attr::TYPEID)])
        str += sym->id;
    if (a[static_cast<int>(attr::FIELD)])
        str += "field ";
    if (a[static_cast<int>(attr::LVAL)])
        str += "lval ";
    if (a[static_cast<int>(attr::PARAM)])
        str += "param ";
    if (a[static_cast<int>(attr::CONST)])
        str += "const ";
    if (a[static_cast<int>(attr::VREG)])
        str += "vreg ";
    if (a[static_cast<int>(attr::VADDR)])
        str += "vaddr ";
    if (a[static_cast<int>(attr::LOCAL)])
        str += "local ";

    return str;
}

//incomplete
symbol* setTypeAttr (astree* tree, symbol* s){
    int tok = tree->symbol;
    if (tok == TOK_VOID){
        s->attributes[static_cast<int>(attr::VOID)] = 1;
    }
    else if (tok == TOK_INT){
        s->attributes[static_cast<int>(attr::INT)] = 1;
    }
    else if (tok == TOK_STRING){
        s->attributes[static_cast<int>(attr::STRING)] = 1;
    }
    else if (tok == TOK_PTR){
       s->attributes[static_cast<int>(attr::PTR)] = 1;
       s->id = *const_cast<string*>(tree->children[0]->lexinfo);
    }
    return s;
}
