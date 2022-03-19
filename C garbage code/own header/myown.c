#include<stdio.h>
#include"imran.h"  //this is my own create header file

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("sum is = %d\n", add(a,b));
    printf("Sub is = %d\n", sub(a,b));

    return 0;
}
