#include <stdio.h>

int main()
{
    int counter = 1, grade, total = 0, average, brNaUcenici;
    printf("Vnesi broj na ucenici: ");
    scanf("%d", &brNaUcenici);
    while(counter <= brNaUcenici) {
        printf("Vnesi ocena: ");
        scanf("%d", &grade);
        total += grade;
        counter += 1;
    }
    average = total / brNaUcenici;
    printf("Srednata vrednost na klasot e %.3f\n", (float)average);
    return 0;
}
