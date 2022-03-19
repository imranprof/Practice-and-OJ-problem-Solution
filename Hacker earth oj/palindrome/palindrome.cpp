#include<iostream>
#include<string>

using namespace std;

int main()
{

    int i, len, j, flag, T, k;

    string st, st1;

    cin >> T;

    for(k = 1; k <= T; k++) {

        cin >> st;

        len = st.size();

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
    }

    return 0;
}
