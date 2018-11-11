#include <stdio.h>

int main()
{
    int a[100], i, j, n, pocetok, len, br = 0, flag = 0;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", a[i]);

    i = 1;
    len = 2;
    while(i < n - 1) {
        if((a[i] - a[i - 1]) * (a[i + 1] - a[i]) < 0) {
            flag = 1;
            br++;
            len = 3;
            pocetok = i - 1;
            i++;
            while(((a[i] - a[i - 1]) * (a[i + 1] - a[i]) < 0) && (i <= n - 2)) {
                i++;
                len++;
            }
            printf("%d: pilesta podniza so dolzina %d e: ", br, len);
            for(j = pocetok; j <= i; j++)
                printf("%d ", a[j]);
            printf("\n");
        } else
            i++;
    }
    if(flag == 0)
        printf("Nema pilesti podnizi\n");
    return 0;
}
