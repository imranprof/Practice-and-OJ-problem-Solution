#include<stdio.h>

int main()
{
    char str[30];

    int i,length;

    length=0;

    gets(str);  //gets(); function use for input string


    for(i=1; str[i] !='\0' ; i++){

        length=length+1;
    }

    printf("Length of %s is %d \n",str,length);


    return 0;
}
