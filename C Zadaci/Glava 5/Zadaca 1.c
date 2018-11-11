#include <stdio.h>

int main()
{
    int sum = 0, number;
    for(number = 2; number <= 100; number += 2) {
    }
    sum += number;
    //pojma neam so e zaglavie
    for(number = 2; number <= 100; number += 2) {
        sum = 0;
        sum += number;
    }
    printf("Sumata e %d\n", sum);
    return 0;
}
