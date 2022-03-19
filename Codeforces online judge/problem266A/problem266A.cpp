#include<iostream>
using namespace std;

int main()
{
    int cnt, n, i;
    char S[120];

    cin >> n;
    cin >> S;

    for(i = 0, cnt = 0; i < n-1; i++) {
        if(S[i] == S[i+1]) cnt++;
    }
    cout << cnt << endl;

    return 0;
}
