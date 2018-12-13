#include <iostream>
#include <vector>
using namespace std;

template<class T>
bool isPalindrom(vector<T> &v) {
    return equal(v.begin(), v.end(), v.rbegin());
}

int main()
{
    vector<string> v;
    v.push_back("pop");
    if(isPalindrom(v))
        cout << "E palindrom" << endl;
    else
        cout << "Ne e palindrom" << endl;
    return 0;
}
