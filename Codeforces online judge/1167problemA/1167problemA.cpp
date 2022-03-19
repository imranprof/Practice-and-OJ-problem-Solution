#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

int main()
{
    int i, t, n, in, j, len;
    string s;

    scanf("%d", &t);

    for(i = 1; i <= t; i++) {
        scanf("%d", &n);
        cin >> s;
        in = -1;
        for(j = 0; s[j]; j++) {
            if(s[j] == '8'){
                in = j;
                break;
            }
        }

        len = n - in;

        if(in == -1) {
            printf("No\n");
        }
        else {
            if(len >= 11){
                printf("Yes\n");
            }
            else {
                printf("No\n");
            }
        }
    }

    return 0;
}
