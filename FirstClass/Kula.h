//
// Created by user on 26.10.2021.
//
#include <math.h>
#ifndef JIPP2_KULA_H
#define JIPP2_KULA_H
#include <iostream>
using namespace std;

class Kula {
public:
    double r;
    Kula();
    double objetosc(){
        return 4/3 * M_PI * r*r*r;
    }
};
Kula::Kula() {
    cout<< " podaj promien kuli: ";
    cin>> this->r;
}

#endif //JIPP2_KULA_H
