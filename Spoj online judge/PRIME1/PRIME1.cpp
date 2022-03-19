#include<bits/stdc++.h>

using namespace std;

long long int isPrime(long long int n)
{
    if(n <= 1) return 0;
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    long long int i, j, t, m, n;

    cin >>t ;

    for(i = 1; i <= t; i++){
        cin >> m >> n;

        for(j = m; j <= n; j++){
            if(isPrime(j) == 1){
                printf("%lld\n", j);
            }
        }
        if(i != t) {
            cout << endl;
        }
    }

    return 0;
}
