#include<stdio.h>

void main()
{
    int i,num,sum;
    printf("Enter number: ");
    scanf("%d",&num);

    printf("The even number of 1 to %d is:\n",num);

    for(sum=0,i=2;i<=num;i=i+2){

        printf("%d\n",i);

      sum=sum+i;

    }

    printf("\nThe sum of all even number 1 to %d is = %d\n\n",num,sum);


}
