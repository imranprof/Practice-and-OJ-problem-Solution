#include<stdio.h>

int main()
{
    double pi = 3.14159265358;

    int *ptr;

    ptr = &pi;

    printf("Value of pi : %lf\n", pi);
    printf("Value of pi : %lf\n", *ptr); // here print the value of pi that i assign in pointer *ptr . so pointer value is the variable value

    return 0;
}
