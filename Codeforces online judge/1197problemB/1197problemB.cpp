#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, cnt, A[200010], mx, in;

    while(scanf("%d", &n)==1)
    {
        mx = 0;
        in = -1;
        for(i = 0; i < n; i++){
            scanf("%d", &A[i]);
            if(A[i]>=mx){
                mx = A[i];
                in = i;
            }
        }

        cnt = 0;
        for(i = in;i>0;i--){
            if(A[i]>=A[i-1]){
                cnt++;
            }
        }
        for(i = in; i < n-1; i++){
            if(A[i]>=A[i+1]){
                cnt++;
            }
        }

        if(cnt == n-1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }


    }

    return 0;
}
