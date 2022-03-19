#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, a[100001], b[100001], sum[100001],  i;

    cin >> N;

    for(i = 0; i < N; i++) {
        cin >> a[i];

    }
    for(i = 0; i < N; i++) {
        cin >> b[i];
    }

    for(i = 0; i < N; i++) {
        sum[i] = a[i] + b[i];
    }

    for(i = 0; i < N; i++) {
        cout << sum[i];
        if(i != N -1) cout << ' ';
    }
    cout << endl;



    return 0;
}
