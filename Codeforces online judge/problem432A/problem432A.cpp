#include<iostream>

using namespace std;

int main()
{
    int n, k, A[2010], ans, i, cnt;

    cin >> n >> k;

    for(i = 0, cnt = 0; i < n; i++) {
        cin >> A[i];
        if(A[i]+k <= 5){
            cnt++;
        }
    }
    ans = cnt / 3;
    cout << ans << endl;

    return 0;
}
