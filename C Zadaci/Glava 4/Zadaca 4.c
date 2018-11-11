#include <stdio.h>

int main()
{
    int counter = 1, suma = 0;
    while(counter <= 10) {
        suma += counter;
        counter++;
    }
    printf("Sumata na broevite od 1 do 10 e: %d\n", suma);
    return 0;
}
