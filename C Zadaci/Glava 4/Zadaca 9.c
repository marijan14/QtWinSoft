#include <stdio.h>

int main()
{
    float broj;
    while(1) {
        printf("Vnesi promet vo evra (-1 za kraj): ");
        scanf("%f", &broj);
        if(broj == -1)
            break;
        else
            printf("Platata e: %.2f evra\n", 200 + (0.09 * broj));
    }
    return 0;
}
