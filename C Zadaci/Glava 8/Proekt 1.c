#include <stdio.h>

double average(int a[], int n)
{
    int suma = 0, i;
    for(i = 0; i < n; i++)
        suma += a[i];
    double average = (float)suma / n;
    return average;
}

double median(int a[], int n)
{
    double m = 0.0;
    if(n % 2 == 0)
        m = (a[(n - 1) / 2] + a[n / 2]) / 2.0;
    else
        m = a[n / 2];
    return m;
}

void sort(int a[], int n)
{
    int i, j, temp = 0;

    for(i = 0; i < n; i++)
        for(j = 0; j < n - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
}

int mostFrequent(int a[], int n)
{
    int max = 1, br = 1, result = a[0], i;
    sort(a, n);
    for(i = 1; i < n; i++) {
        if(a[i] == a[i - 1])
            br++;
        else {
            if(br > max) {
                max = br;
                result = a[i - 1];
            }
            br = 1;
        }
    }
    if(br > max) {
        max = br;
        result = a[n - 1];
    }
    return result;
}

int main()
{
    int a[100], n, i, freq[100], j, br;
    double m = 0.0;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }
    for(i = 0; i < n; i++) {
        br = 1;
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                br++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
            freq[i] = br;
    }
    printf("%s%13s%17s\n", "Element", "Vrednost", "Histogram");
    for(i = 0; i < n; i++) {
        printf( "%7d%13d        ", a[i], freq[i]);
        for(j = 1; j <= freq[i]; j++)
            printf("%c", '*');
        printf("\n");
    }
    sort(a, n);
    printf("Sredna vrednost: %.2f\n", average(a, n));
    printf("Medijana: %.2f\n", median(a, n));
    printf("Najfrekfenten: %d\n", mostFrequent(a, n));
    return 0;
}