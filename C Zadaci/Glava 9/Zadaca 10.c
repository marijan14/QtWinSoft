#include <stdio.h>

int main()
{
    int n, a[100], i;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    rastecka(a, n);
    return 0;
}

int rastecka(int a[], int n)
{
    int max = 1, len = 1, i, index = 0;
    
    for(i = 1; i < n; i++) {
        if(a[i] > a[i - 1])
            len++;
        else {
            if(max < len) {
                max = len;
                index = i - max;
            }
            len = 1;
        }
    }
    
    if(max < len) {
        max = len;
        index = n - max;
    }
    
    for(i = index; i < max + index; i++)
        printf("%d ", a[i]);
    
    return max;
}