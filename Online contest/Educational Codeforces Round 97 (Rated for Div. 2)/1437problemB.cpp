#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<stdlib.h>

using namespace std;

#define pocount     __builtin_popcountll
#define PB          push_back
#define MP          make_pair
#define MOD         1000000007
#define si(a)       scanf("%d",&a)
#define sii(a,b)    scanf("%d%d",&a,&b)
#define siii(a,b,c) scanf("%d%d%d", &a, &b, &c)
#define sl(a)       scanf("%lld",&a)
#define sll(a,b)    scanf("%lld%lld", &a,&b)
#define slll(a,b,c) scanf("%lld%lld%lld", &a, &b, &c)

#define all(v)      v.begin(),v.end()
#define rall(v)     v.rbegin(),v.rend()


#define FasterIO    ios_base::sync_with_stdio(false); cin.tie(NULL);

const double pi = acos(-1.0);

typedef long long int ll;
typedef unsigned long long int ull;
typedef unsigned int ui;



int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i, t, n, ans, cnt1, cnt2;

    si(t);

    while(t--)
    {
        si(n);

        char S[n+10];

        scanf("%s", S);

        cnt1 = cnt2 = 0;

        if(n==2)
            ans=0;
        else
        {

              for(i = 0; i < n-1; i++){
                if(S[i]=='1' && S[i+1]=='1'){
                    cnt1++;
                }
              }

              for(i = 0; i < n-1; i++){
                if(S[i]=='0' && S[i+1]=='0'){
                    cnt2++;
                }
              }



        }
        ans = max(cnt1,cnt2);

        printf("%d\n", ans);
    }

    return 0;
}
