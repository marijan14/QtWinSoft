#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, suma, ostatok = 0;

    scanf("%d", &n);

    temp = n;

    while(temp != 0) {
        ostatok = temp % 10;
        suma += pow(ostatok, 3);
        temp /= 10;
    }

    if(suma == n)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}