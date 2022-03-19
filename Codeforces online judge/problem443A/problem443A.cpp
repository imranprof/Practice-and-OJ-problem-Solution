#include<bits/stdc++.h>

using namespace std;



int main()
{
    char str[1001];
    int i, j, dis = 0, len;
    int cnt[256];

    scanf(" %[^\n]", str);

    len = strlen(str);

    for(i = 0; i < 256; i++) {
        cnt[i] = 0;
    }

    for(i = 0; i < len - 1; i++) {
        if(str[i] >= 'a' && str[i] <=  'z'){
            cnt[str[i]]++;
        }
    }


    for(i = 0, dis = 0; i < 256; i++) {
        if(cnt[i] != 0) {
            dis++;
        }
    }

    cout << dis << endl;

    return 0;
}
