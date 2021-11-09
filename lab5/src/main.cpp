//
// Created by user on 09.11.2021.
//
#include <iostream>

#include "../include/car.h"
using namespace std;
int main(){

    car saab("KRA4102S","Saab",5,"Saab","Sedan");

    saab.getInfo();
    saab.pasazer("Karol",0);
    saab.getInfo();


    return 0;
}