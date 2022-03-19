#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int i, j, cnt, ans, n, N;
    vector<int>A;

    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> n;
        A.push_back(n);
    }

    for(i = 0, ans = 0, cnt = 0; i < N-1; i++) {
        if(A[i] <= A[i+1]){
//            cout << A[i] << ' ';
            cnt++;
            ans = max(ans,cnt);
        }
        else{
            cnt = 0;
        }
    }

    cout << ans+1 << endl;

    return 0;
}
