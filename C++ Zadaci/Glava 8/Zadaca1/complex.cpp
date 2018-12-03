#include <iostream>
#include "complex.h"

using namespace std;

Complex::Complex(double r, double i) : real(r), imaginary(i) {}

const Complex Complex::operator = (const Complex &a) {
    real = a.real;
    imaginary = a.imaginary;
    return *this;
}

Complex Complex::operator - (const Complex &a) const {
    return Complex(real - a.real, imaginary - a.imaginary);
}

Complex Complex::operator + (const Complex &a) const {
    return Complex(real + a.real, imaginary + a.imaginary);
}

void Complex::print() const {
    cout << "(" << real << ", " << imaginary << ")";
}
