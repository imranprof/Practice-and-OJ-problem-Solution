#include<bits/stdc++.h>

using namespace std;

int A[200];

int main()
{
    int n, cnt, i;
    char S[110];

    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> S[i];
        S[i] = toupper(S[i]);
    }

    for(i = 0; i < n; i++) {
        A[S[i]]++;
    }

    for(i = 65, cnt = 0; i <= 90; i++) {
        if(A[i] != 0) cnt++;
    }
    if(cnt == 26) cout << "YES" <<endl;
    else cout << "NO" << endl;

    return 0;
}
