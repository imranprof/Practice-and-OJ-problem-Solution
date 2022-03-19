#include<stdio.h>
#include<stdio.h>

int main()
{

    int i, n;

    double sum;

    int j, run_time;

    printf("Enter how many time run program : ");

    scanf("%d", &run_time);

    for(j = 1; j <= run_time; j++){  //this is the runtime loop

        printf("Enter n number: ");

        scanf("%d", &n);

        for(i = 1, sum = 0; i <= n; i = i +1  ){    //main program loop

            sum = sum + pow(i,i);  //calculation of 1^1 + .....+n^n dara
        }

        printf("Jogfol of 1^1+....+%d^%d dara = %.0lf\n", n, n, sum);

    }

    return 0;
}
