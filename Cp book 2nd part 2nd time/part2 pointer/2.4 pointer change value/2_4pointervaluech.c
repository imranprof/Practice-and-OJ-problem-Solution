#include<stdio.h>

int main()
{
    int x = 10;

    int *p;

    p = &x;

    printf("Value of x: %d\n", x);

    *p = 20; //here i change the value of x by change pointer *p value

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Address of p: %p\n", p);

    return 0;
}
