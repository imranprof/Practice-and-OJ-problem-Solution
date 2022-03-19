#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, *high, cnt, tall;

    cin >> n;

    high = (int *) malloc(n * sizeof(int));

    for(i = 0; i < n; i++) {
        cin >> high[i];
    }

    sort(high, high+n, greater<int>());

    tall = high[0];

    for(i = 0, cnt = 0; i < n; i++) {
        if(high[i] == tall) {
            cnt++;
        }
    }

    cout << cnt <<"\n";

    return 0;
}
