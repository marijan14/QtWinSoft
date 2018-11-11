#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(a % 2 == 0)
        printf("%d e paren\n", a);
    else
        printf("%d e neparen\n", a);
    if(b % 2 == 0)
        printf("%d e paren\n", b);
    else
        printf("%d e neparen\n", b);
    return 0;
}
