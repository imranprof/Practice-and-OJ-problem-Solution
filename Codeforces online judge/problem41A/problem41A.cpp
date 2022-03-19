#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, len;
    char str1[105], str2[105], str3[105];

    scanf("%s", str1);
    scanf("%s", str2);
    len = strlen(str1);
    for(i = len-1, j = 0; i >= 0; i--, j++) {
        str3[j] = str1[i];
    }
    str3[j] = '\0';

    if(strcmp(str2, str3) == 0) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}
