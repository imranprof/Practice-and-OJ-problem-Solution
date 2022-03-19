#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t_case, i;
    long long int N;

    cin >> t_case;

    for(i = 1; i <= t_case; i++) {
        cin >> N;

        if(N % 2 == 0) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
