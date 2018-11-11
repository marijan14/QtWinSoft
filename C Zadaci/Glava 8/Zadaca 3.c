#include <stdio.h>
#include <string.h>

int palindrom(char str[]) {
    int l = 0, h = strlen(str) - 1;
    while(h > l)
        if(str[l++] != str[h--])
            return 0;
    return 1;
}

int main() {
    printf("%d\n", palindrom("radar"));
    printf("%d\n", palindrom("abba"));
    printf("%d\n", palindrom("adsfsdgfsd"));
    printf("%d\n", palindrom("radari"));
    return 0;
}