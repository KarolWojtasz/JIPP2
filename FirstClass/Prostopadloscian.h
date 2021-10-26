//
// Created by user on 26.10.2021.
//

#ifndef JIPP2_PROSTOPADLOSCIAN_H
#define JIPP2_PROSTOPADLOSCIAN_H
#include <iostream>
using namespace std;
class Prostopadloscian {
    double podstawaA;
    double podstawaB;
    double wysokosc;
public:

    Prostopadloscian();
    double pole(){
        return 2*podstawaA*podstawaB+2*podstawaA*wysokosc+2*podstawaB*wysokosc;
    };
};

Prostopadloscian::Prostopadloscian(){
    cout<<"Podaj podstawe A: ";
    cin>> this->podstawaA;

    cout<<"Podaj podstawe B: ";
    cin>> this->podstawaB;

    cout<<"Podaj wysokosc: ";
    cin>> this->wysokosc;
}

#endif //JIPP2_PROSTOPADLOSCIAN_H
