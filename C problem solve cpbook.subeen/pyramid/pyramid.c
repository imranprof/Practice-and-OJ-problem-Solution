#include<stdio.h>

int main()

{
    int i, run;

    int j, space, star;

    int line, temp;

    scanf("%d", &run);

    for(i = 1; i <= run; i++){

        scanf("%d", &line);
        temp = line;

        if (line >= 1 && line <= 100){      //test line between 1 to 100

            for(j = 1; j <= line; j++){     // this is the pyramid main loop

                for(space = 1; space <= temp; space++){     //this loop is for print the space in pyramid every line

                    printf(" ");
                }
                temp--;

                for(star = 1; star <= 2*j-1; star++){       //this loop is for print all star in pyramid every line

                    printf("*");
                }


                printf("\n");       //this is for print a new line
            }

        }
    }


    return 0;
}
