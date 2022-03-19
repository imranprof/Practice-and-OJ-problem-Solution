#include<stdio.h>

//this is factorial recursive function
int factorial(int n)
{
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

//this is main function
int main()
{
    int n;

    scanf("%d", &n);

    if (n < 0) {
        printf("Undefined\n");
        return 0;
    }

    printf("Factorial of %d is %d\n", n, factorial(n));

    return 0;
}
