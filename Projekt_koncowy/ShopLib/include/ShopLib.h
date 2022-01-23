//
// Created by Admin on 16.01.2022.
//

#ifndef JIPP_SHOPLIB_H
#define JIPP_SHOPLIB_H
#include <iostream>
#include "../../ShopApp/include/Product.h"
#include "../../ShopApp/include/User.h"
void help();
void listItems(vector<Product> *productList);
void listItems(vector<User> *userList);
int validateCin(string text);
#endif //JIPP_SHOPLIB_H
