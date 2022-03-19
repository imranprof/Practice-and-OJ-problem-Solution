#include<stdio.h>

int main()
{

    double maths[2][5];

    int c,r;

    printf("Input Number: \n");

/// This loop is for input student marks
    for(c=0;c<2;c++){

        for(r=0;r<5;r++){

            scanf("%lf",&maths[c][r]);

            }

        }

    printf("Output: \n");

/// This loop is for print the marks of student
    for(c=0;c<2;c++){

        for(r=0;r<5;r++){

            printf("Class: %d , Roll: %d , Marks: %0.2lf \n",c+3,r+1,maths[c][r]);

            }

        }



    return 0;


}
