#include<stdio.h>

int main()
{
    int x = 10;
    int *p;

    printf("Value of x: %d\n", x);

    p = &x;  // here assign the x address at pointer p
    *p = 20;

    printf("Value of x: %d\n", x);

    x = 15;

    printf("Value of x: %d\n", x);
    printf("Value stored at location %p is %d\n", p, *p);  //print location and pointer value

    printf("Address of x: %p\n", &x);
    printf("Value of p: %p\n", p);

    return 0;
}
