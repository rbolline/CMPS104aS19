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

const string CPP = "/usr/bin/cpp -nostdinc";
constexpr size_t LINESIZE = 1024;
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

void chomp (char* string, char delim) {
   size_t len = strlen (string);
   if (len == 0) return;
   char* nlpos = string + len - 1;
   if (*nlpos == delim) *nlpos = '\0';
}

// Print the meaning of a signal.
static void eprint_signal (const char* kind, int signal) {
   fprintf (stderr, ", %s %d", kind, signal);
   const char* sigstr = strsignal (signal);
   if (sigstr != nullptr) fprintf (stderr, " %s", sigstr);
}

// Print the status returned from a subprocess.
void eprint_status (const char* command, int status) {
   if (status == 0) return; 
   fprintf (stderr, "%s: status 0x%04X", command, status);
   if (WIFEXITED (status)) {
      fprintf (stderr, ", exit %d", WEXITSTATUS (status));
   }
   if (WIFSIGNALED (status)) {
      eprint_signal ("Terminated", WTERMSIG (status));
      #ifdef WCOREDUMP
      if (WCOREDUMP (status)) fprintf (stderr, ", core dumped");
      #endif
   }
   if (WIFSTOPPED (status)) {
      eprint_signal ("Stopped", WSTOPSIG (status));
   }
   if (WIFCONTINUED (status)) {
      fprintf (stderr, ", Continued");
   }
   fprintf (stderr, "\n");
}

void cpplines (FILE* pipe, const char* filename) {
   int linenr = 1;
   for (;;) {
      char buffer[LINESIZE];
      const char* fgets_rc = fgets (buffer, LINESIZE, pipe);
      if (fgets_rc == nullptr) break;
      chomp (buffer, '\n');
      printf ("%s:line %d: [%s]\n", filename, linenr, buffer);
      // http://gcc.gnu.org/onlinedocs/cpp/Preprocessor-Output.html
      char inputname[LINESIZE];
      int sscanf_rc = sscanf (buffer, "# %d \"%[^\"]\"",
                              &linenr, inputname);
      if (sscanf_rc == 2) {
         printf ("DIRECTIVE: line %d file \"%s\"\n", linenr, inputname);
         continue;
      }
      char* savepos = nullptr;
      char* bufptr = buffer;
      for (int tokenct = 1;; ++tokenct) {
         char* token = strtok_r (bufptr, " \t\n", &savepos);
         bufptr = nullptr;
         if (token == nullptr) break;
         printf ("token %d.%d: [%s]\n",
                 linenr, tokenct, token);
      }
      ++linenr;
   }
}

int main (int argc, char** argv) {
    int yy_flex_debug = 0;
    int yy_debug = 0;
    int exit_status = EXIT_SUCCESS;
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
    const char* filename = basename(argv[optind]);
    string command = CPP + " " + argv[optind];
    printf ("command=\"%s\"\n", command.c_str());
    FILE* pipe = popen (command.c_str(), "r");
    if (pipe == nullptr) {
        exit_status = EXIT_FAILURE;
        fprintf (stderr, "%s: %s: %s\n",
                "oc", command.c_str(), strerror (errno));
    }else {
        cpplines (pipe, filename);
        int pclose_rc = pclose (pipe);
        eprint_status (command.c_str(), pclose_rc);
        if (pclose_rc != 0) exit_status = EXIT_FAILURE;
    }

    return exit_status;
}


