//
// Created by user on 18.10.2021.
//
#include <iostream>
#include "../include/functions.h"

using namespace std;
//funkcja void wyswietlajaca pomoc
void help(){
    cout<< "Simple calculatur\n"
           "simpleCalc [nazwa działania]\n"
           "\n"
           "Działania:\n"
           "add [a] [b]\n"
           "    Dodawanie dwóch liczb ([a] i [b]) całkowitych.\n"
           "substract [a] [b]\n"
           "    Odejmowanie dwóch liczb ([a] i [b]) całkowitych.\n"
           "volume [a] [b] [h] [H]\n"
           "    Obliczenie objętości graniastosłupa prostego\ngdzie [a] [b] - dlugości podstawy [h] wysokosc podstawy [H] wysokosc graniastoslupa";
}
//funkcja int dodaje 2 patametry typu int i wyswietla wynik

int add(int a,int b){
    int wyn = a + b;
    cout << "Wynik dodawania: " << a <<" + "<<b<<" = "<<wyn;
    return wyn;
}

//funkcja liczy roznice 2 parametrow int
int substract(int a,int b){
    int wyn = a - b;
    cout << "Wynik odejmowania: " << a <<" - "<<b<<" = "<<wyn;
    return wyn;
}
//funkcja liczy objetosc na postawie parametrow int graniastoslupa prostego o podstawie trapezu (a,b - dlugosci bokow trapezu, h- wysokosc trapezu, H- wysokosc graniastoslupa)
float volume(int a,int b, int h, int H){
    float wyn = (a + b) * h / 2 * H;
    cout << "Objętość graniastosłupa: " << wyn;
    return wyn;
}

