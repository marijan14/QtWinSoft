#ifndef COMPLEX1_H
#define COMPLEX1_H

class Complex
{
public:
    Complex(double = 0.0, double = 0.0);
    Complex operator + (const Complex &) const;
    Complex operator - (const Complex &) const;
    const Complex operator = (const Complex &);
private:
    double real, imaginary;
};

#endif // COMPLEX1_H
