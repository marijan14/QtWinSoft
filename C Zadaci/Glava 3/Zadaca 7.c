#include <stdio.h>

int main()
{
    float data[5], total, average;
    data[0] = 34.0;
    data[1] = 27.0;
    data[2] = 45.0;
    data[3] = 82.0;
    data[4] = 22.0;
    total = data[0] + data[1] + data[2] + data[3] + data[4];
    average = total / 5.0;
    printf("Vkupno %.3f\nSredna vrednost %.3f\n", total, average);
    return 0;
}
