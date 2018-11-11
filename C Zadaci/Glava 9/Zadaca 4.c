int main()
{
    int n, i, s, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        s = 0;
        for(j = 1; j < i; j++) {
            if(i % j == 0) {
                s += j;
            }
        }
        if(s == i)
            printf("Brojot %d e sovrsen broj\n", i);
    }
    return 0;
}