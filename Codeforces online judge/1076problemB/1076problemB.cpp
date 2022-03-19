#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int mark[100010], D;
vector<int>prime;

void sieve()
{
    int n = 100002;
    int i, j, limit = sqrt(n*1.)+2;

    prime.push_back(2);
    mark[1] = 1;

    for(i = 4; i <= n; i+=2) mark[i] = 1;

    for(i = 3; i <= n; i+=2){

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

int divs(ll n){
    int flg = 0, i, j;

    for(i = 0, j = 0; i < prime.size(); i++){

        if(n % prime[i] == 0){
            flg++;
            if(j == 0){
                D = prime[i];
                j = 1;
            }
        }

    }
    return flg;
}


int main()
{
    ll i, j, flag, N, ans;
    sieve();

    cin >> N;
    flag = divs(N);

    if(N == 2){
        ans = 1;
        cout <<ans << endl;
    }
    else if(N % 2 == 0){
        ans  = N / 2;
        cout << ans << endl;
    }
    else if(N % 2 != 0 && ((flag == 1 && N <= 100002) || flag == 0) ){
        ans = 1;
        cout << ans << endl;
    }
    else if(N % 2 != 0 && flag != 0){
        N = N - D;
        ans = (N / 2) + 1;
        cout << ans << endl;
    }


}
