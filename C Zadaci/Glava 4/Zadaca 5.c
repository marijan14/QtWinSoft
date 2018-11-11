#include <stdio.h>

int main()
{
    int counter = 1, broj;
    long int proizvod = 1;
    while(counter <= 10) {
        scanf("%d", &broj);
        proizvod *= broj;
        counter++;
    }
    printf("Proizvodot na broevite e: %d\n", proizvod);
    return 0;
}
