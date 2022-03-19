#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, cnt, len, T;

    char str[281];

    cin >> T;
    for(j = 1; j <= T; j++) {

        cin >> str;
        len = strlen(str);
        for(i = 0, cnt = 0; i < len - 1; i++) {
            if((abs(str[i]-str[i+1]) == 1) || (str[i]== 'a' && str[i+1] == 'z') ||(str[i]=='z' && str[i+1]=='a')) {
                cnt++;
            }
        }
        if(cnt == len-1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
