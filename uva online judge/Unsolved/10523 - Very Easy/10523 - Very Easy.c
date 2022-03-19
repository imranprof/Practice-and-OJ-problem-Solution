#include<stdio.h>
#include<math.h>

long long pwr(int n, int p)
{
    int i;
    long long pow;

    for(i = 1, pow = 1; i <= p; i++) {
        pow = pow * n;
    }
    return pow;
}


int main()
{
    int j, N, A;

    long long sum;

    while(scanf("%d %d", &N, &A) != EOF)
    {

        for(j = 1, sum = 0; j <= N; j++) {
            sum = sum + (j * pwr(A, j));
        }

        printf("%lld\n", sum);
    }
    return 0;
}
