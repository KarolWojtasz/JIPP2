//
// Created by Admin on 23.01.2022.
//


#ifndef JIPP_PRINTER_H
#define JIPP_PRINTER_H
#include <string>
#include <iostream>

using namespace std;

/**
 * klasa wykorzystująca template do wypisania danych na ekran
 * @tparam type1 typ przekazywanego parametru
 */
template<typename type1>
class Printer {
private:
    /**
     * zmienna o typie przekazanym w parametrze
     */
    type1 variable1;

public:
    /**
     * konstruktor tworzący obiekt klasy
     * @param variable1 zmienna o typie podanym prez nas w template
     */
    Printer(type1 variable1): variable1(variable1) {}
    /**
     * getter zwracający zmienna variable1
     * @return zmienna variable1 o typie podanym w template
     */
    type1 getVariable1() {
        return variable1;
    }
    /**
     * destruktor wypisujacy informacje o jego wywołaniu
     */
    ~Printer(){
        cout<<"Koniec printera"<<endl;
    }
    /**
     * przeciążenie operatora ! wypisuje zmienną variable1 z dwoma znakami nowej linii
     * @return
     */
    Printer &operator!() const{
        cout<<variable1<<endl<<endl;
    }
};


#endif //JIPP_PRINTER_H
