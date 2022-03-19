#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,j,how;
    printf("How many line do you print:");
    scanf("%d",&how);

    for(j=0;j<how;j++){
        for(i=0;i<j+1;i++){
            printf("*");
       }
        printf("\n");
    }
}
