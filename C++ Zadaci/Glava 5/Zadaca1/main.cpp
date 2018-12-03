#include <iostream>
#include <cstring>
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
using namespace std;

class Datum
{
private:
    int den, mesec, godina;
public:
    Datum() {}
    Datum(int m, int d, int g) {
        if(d > 0 && m <= 12)
            mesec = m;
        else {
            mesec = 1;
            cout << "Mesec " << m << " ne postoi. Postavi go mesec na 1" << endl;
        }
        godina = g;
        den = proveriDen(d);
    }
    ~Datum() {}
    void printDatum() {
        cout << mesec << "/" << den << "/" << godina;
    }
    int proveriDen(int d) {
        static const int denovi[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if(d > 0 && d <= denovi[mesec])
            return d;
        if(mesec == 2 && d == 29 && (godina % 400 == 0 || (godina % 4 == 0 && godina % 100 != 0)))
            return d;
        cout << "Denot " << d << " e gresen. Postavi vrednost za den na 1" << endl;
        return 1;
    }
    int getDen() {
        return den;
    }
    int getMesec() {
        return mesec;
    }
    int getGodina() {
        return godina;
    }
};

class Zivotno
{
public:
    Zivotno() {}
    Zivotno(char *ime, char tip, char pol, int m1, int d1, int g1, int m2, int d2, int g2, int m3, int d3, int g3)
        : datum_na_raganje(m1, d1, g1), datum_na_vakcinacija(m2, d2, g2), datum_na_donesuvanje(m3, d3, g3) {
        strcpy(this->ime, ime);
        this->tip = tip;
        this->pol = pol;
    }
    ~Zivotno() {}
    void print() {
        cout << "Ime na zivotnoot: " << ime << endl;
        cout << "Tip na zivotno: " << tip << endl;
        cout << "Pol: " << pol << endl;

        cout << "Datum na raganje: ";
        datum_na_raganje.printDatum();
        cout << endl;

        cout << "Datum na vakcinacija: ";
        datum_na_vakcinacija.printDatum();
        cout << endl;

        cout << "Datum na donesuvanje: ";
        datum_na_donesuvanje.printDatum();
        cout << endl;
    }
    void presmetaj_vakcinacija() {
        if(datum_na_vakcinacija.getGodina() < datum_na_donesuvanje.getGodina())
            cout << "Treba da se vakcinira zivotnoto: " << ime << endl;
        if(datum_na_vakcinacija.getGodina() == datum_na_donesuvanje.getGodina()) {
            int m1 = datum_na_vakcinacija.getMesec();
            int m2 = datum_na_donesuvanje.getMesec();
            int max = max(m1, m2);
            int min = min(m1, m2);
            int rez = max - min;
            if(tip == 'c')
                if(rez >= 6)
                    cout << "Treba da se vakcinira zivotnoto: " << ime << endl;
            if(tip == 'v')
                if(rez >= 8)
                    cout << "Treba da se vakcinira zivotnoto: " << ime << endl;
        }
    }
private:
    Datum datum_na_raganje, datum_na_vakcinacija, datum_na_donesuvanje;
    char ime[50];
    char tip;  //c-cicaci, v-vlekaci, p-ptici
    char pol;  //m-masko, z-zensko
};

int main()
{
    Zivotno z1("British Shorthair", 'c', 'z', 7, 24, 2010, 1, 10, 2015, 2, 20, 2018);
    Zivotno z2("Papagal", 'p', 'm', 7, 24, 2011, 1, 10, 2005, 2, 20, 2010);
    Zivotno z3("Sharplaninec", 'c', 'm', 7, 24, 2015, 1, 10, 2015, 2, 20, 2013);
    Zivotno z4("Kobra", 'v', 'z', 7, 24, 2012, 1, 10, 2015, 2, 20, 2018);
    z1.print();
    z1.presmetaj_vakcinacija();
    return 0;
}
