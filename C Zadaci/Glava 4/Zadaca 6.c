#include <stdio.h>

int main()
{
    int broj, suma = 0;
    while(1) {
        scanf("%d", &broj);
        if(broj == -1)
            break;
        else
            suma += broj;
    }
    printf("%d\n", suma);
    return 0;
}
