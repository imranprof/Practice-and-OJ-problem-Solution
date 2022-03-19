#include<stdio.h>

int main()
{
    int *p = NULL;

    *p = 100;

    printf("Value of *p: %d\n", *p);   // here i want to print e null pointer so its got crush

    return 0;
}
