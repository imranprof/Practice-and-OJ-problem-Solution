#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, flag = 0, i, j;
    long long A[110];

    cin >> T;

    for(i = 1; i <= T; i++) {

        cin >> N;

        for(j = 0; j < N; j++) {
            cin >> A[j];
        }

        for(j = 0, flag = 0; j < N; j++) {
            if(A[j+1] -  A[j] == 1) {
                flag = 1;
                break;
            }
        }

        if(flag == 1) {
            printf("Case %d: Yes\n", i);
        }
        else {
            printf("Case %d: No\n", i);
        }
    }

    return 0;
}
