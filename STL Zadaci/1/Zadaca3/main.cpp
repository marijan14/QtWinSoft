#include <iostream>

using namespace std;

template<typename P, typename R>
P implicit_cast(const R &p) {
    return p;
}

int main()
{
    int i = 1;
    float x = implicit_cast<float>(i);
    int j = implicit_cast<int>(x);
    return 0;
}

/*
 * Kodot se kompajlirase.
 */
