#include <stdio.h>

int main()
{
    int broj, i = 0;
    for(i = 1; i <= 100; i++) {
        if(i % 3 != 0) {
            printf("%d ne e deliv so 3\n", i);
            continue;
        }
    }
    return 0;
}