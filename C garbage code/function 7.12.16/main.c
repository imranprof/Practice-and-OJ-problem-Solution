#include<stdio.h>

int jog(int c,int d)
{
    int temp;
    temp=c+d;
    printf("The sum is:%d\n",temp);
    return temp;

}

void main()
{
    int a,b,sum;

    printf("Enter the two number:\n");

    scanf("%d%d",&a,&b);

    sum=jog(a,b);

    if(sum>100)
        printf("The sum is greater than 100\n");
    if(sum==0)
        printf("the sum is equal to 0");
    else
        printf("The sum is smaller than 100");
}
