#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, j, arr[110], x, sum = 0, res;
    int cnt[110];

    cin >> n;
    cin >> m;

    for(i = 0; i <= 100; i++) {
        cnt[i] = 0;
    }

    for(i = 0; i < m; i++) {
        cin >> arr[i];
        x = arr[i];
        cnt[x]++;
    }

/*    for(j = 1; j <= m; j++) {
        cout << cnt[j] << endl;
    }
*/
//cout << cnt[41] << endl;

for(j = 0, sum = 0; j <= 100; j++) {
    sum = sum + cnt[j];
}


cout << sum << endl;

res = sum / n;

if(n > m) {
    cout << 0 << endl;
}
else if (sum == n) {
    cout << 1 << endl;
}
else {
    cout << res << endl;
}

    return 0;
}
