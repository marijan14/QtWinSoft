#include <iostream>
#include <cstring>
using namespace std;

class Motor
{
protected:
    bool running;
    double gas, oil;
    int rpm;
public:
    Motor() {
        if(!running)
            throw "Motorot raboti";
        if(gas < 0.25)
            throw "Nema benzin";
        if(oil < 0.25)
            throw "Nema ulje";
        if(rpm > 8000)
            throw "Mnogu si brz be";
        gas *= 0.5;
        oil *= 0.8;
        rpm *= 2;
    }
};

class Avtomobil : public Motor
{
private:
    Motor *v8;
    char ime[50];
public:
    Avtomobil() {}
    Avtomobil(Motor *v8, char *ime) {
        this->v8 = v8;
        strcpy(this->ime, ime);
    }
};

class Garaza : public Avtomobil
{
public:
    Garaza() : Avtomobil() {
        try {

        } catch (char) {

        }
    }
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
