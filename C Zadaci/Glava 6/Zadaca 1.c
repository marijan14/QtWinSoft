#include <stdio.h>

int main()
{
    double celsius;
    int fahrenheit = 0;
    printf("Fahrenheit          Celsius\n");
    for(fahrenheit = 0; fahrenheit <= 212; fahrenheit++) {
        celsius = 5.0 / 9.0 * (fahrenheit - 32);
        printf("%10d %16.3f\n", fahrenheit , celsius);
    }
    return 0;
}
