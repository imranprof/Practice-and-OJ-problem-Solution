#include<stdio.h>

int gcd(int a, int b)
{
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int main()
{

    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("gcd is %d\n", gcd(num1, num2));

    return 0;
}
