//
// Created by Admin on 29.10.2021.
//
#include "../include/matrixLib.h"
#include <math.h>
/**
 * funkcja dodajaca 2 macierze typu int**
 * @param matrixa macierz 2 wymiarowa z elementami typu int
 * @param matrixb macierz 2 wymiarowa z elementami typu int
 * @param rows ilosc wierszy w macierzach
 * @param columns ilosc kolumn w macierzach
 * @return tablica 2 wymiarowa typu int**
 */
int** addMatrix(int** matrixa, int** matrixb, int rows, int columns) {
    for(int x=0;x<rows;x++){
        for(int y=0;y<columns;y++){
            matrixa[x][y]+=matrixb[x][y];
        }
    }
    return matrixa;
}
/**
 * funkcja dodajaca 2 macierze typu double**
 * @param matrixa macierz 2 wymiarowa z elementami typu double
 * @param matrixb macierz 2 wymiarowa z elementami typu double
 * @param rows ilosc wierszy w macierzach
 * @param columns ilosc kolumn w macierzach
 * @return tablica 2 wymiarowa typu double**
 */
double** addMatrix(double** matrixa, double** matrixb, int rows, int columns) {
    for(int x=0;x<rows;x++){
        for(int y=0;y<columns;y++){
            matrixa[x][y]+=matrixb[x][y];
        }
    }
    return matrixa;
}
/**
 * funkcja odejmujaca 2 macierze typu int**
 * @param matrixa macierz 2 wymiarowa z elementami typu int
 * @param matrixb macierz 2 wymiarowa z elementami typu int
 * @param rows ilosc wierszy w macierzach
 * @param columns ilosc kolumn w macierzach
 * @return tablica 2 wymiarowa typu int**
 */
int** subtractMatrix(int** matrixa, int** matrixb, int rows, int columns) {
    for(int x=0;x<rows;x++){
        for(int y=0;y<columns;y++){
            matrixa[x][y]-=matrixb[x][y];
        }
    }
    return matrixa;
}
/**
 * funkcja odejmujaca 2 macierze typu double**
 * @param matrixa macierz 2 wymiarowa z elementami typu double
 * @param matrixb macierz 2 wymiarowa z elementami typu double
 * @param rows ilosc wierszy w macierzach
 * @param columns ilosc kolumn w macierzach
 * @return tablica 2 wymiarowa typu double**
 */
double** subtractMatrix(double** matrixa, double** matrixb, int rows, int columns) {
    for(int x=0;x<rows;x++){
        for(int y=0;y<columns;y++){
            matrixa[x][y]-=matrixb[x][y];
        }
    }
    return matrixa;
}
/**
 * funkcja mnozaca macierz przez druga macierz typu int**
 * @param matrixa macierz 2 wymiarowa z elementami typu int
 * @param matrixb macierz 2 wymiarowa z elementami typu int
 * @param rows ilosc wierszy w macierzy a
 * @param columns ilosc kolumn w macierzy a
 * @param columns2 ilosc kolumn w macierzy b
 * @return tablica 2 wymiarowa typu int**
 */
int** multiplyMatrix(int** matrixa, int** matrixb, int rows, int columns, int columns2) {

    int** matrixWyn = new int*[rows];

    for(int i = 0; i < rows; ++i){
        matrixWyn[i] = new int[columns2];
    }

    int s;
    for(int i = 0; i < rows; i++ )
        for(int j = 0; j < columns2; j++ )
        {
            s = 0;
            for(int k = 0; k < columns; k++ )
                s += matrixa[i][k] * matrixb[k][j];

            matrixWyn[i][j] = s;
        }

    return matrixWyn;
}
/**
 * funkcja mnozaca macierz przez druga macierz typu double**
 * @param matrixa macierz 2 wymiarowa z elementami typu double
 * @param matrixb macierz 2 wymiarowa z elementami typu double
 * @param rows ilosc wierszy w macierzy a
 * @param columns ilosc kolumn w macierzy a
 * @param columns2 ilosc kolumn w macierzy b
 * @return tablica 2 wymiarowa typu double**
 */
double** multiplyMatrix(double** matrixa, double** matrixb, int rows, int columns, int columns2) {

    double** matrixWyn = new double*[rows];

    for(int i = 0; i < rows; ++i){
        matrixWyn[i] = new double[columns2];
    }

    double s;
    for(int i = 0; i < rows; i++ )
        for(int j = 0; j < columns2; j++ )
        {
            s = 0;
            for(int k = 0; k < columns; k++ )
                s += matrixa[i][k] * matrixb[k][j];

            matrixWyn[i][j] = s;
        }

    return matrixWyn;
}
/**
 * funkcja mnozy macierz przez skalar
 * @param matrixa macierz 2 wymiarowa z elementami typu int
 * @param rows ilosc wierszy w macierzy
 * @param columns ilosc kolumn w macierzy
 * @param scalar macierz 1x1 z wartoscia skalara
 * @return tablica 2 wymiarowa typu int**
 */
