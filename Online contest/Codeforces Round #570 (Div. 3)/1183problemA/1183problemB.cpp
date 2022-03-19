#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q, A[110], k, mx, mn, i, j, n, ans;

    scanf("%d", &q);

    for(j = 1; j <= q; j++) {
        scanf("%d%d", &n, &k);
        for(i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }
        sort(A, A+n);

        mn = A[0];
        mx = A[n-1];

        if((mx -(mn+k)) <= k) {
            ans = mn + k;
        }
        else {
            ans = -1;
        }

        printf("%d\n", ans);
    }

    return 0;
}
