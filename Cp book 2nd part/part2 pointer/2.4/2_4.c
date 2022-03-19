#include<stdio.h>

int main()
{
    int x = 10;

    int *p;

    p = &x;

    printf("Value of x: %d\n", x);

    *p = 20;  //here change the value of x

    printf("Value of x: %d\n", x);  // here print the pointer value 20 what i assign now in *p

    printf("Address of x: %p\n", &x);  //address of the variable

    printf("Value of p: %p\n", p);  // address of pointer

    return 0;
}
