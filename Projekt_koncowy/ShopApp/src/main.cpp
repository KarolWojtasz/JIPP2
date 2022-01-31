//
// Created by Admin on 16.01.2022.
//

#include <iostream>
#include <string>
#include <User.h>
#include "ShopLib.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <Product.h>
#include <Printer.h>
#include <Polymorphism.h>

using namespace std;

vector<User> userList;
vector<Product> productList;

int main(int argc, char* argv[]){
    try {




//Wczytanie listy uzytkownikow
    ifstream Userplik("Database/Users.txt");
    string myText;
    while (getline (Userplik, myText)) {
        vector<string> v;
        stringstream ss(myText);
        while (ss.good()) {
            string substr;
            getline(ss, substr, ';');
            v.push_back(substr);
        }
        userList.push_back(User(stoi(v[0]), v[1], v[2]));

        // Output the text from the file
    }

    Userplik.close();
//Wczytanie listy produktów
    ifstream Productplik("Database/Products.txt");
    string text;
    while (getline (Productplik, text)) {
        vector<string> v2;
        stringstream line(text);
        while (line.good()) {
            string substr2;
            getline(line, substr2, ';');
            v2.push_back(substr2);
        }
        productList.push_back(Product(stoi(v2[0]), v2[1], v2[2],stod(v2[3])));
    }
    Productplik.close();
    }catch (...){
        cout<<"Wystapil krytyczny problem z wczytywaniem plikow"<<endl;
        return 0;
    }


    try{
    // blad ilosci argumentow
    if(argc!=2){
        help();
        return(0);
    // argument wywolania dla klienta
    }else if(string("Klient")==string(argv[1])){
    while(1){


        cout<<"Witaj w panelu klienta."<<endl<<"Jesli chcesz sie zalogowac wybierz 1, chcesz sie zarejestrowac wybierz 2, aby zakonczyc wybierz 3"<<endl;
        int login;

        login = validateCin("");
        if(login==3){
            cout<<"Konczenie pracy programu."<<endl;
            return 0;
        }
        //rejestracja uzytkownika
        if(login ==2 ){
            userList.push_back(User(userList));
        }
        //logowanie uzytkownika
        if(login==1){
            int check=1;
            while(check==1) {
                string username, password;
                cout << "Podaj nazwe uzytkownika: ";
                cin >> username;
                cout << "Podaj haslo: ";
                cin >> password;
                for (auto x: userList) {
                    if (x.getUsername() == username && x.getPassword() == password)
                        check=2;
                }
                if(check!=2)
                    cout<<"Bledne haslo lub nazwa uzytkownika!\n";
            }
            cout<<"Poprawnie zalogowano"<<endl;

            //zalogowany uzytkownik
            vector<Product>shoppingCart;
            int zakonczProgram= 1;
            while(zakonczProgram <= 3){
                cout<<"Wybierz 1 aby wyswietlic wszystkie produkty"<<endl;
                cout<<"Wybierz 2 aby dodac produkt do koszyka"<<endl;
                cout<<"Wybierz 3 aby wyswietlic koszyk"<<endl;
                cout<<"Wybierz 4 aby zakonczyc prace programu"<<endl;

                zakonczProgram= validateCin("");
                switch (zakonczProgram) {
                    //wypisz produkty
                    case 1:
                        listItems(&productList);
                        break;
                        //dodaj do koszyka
                    case 2:

                        int ajdi;
                        while(1) {
                            int check=1;
                            ajdi = validateCin("Podaj ID produktu, ktory chcesz dodac do koszyka: ");
                            for(auto x: productList){
                                if(x.ID==ajdi){
                                    check=2;
                                    shoppingCart.push_back(x);
                                }
                            }
                            if(check==2) {
                                cout<<"Produkt zostal dodany do koszyka"<<endl;

                                break;
                            }else
                                cout<<"Podane ID nie istnieje"<<endl;
                        }

                        break;
                        //wypisz koszyk
                    case 3:
                        for(auto x: shoppingCart){
                            x.getAllData();
                        }
                        break;
                    default:
                        if(zakonczProgram!=4)
                            cout<<"Podano zly parametr!"<<endl;
                        cout<<"Konczenie pracy programu"<<endl;
                        return 0;
                        break;

                }

            }
        }
    }
    //argument wywolania admin
    }else if(string("Administrator")==string(argv[1])||string("Admin")==string(argv[1])){

        Printer <string>k("Witaj w panelu administratora");
        //cout<<k.getVariable1();
        !k;
        int zakonczProgram = 1;
        while(zakonczProgram <= 5) {
            cout << "Wybierz 1 aby wyswietlic wszystkie produkty" << endl;
            cout << "Wybierz 2 aby dodac produkt" << endl;
            cout << "Wybierz 3 aby usunac produkt" << endl;
            cout << "Wybierz 4 aby wyswietlic wszystkich uzytkownikow" << endl;
            cout << "Wybierz 5 aby usunac uzytkownika" << endl;
            cout << "Wybierz 6 aby zakonczyc" << endl;
            zakonczProgram = validateCin("");



                switch (zakonczProgram) {
                    //wypisz produkty
                    case 1:
                        listItems(&productList);
                        break;
                    //dodaj produkt
                    case 2:
                        productList.push_back(Product(productList));
                        break;
                        //usun produkt
                    case 3:
                        int removeID;
                        while(1) {
                            int check=1;
                            removeID=validateCin("Podaj ID produktu ktory chcesz usunac: ");
                            int position = 0;
                            for(auto x: productList){
                                if(x.ID==removeID){
                                    check=2;
                                    productList.erase(productList.begin()+position);
                                    x.removeFromFile();
                                }
                                position++;
                            }
                            if(check==2) {

                                cout<<"Produkt zostal usuniety z systemu"<<endl;
                                break;
                            }else
                                cout<<"Podane ID nie istnieje"<<endl;
                        }

                        break;
                    //wypisz userow
                    case 4:
                        listItems(&userList);
                        break;
                    //usuwanie usera
                    case 5:
                        int removeUserID;
                        while(1) {
                            int check=1;
                            removeUserID = validateCin("Podaj ID produktu ktory chcesz usunac: ");
                            int position = 0;
                            for(auto x: userList){
                                if(x.ID==removeUserID){
                                    check=2;
                                    userList.erase(userList.begin()+position);
                                    x.removeFromFile();
                                }
                                position++;
                            }
                            if(check==2) {

                                cout<<"Uzytkownik zostal usuniety z systemu"<<endl;
                                break;
                            }else
                                cout<<"Podane ID nie istnieje"<<endl;
                        }

                        break;
                    default:
                        if(zakonczProgram!=6)
                            cout<<"Podano zly parametr, a podobno jestes adminem..."<<endl;
                            Printer <string>finito("Konczenie pracy programu");
                            cout<<finito.getVariable1();

                            cout<<""<<endl;
                        break;
                }


        }




    }else{
        PolymorphismParent* finish = new PolymorphismChild;
        finish->dowork();
        delete finish;
        help();

    }


return 0;
    }catch (...){
        cout<<"Wystapil krytyczny problem z dzialaniem programu."<<endl;
        return 0;
    }


}
