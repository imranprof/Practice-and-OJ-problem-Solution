#include<stdio.h>

int main()
{
    void *vp;   //here i call void pointer vp

    int n = 10;

    vp = &n;

    printf("Address of n: %p\n", &n);
    printf("Value of vp: %p\n", vp);
    printf("Content of vp: %d", *((int *)vp) );  //here i typecast the vp because vp is void type pointer

    return 0;
}
