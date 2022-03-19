#include<bits/stdc++.h>

using namespace std;


//bigpower by bigmod

long long bigmod( long long int a, long long p, int m)
{
    long long int c;

    if (p == 0) return 1%m;

    if (p % 2) {
        return ((a % m) * (bigmod(a, p-1, m)%m)) % m;
    }

    else {
        c = bigmod(a, p / 2, m)%m;
        return ((c % m) * (c%m)) % m;
    }
}

//this is for string mod and convert it into integer range



int main()
{
    long long int a, r = 0;

    char b[100010];
    const int m = 1000000007;
    scanf("%lld", &a);
    getchar();
    scanf("%s", b);
    int len = strlen(b);
    for(int i = 0; i < len; i++)
    {
        r = (r*10 + (b[i] - '0')) % (m-1); //10LL is 10 base
    }
    cout << r << endl;

    cout << bigmod(a, r, m)<< endl;

    return 0;
}
