#include<stdio.h>

void main()
{

    int i[5],j,sum;

    printf("Enter the value: \n");

    for(sum=0,j=0;j<=4;j++){

        scanf ("%d",&i[j]);
        sum =sum+i[j];
    }
    printf("\nThe sum is: %d\n",sum);



}
