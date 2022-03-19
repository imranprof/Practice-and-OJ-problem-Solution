#include<stdio.h>

int main()
{
    int x = 100;

    int *p = NULL;

    printf("Value of x: %d\n", x);

    printf("Value of *p: %d\n", *p);  //Here i try to print a null pointer so i get error

    return 0;
}
