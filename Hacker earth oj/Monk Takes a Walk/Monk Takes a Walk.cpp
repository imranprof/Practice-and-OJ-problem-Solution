#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i, n, len, j, cnt;

    string str;

    cin >> n;

    for(j = 1; j <= n; j++) {

        cin >> str;

        len = str.length();

        for(i = 0, cnt = 0; i < len; i++) {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
               str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                cnt++;
               }
        }
        cout << cnt << endl;
    }
    return 0;
}
