#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

#define PB push_back

int prime[10100];
vector<int>P;

void sieve(int n){
    int i, j, limit = sqrt(n * 1.) + 2;

    prime[0] = prime[1] = 1;

    for(i = 2; i <= n; i++) {
        if(!prime[i]) {
            P.PB(i);

            for(j = i * i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }
}

int main()
{
    int i, N, M, n = 10010, j, x, s;

    sieve(n);

    cin >> M;

    for(i = 1; i <= M; i++) {

        cin >> N;

        s = N / 2;

        for(j = 0; j < P.size(); j++) {

            if((P[j] >= s) && (P[j] * 2) > N) {
                x = P[j];
                break;
            }
        }
        cout << x << endl;
    }

    return 0;
}
