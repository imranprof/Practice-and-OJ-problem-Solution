#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define PB push_back

int main()
{
    int i, one, two, three, ans, n, num;

    vector<int>on,tw,th;

    cin >> n;
    one = two = three = 0;
    for(i = 1; i <= n; i++) {
        cin >>num;

        if(num == 1) {
            one++;
            on.PB(i);

        }
        if(num == 2) {
            two++;
            tw.PB(i);
        }
        if(num == 3) {
            three++;
            th.PB(i);
        }
    }

    if(one == 0 || two == 0 || three == 0) {
        cout << 0 << endl;
    }
    else {
        ans = min(one, two);
        ans = min(ans, three);

        cout << ans << endl;
        for(i = 0; i < ans; i++){
            cout << on[i] << ' ' << tw[i] << ' ' << th[i] << endl;
        }

    }



    return 0;
}
