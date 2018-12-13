#include <iostream>

using namespace std;

template<class T>
class Kvadrat
{
private:
    T strana;
public:
    Kvadrat() {}
    Kvadrat(T strana) {
        this->strana = strana;
    }
    T getStrana() {
        return strana;
    }
    T plostina(T strana) {
        return strana * strana;
    }
};

template<class T>
class Pravoagolnik
{
private:
    T sirina, dolzina;
public:
    Pravoagolnik() {}
    Pravoagolnik(T sirina, T dolzina) {
        this->sirina = sirina;
        this->dolzina = dolzina;
    }
    T plostina(int sirina, int dolzina) {
        return sirina * dolzina;
    }
    T getSirina() {
        return sirina;
    }
    T getDolzina() {
        return dolzina;
    }
};

template<class T>
void pecatiPole(Kvadrat<T> k, Pravoagolnik<T> p) {
    cout << "Stranata na kvadratot e " << k.getStrana() << endl;
    cout << "Plostinata na kvadratot e " << k.plostina(k.getStrana()) << endl;
    cout << endl;
    cout << "Stranite na pravoagolnikot se " << p.getDolzina() << " i " << p.getSirina() << endl;
    cout << "Plostinata na pravoagolnikot e " << p.plostina(p.getDolzina(), p.getSirina()) << endl;
    cout << endl;
}

template<class T>
void sortirajPole() {

}

int main()
{
    Kvadrat<int> k1(5), k2(15);
    Pravoagolnik<int> p1(3, 5), p2(2, 4);
    pecatiPole(k1, p1);
    pecatiPole(k2, p2);
    return 0;
}
