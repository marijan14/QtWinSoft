#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {5, 0, 10, 6};
    int b[] = {1, 2, 4};
    
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    
    printf("Prviot polinom e: \n");
    print_polinom(a, m);
    
    printf("\nVtoriot polinom e: \n");
    print_polinom(b, n);
    
    int *sum = soberi_polinomi(a, b, m, n);
    int size = max(m, n);
    
    printf("\nZbirot na polinomite e: \n");
    print_polinom(sum, size);
    return 0;
}

int soberi_polinomi(int a[], int b[], int m, int n)
{
    int size = max(m, n), i;
    int *sum = malloc(size * sizeof(*sum));
    for(i = 0; i < m; i++)
        sum[i] = a[i];
        
    for(i = 0; i < n; i++)
        sum[i] += b[i];
        
    return sum;
}

void print_polinom(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++) {
        printf("%d", a[i]);
        if(i != 0)
            printf("x^%d", i);
        if(i != n - 1)
            printf(" + ");
    }
}

int max(int m, int n)
{
    return (m > n) ? m : n;
}