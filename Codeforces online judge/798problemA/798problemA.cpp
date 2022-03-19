#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, len, cnt;

    char str[20], str2[20];

    cin >> str;

    len = strlen(str);

    if(len == 1) {
        cout << "YES" <<endl;
    }

    else {
        for(i = 0, j = len - 1; i < len; i++, j--) {
            str2[i] = str[j];
        }
        str2[i] = '\0';

        for(j = 0, cnt = 0; j < len; j++) {
            if(str2[j] != str[j]) {
                cnt++;
            }
        }


        if(cnt == 2) {
            cout << "YES"<<endl;
        }
        else if(cnt == 0 && (len % 2) == 1) {
            cout << "YES" <<endl;
        }
        else {
            cout << "NO"<<endl;
        }

    }



    return 0;
}
