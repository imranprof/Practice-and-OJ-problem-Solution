#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

int main()
{
    string s;
    int i, n, m, k, ans, len, cnta;

    cin >> s;

    len = s.size();
    m = 0;
    k = 0;
    if(len % 2 != 0) {
        m = (len / 2) + 1;
    }
    else {
        k = len / 2;
    }
    cnta = 0;
    for(i = 0; s[i]; i++) {
        if(s[i] == 'a'){
            cnta++;
        }
    }

    if(cnta == 1) {
        ans = 1;
    }
    else if((cnta >= m && m != 0) || (cnta > k && k != 0)){
        ans = len;
    }
    else {
        ans = cnta + (cnta -1);
    }


    printf("%d\n", ans);

    return 0;
}
