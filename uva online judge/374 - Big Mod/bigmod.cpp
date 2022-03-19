#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

long long int bigmod(long long a, int p, int m)
{
    if (p == 0) return 1 % m;

    if(p % 2)
    {
        return ((a % m) * (bigmod(a, p - 1, m))) % m;
    }

    else
    {
        long long c = bigmod(a, p / 2, m);
        return ((c % m) * (c % m)) % m;
    }
}


int main()
{

    int M;

    long long B, P, pow;

    while(scanf("%lld %lld %d", &B, &P, &M) != EOF)
    {
        pow = (bigmod(B, P, M)) % M;
        printf("%lld\n", pow % M);
    }

    return 0;
}
