#include<stdio.h>

int main()
{
    int i,j, t_case, age[100], N, cap_age;

    scanf("%d", &t_case);

    for (i = 1; i <= t_case; i++) {

        scanf("%d", &N);

        for (j = 0; j < N; j++) {
            scanf("%d", &age[j]);
        }

        cap_age = (N / 2);

        printf("Case %d: %d\n", i, age[cap_age]);
    }

    return 0;
}
