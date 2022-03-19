#include <stdio.h>
#include <stdlib.h>

void main()
{
    int mark;
    char grade;
    printf("Enter your mark:\n");
    scanf("%d",&mark);
    if(mark>=80)
    {
        grade='A+';
        printf("Your grade is %c",grade);
    }
    else if(mark>=70)
    {
        grade='A';
        printf("Your grade is %c",grade);
    }
    else if(mark>=60)
    {
        grade='B';
        printf("Your grade is %c",grade);
    }
    else if(mark>=50)
    {
        grade='C';
        printf("Your grade is %c",grade);
    }
     else if(mark>=40)
    {
        grade='D';
        printf("Your grade is %c",grade);
    }
    else
    {
        printf("you get fail");
    }

}
