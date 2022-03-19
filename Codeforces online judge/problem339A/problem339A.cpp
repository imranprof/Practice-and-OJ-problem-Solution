#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[120], str_p[70], str_n[70];

    int i, j, k, n;

    cin >> str;

    n = strlen(str);
    sort(str, str+n);

    for(i = 0, j = 0, k = 0; str[i] != '\0'; i++) {
        if(str[i] == '+') {
            str_p[j] = str[i];
            j++;
        }
        else{
            str_n[k] = str[i];
            k++;
        }
    }
    str_p[j] = '\0';
    str_n[k] = '\0';


    for(i = 1, j = 0, k = 0; i <= n; i++) {
        if(i % 2 == 0) {
            cout <<str_p[j];
            j++;
        }
        else {
            cout << str_n[k];
            k++;
        }
    }
    cout <<endl;


    return 0;
}
