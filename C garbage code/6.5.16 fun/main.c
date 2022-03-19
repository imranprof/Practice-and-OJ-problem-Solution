#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main()
{
    int imr[5],i;

    printf("Enter all number:\n");
    for(i=0;i<5;i++){
            printf("Number is:");
        scanf("%d",&imr[i]);
    }
    printf("\nYour Lucky Number is:%d\n",imr[1]);
}
