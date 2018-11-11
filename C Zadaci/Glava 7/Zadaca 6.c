#include <stdio.h>

int nzd(int x, int y) {
    if(y != 0)
        return nzd(y, x % y);
    return x;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", nzd(x, y));
    return 0;
}
