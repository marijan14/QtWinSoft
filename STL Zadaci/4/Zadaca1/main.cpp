#include <iostream>
#include <map>
using namespace std;

void print_map(map<string, string> m) {
    cout << "Name: " << "   Contact:\n" << endl;
    for(map<string, string>::iterator it = m.begin(); it != m.end(); it++)
        cout << (*it).first << ":   " << (*it).second << endl;
    cout << endl;
}

int main()
{
    map<string, string> imenik;
    imenik["Petar"] = "075/123-456";
    imenik["Toso"] = "075/456-123";
    imenik["Janko"] = "075/323-555";
    imenik["Stefan"] = "075/284-456";
    imenik["Boro"] = "075/673-896";
    cout << "Imenik" << endl;
    print_map(imenik);
    return 0;
}
