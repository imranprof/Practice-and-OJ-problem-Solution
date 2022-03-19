#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    char str[120];


    int a[26], i, cnt;

    cin >> str;


    for(i=0;i<26;i++) {
            a[i]=0;
    }

    for(i = 0; str[i] != '\0';i++){
        a[str[i] - 97]++;

    }

    for(i = 0, cnt = 0; i < 26; i++) {
        if(a[i] != 0) {
            cnt++;
        }
    }

    if(cnt % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }

    else {
        cout << "IGNORE HIM!" << endl;
    }


}
