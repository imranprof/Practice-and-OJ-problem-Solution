#include<stdio.h>

int main()
{
    int i, t_case, N, num[10001], max, j;

    scanf("%d", &t_case);

    for (i = 1; i <= t_case; i++) {
        scanf("%d", &N);

        for (j = 0; j < N; j++) {
            scanf("%d", &num[j]);

        }

        for (j = 1, max = num[0]; j < N; j++) {
            if (max < num[j]) {
                max = num[j];
            }
        }

        printf("Case %d: %d\n", i, max);
    }

    return 0;
}
