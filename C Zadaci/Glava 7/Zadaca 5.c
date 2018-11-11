#include <stdio.h>

void fibonacci(int n) {
    int i;
    long int a1 = 0, a2 = 1, next;
    for(i = 1; i <= n; i++) {
        printf("%d ", a1);
        next = a1 + a2;
        a1 = a2;
        a2 = next;
    }
}

int main()
{
    int broj;
    scanf("%d", &broj);
    fibonacci(broj);
    return 0;
}