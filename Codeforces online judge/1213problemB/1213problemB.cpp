#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, t, n, A[150005], bp, mn, j;

    scanf("%d", &t);

    for(j = 1; j <= t; j++) {
        scanf("%d", &n);

        for(i = 0; i < n; i++){
            scanf("%d", &A[i]);
        }
        bp = 0;
        mn = A[n-1];
        for(i = n-2; i >= 0; i--){
            if(A[i]>mn){
                bp +=1;

            }
            mn = min(mn,A[i]);
        }

        printf("%d\n", bp);
    }

    return 0;
}
