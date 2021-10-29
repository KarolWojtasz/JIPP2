//
// Created by Admin on 29.10.2021.
//

#include <iostream>
#include "../matrixLib/include/matrixLib.h"

using namespace std;
/**
 * funkcja wczytujaca dane do tablucy 2 wymiarowej typu int od uzytkownika
 * @param tab tablica 2 wymiarowa typu int
 * @param rows liczba wierszy macierzy
 * @param columns liczba kolumn macierzy
 */
void insert(int** tab, int rows, int columns){
    for(int x=0;x<rows;x++){
        for(int y=0;y<columns;y++){
            cout << "Podaj element wiersz: "<< x <<", kolumna: "<<y<<": ";
            cin >> tab[x][y];
        }
    }
}
/**
 * funkcja wczytujaca dane do tablucy 2 wymiarowej typu double od uzytkownika
 * @param tab tablica 2 wymiarowa typu double
 * @param rows liczba wierszy macierzy
 * @param columns liczba kolumn macierzy
 */
void insert(double** tab, int rows, int columns){
    for(int x=0;x<rows;x++){
        for(int y=0;y<columns;y++){
            cout << "Podaj element wiersz: "<< x <<", kolumna: "<<y<<": ";
            cin >> tab[x][y];

        }
    }
}
/**
 * funkcja wyswietlajaca tablice typu int
 * @param tab tablica 2 wymiarowa typu int
 * @param rows liczba wierszy macierzy
 * @param columns liczba kolumn macierzy
 */
void printMatrix(int** tab, int rows,int columns) {
    for (int x = 0; x < rows; x++) {
        cout << endl;
        for (int y = 0; y < columns; y++) {
            cout << tab[x][y] << " ";
        }
    }
}
/**
 * funkcja wyswietlajaca tablice typu double
 * @param tab tablica 2 wymiarowa typu double
 * @param rows liczba wierszy macierzy
 * @param columns liczba kolumn macierzy
 */
void printMatrix(double** tab, int rows,int columns){
        for(int x=0;x<rows;x++){
            cout<<endl;
            for(int y=0;y<columns;y++){
                cout << tab[x][y]<<" ";
            }
        }
}
/**
 * funkcja wyswietlajaca pomoc
 */
void help(){
    cout<<"Help for matrixApp\n\n"
          "Mozliwe argumenty wywolania:\n"
          "addMatrix - dodawawanie 2 macierzy\n"
          "subtractMatrix - odejmowanie dwoch macierzy\n"
          "multiplyMatrix - mnozenie dwoch macierzy\n"
          "multiplyByScalar - mnozenie macierzy przez skalar\n"
          "transpozeMatrix - transponowanie macierzy\n"
          "powerMatrix - potegowanie macierzy\n"
          "determinantMatrix - wyznacznik macierzy\n"
          "matrixIsDiagonal - sprawdzanie, czy macierz jest diagonalna\n"
          "swap - zamiana dwoch wartosci miejscami\n"
          "sortRow - sortowanie tablicy 1 wymiarowej\n"
          "sortRowsInMatrix - sortowanie wszystkich wierszy w macierzy\n"
          "help - wyswietlenie tej strony pomocy\n";

}
/**
 * Glowna funkcja programu wywoluje funkcjonalnosci opisane w 'help'
 * @param argc ilosc argumentow wywolania
 * @param argv argumenty wywolania
 * @return int
 */
