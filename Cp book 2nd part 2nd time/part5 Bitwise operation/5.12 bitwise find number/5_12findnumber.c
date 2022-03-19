#include<stdio.h>

int main()
{
    int ara[] = {1, 2, 3, 4, 3, 2, 1};

    int result, i, n = 7;

    result = ara[0];

    for (i = 1; i < 7; i++) {
        result = result ^ ara[i];
    }

    printf("Result: %d\n", result);

    return 0;
}
