#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, o,z;
    char S[105];

    while(scanf("%d", &n) == 1)
    {
        cin >> S;

        z = o = 0;

        for(i = 0; S[i]; i++) {
            if(S[i] == '1')o++;
            else z++;
        }

        if(o!=z) {
            cout << "1"<<'\n'<<S<<'\n';
        }

        else{
            cout << '2'<<'\n'<<S[0]<<' ';
            for(i = 1; S[i]; i++) {

                cout << S[i];
            }
            cout << '\n';
        }

    }

    return 0;
}
