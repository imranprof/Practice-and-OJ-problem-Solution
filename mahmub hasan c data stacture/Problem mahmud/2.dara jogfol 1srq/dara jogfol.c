#include<stdio.h>

int main()
{
    int i, last_num, sum;

    int j, run_time;  // this is for run many time this program

    printf("Enter how many time you want to run: ");

    scanf("%d", &run_time);

    for(j = 1; j <= run_time; j++){  // this is the main loop

        printf("Enter last n number: ");

        scanf("%d", &last_num);

        for(i = 1, sum = 0; i <= last_num; i++ ){

           sum = sum + i * i;  // calculation of 1^2+ 2^2 + 3^2.....+n^2 dara
        }

        printf("1^2+2^2+3^2.....+ %d^2 darar jogfol is: %d \n\n", last_num, sum);
    }

    return 0;
}
