#include<iostream>
#include<algorithm>
#include<stdlib.h>

using namespace std;

int main()
{
    int i, j, t, n, A[30], dis1, dis2, optperk,  ans;

    cin >> t;

    for(i = 1; i <= t; i++){
        cin >> n;

        for(j = 0; j < n; j++){
            cin >> A[j];
        }

        sort(A, A+n);

        optperk = (A[0]+A[n-1])/2;

        dis1 = abs(optperk - A[0]);
        dis2 = abs(optperk - A[n-1]);

        ans = (dis1 + dis2) * 2;

        cout << ans << endl;
    }

    return 0;
}
