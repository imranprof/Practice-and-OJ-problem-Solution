#include <stdio.h>

void main()
{

    int i,j,ln;

    printf("Enter How many star line you want to print: ");
    scanf("%d",&ln);


    for (i=1;i<=ln;i=i+1){

        for(j=1;j<=i;j=j+1){

           printf("*");

        }

        printf("\n");

    }



}
