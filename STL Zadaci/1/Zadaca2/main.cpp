#include <iostream>

using namespace std;

template<class T>
void printArray(const T *array, const int count) {
    for(int i = 0; i < count; i++)
        cout << array[i] << " ";
    cout << endl;
}

template<class T>
int printArray(const T *array, const int count, int lowSubscript, int highSubscript) {
    int br = 0;
    if(highSubscript > count)
        return 0;
    for(int i = lowSubscript; i <= highSubscript; i++) {
       cout << array[i] << " ";
       br++;
    }
    cout << endl;
    cout << "br=" << br << endl;
    return br;
}

int main()
{

    const int aCount = 5, bCount = 7, cCount = 6;
    int a[aCount] = {1, 2, 3, 4, 5};
    double b[bCount] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    char c[cCount] = "HELLO";

    cout << "Poleto a sodrzi:" << endl;
    printArray(a, aCount);
    printArray(a, aCount, 1, 4);

    cout << "Poleto b sodrzi:" << endl;
    printArray(b, bCount);
    printArray(b, bCount, 3, 5);

    cout << "Poleto c sodrzi:" << endl;
    printArray(c, cCount);
    printArray(b, bCount, 1, 1);
    return 0;
}
