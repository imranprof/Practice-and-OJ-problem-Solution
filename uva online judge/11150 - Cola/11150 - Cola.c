#include<stdio.h>

int main()
{
    int f_bottles, N, temp, total_bottles, temp2;

    while(scanf("%d", &N) != EOF)
    {

        f_bottles = 0;
        temp2 = N;

        while(1)
        {
            if (N == 0 || N == 1) {
                f_bottles = f_bottles + 0;
                break;
            }

            if ( N == 3 || N == 2) {

                f_bottles = f_bottles + 1;
                break;
            }

            temp = N / 3;
            f_bottles = f_bottles + temp;

            N = temp + (N - (temp * 3));

        }

        total_bottles = f_bottles + temp2;

        printf("%d\n", total_bottles);
    }

    return 0;
}
