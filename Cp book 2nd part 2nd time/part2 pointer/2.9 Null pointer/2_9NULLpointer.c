#include<stdio.h>

int main()
{
    int x = 100;
    int *p = NULL;  //here i assign *p as NULL

    printf("Value of x: %d\n", x);

    printf("Value of *p: %d\n", *p);  //here i try to dereferencing p by use *p and try to print, which is NULL

    return 0;
}
