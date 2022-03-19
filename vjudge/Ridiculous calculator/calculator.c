#include<stdio.h>
#include<math.h>

//#define MOD 1000000007

int main()
{
    int test, i, mod = 1000000007;

    unsigned long long mul, N, M;

    scanf("%d", &test);

        while(test--)
            {

                scanf("%llu%llu", &N, &M);

                mul = (unsigned long long)pow(N, M)%mod;

                printf("%llu\n", mul%mod );
            }

    return 0;
}
