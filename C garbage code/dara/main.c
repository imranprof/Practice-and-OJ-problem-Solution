#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,start,dif,end,sum;
    printf("Enter the start dif and end:\n");
    scanf("%d%d%d",&start,&dif,&end);
    for(n=start,sum=0;n<=end;n=n+dif){
        sum=sum+n;
    }
    printf("sum is %d",sum);
}
