#include <stdio.h>
#include <stdlib.h>

void main()
{

    char a[6];
    int i=0;
    char c[]="MY NAME IS IMR";
    printf("Input your name:");

    i=0;
    while(a[i-1]!='\n')
    {
        scanf("%c",&a[i]);
        i++;
    }

    i=0;
    while(a[i]!='\0')
    {
        printf("%c",a[i]);
        i++;

    }

     i=0;
    while(c[i-1]!='R')
    {
        printf("%c",c[i]);
        i++;
    }





}
