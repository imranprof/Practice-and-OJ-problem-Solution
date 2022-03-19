#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    long long i, j, m, n, a, b, ans1, ans2, ans, q;

    scanf("%I64d", &q);

    for(i = 1; i <= q; i++) {
        scanf("%I64d%I64d%I64d", &n, &a, &b);

        ans1 = n * a;

        if(n % 2 == 0) {
            ans2 = (n / 2) * b;
        }
        else{
            ans2 = ((n/2) * b) + a;
        }

        ans = min(ans1, ans2);

        cout << ans << endl;
    }


    return 0;
}
