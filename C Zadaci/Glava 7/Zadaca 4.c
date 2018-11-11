#include <stdio.h>

int nzd(int x, int y) {
    int i, temp, n;
    temp = x;
    if(x > y)
        temp = y;
    for(i = temp; i >= 1; i--) {
        if((x % i == 0) && (y % i == 0)) {
            n = i;
            break;
        }
    }
    return n;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", nzd(x, y));
    return 0;
}
