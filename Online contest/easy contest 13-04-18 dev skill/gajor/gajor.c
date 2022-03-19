#include<stdio.h>

#define M 5

long long bigmod(int a, long long p, int m)
{
    long long c;

    if (p == 0) return 1;

    if (p % 2) {
        return ((a % m) * (bigmod(a, p-1, m))) % m;
    }

    else {
        c = bigmod(a, p / 2, m);
        return ((c % m) * (c%m)) % m;
    }
}

int main()
{

	long long  sum, p;
	int N, t_case, i, j;

	scanf("%d", &t_case);

	for (i = 1; i <= t_case; i++) {
        scanf("%d %lld", &N, &p);

        for (j = 1, sum = 0; j <= N; j++) {
            sum = (sum % M  + bigmod(j, p, M) % M)% M;
        }

        printf("%lld\n", sum % M);
	}

	return 0;
}



