#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    int a[10000];
    double average = 0;
    int n = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i < 10000; i++)
        a[i] = rand() % 10000;

    cout << "Parni broevi:" << endl;
    for(int i = 0; i < n; i++)
        if(a[i] % 2 == 0)
            cout << a[i] << "\t";

    cout << "\n\nBroevi pomali od 2,000:" << endl;
    for(int i = 0; i < n; i++)
        if(a[i] < 2000)
            cout << a[i] << "\t";

    cout << "\n\nBroevi vo interval [2,000, 4,000):" << endl;
    for(int i = 0; i < n; i++)
        if(a[i] >= 4000 && a[i] < 6000)
            cout << a[i] << "\t";

    cout << "\n\nBroevi vo interval [4,000, 6,000):" << endl;
    for(int i = 0; i < n; i++)
        if(a[i] >= 6000 && a[i] < 8000)
            cout << a[i] << "\t";

    cout << "\n\nBroevi vo interval [8,000, 10,000):" << endl;
    for(int i = 0; i < n; i++)
        if(a[i] >= 8000 && a[i] < 10000)
            cout << a[i] << "\t";

    for(int i = 0; i < n; i++) {
        long long suma = 0;
        suma += a[i];
        average = suma / 9999.0;
    }
    cout << "\n\nSredna vrednost: " << average << endl;
    return 0;
}
