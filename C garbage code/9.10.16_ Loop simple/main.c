#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    printf("Enter the value of b:");
    scanf("%d",&b);

    for(a=1; a<=b; a++){
        printf("%d\n",a);
    }
    printf("The End");

    return 0;
}
