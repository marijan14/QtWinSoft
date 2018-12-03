#include <iostream>

using namespace std;

class Kvadar
{
private:
    int a, b, c;
public:
    int plostina(int a, int b, int c) {
        return (2 * a * b) + (2 * b * c) + (2 * a * c);
    }
    int volumen(int a, int b, int c) {
        return a * b * c;
    }
    int geta() { return a; }
    int getb() { return b; }
    int getc() { return c; }
    void set() {
        cout << "a=";
        cin >> a;
        cout << "b=";
        cin >> b;
        cout << "c=";
        cin >> c;
    }
    void pecatiSite() {
        cout << "(a,b,c)=(" << a << "," << b << "," << c << ")" << endl;
        cout << "Plostinata e: " << plostina(a, b, c) << endl;
        cout << "Volumenot e: " << volumen(a, b, c) << endl << endl;
    }
    void pecati() {
        if(a == b && b == c && a == c)
            cout << "Objektot e kvadrat!" << endl;
        else {
            cout << "Objektot ne e kvadrat!" << endl;
            cout << "Plostinata e: " << plostina(a, b, c) << endl;
            cout << "Volumenot e: " << volumen(a, b, c) << endl;
        }
    }
};

int main()
{
    Kvadar k;
    k.set();
    k.pecatiSite();
    k.pecati();
    return 0;
}
