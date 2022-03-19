#include<stdio.h>

int main()
{
    int N, K, temp, num, t, n, butts, total_cig;

    while(scanf("%d %d", &N, &K) != EOF)
    {

        num = N;
        butts = 0;
        while(1)
        {
            if (N < K) {
                break;
            }

            temp = N / K;
            butts = butts + temp;

            N = temp + (N - (temp * K));
        }

        total_cig = butts + num;

        printf("%d\n", total_cig);
    }

    return 0;
}
