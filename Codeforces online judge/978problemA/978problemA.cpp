#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, ar[100], arr[1001], x;

    cin >> n;

    for(i = 0; i < 1000; i++) {
        arr[i] = 0;
    }

    for(i = 0; i < n; i++) {
        cin >> ar[i];
        x = ar[i];
        arr[x] = x;
    }


    for(i = 0; i < 1000; i++) {
        if(arr[i] != 0) {
            cout << arr[i] << endl;

        }
    }


    return 0;
}
