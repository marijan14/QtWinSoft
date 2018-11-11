#include <stdio.h>

int obratno(int n) {
    int reverse = 0;
    while(n != 0) {
        reverse *= 10;
        reverse += n % 10;
        n /= 10;
    }
    return reverse;
}

int main()
{
    int broj;
    scanf("%d", &broj);
    printf("%d\n", obratno(broj));
    return 0;
}
