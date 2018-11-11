#include <stdio.h>

int main()
{
    char a, b, c, d, e;
    printf("Vnesi pet bukvi: ");
    scanf("%c%c%c%c%c", &a, &b, &c, &d, &e);
    printf("Prva bukva: %c\n", a);
    printf("Vtora bukva: %c\n", b);
    printf("Treta bukva: %c\n", c);
    printf("Cetvrta bukva: %c\n", d);
    printf("Petta bukva: %c\n", e);
    printf("Se dobi: %c%c%c%c%c", e, c, b, a, d);
    return 0;
}
