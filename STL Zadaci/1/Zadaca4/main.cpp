#include <iostream>

using namespace std;

template<class T>
void printArray(const T *array, const int count) {
    for(int i = 0; i < count; i++)
        cout << array[i] << " ";
    cout << endl;
}

void printArray(int *array, int count) {
    int j = 0;
    while (j < 4) {
        for(int i = 0; i < count; i++)
            cout << array[i] << " ";
        cout << endl;
        j++;
    }
}

int main()
{

    const int aCount = 5;
    int a[aCount] = {1, 2, 3, 4, 5};

    cout << "Poleto a sodrzi:" << endl;
    printArray(a, aCount);
    return 0;
}
