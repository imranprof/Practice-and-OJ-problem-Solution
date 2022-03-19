#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,sum,start,diff,end;
    printf("Enter The Value of start:\n");
    scanf("%d",&start);
    printf("Enter The Value of difference:\n");
    scanf("%d",&diff);
    printf("Enter The Value of End:\n");
    scanf("%d",&end);
    for(n=start,sum=0;n<=end;n=n+diff){
        sum=sum+n;
    }
    printf("The Sum is:%d\n",sum);

}
