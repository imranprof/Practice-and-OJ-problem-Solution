#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int i, cnt, cnt1, len;
    char S[110];

    cin >> S;
    len = strlen(S);

    for(i = 0, cnt = 0; i < len - 1; i++) {
        if((S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u' && S[i] != 'n') &&
           (S[i+1] == 'a' || S[i+1] == 'e' || S[i+1] == 'i' || S[i+1] == 'o' || S[i+1] == 'u') ) {
                cnt++;
           }
    }

    for(i = 0, cnt1 = 0; i < len; i++) {
        if(S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u' && S[i] != 'n') cnt1++;
    }

    if(cnt == cnt1) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
