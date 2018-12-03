#include <iostream>
#define min(a, b) ((a) < (b) ? (a) : (b))

using namespace std;

int main()
{
    int a, b;
    double x, y;
    char c1, c2;

    cin >> a >> b;
    cin >> x >> y;
    cin >> c1 >> c2;

    cout << min(a, b) << endl;
    cout << min(x, y) << endl;
    cout << min(c1, c2) << endl;
    return 0;
}
