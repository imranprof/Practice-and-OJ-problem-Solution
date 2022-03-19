#include<stdio.h>

int main()
{
    int i, run, j, N;

    long long factorial;

    scanf("%d", &run);

    for(i = 1; i <= run; i++){          //this is the main loop for the program run how many time run

        scanf("%d", &N);

        if(N >= 0 && N <= 15){

            for(j = 1, factorial = 1; j <= N; j++){         //this loop is for factorial

                factorial = factorial * j;

            }

            printf("%lld\n", factorial);    // this is for output the factorial

        }
    }


    return 0;
}
