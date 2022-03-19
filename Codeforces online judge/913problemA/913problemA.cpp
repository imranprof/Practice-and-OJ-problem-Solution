#include<iostream>
#include<cstdio>

using namespace std;

long long pwr(long long a, long long n);

long long pwr(long long a, long long n)
{
    long long x = 1;

    if(n == 0) return x;

    for(long long  i = 1; i <= n; i++) {
        x = x * a;
    }
    return x;
}

int main()
{
    long long n, m, ans;


    scanf("%I64d%I64d", &n, &m);

    if(n >= 31){
        ans = m;
    }
    else {
        ans = m % pwr(2, n);
    }

    printf("%I64d\n", ans);

    return 0;
}
