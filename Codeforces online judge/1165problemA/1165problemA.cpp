#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n, i, j, cnt, x, y;

    cin >> n >> x >> y;
    cin >> s;

    reverse(s.begin(), s.end());
    cnt = 0;
    for(i = 0; i <= x; i++) {
        if(i == y && s[i] != '1'){

            cnt++;
        }
        else if((i != x && i != y) && s[i] == '1'){
            cnt++;
        }
    }
    printf("%d\n", cnt);



    return 0;
}
