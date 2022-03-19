#include<stdio.h>
#include<ctype.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, k, len;

    char str[400], str2[400], str3[400];

    scanf(" %[^\n]", str);

    for(i = 0, j = 0; str[i] != '\0'; i++) {

        if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'
            && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'Y' && str[i] != 'y') {
                str2[j] = tolower(str[i]);
                j++;
            }
    }
    str2[j] = '\0';

    len = strlen(str2);

    for(i = 0, j = 0, k = 0; i < len * 2; i++) {
        if(i % 2 == 0) {
            str3[j] = '.';
            j++;
        }
        else {
            str3[j] = str2[k];
            j++;
            k++;
        }
    }
    str3[j] = '\0';

    printf("%s\n", str3);

    return 0;
}
