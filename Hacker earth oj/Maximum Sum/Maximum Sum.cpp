#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt, i;

    long long int A[100020], sum;

    cin >> n;
    for(i = 0, sum = 0, cnt = 0; i < n; i++) {
        cin >> A[i];
        if(A[i] >= 0) {
            sum += A[i];
            cnt++;
        }
    }
    if(cnt != 0){
        cout << sum  << ' ' << cnt << endl;
    }

    else {
        sum = A[0];
        for(i = 1; i < n; i++) {
            sum = max(sum, A[i]);
        }

        cout << sum << ' ' << '1' << endl;
    }

    return 0;
}
