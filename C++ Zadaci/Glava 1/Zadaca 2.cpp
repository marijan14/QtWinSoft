#include <iostream>

using namespace std;

int tripleCallByValue(int count)
{
    return count * 3;
}

int tripleCallByReference(int &count)
{
    return count * 3;
}

int main()
{
    int count;
    cin >> count;
    cout << tripleCallByValue(count) << endl;
    cout << tripleCallByReference(count) << endl;
    return 0;
}