int** multiplyByScalar(int** matrixa, int rows, int columns, int** scalar) {
    for(int x=0;x<rows;x++){
        for(int y=0;y<columns;y++){
            matrixa[x][y]*=scalar[0][0];
        }
    }
    return matrixa;
}
/**
 * funkcja mnozy macierz przez skalar
 * @param matrixa macierz 2 wymiarowa z elementami typu double**
 * @param rows ilosc wierszy w macierzy
 * @param columns ilosc kolumn w macierzy
 * @param scalar macierz 1x1 z wartoscia skalara
 * @return tablica 2 wymiarowa typu double**
 */
double** multiplyByScalar(double** matrixa, int rows, int columns, double** scalar) {
    for(int x=0;x<rows;x++){
        for(int y=0;y<columns;y++){
            matrixa[x][y]*=scalar[0][0];
        }
    }
    return matrixa;
}
/**
 * funkcja transponuje macierz typu int
 * @param matrixa macierz 2 wymiarowa z elementami typu int**
 * @param rows ilosc wierszy w macierzy
 * @param columns ilosc kolumn w macierzy
 * @return tablica 2 wymiarowa typu int**
 */
int** transpozeMatrix(int** matrixa, int rows, int columns){
    int** matrixWyn = new int*[columns];

    for(int i = 0; i < columns; ++i){
        matrixWyn[i] = new int[rows];
    }

    for(int x=0;x<rows;x++){
        for(int y=0;y<columns;y++){
            matrixWyn[y][x] = matrixa[x][y];
        }
    }

    return matrixWyn;
}
/**
 * funkcja transponuje macierz typu double
 * @param matrixa macierz 2 wymiarowa z elementami typu double**
 * @param rows ilosc wierszy w macierzy
 * @param columns ilosc kolumn w macierzy
 * @return tablica 2 wymiarowa typu double**
 */
double** transpozeMatrix(double** matrixa, int rows, int columns){
    double** matrixWyn = new double*[columns];

    for(int i = 0; i < columns; ++i){
        matrixWyn[i] = new double[rows];
    }

    for(int x=0;x<rows;x++){
        for(int y=0;y<columns;y++){
            matrixWyn[y][x] = matrixa[x][y];
        }
    }

    return matrixWyn;
}
/**
 * funkcja podnosi macierz do potegi
 * @param matrixa macierz 2 wymiarowa z elementami typu int**
 * @param power wartosc potegi
 * @param rows ilosc wierszy w macierzy
 * @param columns ilosc kolumn w macierzy
 * @return tablica 2 wymiarowa typu int**
 */
int** powerMatrix(int** matrixa, unsigned power, int rows, int columns) {
    int** matrixWyn = new int*[rows];

    for(int i = 0; i < rows; ++i){
        matrixWyn[i] = new int[columns];
    }
    matrixWyn = matrixa;
    for(int i=0;i<power-1;i++){
        matrixWyn =  multiplyMatrix(matrixWyn,matrixa,rows,columns,columns);
    }

    return matrixWyn;
}
/**
 * funkcja podnosi macierz do potegi
 * @param matrixa macierz 2 wymiarowa z elementami typu double**
 * @param power wartosc potegi
 * @param rows ilosc wierszy w macierzy
 * @param columns ilosc kolumn w macierzy
 * @return tablica 2 wymiarowa typu double**
 */
double** powerMatrix(double** matrixa, unsigned power, int rows, int columns) {
    double** matrixWyn = new double*[rows];

    for(int i = 0; i < rows; ++i){
        matrixWyn[i] = new double[columns];
    }
    matrixWyn = matrixa;
    for(int i=0;i<power-1;i++){
        matrixWyn =  multiplyMatrix(matrixWyn,matrixa,rows,columns,columns);
    }

    return matrixWyn;
}
/**
 * funkcja liczy wyznacznik macierzy typu int**
 * @param matrixa macierz 2 wymiarowa z elementami typu int**
 * @param rows ilosc wierszy w macierzy
 * @param columns ilosc kolumn w macierzy
 * @return wartosc wyznacznika typu int
 */
int determinantMatrix(int** matrixa, int rows, int columns) {
    int d=0;
    if (rows == 2)
        return ((matrixa[0][0] * matrixa[1][1]) - (matrixa[1][0] * matrixa[0][1]));
    else
    {
        int** matrixHelp = new int*[rows];

        for(int i = 0; i < rows; ++i){
            matrixHelp[i] = new int[columns];
        }

        for (int c = 0; c < rows; c++)
        {
            int subi = 0;
            for (int i = 1; i < rows; i++)
            {
                int subj = 0;
                for (int j = 0; j < rows; j++)
                {
                    if (j == c)
                        continue;
                    matrixHelp[subi][subj] = matrixa[i][j];
                    subj++;
                }
                subi++;
            }
            d = d + (pow(-1, c) * matrixa[0][c] * determinantMatrix(matrixHelp,rows-1,columns-1));
        }
    }
    return d;
}
/**
 * funkcja liczy wyznacznik macierzy typu double**
 * @param matrixa macierz 2 wymiarowa z elementami typu double**
 * @param rows ilosc wierszy w macierzy
 * @param columns ilosc kolumn w macierzy
 * @return wartosc wyznacznika typu double
 */
