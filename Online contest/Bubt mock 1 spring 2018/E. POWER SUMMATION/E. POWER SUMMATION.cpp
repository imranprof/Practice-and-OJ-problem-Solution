#include<bits/stdc++.h>

const int M = 1000000007;

using namespace std;

long long int bigmod(long long, int, int);

int main()
{
    long long int i, sum, N;
    int K, j, t_case;
    cin >> t_case;

    for(j = 1; j <= t_case; j++) {

        cin >> N >> K;

        for(i = 1, sum = 0; i*i <= N; i++) {
            if(N % i == 0) {
                sum = (sum % M) + bigmod(i, K, M);
            }
        }
        sum = sum % M + (bigmod(N/2, K, M)) %M;
        sum = sum%M + (bigmod(N, K, M)) % M;

        cout << "Case " << j<< ": "<<sum % M << "\n";
    }

    return 0;
}

long long  bigmod(long long a, int p, int M)
{
    long long x;
    if (p == 0) return 1 % M;
    x = bigmod(a, p / 2, M);
    x = (x * x) % M;
    if (p % 2 == 1) x = (x * a) % M;
    return x;

}
