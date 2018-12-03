#include <iostream>
#include <cstring>

using namespace std;

class Covek
{
private:
    char ime[50], prezime[50], adresa[50], telefon[50];
public:
    Covek() {}
    Covek(char *ime, char *prezime, char *adresa, char *telefon) {
        strcpy(this->ime, ime);
        strcpy(this->prezime, prezime);
        strcpy(this->adresa, adresa);
        strcpy(this->telefon, telefon);
    }
};

class Stedac
{
private:
    static double kamata;
    static int brojStedaci;
    double balans, kredit;
    Covek lice;
public:
    Stedac() {}
    Stedac(double balans, double kredit) {
        this->balans = balans;
        this->kredit = kredit;
    }
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
