//
// Created by Admin on 16.01.2022.
//

#ifndef JIPP_PRODUCT_H
#define JIPP_PRODUCT_H
#include <string>
#include <vector>
using namespace std;

class Product {
private:

    string name;
    string description;
    double price;
public:
    int ID;
    Product(int ID,string name, string description,double price);
    Product(vector<Product> productList);
    void getAllData();
    void removeFromFile();
};


#endif //JIPP_PRODUCT_H
