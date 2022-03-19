#include <stdio.h>
#include <stdlib.h>

void main()
{
    float im,n;
    printf("\nenter the value of This\n");
    scanf("%f%f",&im,&n);

    if (n==im)
    {
        printf("\n\nIts true\n\n\n");
    }

   else if(n>im)
    {
        printf("\nIts false\n\n");
    }
    else
    {
        printf("\n\nits naggative\n");
    }


}
