#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    for(a=1;a<=100;a=a+1)
    {
        //continue;//continue statement
        printf("%d\n",a);
        if(a>=50)
            break;//:break statement:
    }
}
