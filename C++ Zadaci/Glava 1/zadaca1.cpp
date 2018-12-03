#include <iostream>

using namespace std;

inline double circleArea(int r)
{
    return r * r * 3.14;
}

int main()
{
    int r;
    cin >> r;
    cout << "Povrsinata na krugot e: " << circleArea(r) << endl;
    return 0;
}
