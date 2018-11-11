#include <stdio.h>

int prost(int n) {
    int i;
    for(i = 2; i <= n - 1; i++)
        if(n % i == 0)
            return 1;
    if(i == n)
        return 0;
}

int main()
{
    int n, a[100], i = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++) {
        int temp = prost(a[i]);
        if(temp == 0)
            printf("%d ", a[i]);
    }
    return 0;
}
