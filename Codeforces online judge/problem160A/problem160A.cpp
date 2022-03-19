#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, valu[120], i, cnt, sum, sum2;

    cin >> n;

    for(i = 0, sum = 0; i < n; i++) {
        cin >> valu[i];
        sum = sum + valu[i];
    }

    sort(valu, valu+n, greater<int>());

    for(i = 0, sum2 = 0, cnt = 0; i < n; i++) {
        if(sum2 <= (sum / 2)) {
            cnt++;
            sum2 = sum2 + valu[i];
        }
    }

    cout << cnt << endl;

    return 0;
}
