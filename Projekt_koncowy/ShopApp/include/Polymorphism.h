//
// Created by Admin on 31.01.2022.
//

#ifndef JIPP_POLYMORPHISM_H
#define JIPP_POLYMORPHISM_H
#include <string>
#include <iostream>
using namespace std;

/**
 * klasa bazowa zawierająca metodę wirtualną
 */
class PolymorphismParent
{
public:
    /**
     *metoda wirtualna wypisująca informacje na ekran
     */
    virtual void dowork();
};

/**
 * klasa dziedzicząca z klasy PolymorphismParent
 */
class PolymorphismChild : public PolymorphismParent
{
public:
    /**
     * metoda klasy dziedziczącej wypisująca informacje na ekran
     */
    void dowork();
};

#endif //JIPP_POLYMORPHISM_H
