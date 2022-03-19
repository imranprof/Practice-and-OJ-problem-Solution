#include <stdio.h>
#include <stdlib.h>

void main()
{
    float score;
    printf("please input your score:");
    scanf("%f",&score);

    if(score>=90)
    {
        printf("GRADE:A+");
    }
    else{
    if(score>=80)
    {
        printf("GRADE:A");
    }
    else{
    if(score>=70)
    {
        printf("GRADE:A-");

    }
   else
    {
        printf("FAIL");
    }

    }

    }
    printf("\n--------------\n");

    if(score>=90)
    {
        printf("\nA+\n");
    }
    else if(score>=80)
    {
        printf("A\n");
    }
    else if(score>=70)
    {
        printf("A-\n");
    }
    else
    {
        printf("FAIL");

    }


}
