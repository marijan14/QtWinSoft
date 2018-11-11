#include <stdio.h>

int main()
{
    int n1, n2, i;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    for(i = n1; i < n2; i++) {
        if(i % reverse(i) == 0)
            printf("%d\n", i);
    }
    printf("%d\n", i);
    return 0;
}

int reverse(int n)
{
    int r = 0;
    while (n != 0) {
        r = r * 10;
        r = r + n % 10;
        n = n / 10;
    }
    return r;
}