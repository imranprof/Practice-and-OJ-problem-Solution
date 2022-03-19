#include<stdio.h>

int main()
{
    int i, j, k, N, temp, l, temp2;

    scanf("%d", &N);
    temp = N;
    temp2 = N;

    for(i = 1; i <= N; i++) {
        for(k = 1; k < temp; k++) {
            printf(" ");
        }
        for(j = 1; j < i * 2; j++) {
            printf("*");
        }

        temp--;

        printf("\n");
    }
    for(i = 1; i < N; i++) {
        for(j = 1; j <= i; j++) {
            printf(" ");
        }
        for(k = 1; k < (temp2 * 2) - 2; k++) {
            printf("*");
        }
        temp2--;

        printf("\n");
    }


    return 0;
}
