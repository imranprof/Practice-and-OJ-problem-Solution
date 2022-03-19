#include<stdio.h>

int main()
{
    int i,num;

    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The odd number of 1 to %d is:\n",num);

    for(i=1;i<=num;i=i+2){

        printf("%d\n",i);
    }


    return 0;

}
