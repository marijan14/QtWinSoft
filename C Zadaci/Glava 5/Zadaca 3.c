#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    for(a = 1; a <= 100; a++) {
        for(b = 1; b <= 100; b++) {
            for(c = 1; c <= 100; c++) {
                if(pow(a, 2) + pow(b, 2) == pow(c, 2))
                    printf("%d  %d  %d\n", a, b, c);
            }
        }
    }
    return 0;
}