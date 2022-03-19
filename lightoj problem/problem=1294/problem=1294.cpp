#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long i, j, n, m, ans, d, sum, t;

    scanf("%lld", &t);

    for(i = 1; i <= t; i++) {
        scanf("%lld%lld", &n, &m);

        sum = (n * (n+1))/2;

        d = sum / n;

        ans = d * m;

        printf("Case %lld: %lld\n", i, ans);
    }

    return 0;
}
