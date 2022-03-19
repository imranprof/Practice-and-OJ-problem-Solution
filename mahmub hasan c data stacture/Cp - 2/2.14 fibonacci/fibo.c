#include<stdio.h>

int main()
{
    int a = 0, b = 1, c;

    int  i, n;

    scanf("%d", &n);

    for(i = 2; i <= n; i++){

        c = a + b;
        a = b;
        b = c;
    }

    printf("nth fibonacci = %d\n", b);

    return 0;
}
