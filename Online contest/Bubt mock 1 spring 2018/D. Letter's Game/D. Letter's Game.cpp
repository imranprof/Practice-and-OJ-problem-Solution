#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, t_case, j, cnt;
    char str[102];

    cin >> t_case;

    for(i = 1; i <= t_case; i++) {
        cin >> str;

        for(j = 0, cnt = 0; str[j] != '\0'; j++) {
            if(str[j] >= 65 && str[j]  <= 90) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}
