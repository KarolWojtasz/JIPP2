//
// Created by Admin on 31.01.2022.
//


#include "../include/Polymorphism.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;


    void PolymorphismParent::dowork()
    {
        cout << "Witam z klasy bazowej." << endl;
    }

    void PolymorphismChild::dowork()
    {
        cout<<"Podano bledne parametry wywolania."<<endl;

    }

