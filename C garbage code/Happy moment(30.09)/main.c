#include <stdio.h>
void main()
{
    char feel;
    printf("SHARE YOUR FEELINGS:");
    scanf("%c",&feel);
    if(feel=='a')
    {
        printf("This is very happy moment in my life");
    }
    else if(feel=='b'|| feel == 'c')
    {
        printf("I'm seriously very happy ");
    }
    else
        printf("Thats ok");
}
