#include<stdio.h>
#include<string.h>


int main()
{
    int i, j, t_case,  digit, count, len;
    char words[10], one[4] = "one", ch;

    scanf("%d", &t_case);

    for (i = 1; i <= t_case; i++) {

        scanf("%s", words);
    /*    scanf("%c", &ch);     */

        len = strlen(words);

        if (len == 3) {

            for (j = 0, count = 0; j < 3; j++) {
                if (words[j] != one[j]) {
                    count = count + 1;
                }
            }

            if (count ==0 || count == 1) {
                digit = 1;
                printf("%d\n", digit);
            }
            else {
                digit = 2;
                printf("%d\n", digit);
            }
        }

        if (len == 5) {
            digit = 3;
            printf("%d\n", digit);
        }

    }

    return 0;
}
