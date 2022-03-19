#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, len, j, flag;

    char st[110], st1[110];

    cin >> st;

    len = strlen(st);

    for(i = len - 1, j = 0; st[i] != '\0'; i--, j++) {
        st1[j] = st[i];
    }
    st1[j] = '\0';

    for(i = 0, flag = 0; st[i] != '\0'; i++) {
        if(st[i] != st1[i]){
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
