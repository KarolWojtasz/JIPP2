//
// Created by user on 18.10.2021.
//
#include <iostream>
#include <string>

#include "functions.h"
using namespace std;
int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "pl_PL");
    if (argv[1] == string("add")) {
        if (argc != 4) {
            help();
            return 0;
        } else {
            int a = atoi(argv[2]);
            int b = atoi(argv[3]);
            add(a,b);

        }

    } else if (argv[1] == string("substract")) {
        if (argc != 4) {
            help();
            return 0;
        } else {
            int a = atoi(argv[2]);
            int b = atoi(argv[3]);
            substract(a,b);

        }
    } else if (argv[1] == string("volume")) {
        if (argc != 6) {
            help();
            return 0;
        } else {
            int a = atoi(argv[2]);
            int b = atoi(argv[3]);
            int h = atoi(argv[4]);
            int H = atoi(argv[5]);

            volume(a,b,h,H);
        }
    } else {
        help();
    }
    return 0;
}