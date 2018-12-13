#include <iostream>
#include <map>
using namespace std;

typedef multimap<string, long> mm;
static mm pairs;

void vnesi() {
    string imeprezime;
    long uplata;
    cin.ignore(1, '\n');
    cout << "Vnesi ime i prezime: ";
    getline(cin, imeprezime);
    cout << "Vnesi uplata" << endl;
    cin >> uplata;
    pairs.insert(mm::value_type(imeprezime, uplata));
}

int main()
{
    int index;
    pairs.insert(mm::value_type("Marijan Gajdov", 350000));
    pairs.insert(mm::value_type("Toso Tosov", 1500));
    pairs.insert(mm::value_type("Pero Perov", 60000));
    pairs.insert(mm::value_type("Nikola Nikolov", 1000000));
    cout << "1. Dodaj uplata" << endl;
    cout << "2. Prikazi uplati za daden stedac" << endl;
    cout << "3. Izlez" << endl;
    while (true) {
        cin >> index;
        if(index == 1)
            vnesi();
        else if(index == 2) {
            cout << "Ime Prezime\tUplata" << endl;
            for(mm::const_iterator it = pairs.begin(); it != pairs.end(); it++)
                cout << (*it).first << "\t" << (*it).second << endl;
        } else if(index == 3)
            return 0;
        else
            cerr << "Pogresen vlez" << endl;
    }
}
