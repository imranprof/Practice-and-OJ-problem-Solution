#include<stdio.h>

int f_calls = 0;

int sum(int n)
{
    f_calls = f_calls + 1;

    if (n == 0) {
        return 0;
    }

    return n + sum(n-1);
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("Sum of 1 to %d : %d\n", n, sum(n));

    printf("Number of function calls : %d\n", f_calls);

    return 0;
}
