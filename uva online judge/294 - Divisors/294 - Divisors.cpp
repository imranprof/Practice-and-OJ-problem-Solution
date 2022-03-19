#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int mark[100010];
vector<int>prime;
ll mx=0, num;

void sieve()
{
    int n = 100000;
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

    ll i,j,k,y,ans=1,cnt;
    ll temp = n;
    for(i=1;prime[i]<=n/prime[i];i++)
    {
        cnt=0;
        while(n%prime[i]==0)
        {
            n=n/prime[i];
            cnt++;
        }
        ans*=(cnt+1);
    }
        if(n!=1)
            ans*=2;

        if(ans > mx){
            mx = ans;
            num = temp;
        }

}

int main()
{
    ll i, j, L, U, t;
    sieve();
    cin >> t;

    for(j = 1; j <= t; j++){
        cin >> L >> U;
        for(i = L; i <= U; i++){
            divisor(i);
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n", L, U, num, mx);
        mx = 0;
    }

    return 0;
}
