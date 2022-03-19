#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int m, n,x, i, cnt, cnt1;

    cin >> n >> m;

    x = m + n;

    for(i = 1, cnt = 0, cnt1 = 0; i <= x; i++) {
        if(m == n) {
            if(i % 2 == 0) cout << 'B';
            else cout << 'G';
        }
        else if(m > n ) {
            if(i % 2 == 0 && cnt != n){
                cout << 'B';
                cnt++;
            }
            else cout << 'G';
        }

        else if(m < n) {
            if(i % 2 == 0 && cnt1 != m) {
                cout << 'G';
                cnt1++;
            }
            else cout << 'B';
        }
    }

    return 0;
}
