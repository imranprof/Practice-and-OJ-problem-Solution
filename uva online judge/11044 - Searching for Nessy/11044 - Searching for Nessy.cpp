#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T, i, n, m;
    long long ans;

    cin >> T;

    for(i = 1; i <= T; i++) {
        cin >> n >> m;
        ans = (n / 3) * (m / 3);
        cout << ans << endl;
    }

    return 0;
}
