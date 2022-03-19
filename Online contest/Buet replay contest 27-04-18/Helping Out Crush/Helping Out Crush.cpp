#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i, t_case, n, sum, j, k;

    cin >> t_case;

    for(i = 1; i <= t_case; i++) {
        cin >> n;

        for(sum = 0, j = 1; j <= n; j++) {
            for(k = 1; k <= n; k++) {
                if(k * j <= n) {
                    sum = sum + (k ^ (k*j));
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}
