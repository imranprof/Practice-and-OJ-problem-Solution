#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int i, j, red, blue, green, n, ans, k;

    while(scanf("%I64d %I64d",&n, &k) == 2)
    {
        red = (n * 2)/ k;
        if((n*2)%k != 0) red = red + 1;

        green = (n * 5) / k;
        if((n*5)%k != 0) green += 1;

        blue = (n * 8) / k;
        if((n * 8) % k != 0) blue += 1;

        ans = red + green + blue;

        printf("%I64d\n", ans);
    }

    return 0;
}
