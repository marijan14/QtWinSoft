#include <stdio.h>
#include <math.h>

int main()
{
    int n, reverse = 0;
    
    scanf("%d", &n);
    
    while(n != 0) {
        reverse *= 10;
        reverse += n % 10;
        n /= 10;
    }
    
    printf("%d\n", reverse);
    return 0;
}
