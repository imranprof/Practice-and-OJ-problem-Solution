#include<stdio.h>

int main()

{
    char str[30]="Imran", sr_copy[30];

    int i,j;

    for(i=4,j=0;i>=0;i--,j=j+1){

        sr_copy[j]=str[i];


    }

    sr_copy[j]='\0';

    printf("%s\n",sr_copy);






    return 0;
}
