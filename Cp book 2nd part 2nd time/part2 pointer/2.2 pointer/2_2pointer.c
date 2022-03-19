#include<stdio.h>

int main()
{
    int x = 10;

    int *p; //here *p is integer pointer

    p = &x;

    printf("*p = %d\n", *p);    // here *p is print the value

    printf("Value of p is %p\n", p);   // here print the address of p means address of x

    return 0;
}
