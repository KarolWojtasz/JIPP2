//
// Created by Admin on 16.01.2022.
//

#ifndef JIPP_SHOPLIB_H
#define JIPP_SHOPLIB_H
#include <iostream>
#include "../../ShopApp/include/Product.h"
#include "../../ShopApp/include/User.h"

/**
 * Wyświetlenie strony pomocy, brak parametrów i zwracanych wartości
 */
void help();

/**
 * Wypisanie wszystkich elementów z vektora klasy Product
 * @param productList adres vectora z elementami klasy produkt
 */
void listItems(vector<Product> *productList);

/**
 * * Wypisanie wszystkich elementów z vektora klasy User
 * @param userList adres vectora z elementami klasy User

 */
void listItems(vector<User> *userList);

/**
 * Funkcja do sprawdzenia poprawnosci wpisania wartosci typu int przez cin
 * @param text tekst do wyswietlenia przy zapytaniu
 * @return zmienna typu int wpisana przez uzytkownika
 */
int validateCin(string text);

#endif //JIPP_SHOPLIB_H
