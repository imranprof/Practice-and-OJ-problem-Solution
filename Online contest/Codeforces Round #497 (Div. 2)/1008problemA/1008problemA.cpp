#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[110];
    int i, cnt, len, ct;

    cin >> str;

    len = strlen(str);

    for(i = 0, cnt = 0, ct = 0; i < len - 1; i++) {


            if((str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') &&
            (str[i+1] == 'a' || str[i+1] == 'e' || str[i+1] == 'i' || str[i+1] == 'o' || str[i+1] == 'u')) {
                cnt++;

        }
    }

    cout << len << endl << cnt << endl;

    if(cnt == len/2) printf("yes\n");

    else if(str[0] == 'n') printf("yes\n");


    else printf("no\n");

    return 0;
}
