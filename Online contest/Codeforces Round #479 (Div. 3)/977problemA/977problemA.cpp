#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int N;
    int i, K;

    cin >> N >> K;

    for(i = 1; i <= K; i++) {
        if(N%10 == 0) {
            N = N / 10;
        }
        else {
            N = N - 1;
        }
    }

    cout << N << endl;

    return 0;
}
