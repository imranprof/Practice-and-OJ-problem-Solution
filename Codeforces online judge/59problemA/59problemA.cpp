#include<stdio.h>
#include<ctype.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, Count_lo, Count_up;

    char str[105];

    cin >>str;

    for(i = 0, Count_lo = 0, Count_up = 0; str[i] != '\0'; i++) {
        if(islower(str[i]) != 0) {
            Count_lo++;
        }
        if(isupper(str[i]) != 0) {
            Count_up++;
        }
    }

    if(Count_lo >= Count_up) {
        for(i = 0; str[i] != '\0'; i++) {
            str[i] = tolower(str[i]);
        }
        str[i] = '\0';

        cout << str <<endl;
    }

    else {
        for(i = 0; str[i] != '\0'; i++) {
            str[i] = toupper(str[i]);
        }
        str[i] = '\0';
        cout << str <<endl;
    }

    return 0;
}
