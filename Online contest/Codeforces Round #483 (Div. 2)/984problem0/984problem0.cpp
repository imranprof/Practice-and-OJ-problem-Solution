#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[1010], left, i;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> a[i];

    }

    sort(a, a+n);

    if(n == 1) {
        left = 0;
    }

    else if(n % 2 != 0) {
        left = n / 2;
    }

    else {
        left = (n / 2) - 1;
    }

    cout << a[left] << endl;

    return 0;
}
