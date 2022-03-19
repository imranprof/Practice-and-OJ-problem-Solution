#include <stdio.h>

void main()
{

/*
//simple darar jogfol er program

    int i,sum;
    for(i=1;i<=10;i=i+1){
        sum=sum+i;

    }

    printf ("%d",sum);

    */

   int i,start,end,dif,sum;

   printf("Enter the start number: ");
   scanf("%d",&start);

   printf("\nEnter the Difference for dara: ");
   scanf("%d",&dif);

   printf("\nEnter the end number of dara: ");
   scanf("%d",&end);


   for (sum=0,i=start;i<=end;i=i+dif){

    sum=sum+i;

   }

   printf("\nThe Sum is: %d \n\n",sum);


return 0;

}
