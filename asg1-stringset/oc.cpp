#include<iostream>
#include <string>
using namespace std;

#include <errno.h>
#include <libgen.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wait.h>
#include <unistd.h>
#include <cassert>

const char* debugflags = "";
bool alldebugflags = false;

// Generate debugging code.
void __debugprintf (char flag, const char* file, int line,
                    const char* func, const char* format, ...);
#define DEBUGF(FLAG,...) \
        __debugprintf(FLAG, __FILE__, __LINE__, __PRETTY_FUNCTION__, \
                       __VA_ARGS__)
#define DEBUGSTMT(FLAG,STMTS) \
       if (is_debugflag (FLAG)) { DEBUGF (FLAG, "\n"); STMTS }

bool is_debugflag (char flag) {
   return alldebugflags or strchr (debugflags, flag) != nullptr;
}

void __debugprintf (char flag, const char* file, int line,
                    const char* func, const char* format, ...) {
   va_list args;
   if (not is_debugflag (flag)) return;
   fflush (nullptr);
   va_start (args, format);
   fprintf (stderr, "DEBUGF(%c): %s[%d] %s():\n",
             flag, file, line, func);
   vfprintf (stderr, format, args);
   va_end (args);
   fflush (nullptr);
}

void set_debugflags (const char* flags) {
    debugflags = flags;
    assert (debugflags != nullptr);
    if (strchr (debugflags, '@') != nullptr) alldebugflags = true;
    DEBUGF ('x', "Debugflags = \"%s\", all = %d\n",
           debugflags, alldebugflags);
}

string stripsufx(string progname){
    int len = progname.length();
    string ocext = progname.substr(len-3, len);
    if(ocext.compare(".oc") != 0){
        fprintf(stderr, 
        "Error: incorrect/missing .oc extension. \n");
        exit(EXIT_FAILURE);
    }
    return progname.substr(0, len-3);
}

int main (int argc, char** argv) {
    int yy_flex_debug = 0;
    int yy_debug = 0;
    string dstring;
    int opt;
    while((opt = getopt(argc, argv, "ly@:D:")) != -1){
        switch(opt) {
            case 'l':
                yy_flex_debug = 1;
                break;
            case 'y':
                yy_debug = 1;
                break;
            case '@':
                set_debugflags(optarg);
                break;
            case 'D':
                dstring = "-D";
                dstring.append(optarg);
                /*Call cpp on this string to suppress inclusion of
                oclib.oh. */
                break;
            default:
                std::cout << "No option";
                break;
        }
    }
    string base = basename(argv[optind]);
    string progname = stripsufx(base);
    std::cout << progname << '\n';
    
}


