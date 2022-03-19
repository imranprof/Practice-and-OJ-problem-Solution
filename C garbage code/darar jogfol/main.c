#include <stdio.h>
#include <stdlib.h>

int main()

{
    int start,end,dif,n,sum=0;
    printf("Enter the start number:");
    scanf("%d",&start);

    printf("Enter the end number:");
    scanf("%d",&end);

    printf("enter the difference:");
    scanf("%d",&dif);

    for(n=start;n<=end;n=n+dif){
        sum=sum+n;
    }
    printf("\n\n sum is=%d\n\n",sum);

    return 0;
}
