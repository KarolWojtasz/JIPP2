//
// Created by Admin on 29.10.2021.
//

#ifndef MATRIXAPP_MATRIXLIB_H
#define MATRIXAPP_MATRIXLIB_H
#include <iostream>

using namespace std;

int** addMatrix(int** matrix1, int** matrix2, int rows, int columns);
double** addMatrix(double** matrix1, double** matrix2, int rows, int columns);

int** subtractMatrix(int** matrix1, int** matrix2, int rows, int columns);
double** subtractMatrix(double** matrix1, double** matrix2, int rows, int columns);

int** multiplyMatrix(int** matrixa, int** matrixb, int rows, int columns, int columns2);
double** multiplyMatrix(double** matrixa, double** matrixb, int rows, int columns, int columns2);

int** multiplyByScalar(int** matrixa, int rows, int columns, int** scalar);
double** multiplyByScalar(double** matrixa, int rows, int columns, double** scalar);

int** transpozeMatrix(int** matrixa, int rows, int columns);
double** transpozeMatrix(double** matrixa, int rows, int columns);

int** powerMatrix(int** matrixa, unsigned power, int rows, int columns);
double** powerMatrix(double** matrixa, unsigned power, int rows, int columns);

int determinantMatrix(int** matrixa, int rows, int columns);
double determinantMatrix(double** matrixa, int rows, int columns);

bool matrixIsDiagonal(int** matrixa, int rows, int columns);
bool matrixIsDiagonal(double** matrixa, int rows, int columns);

void swap(int &a, int &b);
void swap(double &a, double &b);

int* sortRow(int* array, int size);
double* sortRow(double* array, int size);

int** sortRowsInMatrix(int** array, int rows, int columns);
double** sortRowsInMatrix(double** array, int rows, int columns);

#endif //MATRIXAPP_MATRIXLIB_H
