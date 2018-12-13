#include <iostream>

using namespace std;

class A
{
public:
    void* operator new(size_t sz) {
        cout << "alociram A" << endl;
        throw 47;
    }
    void operator delete(void *p) {
        cout << "dealociram A" << endl;
        delete p;
    }
};

class B
{
public:
    B() {
        cout << "B()" << endl;
    }
    ~B() {
        cout << "~B()" << endl;
    }
};

class Main
{
    A *a;
    B *b;
public:
    Main(int count = 1) {
        cout << "Main()" << endl;
        b = new B[count];
        a = new A;
    }
    ~Main() {
        cout << "~Main()" << endl;
        delete [] b;
        delete a;
    }
};

int main()
{
    try {
        Main m(3);
    } catch (bad_alloc &e) {
        cerr << "Isklucok: " << e.what() << endl;
    }
    return 0;
}
