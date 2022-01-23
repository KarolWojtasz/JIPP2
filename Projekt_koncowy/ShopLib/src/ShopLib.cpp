//
// Created by Admin on 16.01.2022.
//

#include "../include/ShopLib.h"
#include "../../ShopApp/include/Product.h"
#include "../../ShopApp/include/User.h"
#include <iostream>

using namespace std;
void help(){
    cout<<"Strona pomocy ShopApp."<<endl<<"Parametry wywolania:"<<endl<<"'Klient' - aplikacja dla klienta (logowanie / rejestracja / przegladanie produktow / koszyk)"<<endl;
    cout<<"'Administrator' - aplikacja dla administratora (dodawanie / usuwanie /modyfikacja produktow / zarzadzanie uzytkownikami"<<endl;
    cout<<"inny parametr - wywolanie tej strony pomocy"<<endl;
}
void listItems(vector<Product> *productList){
    for(auto x: *productList){
        x.getAllData();
    }
}
void listItems(vector<User> *userList){
    for(auto x: *userList){
        x.getAllInfo();
    }
}

int validateCin(string text){
    int variable;

    for (;;) {
        cout << text;
        if (cin >> variable) {
            break;
        } else {
            cout << "Podaj poprawna liczbe, a nie kombinuj..." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return variable;
}

