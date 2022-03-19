#include<stdio.h>

void main()
{

    printf("I love programing\n");

    int i,j,lin;

    printf("How many line you want to show: ");
    scanf("%d",&lin);

    for(i=1;i<=lin;lin--){

        for(j=1;j<=lin;j++){
            printf("*");

        }

        printf("\n");
    }

}
