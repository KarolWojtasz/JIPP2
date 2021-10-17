#include <iostream>
#include <locale.h>

using namespace std;
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
int main(int argc, char *argv[]) {
    setlocale(LC_CTYPE, "Polish");

    if(argv[1]==string("add")){
        if(argc!=4){
            help();
            return 0;
        }else{
            int a = atoi(argv[2]);
            int b = atoi(argv[3]);
            int wyn = a+b;
            cout<<"Wynik dodawania: "<< wyn;
        }

    }else if(argv[1]==string("substract")){
        if(argc!=4){
            help();
            return 0;
        }else{
            int a = atoi(argv[2]);
            int b = atoi(argv[3]);
            int wyn = a-b;
            cout<<"Wynik odejmowania: "<< wyn;
        }
    }else if(argv[1]==string("volume")){
        if(argc!=6){
            help();
            return 0;
        }else{
            int a = atoi(argv[2]);
            int b = atoi(argv[3]);
            int h = atoi(argv[4]);
            int H = atoi(argv[5]);

            int wyn = (a+b)*h/2*H;
            cout<<"Objętość graniastosłupa: "<< wyn;
        }
    }else{
        help();
    }
    /*
    int liczba = 12345;         //zmienna liczbowa
    int *wsk = &liczba;         //przypisanie wskaźnikowi adresu zmiennej liczba

    cout << *wsk << endl;        //wyświetlenie wyłuskanej wartości wskaźnika (12345)
    cout << wsk << endl;         //wyświetlenie adresu zmiennej liczba
    cout << &wsk << endl;        //wyświetlenie adresu wskaźnika
    cout << &liczba << endl;    //wyświetlenie adresu zmiennej liczba

     //zadanie petla
     for(int x=0;x<5;x++){
     cout << "JiPP2";
     }



         //zadanie deklaracja tablicy dwuwymiarowej

    int rozmiarx,rozmiary;
    cout << "Podaj rozmiar tablicy dwuwymiarowej:" << endl;
    cin >> rozmiarx;
    cin >>rozmiary;

    int** tablica = new int*[rozmiarx];
    for(int i=0;i<rozmiarx;i++){
         tablica[i] = new int[rozmiary];
    }

    delete [] tablica;
    */
    return 0;
}
