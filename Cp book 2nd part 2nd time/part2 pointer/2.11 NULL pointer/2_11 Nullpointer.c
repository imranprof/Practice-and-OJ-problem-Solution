#include<stdio.h>

int main()
{
    int *p = NULL;

    *p = 100;   //here *p does not have any address

    printf("Value of *p : %d\n", *p);

    return 0;
}
