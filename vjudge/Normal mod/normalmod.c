#include<stdio.h>

//#define MOD 1000000007

int main()
{
    int test, N, i, mod = 1000000007;

    unsigned long long sum, num;


    scanf("%d", &test);

    while(test--)
    {
        scanf("%d", &N);

        for(i = 1, sum = 0; i <= N; i++){
            scanf("%llu", &num);
            sum += num%mod;
            sum = sum %mod;
        }

        printf("%llu\n", sum%mod);

    }

    return 0;
}
