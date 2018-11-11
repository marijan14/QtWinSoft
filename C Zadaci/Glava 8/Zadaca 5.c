#include <stdio.h>

void selekcija(int *a, int n) {
    int i, j, min;
    
    for(i = 0; i < n - 1; i++) {
        min = i;
        
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[min])
                min = j;
        }
        
        swap(&a[i], &a[min]);
    }
}

void selekcijaR(int *a, int n, int i) {
    int min = i, j;
    
    for(j = i + 1; j < n; j++) {
        if(a[j] < a[min])
            min = j;
    }
    
    swap(&a[i], &a[min]);
    
    if(i + 1 < n)
        selekcijaR(a, n, i + 1);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n, i, a[100];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    //selekcija(a, n);
    selekcijaR(a, n, 0);
    
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}