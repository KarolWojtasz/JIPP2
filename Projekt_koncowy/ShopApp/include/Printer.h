//
// Created by Admin on 23.01.2022.
//


#ifndef JIPP_PRINTER_H
#define JIPP_PRINTER_H
#include <string>
#include <iostream>

using namespace std;

template<typename type1>
class Printer {
private:
    type1 variable1;

public:
    Printer(type1 variable1): variable1(variable1) {}

    type1 getVariable1() {
        return variable1;
    }
    ~Printer(){
        cout<<"Koniec printera";
    }
    Printer &operator!() const{
        cout<<variable1<<endl<<endl;
    }
};


#endif //JIPP_PRINTER_H
