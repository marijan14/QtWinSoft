#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void print(map<string, vector<string>> &m) {
    map<string, vector<string>>::iterator it;
    for(it = m.begin(); it != m.end(); it++) {
        vector<string> temp((*it).second);
        unsigned int size = temp.size();
        if(size > 1) {
            for(unsigned int i = 0; i < size; i++)
                cout << temp[i] << " ";
            cout << endl;
        }
    }
}

void store(vector<string> &v) {
    map<string, vector<string>> store;
    for(unsigned int i = 0; i < v.size(); i++) {
        string temp(v[i]);
        sort(temp.begin(), temp.end());
        if(store.find(temp) == store.end()) {
            vector<string> pom;
            pom.push_back(v[i]);
            store.insert(make_pair(temp, pom));
        } else {
            vector<string> pom(store[temp]);
            pom.push_back(v[i]);
            store[temp] = pom;
        }
    }
    print(store);
}

int main()
{
    vector<string> v;
    v.push_back("staklo");
    v.push_back("slatko");

    v.push_back("aaaaaa");
    v.push_back("bbbbbb");

    store(v);
    return 0;
}
