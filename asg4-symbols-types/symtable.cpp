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

#include "string_set.h"
#include "astree.h"
#include "auxlib.h"
#include "emitter.h"
#include "lyutils.h"

using symbol_table = unordered_map<string*,symbol*>; 
using symbol_entry = symbol_table::value_type;
