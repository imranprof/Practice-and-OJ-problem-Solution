#include<stdio.h>

int main()
{
    int f_bottles, N, temp;

    while(1)
    {
        scanf("%d", &N);

        if ( N == 0) {
            break;
        }
        f_bottles = 0;
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

        printf("%d\n", f_bottles);
    }

    return 0;
}
