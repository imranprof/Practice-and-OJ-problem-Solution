#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int i, n;
    long long ans, a, b;

    while(scanf("%d", &n) == 1)
    {
        ans = 0;
        for(i = 1; i <= n; i++){
            scanf("%lld%lld", &a, &b);
            ans = max(ans,a+b);
        }
        printf("%lld\n", ans);
    }

    return 0;
}
