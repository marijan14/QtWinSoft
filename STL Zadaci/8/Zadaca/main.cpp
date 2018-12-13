#include <iostream>
#include <cstring>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

static const int vrednost_na_bod = 5000;

class Vraboten
{
private:
    char ime[100];
    int bodovi;
public:
    Vraboten() {}
    Vraboten(char *ime, int bodovi) {
        strcpy(this->ime, ime);
        this->bodovi = bodovi;
    }
    ~Vraboten() {}
    void print() {
        cout << "Ime: " << ime << endl;
        cout << "Bodovi: " << bodovi << endl;
        cout << "Plata: " << suma() << endl;
        cout << endl;
    }
    int suma() {
        return bodovi * vrednost_na_bod;
        //return accumulate(bodovi, vrednost_na_bod, 10000);
    }
    char *getIme() {
        return ime;
    }
    int getBodovi() {
        return bodovi;
    }
    bool operator < (const Vraboten &v) {
        return (bodovi < v.bodovi);
    }
};

int main()
{
    Vraboten v1("Marijan Gajdov", 15);
    Vraboten v2("Pero Perov", 20);
    Vraboten v3("Ema Emova", 18);
    Vraboten v4("Toso Tosov", 12);
    vector<Vraboten> v;

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    sort(v.begin(), v.end());

    for(vector<Vraboten>::iterator it = v.begin(); it != v.end(); it++)
        (*it).print();
    return 0;
}
