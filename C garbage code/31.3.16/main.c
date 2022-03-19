#include <stdio.h>
#include <stdlib.h>
int pass(int x)
{
    if(x==1234)
    {
        printf("You Successfully Enter the Password");
        printf("\n\nCongrats......\n\n");
    }
    else

        printf("Your password is incorrect.\nPlease Enter a new one:");

        return x;
    }



int main()
{
    int a,b;

    printf("Enter your Password:");
    scanf("%d",&a);

    a=pass(a);

    if(a!=1234)
    {
        scanf("%d",&b);
        b=pass(b);

    }

return 0;

}
