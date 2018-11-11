#include <stdio.h>

int main()
{
    int broj, temp, pom = 1;
    scanf("%d", &broj);
    temp = broj;
    while(temp) {
        temp /= 10;
        pom *= 10;
    }
    while(pom > 1) {
        pom /= 10;
        printf("%d   ", broj / pom);
        broj %= pom;
    }
    return 0;
}
