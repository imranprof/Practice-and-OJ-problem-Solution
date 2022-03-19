#include <stdio.h>
#include <stdlib.h>

void main()
{
    int im[5],i;

    printf("Enter number: \n");

    for(i=0;i<5;i++){
        scanf("%d",&im[i]);
    }

    for(i=0;i<5;i++){
        printf("%d.The answer is:%d\n",i,im[i]);
    }


    return 0;
}
