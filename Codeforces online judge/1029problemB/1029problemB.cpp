#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int i, j, cnt, N, n, ans;

    vector<int>A;

    cin >> N;

    for(i = 0; i < N; i++) {
        cin >>n;
        A.push_back(n);
    }
    ans = 1;
    for(i = 0, cnt = 1; i < N-1; i++) {
        if(A[i+1] <= A[i]*2) {
            cnt++;
            ans = max(ans,cnt);
        }
        if(A[i+1] > A[i]*2){
            cnt = 1;

        }
    }

    cout << ans << endl;

    return 0;
}
