//
// Created by Admin on 16.01.2022.
//

#ifndef JIPP_PRODUCT_H
#define JIPP_PRODUCT_H
#include <string>
#include <vector>
using namespace std;

/**
 * Klasa przechowujaca produkty
 */
class Product {
private:
    /**
     * nazwa produktu typu string
     */
    string name;
    /**
     * opis produktu typu string
     */
    string description;
    /**
     * cena produktu typu double wpisywana z podwójną precyzją
     */
    double price;
public:
    /**
     * unikalne ID typu int
     */
    int ID;
    /**
     * konstruktor do stworzenia produktu z pliku
     * @param ID ID produktu typu int
     * @param name nazwa produktu typu string
     * @param description opis produktu typu string
     * @param price cena produktu typu double podawana z podwójną precyzją
     */
    Product(int ID,string name, string description,double price);
    /**
     * konstruktor używany do stworzenia produktu przez Admina
     * @param productList dotychczasowa lista wszystkich produktów
     */
    Product(vector<Product> productList);
    /**
     * getter wypisujący wszystkie dane o pordukcie
     */
    void getAllData();
    /**
     * funkcja do usuwania produktuy z pliku
     */
    void removeFromFile();
};


#endif //JIPP_PRODUCT_H
