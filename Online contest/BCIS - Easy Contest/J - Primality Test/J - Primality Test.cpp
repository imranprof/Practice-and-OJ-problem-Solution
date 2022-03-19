#include<bits/stdc++.h>

using namespace std;

int prime[100010];

void sieve(int n){
    int i, j, limit = sqrt(n * 1.) + 2;

    prime[0] = prime[1] = 1;

    for(i = 2; i <= n; i++) {
        if(!prime[i]) {
            if(i <= limit){
                for(j = i * i; j <= n; j += i){
                    prime[j] = 1;
                }
            }
        }
    }
}


int main()
{
    int i, T, N, n = 100010;

    sieve(n);


    cin >> T;

    for(i = 1; i <= T; i++) {
        cin >> N;

        if(prime[N] == 0) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    return 0;
}
