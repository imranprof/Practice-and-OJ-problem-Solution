#include<stdio.h>

int main()
{
    char ch = 'T';
    char lower;

    lower = ch - 'A' + 'a';         //ascii sum upper to lower

    printf("Lower of %c is %c\n",ch,lower);

    return 0;
}
