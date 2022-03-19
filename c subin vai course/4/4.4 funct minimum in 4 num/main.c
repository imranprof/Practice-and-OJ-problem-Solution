#include <stdio.h>
#include <stdlib.h>

int minimum(int x,int y)
{
    int temp;
    if(x<y)
        temp=x;
    else
        temp=y;
    return temp;
}

int main()
{
    int a,b,c,d,t1,t2,t3;
    printf("Enter the 4 number:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    t1=minimum(a,b);

    t2=minimum(t1,c);

    t3=minimum(t2,d);
    printf("\nThe smaller number is:%d\n",t3);



    return 0;
}
