#include<stdio.h>
#define MOD 10000000000000007

long long bigmod(long long a, long long p, long long m)
{
    long long x;
    if (p == 0) return 1 % m;
    x = bigmod(a, p / 2, m);
    x = (x * x) % m;
    if (p % 2 == 1) x = (x * a) % m;
    return x;

}

int main()
{
    int i, t_case;
    long long R, C, sum;

    scanf("%d", &t_case);

    for (i = 1; i <= t_case; i++) {
        scanf("%lld %lld", &R, &C);


        printf("%lld\n", bigmod(R, C, MOD) % MOD);
    }

    return 0;
}
