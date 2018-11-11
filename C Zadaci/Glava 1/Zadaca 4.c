#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("Sredna vrednost: %d\n", (a + b + c) / 3);
    printf("Suma: %d\n", a + b + c);
    printf("Proizvod: %d\n", a * b * c);
    return 0;
}
