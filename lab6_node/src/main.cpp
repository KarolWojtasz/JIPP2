//
// Created by user on 16.11.2021.
//
#include <iostream>
#include "node.h"
using namespace std;
int main(){
    Node a(2,2),b(2,4);
    a.display();
    b.display();

    cout << "odleglosc: "<<pointsDistance(a,b);
    return 0;
}