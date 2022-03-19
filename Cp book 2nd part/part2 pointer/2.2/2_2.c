#include<stdio.h>

int main()
{
    int x = 10;

    int *p;

    p = &x;

    printf("*p = %d\n", *p);  // here print value of x

    printf("Value of p is %p\n", p);   //here print address of p or x

    return 0;
}
