#include <stdio.h>

int main()
{
    char ch;

    double a, b, sol;

    printf("\n***********WELLCOME TO MY CALCULATOR***********\n");

    printf("\n**Enter what you want**\n");

    printf("( s for sum,d for deduct,G for gunfol & V for vagfol )\n");

    printf("\nType: ");

    scanf("%c", &ch)
    ;
    printf("\nEnter two number:\n");

    scanf("%lf%lf", &a, &b);

    if(ch=='s' || ch == 'S')
    {
        printf("\nYou want sum\n");

        sol = a + b;

        printf("\nThe Answer is= %.0lf\n", sol);
    }

    else if(ch=='d' || ch == 'D')
    {
        printf("\nYou want Biyogfol\n");

        sol = a - b;

        printf("\nThe Answer is= %.0lf\n", sol);

    }

    else if(ch=='g' || ch == 'G'){

        printf("\nYou want gunfol\n");

        sol = a * b;

        printf("\nThe Answer is= %.0lf", sol);
    }

    else if(ch=='v' || ch == 'V'){

        printf("\nYou want Vagfol\n");

        sol = a / b;

        printf("\nThe Answer is= %.3lf\n", sol);

    }

    else
    {
        printf("\nYou Entered a unknown word\n");
    }

    printf("\n\n**********THANK YOU*****************\n\n");

    return 0;
}
