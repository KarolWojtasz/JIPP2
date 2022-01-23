//
// Created by Admin on 16.01.2022.
//

#include "../include/User.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

User::User(int ID, string username, string password):ID(ID),username(username),password(password) {
}

User::User(vector<User>userList) {
    int ID;
    while(1) {
        int check=1;
        ID = rand() % 100000 + 1;
        for(auto x: userList){
            if(x.ID==ID)
                check=2;
        }
        if(check==1)
            break;
    }
    this->ID=ID;

    string username;
    while(1) {
        int check=1;

        cout<<"Podaj nazwę uzytkownika"<<endl;
        cin>>username;
        for(auto x: userList){
            if(x.username==username)
                check=2;
        }
        if(check==1)
            break;
        else
            cout<<"Nazwa uzytkownika juz istnieje"<<endl;

    }
    this->username=username;
    string pass;
    while (1){
        cout<<"Podaj haslo"<<endl;
        cin>>pass;
        cout<<endl<<"Powtorz haslo"<<endl;
        string pass2;
        cin>>pass2;
        if(pass==pass2){
            this->password=pass;
            break;
        }else
            cout<<"Hasla sie nie zgadzaja!!!"<<endl;
    }
    cout<<"Uzytkownik utworzony";

    //dodanie usera do pliku z dopisaniem
    std::ofstream plik;
    plik.open("Database/Users.txt", ios_base::app);
    plik << endl<<this->ID<<";"<<this->username<<";"<<this->password;
    plik.close();
}

string User::getUsername() {
    return this->username;
}
string User::getPassword() {
    return this->password;
}

void User::getAllInfo() {
    cout<<"ID: "<<this->ID<<endl;
    cout<<"username : "<<this->username<<endl;
    cout<<"password : "<<this->password<<endl<<endl;
}

void User::removeFromFile() {

    string removeLine = to_string(this->ID)+";"+ this->username+";"+this->password;
    ifstream plik;
    string line;
    plik.open("Database/Users.txt");
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
    remove("Database/Users.txt");
    rename("Database/temp.txt","Database/Users.txt");
}
