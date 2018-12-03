#include <iostream>
#include <cstring>

using namespace std;

class Datum
{
protected:
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
    int proveriDen(int d) {
        static const int denovi[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if(d > 0 && d <= denovi[mesec])
            return d;
        if(mesec == 2 && d == 29 && (godina % 400 == 0 || (godina % 4 == 0 && godina % 100 != 0)))
            return d;
        cout << "Denot " << d << " e gresen. Postavi vrednost za den na 1" << endl;
        return 1;
    }
    void printDatum() {
        cout << mesec << "/" << den << "/" << godina;
    }
};

class Artikl : public Datum
{
protected:
    char ime[50], golemina;
    int cena;
    Datum donesen_vo_prodavnica;
public:
    Artikl() {}
    Artikl(char *ime, char golemina, int cena, int m, int d, int g) : donesen_vo_prodavnica(m, d, g) {
        strcpy(this->ime, ime);
        this->golemina = golemina;
        this->cena = cena;
    }
    virtual ~Artikl() {}
    virtual void print() {
        cout << "Ime na produktot: " << ime << endl;
        cout << "Golemina na produktot: " << golemina << endl;
        cout << "Donesen e vo prodavnicata na ";
        donesen_vo_prodavnica.printDatum();
        cout << endl;
    }
};

class Pantaloni : public Artikl
{
private:
    Datum datum_na_sledna_nabavka;
public:
    Pantaloni() {}
    Pantaloni(char *ime, char golemina, int cena, int m1, int d1, int g1, int m2, int d2, int g2)
        : Artikl(ime, golemina, cena, m1, d1, g1), datum_na_sledna_nabavka(m2, d2, g2) {}
    void print() {
        Artikl::print();
        cout << "Datumot na slednata nabavka e ";
        datum_na_sledna_nabavka.printDatum();
        cout << endl;
    }
};

class Kosuli : public Artikl
{
public:
    Kosuli() {}
    Kosuli(char *ime, char golemina, int cena, int m, int d, int g) : Artikl(ime, golemina, cena, m, d, g) {}
    void print() {
        Artikl::print();
    }
};

int main()
{
    char ime[50], golemina;
    int cena, broj_na_artikli = 2, n, d, m, g, d1, m1, g1;
    Datum donesen_vo_prodavnica, datum_na_sledna_nabavka;
    //cin >> broj_na_artikli;
    Artikl **a = new Artikl*[broj_na_artikli];
    a[0] = new Pantaloni("asdsfs", 'x', 500, 3, 20, 2018, 3, 27, 2018);
    a[1] = new Pantaloni("asdsfs", 'x', 500, 3, 20, 2018, 3, 27, 2018);
    for(int i = 0; i < 2; i++)
        a[i]->print();
    /*cout << "Odberi opcija od menito" << endl;
    cout << "1. Dodadi nov artikl vo listata" << endl;
    cout << "2. Prikazi artikli od dadena grupa" << endl;
    cout << "3. Prikazi ja celata lista" << endl;
    cout << "4. Prikazi gi site artikli koi treba da se nabavat i nivnata cena" << endl;
    cout << "5. Izlez" << endl;
    cin >> n;
    do {
        switch (n) {
        case 1:
            cout << "1. Dodadi pantaloni" << endl;
            cout << "2. Dodadi kosuli" << endl;
            cin >> n;
            if(n == 1) {
                cout << "Vnesi ime: ";
                cin >> ime;
                cout << "Vnesi golemina: ";
                cin >> golemina;
                cout << "Vnesi cena: ";
                cin >> cena;
                cout << "Vnesi koga e donesen vo prodavnicata: ";
                cin >> m >> d >> g;
                cout << "Vnesi go datumot na slednata nabavka: ";
                cin >> m1 >> d1 >> g1;
                a[broj_na_artikli] = new Pantaloni(ime, golemina, cena, m, d, g, m1, d1, g1);
                broj_na_artikli++;
            } else if(n == 2) {
                cout << "Vnesi ime: ";
                cin >> ime;
                cout << "Vnesi golemina: ";
                cin >> golemina;
                cout << "Vnesi cena: ";
                cin >> cena;
                cout << "Vnesi koga e donesen vo prodavnicata: ";
                cin >> m >> d >> g;
                a[broj_na_artikli] = new Kosuli(ime, golemina, cena, m, d, g);
                broj_na_artikli++;
            } else
                cerr << "Pogresen vnesna podatoci" << endl;
            break;
        case 2:
            cout << "1. Prikazi gi site pantaloni" << endl;
            cout << "2. Prikazi gi site kosuli" << endl;
            //cin >> n;
            //if(n == 1)
                //a[0]-
            break;
        case 3:
            for(int i = 0; i < broj_na_artikli; i++)
                a[broj_na_artikli]->print();
            break;
        case 4:
            break;
        case 5:
            return 0;
        default:
            cerr << "Izbravte pogresna opcija";
            break;
        }
    } while(n < 6);*/
    return 0;
}
