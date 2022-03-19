#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, A[20], lcm, i;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> A[i];
    }
    lcm = 1;

    for(i = 0; i < n; i++) {
        lcm = (lcm * A[i]) / __gcd(lcm, A[i]);
    }
    cout << lcm << endl;

    return 0;
}
