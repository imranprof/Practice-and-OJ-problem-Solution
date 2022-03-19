#include<stdio.h>

int main()
{
    int n, count;

    scanf("%d", &n);
    count = 0;

    while(n) {p
        if (n & 1) count++;

        n = n >> 1;
    }

    printf("Number of 1: %d\n", count);

    return 0;
}
