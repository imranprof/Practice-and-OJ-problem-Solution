#include<bits/stdc++.h>

using namespace std;



long long bigmod(long long a, long long p, long long m)
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
    long long m = 998244353;

    long long w, h,  t;
    long long ans;

    while(scanf("%lld%lld", &w, &h) == 2)
    {

        t = w + h;

        ans = (bigmod(2,t,m)%m);

        printf("%lld\n", ans);

    }

    return 0;
}
