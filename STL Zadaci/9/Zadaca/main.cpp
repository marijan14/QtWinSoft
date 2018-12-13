#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1, v2;

    for(int i = 1; i < rand() % 10 + 1; i++)
        v1.push_back(rand() % 1000 + 1);

    cout << "Vector 1" << endl;
    for(auto i : v1)
        cout << i << "\t";

    cout << "\n\n\n";

    for(int i = 1; i < rand() % 10 + 1; i++)
        v2.push_back(rand() % 1000 + 1);

    cout << "Vector 2" << endl;
    for(auto i : v2)
        cout << i << "\t";

    try {
        if(v1.size() >= v2.size()) {
            v1.clear();
            copy(v2.begin(), v2.end(), back_inserter(v1));
        }
    } catch (int) {
        cerr << "Isklucok!!!" << endl;
    }
    cout << "\n\n\nNoviot vector 1" << endl;
    for(auto i : v1)
        cout << i << "\t";
    return 0;
}
