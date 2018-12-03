#include <iostream>
#include <string>

using namespace std;

class Stedac {
public:
    void vnesi_podatoci(int i) {
        cin.ignore(1, '\n');
        cout << "Vnesi ime i prezime: ";
        getline(cin, imeprezime);
        cout << "Vnesi adresa: ";
        getline(cin, adresa);
        saldo = 0;
        broj = i;
    }
    void prikazi_podatoci() {
        cout << "broj: " << broj << "\n" << imeprezime << "\n" << adresa;
    }
    void uplata(unsigned long i) {
        saldo += i;
    }
    void isplata(unsigned long i) {
        if(i > saldo)
            cout << "Smetkata e prazna!" << endl;
        else
            saldo -= i;
    }
    long sostojba() {
        return saldo;
    }
    int getbroj() { return broj; }
    string getimeprezime() { return imeprezime; }
    string getadresa() { return adresa; }
    long getsaldo() { return saldo; }
private:
    int broj;
    string imeprezime, adresa;
    long saldo;
};

int main()
{
    int n;
    unsigned long uplata, isplata;
    cout << "Broj na stedaci: ";
    cin >> n;
    Stedac *s = new Stedac[n];
    for(int i = 0; i < n; i++) {
        s[i].vnesi_podatoci(i + 1);
        cout << "Vnesi uplata: ";
        cin >> uplata;
        s[i].uplata(uplata);
        cout << "Stedacot ";
        s[i].prikazi_podatoci();
        cout << " ima " << s[i].sostojba() << " denari na smetka" << endl;
        cout << "Vnesi iznos za podignuvanje: ";
        cin >> isplata;
        s[i].isplata(isplata);
        cout << "Stedacot ";
        s[i].prikazi_podatoci();
        cout << " ima " << s[i].sostojba() << " denari na smetka" << endl;
    }
    delete [] s;
    return 0;
}
