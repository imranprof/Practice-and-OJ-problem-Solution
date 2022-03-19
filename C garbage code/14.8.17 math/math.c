#include<stdio.h>

int main()
{

   int  x,y,x_plus_y,x_minus_y;

    printf("Enter the value of x_plus_y: ");
    scanf("%d",&x_plus_y);

    printf("Enter the value of x_minus_y: ");
    scanf("%d",&x_minus_y);

    x=(x_plus_y+x_minus_y)/2;
    y=(x_plus_y-x_minus_y)/2;

    printf("\nThe value of x is = %d\n",x);
    printf("The value of y is = %d\n",y);




}
