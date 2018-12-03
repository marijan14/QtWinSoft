#include <iostream>
#ifndef COMPLEX1_H
#define COMPLEX1_H

using namespace std;

class Complex
{
public:
    Complex(double = 0.0, double = 0.0);
    Complex operator + (const Complex &) const;
    Complex operator - (const Complex &) const;
    Complex operator * (const Complex &) const;
    //Complex operator * (const Complex &, int) const;
    //Complex operator * (int, const Complex &) const;
    const Complex operator = (const Complex &);
    friend ostream& operator << (ostream &, Complex &);
    friend istream& operator >> (istream &, Complex &);
    void print() const;
private:
    double real, imaginary;
};

#endif // COMPLEX1_H
