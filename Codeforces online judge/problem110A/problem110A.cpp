#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, cnt;

    char str[30];

    cin >> str;

    for(i = 0, cnt = 0; str[i] != '\0'; i++) {
        if(str[i] == '4' || str[i] == '7') {
            cnt++;
        }
    }

    if(cnt == 4 || cnt == 7) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" <<endl;
    }

    return 0;
}
