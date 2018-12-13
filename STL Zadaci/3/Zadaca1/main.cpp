#include <iostream>

using namespace std;

template<typename T>
class Zapis
{
private:
    T x, y, z;
public:
    Zapis<T>(T x, T y, T z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    T getX() {
        return x;
    }
    T getY() {
        return y;
    }
    T getZ() {
        return z;
    }
    friend istream& operator >> (istream &in, Zapis<T> &zapis) {
        in >> zapis.x;
        in >> zapis.y;
        in >> zapis.z;
        return in;
    }
};

template<typename T>
T kontrolor(Zapis<T> zapis) {
    T suma = 0;
    suma = zapis.getX() + zapis.getY() + zapis.getZ();
    if(suma < 10000)
        return suma;
    else
        cout << "It's over 10,000" << endl;
    return 0;
}

int main()
{
    Zapis<int> z1(10000, 2, 3);
    cout << kontrolor(z1) << endl;

    Zapis<double> z2(5.1, 1.1, 6.1);
    cout << kontrolor(z2) << endl;
    return 0;
}
