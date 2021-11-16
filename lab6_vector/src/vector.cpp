//
// Created by user on 16.11.2021.
//

#include "vector.h"
#include <iostream>
#include "math.h"
using namespace std;
Vector::Vector(): x(0), y(0) {}

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}
Vector Vector::operator+(const Vector &rhs) {
    return {x + rhs.x, y + rhs.y};
}
Vector Vector::operator-(const Vector &rhs) {
    return {x - rhs.x, y - rhs.y};
}
Vector Vector::operator!() {
    return { -x,- y};
}
double Vector::operator*(const Vector &rhs) {
    return (x*y)+(rhs.x+rhs.y);
}
Vector Vector::operator*(const double &rhs) {
    return {x*rhs , y*rhs};
}
Vector &Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

void Vector::print() {
    cout<<x<<" "<<y<<endl;
}