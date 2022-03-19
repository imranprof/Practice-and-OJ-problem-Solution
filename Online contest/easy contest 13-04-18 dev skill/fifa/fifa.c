#include<stdio.h>

int main()
{
    int i, j, t_case, N, goal[21], winner, win_t;
    char team[11][22];

    scanf("%d", &t_case);

    for (i = 1; i <= t_case; i++) {

        scanf("%d", &N);

        for (j = 0; j < N; j++) {
            scanf("%s", team[j]);
            scanf("%d", &goal[j]);
        }
        winner = goal[0];
        for(j = 0, win_t = 0; j < N; j++) {
            if(goal[j] > winner) {
                winner = goal[j];
                win_t = j;
            }
        }

        printf("Winner: \\%s/\n", team[win_t]);

    }


    return 0;
}
