#include <iostream>

using namespace std;

template<class T>
class Mnozestvo
{
public:
    Mnozestvo() {}
    T najgolem() {

    }
};

class Pravoagolnik : public Mnozestvo<int>
{
private:
    int sirina, dolzina;
public:
    Pravoagolnik() {}
    Pravoagolnik(int sirina, int dolzina) {
        this->sirina = sirina;
        this->dolzina = dolzina;
    }
    int plostina(int sirina, int dolzina) {
        return sirina * dolzina;
    }
    int getSirina() {
        return sirina;
    }
    int getDolzina() {
        return dolzina;
    }
};

class Kvadrat
{
private:
    int strana;
public:
    Kvadrat() {}
    Kvadrat(int strana) {
        this->strana = strana;
    }
    int getStrana() {
        return strana;
    }
    int plostina(int strana) {
        return strana * strana;
    }
};

class Krug
{
private:
    double radius;
public:
    Krug() {}
    Krug(double radius) {
        this->radius = radius;
    }
    double gerRadius() {
        return radius;
    }
    double plostina(double radius) {
        return radius * radius * 3.14;
    }
};

template<class T>
T najgolem(Pravoagolnik p, Kvadrat k1, Krug k2) {
    int plostina_pravoagolnik = p.plostina(p.getSirina(), p.getDolzina());
    int plostina_kvadrat = k1.plostina(k1.getStrana());
    double plostina_krug = k2.plostina(k2.gerRadius());
    double max = static_cast<double>(plostina_pravoagolnik);
    if((double)plostina_kvadrat > max)
        max = plostina_kvadrat;
    if((double)plostina_krug > max)
        max = plostina_krug;
    cout << max << endl;
    return static_cast<T>(max);
}

int main()
{
    Kvadrat kvadrat(5);
    Krug krug(12.36);
    Pravoagolnik p(3, 6);
    Mnozestvo<double> m;
    //najgolem(p, kvadrat, krug);
    return 0;
}
