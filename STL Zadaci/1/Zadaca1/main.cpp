#include <iostream>

using namespace std;

template<class T>
void bubbleSort(T *a, int n) {
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i] > a[j]) {
                T temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

template<class T>
void print(T *a, int n) {
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

template<class T>
void input(T *a, int n) {
    for(int i = 0; i < n; i++)
        cin >> a[i];
}

int main()
{
    int n, a[10];
    cin >> n;
    input(a, n);
    bubbleSort(a, n);
    print(a, n);
    return 0;
}
