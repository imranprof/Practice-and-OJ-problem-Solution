#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int i, cnt1, cnt2, ans, n, j, N;

    vector <int> A;

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> N;
        A.push_back(N);
    }

    for(i = 1, ans = 0; i < n; i++) {
        for(j = i, cnt1 = 0, cnt2 = 0; j >= 0; j--) {
            if(A[i] < A[j]){
                cnt1++;
            }
            if(A[i] > A[j]) cnt2++;
        }

        if(cnt1 == i || cnt2 == i) {
            ans++;
        }
//        cout << cnt1 << ' ' << cnt2 << endl;
        cnt1 = cnt2 = 0;
    }
    cout << ans << endl;

    return 0;
}
