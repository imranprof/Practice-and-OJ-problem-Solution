#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int i, t, n, m, cnt;
    string s;

    vector<int> A, B;

    cin >> t;

    for(i = 0; i < t; i++) {

        cin >> s >> n >> m;
        A.push_back(n);
        B.push_back(m);
    }

    for(i = 0, cnt = 0; i < t; i++) {
        if(A[i] >= 2400 && (B[i] > A[i])){
            cnt++;
        }
    }

    if(cnt != 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }


    return 0;
}