int main(int argc, char *argv[]) {
    int rows , columns, type;




    if(string(argv[1])==string("addMatrix")){
        cout << "Podaj typ danych(przy podaniu zlej wartosci zastosowany bedzie int):\n1 - int (liczby calkowite)\n2 - double (liczby zmiennoprzecinkowe): ";
        cin >> type;
        cout << "Podaj ilosc wierszy macierzy";
        cin>>rows;
        cout << "Podaj ilosc kolumn macierzy";
        cin>>columns;
        if(type != 2){
            int** matrixa = new int*[rows];
            int** matrixb = new int*[rows];
            int** matrixWyn = new int*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new int[columns];
                matrixb[i] = new int[columns];
                matrixWyn[i] = new int[columns];
            }
            cout<<"Macierz A: ";
            insert(matrixa,rows,columns);
            cout<<"Macierz B: ";
            insert(matrixb,rows,columns);
            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);
            matrixWyn = addMatrix(matrixa,matrixb,rows,columns);


            cout<< "\nmatrixb:";
            printMatrix(matrixb,rows,columns);
            cout<< "\nWynik:";
            printMatrix(matrixa,rows,columns);

            free(matrixb);
            free(matrixa);
            free(matrixWyn);
        }else{
            double** matrixa = new double*[rows];
            double** matrixb = new double*[rows];
            double** matrixWyn = new double*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new double[columns];
                matrixb[i] = new double[columns];
                matrixWyn[i] = new double[columns];
            }
            insert(matrixa,rows,columns);
            insert(matrixb,rows,columns);
            matrixWyn = addMatrix(matrixa,matrixb,rows,columns);

            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);
            cout<< "\nmatrixb:";
            printMatrix(matrixb,rows,columns);
            cout<< "\nWynik:";
            printMatrix(matrixa,rows,columns);


            free(matrixb);
            free(matrixa);
            free(matrixWyn);
        }

    }else if(string(argv[1])==string("subtractMatrix")){
        cout << "Podaj typ danych(przy podaniu zlej wartosci zastosowany bedzie int):\n1 - int (liczby calkowite)\n2 - double (liczby zmiennoprzecinkowe): ";
        cin >> type;
        cout << "Podaj ilosc wierszy macierzy";
        cin>>rows;
        cout << "Podaj ilosc kolumn macierzy";
        cin>>columns;
        if(type != 2){
            int** matrixa = new int*[rows];
            int** matrixb = new int*[rows];
            int** matrixWyn = new int*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new int[columns];
                matrixb[i] = new int[columns];
                matrixWyn[i] = new int[columns];
            }
            cout<<"Macierz A: ";
            insert(matrixa,rows,columns);
            cout<<"Macierz B: ";
            insert(matrixb,rows,columns);
            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);
            matrixWyn = subtractMatrix(matrixa,matrixb,rows,columns);


            cout<< "\nmatrixb:";
            printMatrix(matrixb,rows,columns);
            cout<< "\nWynik:";
            printMatrix(matrixa,rows,columns);

            free(matrixb);
            free(matrixa);
            free(matrixWyn);
        }else{
            double** matrixa = new double*[rows];
            double** matrixb = new double*[rows];
            double** matrixWyn = new double*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new double[columns];
                matrixb[i] = new double[columns];
                matrixWyn[i] = new double[columns];
            }
            insert(matrixa,rows,columns);
            insert(matrixb,rows,columns);
            matrixWyn = subtractMatrix(matrixa,matrixb,rows,columns);

            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);
            cout<< "\nmatrixb:";
            printMatrix(matrixb,rows,columns);
            cout<< "\nWynik:";
            printMatrix(matrixa,rows,columns);


            free(matrixb);
            free(matrixa);
            free(matrixWyn);
        }
    }else if(string(argv[1])==string("multiplyMatrix")){
        cout << "Podaj typ danych(przy podaniu zlej wartosci zastosowany bedzie int):\n1 - int (liczby calkowite)\n2 - double (liczby zmiennoprzecinkowe): ";
        cin >> type;
        cout << "Podaj ilosc wierszy macierzy A";
        cin>>rows;
        cout << "Podaj ilosc kolumn macierzy A";
        cin>>columns;
        int rows2,columns2;
        cout << "Podaj ilosc wierszy macierzy B";
        cin>>rows2;
        cout << "Podaj ilosc kolumn macierzy B";
        cin>>columns2;
        if(type != 2){
            int** matrixa = new int*[rows];
            int** matrixb = new int*[rows2];
            int** matrixWyn = new int*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new int[columns];
                matrixWyn[i] = new int[columns2];
            }
            for(int i = 0; i < rows2; ++i)
                matrixb[i] = new int[columns2];


            cout<<"Macierz A: \n";
            insert(matrixa,rows,columns);

            cout<<"Macierz B: \n";
            insert(matrixb,rows2,columns2);


            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);


            matrixWyn = multiplyMatrix(matrixa,matrixb,rows,columns,columns2);


            cout<< "\nmatrixb:";
            printMatrix(matrixb,rows2,columns2);
            cout<< "\nWynik:";
            printMatrix(matrixWyn,rows,columns2);

            free(matrixb);
            free(matrixa);
            free(matrixWyn);

        }else {
            double** matrixa = new double*[rows];
            double** matrixb = new double*[rows2];
            double** matrixWyn = new double*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new double[columns];
                matrixWyn[i] = new double[columns2];
            }
            for(int i = 0; i < rows2; ++i)
                matrixb[i] = new double[columns2];


            cout<<"Macierz A: \n";
            insert(matrixa,rows,columns);

            cout<<"Macierz B: \n";
            insert(matrixb,rows2,columns2);


            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);


            matrixWyn = multiplyMatrix(matrixa,matrixb,rows,columns,columns2);


            cout<< "\nmatrixb:";
            printMatrix(matrixb,rows2,columns2);
            cout<< "\nWynik:";
            printMatrix(matrixWyn,rows,columns2);

            free(matrixb);
            free(matrixa);
            free(matrixWyn);
        }

    }else if(string(argv[1])==string("multiplyByScalar")){

        cout << "Podaj typ danych(przy podaniu zlej wartosci zastosowany bedzie int):\n1 - int (liczby calkowite)\n2 - double (liczby zmiennoprzecinkowe): ";
        cin >> type;
        cout << "Podaj ilosc wierszy macierzy A";
        cin>>rows;
        cout << "Podaj ilosc kolumn macierzy A";
        cin>>columns;

        if(type != 2){
            int** scalar = new int*[1];
            scalar[0] = new int[1];
            int** matrixa = new int*[rows];
            int** matrixWyn = new int*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new int[columns];
                matrixWyn[i] = new int[columns];
            }

            cout<<"Macierz A: \n";
            insert(matrixa,rows,columns);
            cout << "\nPodaj warosc skalara: ";
            cin >> scalar[0][0];

            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);
            cout<< "\nscalar:" << scalar[0][0];
            matrixWyn = multiplyByScalar(matrixa,rows,columns,scalar);
            cout<< "\nWynik:";
            printMatrix(matrixWyn,rows,columns);

            free(matrixa);
            free(scalar);
            free(matrixWyn);

        }else {
            double** scalar = new double*[1];
            scalar[0] = new double[1];
            double** matrixa = new double*[rows];
            double** matrixWyn = new double*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new double[columns];
                matrixWyn[i] = new double[columns];
            }

            cout<<"Macierz A: \n";
            insert(matrixa,rows,columns);
            cout << "\nPodaj warosc skalara: ";
            cin >> scalar[0][0];

            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);
            cout<< "\nscalar:" << scalar[0][0];
            matrixWyn = multiplyByScalar(matrixa,rows,columns,scalar);
            cout<< "\nWynik:";
            printMatrix(matrixWyn,rows,columns);

            free(matrixa);
            free(scalar);
            free(matrixWyn);
        }
    }else if(string(argv[1])==string("transpozeMatrix")){
        cout << "Podaj typ danych(przy podaniu zlej wartosci zastosowany bedzie int):\n1 - int (liczby calkowite)\n2 - double (liczby zmiennoprzecinkowe): ";
        cin >> type;
        cout << "Podaj ilosc wierszy macierzy A";
        cin>>rows;
        cout << "Podaj ilosc kolumn macierzy A";
        cin>>columns;

        if(type != 2){
            int** matrixa = new int*[rows];
            int** matrixWyn = new int*[columns];
            for(int i = 0; i < rows; ++i)
                matrixa[i] = new int[columns];
            for(int i = 0; i < columns; ++i)
                matrixWyn[i] = new int[rows];

            cout<<"Macierz A: \n";
            insert(matrixa,rows,columns);

            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);
            matrixWyn = transpozeMatrix(matrixa,rows,columns);
            cout<< "\nWynik:";
            printMatrix(matrixWyn,columns,rows);

            free(matrixa);
            free(matrixWyn);

        }else {
            double ** matrixa = new double*[rows];
            double** matrixWyn = new double*[columns];
            for(int i = 0; i < rows; ++i)
                matrixa[i] = new double[columns];
            for(int i = 0; i < columns; ++i)
                matrixWyn[i] = new double[rows];

            cout<<"Macierz A: \n";
            insert(matrixa,rows,columns);

            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);
            matrixWyn = transpozeMatrix(matrixa,rows,columns);
            cout<< "\nWynik:";
            printMatrix(matrixWyn,columns,rows);

            free(matrixa);
            free(matrixWyn);
        }



    }else if(string(argv[1])==string("powerMatrix")){
        cout << "Podaj typ danych(przy podaniu zlej wartosci zastosowany bedzie int):\n1 - int (liczby calkowite)\n2 - double (liczby zmiennoprzecinkowe): ";
        cin >> type;
        cout << "Podaj ilosc wierszy macierzy A";
        cin>>rows;
        cout << "Podaj ilosc kolumn macierzy A";
        cin>>columns;

        if(type != 2){

            int** matrixa = new int*[rows];
            int** matrixWyn = new int*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new int[columns];
                matrixWyn[i] = new int[columns];
            }

            cout<<"Macierz A: \n";
            insert(matrixa,rows,columns);
            unsigned power;
            cout<<"Podaj wartość potegi: ";
            cin >> power;

            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);
            cout<< "\nPotega :" << power;
            matrixWyn = powerMatrix(matrixa,power,rows,columns);
            cout<< "\nWynik:";
            printMatrix(matrixWyn,rows,columns);

            free(matrixa);
            free(matrixWyn);

        }else {
            double** matrixa = new double*[rows];
            double** matrixWyn = new double*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new double[columns];
                matrixWyn[i] = new double[columns];
            }

            cout<<"Macierz A: \n";
            insert(matrixa,rows,columns);
            unsigned power;
            cout<<"Podaj wartość potegi: ";
            cin >> power;

            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);
            cout<< "\nPotega :" << power;
            matrixWyn = powerMatrix(matrixa,power,rows,columns);
            cout<< "\nWynik:";
            printMatrix(matrixWyn,rows,columns);

            free(matrixa);
            free(matrixWyn);
        }
    }else if(string(argv[1])==string("determinantMatrix")){
        cout << "Podaj typ danych(przy podaniu zlej wartosci zastosowany bedzie int):\n1 - int (liczby calkowite)\n2 - double (liczby zmiennoprzecinkowe): ";
        cin >> type;
        cout << "Podaj ilosc wierszy macierzy A";
        cin>>rows;
        cout << "Podaj ilosc kolumn macierzy A";
        cin>>columns;

        if(type != 2){

            int** matrixa = new int*[rows];
            int** matrixWyn = new int*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new int[columns];
                matrixWyn[i] = new int[columns];
            }

            cout<<"Macierz A: \n";
            insert(matrixa,rows,columns);

            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);
            int det = determinantMatrix(matrixa,rows,columns);
            cout<< "Wyznacznik to: "<<det;
            free(matrixa);
            free(matrixWyn);

        }else {
            double ** matrixa = new double*[rows];
            double** matrixWyn = new double*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new double[columns];
                matrixWyn[i] = new double[columns];
            }

            cout<<"Macierz A: \n";
            insert(matrixa,rows,columns);

            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);
            double det = determinantMatrix(matrixa,rows,columns);
            cout<< "Wyznacznik to: "<<det;
            free(matrixa);
            free(matrixWyn);
        }
    }else if(string(argv[1])==string("matrixIsDiagonal")){
        cout << "Podaj typ danych(przy podaniu zlej wartosci zastosowany bedzie int):\n1 - int (liczby calkowite)\n2 - double (liczby zmiennoprzecinkowe): ";
        cin >> type;
        cout << "Podaj ilosc wierszy macierzy A";
        cin>>rows;
        cout << "Podaj ilosc kolumn macierzy A";
        cin>>columns;

        if(type != 2){

            int** matrixa = new int*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new int[columns];
            }

            cout<<"Macierz A: \n";
            insert(matrixa,rows,columns);

            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);
            bool diagonal = matrixIsDiagonal(matrixa,rows,columns);
            if(diagonal)
                cout << "\nMacierz jest diagonalna";
            else
                cout << "\nMacierz nie jest diagonalna";
            free(matrixa);

        }else {
            double** matrixa = new double*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new double[columns];
            }
            cout<<"Macierz A: \n";
            insert(matrixa,rows,columns);

            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);
            bool diagonal = matrixIsDiagonal(matrixa,rows,columns);
            if(diagonal)
                cout << "\nMacierz jest diagonalna";
            else
                cout << "\nMacierz nie jest diagonalna";
            free(matrixa);

        }
    }else if(string(argv[1])==string("swap")){
        cout << "Podaj typ danych(przy podaniu zlej wartosci zastosowany bedzie int):\n1 - int (liczby calkowite)\n2 - double (liczby zmiennoprzecinkowe): ";
        cin >> type;
        if(type != 2){
            int a,b;
            cout << "Podaj a, a nastepnie b: ";
            cin >> a >> b;
            swap(a,b);
            cout<<"Po zamianie: a="<<a<<", b="<<b;
        }else {
            double a,b;
            cout << "Podaj a, a nastepnie b: ";
            cin >> a >> b;
            swap(a,b);
            cout<<"Po zamianie: a="<<a<<", b="<<b;

        }
    }else if(string(argv[1])==string("sortRow")){
        cout << "Podaj typ danych(przy podaniu zlej wartosci zastosowany bedzie int):\n1 - int (liczby calkowite)\n2 - double (liczby zmiennoprzecinkowe): ";
        cin >> type;
        cout << "Podaj ilosc kolumn tablicy: ";
        cin>>columns;
        if(type != 2){
            int* array = new int[columns];
            int* arraySort = new int[columns];
            for(int i=0;i<columns;i++){
                cout<<"Podaj element tablicy: ";
                cin>>array[i];
            }
            for(int i=0;i<columns;i++){
                cout<<array[i]<<" ";
            }
            cout<< "\nposortowana: \n";
            arraySort= sortRow(array,columns);
            for(int i=0;i<columns;i++){
                cout<<arraySort[i]<<" ";
            }
        }else {
            double * array = new double[columns];
            double* arraySort = new double[columns];
            for(int i=0;i<columns;i++){
                cout<<"Podaj element tablicy: ";
                cin>>array[i];
            }
            for(int i=0;i<columns;i++){
                cout<<array[i]<<" ";
            }
            cout<< "\nposortowana: \n";
            arraySort= sortRow(array,columns);
            for(int i=0;i<columns;i++){
                cout<<arraySort[i]<<" ";
            }
        }
    }else if(string(argv[1])==string("sortRowsInMatrix")){
        cout << "Podaj typ danych(przy podaniu zlej wartosci zastosowany bedzie int):\n1 - int (liczby calkowite)\n2 - double (liczby zmiennoprzecinkowe): ";
        cin >> type;
        cout << "Podaj ilosc wierszy macierzy A";
        cin>>rows;
        cout << "Podaj ilosc kolumn macierzy A";
        cin>>columns;

        if(type != 2){

            int** matrixa = new int*[rows];
            int** matrixWyn = new int*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new int[columns];
                matrixWyn[i] = new int[columns];
            }

            cout<<"Macierz A: \n";
            insert(matrixa,rows,columns);

            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);

            cout<< "\nPosortowane:";
            matrixWyn = sortRowsInMatrix(matrixa,rows,columns);
            printMatrix(matrixWyn,rows,columns);

            free(matrixa);
            free(matrixWyn);

        }else {
            double** matrixa = new double*[rows];
            double ** matrixWyn = new double*[rows];
            for(int i = 0; i < rows; ++i){
                matrixa[i] = new double[columns];
                matrixWyn[i] = new double[columns];
            }

            cout<<"Macierz A: \n";
            insert(matrixa,rows,columns);

            cout<< "\nmatrixa:";
            printMatrix(matrixa,rows,columns);

            cout<< "\nPosortowane:";
            matrixWyn = sortRowsInMatrix(matrixa,rows,columns);
            printMatrix(matrixWyn,rows,columns);

            free(matrixa);
            free(matrixWyn);
        }
    }else{
        help();
    }
    return 0;
}