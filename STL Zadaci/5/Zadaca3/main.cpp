#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    deque<int> d;
    d.push_front(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);

    cout << "Ispecati gi elemetite od deque-to" << endl;
    for(unsigned int i = 0; i < d.size(); i++)
        cout << d.at(i) << " ";
    cout << "\b" << endl;

    vector<int> v;
    copy(d.begin(), d.end(), back_inserter(v));
    reverse(v.begin(), v.end());

    cout << "Pecati go vectorot vo obraten redosled" << endl;
    for(unsigned int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
    cout << "\b" << endl;
    return 0;
}
