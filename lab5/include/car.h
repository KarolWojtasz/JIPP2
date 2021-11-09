//
// Created by user on 09.11.2021.
//

#include <iostream>
using namespace std;
#ifndef JIPP2_CAR_H
#define JIPP2_CAR_H


class car {
private:
    string numerRejestracyjny;
    string nazwa;
    int iloscMiejsc;
    string* miejsca;
    string marka;
    string typ;
public:
    car(string numerRejestracyjny, string nazwa , int iloscMiejsc, string marka, string typ);
    void getInfo();
    void pasazer(string imie, int miejsce);
    car(car &car);
    void setNazwa(string nazwa);
    void setRejestracja(string numerRejestracyjny);
    string getMarka(string marka);
    string getTyp(string typ);


};


#endif //JIPP2_CAR_H