double determinantMatrix(double** matrixa, int rows, int columns) {
    double d=0;
    if (rows == 2)
        return ((matrixa[0][0] * matrixa[1][1]) - (matrixa[1][0] * matrixa[0][1]));
    else
    {
        double** matrixHelp = new double*[rows];

        for(int i = 0; i < rows; ++i){
            matrixHelp[i] = new double[columns];
        }

        for (int c = 0; c < rows; c++)
        {
            int subi = 0;
            for (int i = 1; i < rows; i++)
            {
                int subj = 0;
                for (int j = 0; j < rows; j++)
                {
                    if (j == c)
                        continue;
                    matrixHelp[subi][subj] = matrixa[i][j];
                    subj++;
                }
                subi++;
            }
            d = d + (pow(-1, c) * matrixa[0][c] * determinantMatrix(matrixHelp,rows-1,columns-1));
        }
    }
    return d;
}
/**
 * funkcja sprawdza czy dana macierz typu int** jest diagonalna
 * @param matrixa macierz 2 wymiarowa z elementami typu int**
 * @param rows ilosc wierszy w macierzy
 * @param columns ilosc kolumn w macierzy
 * @return wartosc true/false
 */
bool matrixIsDiagonal(int** matrixa, int rows, int columns) {
    int diagonal=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(i!=j && matrixa[i][j]!=0)
            {
                diagonal=1;
                break;
            }
        }
    }
    if(diagonal==1)
        return false;
    else
        return true;

}
/**
 * funkcja sprawdza czy dana macierz typu double** jest diagonalna
 * @param matrixa macierz 2 wymiarowa z elementami typu double**
 * @param rows ilosc wierszy w macierzy
 * @param columns ilosc kolumn w macierzy
 * @return wartosc true/false
 */
bool matrixIsDiagonal(double** matrixa, int rows, int columns) {
    int diagonal=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(i!=j && matrixa[i][j]!=0)
            {
                diagonal=1;
                break;
            }
        }
    }
    if(diagonal==1)
        return false;
    else
        return true;

}
/**
 * Funkcja zamienia wartosci typu int miejscami
 * @param a wartosc typu int
 * @param b wartosc typu int
 */
void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}
/**
 * Funkcja zamienia wartosci typu int miejscami
 * @param a wartosc typu double
 * @param b wartosc typu double
 */
void swap(double &a, double &b) {
    double tmp = a;
    a = b;
    b = tmp;
}
/**
 * funkcja sortuje babelkowo wartosci rosnaco w tablicy typu int*
 * @param array tablica typu int*
 * @param size rozmiar tablicy podany jako int
 * @return tablica 2 wymiarowa typu int**
 */
int* sortRow(int* array, int size) {
    for (int i = 0; i < size-1; i++)
        for (int j = 0; j < size-i-1; j++)
            if (array[j] > array[j+1])
                swap(array[j], array[j+1]);
    return array;
}
/**
 * funkcja sortuje babelkowo wartosci rosnaco w tablicy typu double*
 * @param array tablica typu double*
 * @param size rozmiar tablicy podany jako double
 * @return tablica 2 wymiarowa typu double**
 */
double* sortRow(double* array, int size) {
    for (int i = 0; i < size-1; i++)
        for (int j = 0; j < size-i-1; j++)
            if (array[j] > array[j+1])
                swap(array[j], array[j+1]);
    return array;
}
/**
 * funkcja sortuje rosnaco wszystkie wiersze w macierzy typu int**
 * @param matrixa macierz 2 wymiarowa z elementami typu int**
 * @param rows ilosc wierszy w macierzy
 * @param columns ilosc kolumn w macierzy
 * @return tablica 2 wymiarowa typu int**
 */
int** sortRowsInMatrix(int** array, int rows, int columns) {
    int** matrixWyn = new int*[rows];

    for(int i = 0; i < rows; ++i){
        matrixWyn[i] = new int[columns];
    }
    for (int i = 0; i < rows; i++)
        matrixWyn[i] = sortRow(array[i],columns);
    return matrixWyn;
}
/**
 * funkcja sortuje rosnaco wszystkie wiersze w macierzy typu double**
 * @param matrixa macierz 2 wymiarowa z elementami typu double**
 * @param rows ilosc wierszy w macierzy
 * @param columns ilosc kolumn w macierzy
 * @return tablica 2 wymiarowa typu double**
 */
double** sortRowsInMatrix(double** array, int rows, int columns) {
    double** matrixWyn = new double*[rows];

    for(int i = 0; i < rows; ++i){
        matrixWyn[i] = new double[columns];
    }
    for (int i = 0; i < rows; i++)
        matrixWyn[i] = sortRow(array[i],columns);
    return matrixWyn;
}