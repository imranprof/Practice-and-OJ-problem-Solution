#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, t_case, N, B, W, A, T, sub;


    scanf("%d", &t_case);

    for(i = 1; i <= t_case; i++) {
        scanf("%d", &N);

        char *str = malloc(N);

        scanf("%s", str);
        B = W = A = T = 0;
        for(j = 0; str[j] != '\0'; j++) {
            if(str[j] == 'B') B++;
            if(str[j] == 'W') W++;
            if(str[j] == 'A') A++;
            if(str[j] == 'T') T++;
        }
        sub = N - A;

        if(A == N) {
            printf("Case %d: ABANDONED\n", i);
        }

        else if(B == sub) {
            printf("Case %d: BANGLAWASH\n", i);
        }
        else if(W == sub) {
            printf("Case %d: WHITEWASH\n", i);
        }

        else if(B == W) {
            printf("Case %d: DRAW %d %d\n", i, B, T);
        }



        else if(B > W) {
            printf("Case %d: BANGLADESH %d - %d\n", i, B, W);
        }

        else {
            printf("Case %d: WWW %d - %d\n", i, W, B);
        }

    }

    return 0;
}
