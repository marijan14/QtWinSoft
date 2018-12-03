#include <iostream>

using namespace std;

class Dropki
{
private:
    long nzd(long a, long b) {
        while (a != b) {
            if(a > b)
                a -= b;
            else
                b -= a;
        }
        return a;
    }
public:
    long delenik, delitel;
    Dropki() {
        delenik = 0;
        delitel = 1;
    }
    Dropki(long n, long d) {
        if(d == 0) {
            cout << "So 0 ne se deli!" << endl;
        } else if (n == 0) {
            delenik = 0;
            delitel = 1;
        } else {
            int znak = 1;
            if(n < 0) {
                znak *= -1;
                n *= -1;
            }
            if(d < 0) {
                znak *= -1;
                d *= -1;
            }
            long temp = nzd(n, d);
            delenik = n / temp * znak;
            delitel = d / temp;
        }
    }
};

Dropki operator + (const Dropki &a, const Dropki &b) {
    return Dropki(a.delenik * b.delitel + b.delenik * a.delitel, a.delitel * b.delitel);
}

Dropki operator - (const Dropki &a, const Dropki &b) {
    return Dropki(a.delenik * b.delitel - b.delenik * a.delitel, a.delitel * b.delitel);
}

Dropki operator * (const Dropki &a, const Dropki &b) {
    return Dropki(a.delenik * b.delenik, a.delitel * b.delitel);
}

Dropki operator / (const Dropki &a, const Dropki &b) {
    return Dropki(a.delenik * b.delitel, a.delitel * b.delenik);
}

std::ostream& operator << (std::ostream &in, const Dropki &d) {
    if(d.delitel == 1)
        in << d.delenik;
    else
        in << d.delenik << "/" << d.delitel;
    return in;
}

int main()
{
    Dropki a(1, 3), b(3, 28), c;
    c = a + b;
    cout << "Zbirot na dropkite e: " << c << endl;
    c = a - b;
    cout << "Odzemanjeto na dropkite e: " << c << endl;
    c = a * b;
    cout << "Proizvodot na dropkite e: " << c << endl;
    c = a / b;
    cout << "Delenjeto na dropkite e: " << c << endl;
    return 0;
}
