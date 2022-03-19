#include<stdio.h>

void main()
{
    int i,num;
    printf("Enter number: ");
    scanf("%d",&num);

    printf("The even number of 1 to %d is:\n",num);

    for(i=2;i<=num;i=i+2){

        printf("%d\n",i);



    }

   return 0;


}
