#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 3, d = 4;
    //a)
    printf("1, 2, 3, 4\n");
    //b)
    printf("%d, %d, %d, %d\n", a, b, c, d);
    //c)
    printf("%d ,", a);
    printf("%d ,", b);
    printf("%d ,", c);
    printf("%d\n", d);
    return 0;
}
