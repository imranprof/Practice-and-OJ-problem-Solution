#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t_case, n, candy, total,i,j;

    cin >> t_case;

    for(i = 1; i <= t_case; i++) {
        cin >> n;
        for(j = 1, total = 0; j <= n; j++) {
            cin >> candy;
            total = total + candy;
        }
        cout << total << endl;
    }

    return 0;
}
