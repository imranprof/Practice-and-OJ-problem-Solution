#include<bits/stdc++.h>

using namespace std;

//can be use __builtin_popcount(n)

int main()
{
    int i, t, n, ans;

    cin >> t;

    for(i = 1; i <= t; i++) {
        cin >> n;

        ans = 1;

        while(n)
        {
            if(n&1 == 1) {
                ans = ans << 1;  // bitwise 1 bit left shift
            }
            n = n >> 1;  // bitwise 1 bit right shift
        }
        cout << ans << endl;

        //cout << (1LL(__builtin_popcount(n)) << endl;  // this can be a answer..
    }

    return 0;
}
