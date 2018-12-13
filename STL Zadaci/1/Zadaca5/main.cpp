#include <iostream>

using namespace std;

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
    int n, a[100];
    double b[100];
    cin >> n;
    input(a, n);
    print(a, n);

    input(b, n);
    print(b, n);
    return 0;
}
