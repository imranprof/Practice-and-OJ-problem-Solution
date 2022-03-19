#include<stdio.h>

int main()
{
    int i, j, t_case, problem[13], flag;

    scanf("%d", &t_case);

    for (i = 1; i <= t_case; i++) {

        for (j = 0, flag = 0; j < 13; j++) {

            scanf("%d", &problem[j]);

            if(problem[j] == 0) {
                flag++;
            }
        }

        if(flag == 0) {
            printf("Set #%d: Yes\n", i);
        }
        else {
            printf("Set #%d: No\n", i);
        }



    }

    return 0;
}
