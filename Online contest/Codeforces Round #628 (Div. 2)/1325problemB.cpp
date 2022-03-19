#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t, n, A[100005],cnt, ans, i;

    scanf("%lld", &t);
    while(t--){
        map<long long,int>mp;

        scanf("%lld", &n);
        for(i = 0; i < n; i++){
            scanf("%lld", &A[i]);

        }
        cnt = 0;
        for(i = 0; i < n; i++){
            if(mp[A[i]]!=1){
                cnt++;
                mp[A[i]]=1;
            }
        }

        ans = min(n,cnt);
        printf("%lld\n", ans);
    }

    return 0;
}
