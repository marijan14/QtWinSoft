#include <iostream>
#include <cstring>

using namespace std;

class Vraboten
{
protected:
    char ime[50], prezime[50];
    int godina_na_vrabotuvanje;
public:
    Vraboten() {}
    Vraboten(char *ime, char *prezime, int godina_na_vrabotuvanje) {
        strcpy(this->ime, ime);
        strcpy(this->prezime, prezime);
        this->godina_na_vrabotuvanje = godina_na_vrabotuvanje;
    }
    void prikazi_podatoci() {
        cout << "Ime: " << ime << endl;
        cout << "Prezime: " << prezime << endl;
        cout << "Godina na vrabotuvanje: " << godina_na_vrabotuvanje << endl;
    }
};

class Profesor : public Vraboten
{
private:
    char zvanje[50], oblast[50];
    int br_predmeti;
public:
    Profesor() {}
    Profesor(char *ime, char *prezime, int godina_na_vrabotuvanje, char *zvanje, char *oblast, int br_predmeti)
        : Vraboten(ime, prezime, godina_na_vrabotuvanje) {
        strcpy(this->zvanje, zvanje);
        strcpy(this->oblast, oblast);
        this->br_predmeti = br_predmeti;
    }
    void prikazi_podatoci() {
        cout << "=====Profesor=====" << endl;
        Vraboten::prikazi_podatoci();
        cout << "Zvanje: " << zvanje << endl;
        cout << "Oblast: " << oblast << endl;
        cout << "Broj na predmeti: " << br_predmeti << endl;
    }
};

class Asistent : public Vraboten
{
private:
    char zvanje[50], mentor[50];
    int br_predmeti;
public:
    Asistent() {}
    Asistent(char *ime, char *prezime, int godina_na_vrabotuvanje, char *zvanje, char *mentor, int br_predmeti)
        : Vraboten(ime, prezime, godina_na_vrabotuvanje) {
        strcpy(this->zvanje, zvanje);
        strcpy(this->mentor, mentor);
        this->br_predmeti = br_predmeti;
    }
    void prikazi_podatoci() {
        cout << "=====Asistent=====" << endl;
        Vraboten::prikazi_podatoci();
        cout << "Zvanje: " << zvanje << endl;
        cout << "Mentor: " << mentor << endl;
        cout << "Broj na predmeti: " << br_predmeti << endl;
    }
};

class Demonstrator : public Vraboten
{
private:
    char from[50], to[50];
public:
    Demonstrator() {}
    Demonstrator(char *ime, char *prezime, int godina_na_vrabotuvanje, char *from, char *to)
        : Vraboten(ime, prezime, godina_na_vrabotuvanje) {
        strcpy(this->from, from);
        strcpy(this->to, to);
    }
    void prikazi_podatoci() {
        cout << "=====Demonstrator=====" << endl;
        Vraboten::prikazi_podatoci();
        cout << "Rabotno vreme od " << from << " do " << to << endl;
    }
};

int main()
{
    int br_predmeti, godina_na_vrabotuvanje;
    char ime[50], prezime[50], zvanje[50], mentor[50], oblast[50], from[50], to[50];
    cout << "Hello World!" << endl;
    try {
        Vraboten **v = new Vraboten*[3];
        cout << "Vnesi ime, prezime i godina na vrabotuvanje: ";
        cin >> ime >> prezime >> godina_na_vrabotuvanje;
        cout << "Vnesi zvanje, oblast i broj na predmeti: ";
        cin >> zvanje >> oblast >> br_predmeti;
        v[0] = new Profesor(ime, prezime, godina_na_vrabotuvanje, zvanje, oblast, br_predmeti);

        cout << "Vnesi ime, prezime i godina na vrabotuvanje: ";
        cin >> ime >> prezime >> godina_na_vrabotuvanje;
        cout << "Vnesi zvanje, mentor i broj na predmeti: ";
        cin >> zvanje >> mentor >> br_predmeti;
        v[1] = new Asistent(ime, prezime, godina_na_vrabotuvanje, zvanje, mentor, br_predmeti);

        cout << "Vnesi ime, prezime i godina na vrabotuvanje: ";
        cin >> ime >> prezime >> godina_na_vrabotuvanje;
        cout << "Vnesi go rabotnoto vreme: ";
        cin >> from >> to;
        v[2] = new Demonstrator(ime, prezime, godina_na_vrabotuvanje, from, to);

        for(int i = 0; i <= 2; i++) {
            v[i]->prikazi_podatoci();
            cout << endl;
        }
    } catch (int) {
        cout << "Pogresni podatoci se vneseni!" << endl;
    }
    return 0;
}
