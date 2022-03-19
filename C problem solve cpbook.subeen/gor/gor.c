#include<stdio.h>

int main()
{

    int i, length;            //this variable for run the first loop

    int j, number[5], gor;       //this variable for run the main function  & main loop

    scanf("%d", &length);        //input the running length

    for(i=1; i <= length; i++){        //this is the main loop for how  many time i want to run this program

        for(j = 0; j <= 4; j++){         //this loop is for input 5 number

            scanf("%d", &number[j]);

        }

        gor =( number[0] + number[1] + number[2] + number[3] + number[4] ) / 5;     //calculate the gor

    //this is for output the gor of five number between 0 to 100

    if( number[0] >= 0 && number[0] <=100 && number[1] >= 0 && number[1] <=100 && number[2] >= 0 && number[2] <=100 && number[3] >= 0 && number[3] <=100 && number[4] >= 0 && number[4] <=100){

        printf("%d\n", gor);          //this is for output the gor

        }

    }

    return 0;
}
