#include <stdio.h>

int paren(int n) {
    if(n % 2 == 0)
        return 1;
    return 0;
}

int main()
{
    int i = 0, broevi[9] = {123, 45, 66, 69, 10, 2, 1, 9876, 4, 78};
    for(i = 0; i < 10; i++)
        printf("%d\n", paren(broevi[i]));
    return 0;
}
