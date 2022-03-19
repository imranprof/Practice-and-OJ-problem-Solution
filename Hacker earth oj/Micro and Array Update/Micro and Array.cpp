#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, cnt, N, T, K;
    int num[100005];
    cin >> T;
    for(i = 1; i <= T; i++) {
        cin >> N >> K;
        for(j = 0; j < N; j++) {
            cin >> num[j];
        }

        sort(num, num + N);
        cnt = 0;
        while(1) {
            if(num[0] >= K) break;
            num[0]++;
            cnt++;
        }
        cout << cnt << endl;
    }


    return 0;
}
