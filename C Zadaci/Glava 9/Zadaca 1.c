#include <stdio.h>
#include <math.h>

int main()
{
    int n, t;
    
    double plostina;
    
    scanf("%d", &n);
    scanf("%d", &t);
    
    plostina = (n * t * t) / (4 * tan(3.14 / n));
    
    printf("Perimetar: %d\n", n * t);
    printf("Plostina: %d\n", plostina);
    return 0;
}
