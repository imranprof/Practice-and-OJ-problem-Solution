#include <stdio.h>

//This is a create function////
void sum()
{
    int a,b,sum;
    printf("Enter the number:\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("\n\nThe sum is =%d\n",sum);
}

//This is the main function//
void main()
{
    sum();
}
