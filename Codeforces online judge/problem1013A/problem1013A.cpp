#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n, x[60], y[60], i, cnt, sum1, sum2;

    cin >> n;

    for(i = 0, sum1 = 0; i < n; i++) {
        cin >> x[i];
        sum1 = sum1 + x[i];
    }
    for(i = 0,sum2 = 0; i < n; i++) {
        cin >> y[i];
        sum2  = sum2 + y[i];

    }


    if(sum2 <= sum1) {
        cout << "Yes" << endl;
    }

    else {
        cout << "No" << endl;
    }

    return 0;
}
