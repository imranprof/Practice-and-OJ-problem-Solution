#include<bits/stdc++.h>

using namespace std;

int n1[300], n2[300];

int main()
{
    char S1[110], S2[110], str[110];
    int i, cnt, len1, len2, len3;

    cin >> S1 >> S2 >> str;

    len1 = strlen(S1);
    len2 = strlen(S2);
    len3 = strlen(str);

    for(i = 0; i < len1; i++){
        n1[S1[i]]++;
    }
    for(i = 0; i < len2; i++) {
        n1[S2[i]]++;
    }

    for(i = 0; i < len3; i++) {
        n2[str[i]]++;
    }


    for(i = 65, cnt = 0; i <= 90; i++) {
        if(n1[i] == n2[i]) cnt++;
    }
    if(cnt == 26){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
