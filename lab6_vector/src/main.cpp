//
// Created by user on 16.11.2021.
//
#include <iostream>
#include "vector.h"
using namespace std;
int main() {
    Vector v1(3,4), v2(5,10);
    Vector v3 = v1 + v2;
    v3+=v2;
    v3.print();
    Vector v4(3,4);
    Vector v5(4,5);
    v5=!v5;
    v5.print();
    double skalar = v4*v5;
    cout<<"skalar: "<<skalar;
    return 0;
}
