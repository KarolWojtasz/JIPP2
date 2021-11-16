//
// Created by user on 16.11.2021.
//

#ifndef JIPP2_VECTOR_H
#define JIPP2_VECTOR_H

class Vector {
private:
    double x, y;

public:
    Vector();

    Vector(double x, double y);

    double length();
    void print();

    Vector operator+(const Vector &rhs);
    Vector operator-(const Vector &rhs);
    Vector operator!();
    double operator*(const Vector &rhs);
    Vector operator*(const double &rhs);

    Vector &operator+=(const Vector &rhs);
};




#endif //JIPP2_VECTOR_H
