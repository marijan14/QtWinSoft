#include <stdio.h>

int main()
{
    int broj, i = 0;
    scanf("%d", &broj);
    if(broj <= 0)
        printf("Nevaliden broj!");
    while(broj != 0) {
        if(broj >= 1000) {
            for(i = 0; i < broj / 1000; i++)
                printf("M");
            broj %= 1000;
        } else if(broj >= 500) {
            if(broj < 900) {
                for(i = 0; i < broj / 500; i++)
                    printf("D");
                broj %= 500;
            } else {
                printf("CM");
                broj %= 100;
            }
        } else if(broj >= 100) {
            if(broj < 400) {
                for(i = 0; i < broj / 100; i++)
                    printf("C");
                broj %= 100;
            } else {
                printf("CD");
                broj %= 100;
            }
        } else if(broj >= 50) {
            if(broj < 90) {
                for(i = 0; i < broj / 50; i++)
                    printf("L");
                broj %= 50;
            } else {
                printf("XC");
                broj %= 10;
            }
        } else if(broj >= 10) {
            if(broj < 40) {
                for(i = 0; i < broj / 10; i++)
                    printf("X");
                broj %= 10;
            } else {
                printf("XL");
                broj %= 10;
            }
        } else if(broj >= 5) {
            if(broj < 9) {
                for(i = 0; i < broj / 5; i++)
                    printf("V");
                broj %= 5;
            } else {
                printf("IX");
                broj = 0;
            }
        } else if(broj >= 1) {
            if(broj < 4) {
                for(i = 0; i < broj; i++)
                    printf("I");
                broj = 0;
            } else {
                printf("IV");
                broj = 0;
            }
        }
    }
    return 0;
}