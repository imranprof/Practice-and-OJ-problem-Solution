#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, A[200010], k, ans;

    while(scanf("%d%d", &n, &k)==2)
    {
        for(i = 0; i < n; i++){
            scanf("%d", &A[i]);
        }
        sort(A,A+n);

        if(k==0){
            if(A[k]>1){
                ans = 1;
            }
            else{
                ans = -1;
            }
        }
        else{
            if(A[k-1] == A[k]){
                ans = -1;
            }
            else {
                ans = A[k-1];
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}
