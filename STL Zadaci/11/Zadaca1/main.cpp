#include <iostream>

using namespace std;

template<class T>
class Pole
{
private:
    T pole[5];
public:
    Pole() {}
    Pole(T *pole) {
        for(int i = 0; i < 5; i++)
            this->pole[i] = pole[i];
    }
    T *getPole() {
        return pole;
    }
    void print() {
        for(int i = 0; i < 5; i++)
            cout << pole[i] << " ";
        cout << endl;
    }
};

template<class T>
T max(Pole<T> pole) {
    T max = pole.getPole()[0];
    for(int i = 0; i < 5; i++)
        if(pole.getPole()[i] > max)
            max = pole.getPole()[i];
    return max;
}

int main()
{
    int a[5] = {13, 25, 1, 32, 69};
    char b[5] = {'$', 'x', 'M', 'H', '5'};
    string c[5] = {"Marijan", "Gajdov", "is", "Super", "Man"};

    Pole<int> p1(a);
    Pole<char> p2(b);
    Pole<string> p3(c);

    p1.print();
    p2.print();
    p3.print();

    cout << max(p1) << endl;
    cout << max(p2) << endl;
    cout << max(p3) << endl;
    return 0;
}
