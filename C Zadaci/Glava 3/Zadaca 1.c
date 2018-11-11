#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(a < b)
        printf("%d e pogolem od %d", b, a);
    else if(a == b)
        printf("Broevite se ednakvi");
    else
        printf("%d e pogolem od %d", a, b);
    return 0;
}
