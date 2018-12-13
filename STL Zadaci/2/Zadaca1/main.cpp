#include <iostream>

using namespace std;

template<class T>
void function(T *a, int first_index, int end_index, int begin_value) {
    int suma = 0;
    //first_index = begin_value;
    for(int i = first_index; i < end_index; i++) {
        suma += a[i];
    }
    cout << suma << endl;
}

int main()
{
    int n, a[100], begin, end;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Vnesi pocetok i kraj\n";
    cin >> begin >> end;
    function(a, begin, end, 0);
    return 0;
}
