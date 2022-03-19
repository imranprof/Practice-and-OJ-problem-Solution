#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int i, t, ans, n, j;
    long long tot;

    cin >> t;

    for(i = 1; i <= t; i++){
        cin >> n;

        tot = n * 567;
        tot = tot / 9;
        tot = tot + 7492;
        tot = tot * 235;
        tot = tot / 47;
        tot = tot - 498;

        for(j = 1; j <= 2; j++){
            ans = tot % 10;
            tot = tot / 10;
        }
        cout << abs(ans) << endl;
    }

    return 0;
}
