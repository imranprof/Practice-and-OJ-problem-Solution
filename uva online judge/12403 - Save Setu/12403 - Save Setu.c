#include<stdio.h>
#include<string.h>

int main()
{
    int i, t_case, t_amount, j, k, taka;
    char operation[20], str[10], money[10], don[] = "donate", re[] = "report";


    scanf("%d", &t_case);


    for (i = 1, t_amount = 0; i <= t_case; i++) {
            scanf(" %[^\n]", operation);

            for (j = 0; j < 6; j++){
                str[j] = operation[j];
            }
            str[j] = '\0';

            if (strcmp(str, don) == 0) {
                for (k = 7, j = 0; operation[k] != '\0'; k++, j++) {
                    money[j] = operation[k];
                }
                money[j] = '\0';
                taka = atoi(money);
                t_amount = t_amount + taka;
            }

        if(strcmp(str, re) == 0) {
            printf("%d\n", t_amount);
        }
    }

    return 0;
}
