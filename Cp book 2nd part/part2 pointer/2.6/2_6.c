#include<stdio.h>

int main()
{
    int x = 10;

    int y;
    int *p;

    printf("Value of x: %d\n", x);  //print main value of x

    p = &x;
    y = *p;
    *p = 15;

    printf("Value of x: %d\n", x);  //here print the value of x what i put in pointer *p

    printf("Value of y: %d\n", y);   // here print value of y = *p before the assign new value in *p

    printf("Value of *p: %d\n", *p);  // here print the value of *p address of x

    printf("Address of x: %p\n", &x);  // here print the address of x

    printf("Address of y: %p\n", &y);   // here print the address of y

    printf("Value of p: %p\n", p);      // here print the value or address of p

    return 0;
}
