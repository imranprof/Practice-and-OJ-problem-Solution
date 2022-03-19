#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int i, j, k, n, t_case, len, len2, count_ch;

    char str[120], str2[20], str3[20];

    scanf("%d", &t_case);

    for(n = 1; n <= t_case; n++) {
        scanf(" %[^\n]", str);

        len = strlen(str);

        if(len <= 10) {
            printf("%s\n", str);
        }
        else {
            count_ch = len - 2;

            sprintf(str2,"%d",count_ch);       /*sprintf() function for convert integer to string */

            len2 = strlen(str2);

            for(j = 0, k = 1; str2[j] != '\0'; j++) {
                str3[k] = str2[j];
                k++;
            }
            str3[k] = str[len - 1];
            str3[k + 1] = '\0';
            str3[0] = str[0];

            printf("%s\n", str3);
        }
    }



    return 0;
}
