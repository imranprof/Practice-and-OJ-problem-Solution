#include<stdio.h>

int main()
{
    double pi = 3.14159265358;

    int *ptr;

    ptr = &pi;  //here i assign double type variable into integer type pointer // this is wrong way

    //should use same pointer type and assign same data type variable

    printf("Value of pi : %lf\n", pi);

    printf("Value of pi : %lf\n", *ptr);

    return 0;
}
