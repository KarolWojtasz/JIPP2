//
// Created by user on 26.10.2021.
//
#include <iostream>
using namespace std;
int main(){

    struct samochod{
        char marka[20];
        char model[20];
        int rokProdukcji;
        char kolor[20];
        double pojemnoscSilnika;
    };

    samochod bmw = {"BMW","e36",1995,"Bialy",2.8};
    samochod audi = {"Audi","A3",2005,"Czarny",2.0};
    samochod toyota = {"Toyota","Corolla",2007,"Srebrny",1.8};
    samochod honda = {"Honda","Civic",2001,"Czerwony",1.3};

    cout<<"Marka: "<<bmw.marka<<" "<<audi.marka<<" "<<toyota.marka<<" "<<honda.marka<<"\n";
    cout<<"model: "<<bmw.model<<" "<<audi.model<<" "<<toyota.model<<" "<<honda.model<<"\n";
    cout<<"Rok Produkcji: "<<bmw.rokProdukcji<<" "<<audi.rokProdukcji<<" "<<toyota.rokProdukcji<<" "<<honda.rokProdukcji<<"\n";
    cout<<"Kolor: "<<bmw.kolor<<" "<<audi.kolor<<" "<<toyota.kolor<<" "<<honda.kolor<<"\n";
    cout<<"Pojemnosc silnika: "<<bmw.pojemnoscSilnika<<" "<<audi.pojemnoscSilnika<<" "<<toyota.pojemnoscSilnika<<" "<<honda.pojemnoscSilnika<<"\n";





    return 0;
}