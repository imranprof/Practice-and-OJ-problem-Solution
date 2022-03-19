#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, arr[101], cnt, i;

    cin >> N;

    for(i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for(i = 0, cnt = 0; i < N; i++) {
        if(arr[i] == arr[i+1]) {
            cnt++;
            i++;
        }
    }
    cout << cnt << endl;

    return 0;
}
