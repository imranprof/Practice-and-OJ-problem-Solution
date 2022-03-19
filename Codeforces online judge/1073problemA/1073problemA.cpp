#include<bits/stdc++.h>

using namespace std;


int A[200];
int main()
{
    int i, n, len, cnt;

    char S[1010];

    cin >> n;

    cin >> S;

    if(n == 1) cout << "NO" << endl;

    else {

        for(i= 0, cnt = 0; i < n -1; i++){
            if(S[i] != S[i+1]){
                cout << "YES" << endl;
                cout << S[i] << S[i+1] <<endl;
            return 0;
            }
            else {
                cnt++;
            }
        }
        if(cnt == n - 1){
            cout << "NO" << endl;
        }
    }




    return 0;
}
