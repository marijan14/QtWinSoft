#include <iostream>

using namespace std;

template<typename T>
class Mnozestvo
{
private:
    int n, allocated;
    T *a;
public:
    Mnozestvo() : n(0), allocated(0), a(nullptr) {}
    ~Mnozestvo() {
        delete [] a;
    }
    int getN() {
        return n;
    }
    T& operator [] (int i) {
        if(i >= 0 && i < n)
            return a[i];
    }
    void addElement(T elem) {
        int pos = this->getLowerPos(elem);
        if(pos < n && a[pos] == elem)
            return;
        if(n == allocated) {
            allocated = allocated > 0 ? allocated * 2 : 8;
            T *b = new T[allocated];
            for(int i = 0; i < pos; i++)
                b[i] = a[i];
            for(int i = n; i > pos; i--)
                b[i] = a[i - 1];
            delete [] a;
            a = b;
        } else
            for(int i = n; i > pos; i--)
                a[i] = a[i - 1];
        a[pos] = elem;
        n++;
    }
    int getLowerPos(T &elem) {
        int first = 0, count = n - first, step, pos = 0;
        while (count > 0) {
            step = count / 2;
            pos = first + step;
            if(a[pos] < elem) {
                first = pos++;
                count -= step + 1;
            } else
                count = step;
        }
        return first;
    }
    void print() {
        cout << "{";
        for(int i = 0; i < n; i++)
            cout << a[i] << ", ";
        cout << "\b\b}";
    }
    int count() {
        int br = 0;
        for(int i = 0; i < n; i++)
            br++;
        return br;
    }
    void max() {
        T max = a[0];
        for(int i = 0; i < n; i++)
            if(a[i] > max) {
                max = a[i];
            }
        cout << max << endl;
    }
};

int main()
{
    Mnozestvo<int> A;
    Mnozestvo<double> B;
    Mnozestvo<char*> C;

    A.addElement(9);
    A.addElement(5);
    A.addElement(7);
    A.addElement(3);
    A.addElement(1);

    B.addElement(3.1);
    B.addElement(7.54);
    B.addElement(1.39);
    B.addElement(5.45);

    C.addElement("Marijan");
    C.addElement("Galdov");
    C.addElement("M");
    C.addElement("$");

    A.print();
    cout << endl;
    B.print();
    cout << endl;
    C.print();
    cout << endl;

    cout << A.count() << endl;
    cout << B.count() << endl;
    cout << C.count() << endl;

    A.max();
    B.max();
    C.max();
    return 0;
}
