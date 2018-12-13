#include <iostream>
#include <cstring>

using namespace std;

template<typename T>
class Lica
{
protected:
    char imeprezime[100], adresa[100];
    int vozrast;
    long long mat_br;
public:
    Lica<T>(char *imeprezime, char *adresa, long long mat_br, int vozrast) {
        strcpy(this->imeprezime, imeprezime);
        strcpy(this->adresa, adresa);
        this->mat_br = mat_br;
        this->vozrast = vozrast;
    }
    void pecatiPole() {
        cout << "Ime i prezime: " << imeprezime << endl;
        cout << "Adresa: " << adresa << endl;
        cout << "EMBG: " << mat_br << endl;
        cout << "Godini: " << vozrast << endl;
    }
};

template<typename T>
class Vraboteni : public Lica<T>
{
private:
    int kod;
public:
    Vraboteni() {}
    Vraboteni(char *imeprezime, char *adresa, long long mat_br, int vozrast, int kod)
        : Lica<T>(imeprezime, adresa, mat_br, vozrast) {
        this->kod = kod;
    }
    void pecatiPole() {
        Lica<T>::pecatiPole();
        cout << "Kod: " << kod << endl;
    }
};

template<typename T>
class Klienti : public Lica<T>
{
private:
    char kod[100];
public:
    Klienti() {}
    Klienti(char *imeprezime, char *adresa, long long mat_br, int vozrast, char *kod)
        : Lica<T>(imeprezime, adresa, mat_br, vozrast) {
        strcpy(this->kod, kod);
    }
    void pecatiPole() {
        Lica<T>::pecatiPole();
        cout << "Kod: " << kod << endl;
    }
};

template<typename T>
void pecatiPole() {

}

int main()
{
    Vraboteni<int> v("Marijan Gajdov", "Andon Surkov 12-3/5", 3005994480009, 25, 5005);
    v.pecatiPole();
    Klienti<int> k("John Smith", "Street 00", 3005994480009, 32, "1234");
    k.pecatiPole();
    //cout << "Hello World!" << endl;
    return 0;
}
