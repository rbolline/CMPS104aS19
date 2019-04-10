#include<iostream>
#include <string>
using namespace std;

#include <errno.h>
#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wait.h>
#include <unistd.h>

int main (int argc, char** argv) {
    int opt;
    while((opt = getopt(argc, argv, "ly@D:")) != -1){
        switch(opt) {
            case 'l':
                std::cout << 'l';
                break;
            case 'y':
                std::cout << 'y';
                break;
            case '@':
                std::cout << '@';
                break;
            case 'D':
                std::cout << 'D';
                break;
            default:
                std::cout << "No option";
                break;

        }
    }
}