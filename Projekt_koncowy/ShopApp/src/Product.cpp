//
// Created by Admin on 16.01.2022.
//
#include <sstream>
#include "../include/Product.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

Product::Product(vector<Product>productList){
    int ID;
    while(1) {
        int check=1;
        ID = rand() % 100000 + 1;
        for(auto x: productList){
            if(x.ID==ID)
                check=2;
        }
        if(check==1)
            break;
    }
    this->ID=ID;
    cout<<"Podaj nazwe produktu: ";
    cin>>this->name;
    cout<<endl<<"Podaj opis produktu: ";
    cin>>this->description;
    cout<<endl<<"Podaj cene produktu: ";
    double cena;

    while (1) {
        if (cin >> cena) {
            // valid number
            break;
        } else {
            // not a valid number
            cout << "Podaj poprawna cene: " << endl;
            cin.clear();
            while (cin.get() != '\n') ; // empty loop
        }
    }

    stringstream stream;
    stream <<fixed << setprecision(2) << cena;
    string price_precised = stream.str();

    this->price= stod(price_precised);

    cout<<"dodano produkt"<<endl;
    std::ofstream plik;
    plik.open("Database/Products.txt", ios_base::app);
    plik << endl<<this->ID<<";"<<this->name<<";"<<this->description<<";"<<this->price;
    plik.close();

}
Product::Product(int ID,string name, string description, double price):ID(ID),name(name),description(description),price(price) {
}

void Product::getAllData() {
    cout<<"ID: "<<this->ID<<endl;
    cout<<"Nazwa: "<<this->name<<endl;
    cout<<"Opis: "<<this->description<<endl;
    cout<<"Cena: "<<this->price<<" zl"<<endl<<endl;
}

void Product::removeFromFile() {

    stringstream stream;
    stream <<fixed << setprecision(2) << this->price;
    string price_precised = stream.str();


    string removeLine = to_string(this->ID)+";"+ this->name+";"+this->description+";"+price_precised;
    ifstream plik;
    string line;
    plik.open("Database/Products.txt");
    ofstream temp;
    temp.open("Database/temp.txt");
    while (getline(plik,line))
    {
        if (line != removeLine)
        {
            temp << line << endl;
        }
    }
    temp.close();
    plik.close();
    remove("Database/Products.txt");
    rename("Database/temp.txt","Database/Products.txt");
}

