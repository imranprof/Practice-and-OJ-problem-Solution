#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main()
{
    int i, j, len;

    char str_m[100000], str2[100000], str3[100000];
    char terminate[] = "DONE";

    while(1)
    {
        scanf(" %[^\n]", str_m);

        /*for Terminate this program */
        if (strcmp(str_m, terminate) == 0) break;


        /* remove all whitespace and punctuation and copy this into another string*/
        for (i = 0, j = 0; str_m[i] != '\0'; i++) {

           if(str_m[i] != '.' && str_m[i] != ',' && str_m[i] != '?' && str_m[i] != '!' && str_m[i] != ' ') {
                str2[j] = tolower(str_m[i]);
                j++;
           }
        }
        str2[j] = '\0';

        len = strlen(str2);

        /* reverse this string and copy into another string */
        for(i = len - 1, j = 0; j < len; i--, j++) {
            str3[j] = str2[i];
        }
        str3[j] = '\0';

        /* compare two string and find palindrome */
        if (strcmp(str2, str3) == 0) {
            printf("You won't be eaten!\n");
        }

        else {
            printf("Uh oh..\n");
        }
    }

    return 0;
}
