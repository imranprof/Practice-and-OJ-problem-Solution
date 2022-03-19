#include<stdio.h>

int main()
{
    char str[30];

    int i,length,j;

    length=0;
    scanf("%s",str);

    for(i=1; str[i]!='\0';i++){

        length=length+1;
    }
    for(j=length;j>=0;j=j-1){

       printf("%c",str[j]);

    }





    return 0;
}
