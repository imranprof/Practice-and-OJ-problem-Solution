#include <stdio.h>

int square(int x)
{
    int y;
    y=x*x;

    return y;
}

int main()
{
    int a,sq;
    printf("Enter the number:");
    scanf("%d",&a);
    sq=square(a);
    printf("\nThe square of %d is:%d\n",a,sq);
    return 0;
}
