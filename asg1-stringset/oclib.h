// $Id: oclib.h,v 1.2 2019-04-16 12:16:27-07 - - $

// Bilingual file useable as a header file for both oc and c++.

#ifndef __OCLIB_H__
#define __OCLIB_H__

#ifdef __STDC__
   typedef char* string;
   #ifdef __cplusplus
      extern "C" {
      #define END }
   #else
      #define not !
      #define END
   #endif
#endif

#define SUCCESS 0
#define FAILURE 1
#define TRUE 1
#define FALSE 0
#define EOF (-1)

#define assert(expr) if (not (expr)) fail (#expr, __FILE__, __LINE__); 

void fail (string expr, string file, int line);

void putchr (int c);
void putint (int i);
void putstr (string s);

int getchr();
string getstr();
string getln();

void exit (int status);

END

#endif

