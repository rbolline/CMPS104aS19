# $Id: Makefile,v 1.2 2019-04-11 12:17:42-07 - - $

#Rohith Bollineni
#rbolline

#Ani Chaloyan
#achaloya

WARNING     = -Wall -Wextra -Wpedantic -Wshadow -Wold-style-cast
COMPILECPP = g++ -std=gnu++17 -g -O0 ${WARNING}
MAKEDEPCPP = g++ -std=gnu++17 -MM
VALGRIND   = valgrind --leak-check=full --show-reachable=yes

MKFILE     = Makefile
DEPFILE    = Makefile.dep
SOURCES    = oc.cpp string_set.cpp
OBJECTS    = ${SOURCES:.cpp=.o} 
EXECBIN    = oc
SRCFILES   = ${SOURCES} ${MKFILE}
SMALLFILES = ${DEPFILE} 
CHECKINS   = ${SRCFILES} ${SMALLFILES}
LISTING    = Listing.ps

all : ${EXECBIN}

${EXECBIN} : ${OBJECTS}
	${COMPILECPP} -o${EXECBIN} ${OBJECTS}

%.o : %.cpp
	${COMPILECPP} -c $<

ci :
	cid + ${CHECKINS}
	checksource ${CHECKINS}

clean :
	- rm ${OBJECTS} *.str

spotless : clean
	- rm ${EXECBIN} ${DEPFILE} 

${DEPFILE} :
	${MAKEDEPCPP} ${SOURCES} >${DEPFILE}

dep :
	- rm ${DEPFILE}
	${MAKE} --no-print-directory ${DEPFILE}

include Makefile.dep


