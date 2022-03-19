#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main()
{
    int i, len;
    string str;

    cin >> str;
    len = str.length();

    for(i = 0; i < len; i++) {
        printf("%c", str[i]);
    }

    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
