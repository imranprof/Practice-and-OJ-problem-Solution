#include<stdio.h>

int main()
{
    char str[30]="Bangla",str_new[30];

    int i,j;

    for(i=5,j=0;i>=0;i=i-1){

      str_new[j] = str[i];
      j=j+1;

    }

    str_new[j]='\0';  //for input null in str_new 6th element

    printf("%s",str_new);

    printf("\n");

    return 0;
}
