#include<stdio.h>
#include<ctype.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, count_1, sum1, sum2, result, len;

    char str1[105], str2[105];

    scanf(" %[^\n]", str1);
    scanf(" %[^\n]", str2);

    for(i = 0, count_1 = 0; str1[i] != '\0'; i++) {
        if (tolower(str1[i]) != tolower(str2[i])) {
            count_1++;
        }
    }
    len = strlen(str1);

    if (count_1 == 0) {
        result = 0;
        printf("%d\n", result);
    }


    else {
        for(i = 0, sum1 = 0, sum2 = 0; str1[i] != '\0'; i++) {
            if(tolower(str1[i]) > tolower(str2[i])) {
                sum1++;
                break;
            }
            if(tolower(str1[i]) < tolower(str2[i])) {
                sum2++;
                break;
            }
        }

        if(sum1 != 0 && sum2 == 0) {
            result = 1;
            printf("%d\n", result);
        }
        else {
            result = -1;
            printf("%d\n", result);
        }
    }

    return 0;
}
