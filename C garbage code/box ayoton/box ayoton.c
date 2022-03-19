#include<stdio.h>

int main()

{
    int i, length;       //this variable is for run the main loop

    int j, input_num[3], box_ayoton;

    scanf("%d", &length);          //input length of main loop

    for(i = 1; i <= length; i++){    //this loop is for run how many time i want to rum the main program


        for(j = 0; j <= 2; j++){    //this loop is input three number

            scanf("%d", &input_num[j]);

        }

        box_ayoton = input_num[0] * input_num[1] * input_num[2];

        //output the box ayoton if all input are between 1 to 100

        if(input_num[0] > 0 && input_num[0] <= 100 && input_num[1] > 0 && input_num[1] <= 100 && input_num[2] > 0 && input_num[2] <= 100){

            printf("%d\n", box_ayoton);     //output box ayoton
       }


    }


    return 0;
}
