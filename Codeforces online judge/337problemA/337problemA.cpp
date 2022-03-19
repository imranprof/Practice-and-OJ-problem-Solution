#include<bits/stdc++.h>
using namespace std;


int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int n, m, i, j, x, a[60];

    //for(i = 0; i < 60; i++) a[i] = 0;

    while(scanf("%d%d", &n, &m) == 2) {

    for(i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(a,a+m);


    int ans = 1e9+7;

    for(i = 0; i < m; i++) {

        x = i+n-1;

        if(x > m-1) break;

        ans = min (ans, a[x]-a[i]);

    }
    cout << ans << endl;

    }
    return 0;
}
