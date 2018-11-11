#include <stdio.h>

int dzvezdi(int n, int i) {
    if(n < 1)
        return;
    if(i <= n) {
        printf("* ");
        dzvezdi(n, i + 1);
    } else {
        printf("\n");
        dzvezdi(n - 1, 1);
    }
}

int main()
{
    int broj;
    printf("Vnesi broj na dzvezdi (n): ");
    scanf("%d", &broj);
    dzvezdi(broj, 1);
    return 0;
}