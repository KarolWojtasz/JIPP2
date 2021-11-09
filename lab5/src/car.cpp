//
// Created by user on 09.11.2021.
//

#include "../include/car.h"

#include <iostream>
using namespace std;

car::car(string numerRejestracyjny, string nazwa, int iloscMiejsc, string marka, string typ) {
    this->numerRejestracyjny = numerRejestracyjny;
    this->nazwa = nazwa;
    this->iloscMiejsc = iloscMiejsc;
    this->miejsca = new string [iloscMiejsc];
    for(int i=0;i<iloscMiejsc;i++){
        this->miejsca[i]="puste";
    }
    this->marka = marka;
    this->typ = typ;
}

void car::getInfo() {
    cout << "Numer rejestracyjny: " << this->numerRejestracyjny << endl;

    cout << "Nazwa: " << this->nazwa << endl;
    cout << "Ilosc miejsc: " << this->iloscMiejsc << endl;

    for(int i=0;i<this->iloscMiejsc;i++){
        cout<<"Miejsce nr"<<i<<" jest "<<this->miejsca[i]<<endl;
    }
    cout << "marka: " << this->marka << endl;
    cout << "typ: " << this->typ << endl;
}
void car::pasazer(string imie, int miejsce) {
    this->miejsca[miejsce]=imie;
}
car::car(car &car) {

    *miejsca = *car.miejsca;

}