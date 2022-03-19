#include<bits/stdc++.h>

using namespace std;
long long A[300005], B[300005];
int main()
{
    long long i, j,  n, m, ans, sum, mn;

    scanf("%I64d", &n);

    for(i = 0, sum = 0; i < n; i++) {
        scanf("%I64d", &A[i]);
        sum = sum + A[i];
    }

    sort(A, A+n);

    scanf("%I64d", &m);
    mn = 300005;
    for(i = 0; i < m; i++) {
        scanf("%I64d", &B[i]);

    }

    for(i = 0; i < m; i++) {
        ans = sum - A[n - B[i]];
        printf("%I64d\n", ans);
    }

    return 0;
}
