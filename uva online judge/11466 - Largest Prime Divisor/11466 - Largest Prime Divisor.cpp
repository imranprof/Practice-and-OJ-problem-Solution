#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>

using namespace std;
#define ll long long

vector<ll>prime;
int cnt, flag=0;
ll ans;
int mark[100000010];

void sieve()
{
    int n = 100000005;
    int i, j, limit = sqrt(n*1.)+2;
    prime.push_back(1);
    prime.push_back(2);
    mark[0] = mark[1] = 1;

    for(i = 4; i <= n; i+=2) mark[i] = 1;

    for(i = 3; i <= n; i++){

        if(!mark[i]){
            prime.push_back(i);

            if(i <= limit){
                for(j = i * i; j <= n; j += i * 2){
                    mark[j] = 1;
                }
            }
        }
    }
}

void divisor(ll n)
{

    ll i,j,k, flg;
    ll temp = n;
    for(i=1, cnt = 0;prime[i]<=n/prime[i];i++)
    {
        flg = 0;
        while(n % prime[i] == 0){
            n = n / prime[i];
            if(flg == 0){
                flg = 1;
                cnt++;
            }
            ans = prime[i];
        }

    }
    if(n != 1 && n != temp){
        cnt++;
        ans = n;
    }
    if(cnt == 0 || cnt == 1) flag = 1;

}


int main()
{
    ll n;
    sieve();

    while(1)
    {
        scanf("%lld", &n);
        if(n == 0) break;

        if(n < 0) n = -n;

        divisor(n);

        if(cnt > 1) {
            cnt = 0;
            printf("%lld\n", ans);
        }
        else if(flag == 1) {
                flag = 0;
                printf("-1\n");
        }
    }

    return 0;
}
