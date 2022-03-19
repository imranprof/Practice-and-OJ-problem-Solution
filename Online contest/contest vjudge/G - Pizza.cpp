#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, ans, m, n, mul;

    while(scanf("%d%d", &m, &n) == 2)
    {
        mul = m * n;


        ans = mul / 2;

        printf("%d\n", ans);
    }

    return 0;
}
