#include<bits/stdc++.h>

using namespace std;

int main()
{

    int i, n, t, j, ans, A[100005];

    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf("%d", &n);

        for(j = 0; j < n; j++){
            scanf("%d", &A[j]);
        }
        sort(A,A+n);

        ans = min(n-2,(A[n-2]-1));

        printf("%d\n", ans);
    }

    return 0;
}
