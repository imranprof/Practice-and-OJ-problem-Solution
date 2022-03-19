#include<stdio.h>
#include<math.h>

int maximum(int a,int b)
{
    int temp;

    if (a>b)
        temp=a;
    else
       temp=b;
    return temp;
}

int main()
{
    int a,b,smaller;
    printf("Enter the value of a & b:\n");
    scanf("%d%d",&a,&b);

    smaller=maximum(a,b);
    printf("\nThe bigger number is=%d\n", smaller);

    return 0;
}
