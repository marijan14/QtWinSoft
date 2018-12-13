#include <iostream>
#include <algorithm>
using namespace std;

struct Process {
    int pid, priority;
};

bool sporedba(Process a, Process b) {
    return (a.priority > b.priority);
}

void priorityScheduling(Process *p, int n) {
    sort(p, p + n, sporedba);
    cout << "Redosled po koj procesite ke se izvrsat" << endl;
    for(int i = 0; i < n; i++)
        cout << p[i].pid << " ";
    cout << endl;
}

int main()
{
    Process p[] = {{1, 2}, {2, 0}, {3, 8}, {4, 5}, {5, 10}};
    int n = sizeof(p) / sizeof(p[0]);
    priorityScheduling(p, n);
    return 0;
}
