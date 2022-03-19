#include<stdio.h>

int main()
{
    int x = 10, y;
    int *p, *q;  //here i declare 2 integer pointer

    p = &x;
    y = *p;
    *p = 15;
    *q = 20;

    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of *p: %d\n", *p);
    printf("Value of *q: %d\n", *q);

    return 0;
}
