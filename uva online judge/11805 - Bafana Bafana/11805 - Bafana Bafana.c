#include<stdio.h>

int main()
{
    int i, j, t_case, N, K, P, now, temp;

    scanf("%d", &t_case);

    for (i = 1; i <= t_case; i++) {

        scanf("%d%d%d", &N, &K, &P);
        temp = N;
        for (j = 1, now = K; j <= P; j++) {


            if (now == temp) {
                now = 0;
            }
            now++;


        }

        printf("Case %d: %d\n", i, now);
    }

    return 0;
}
