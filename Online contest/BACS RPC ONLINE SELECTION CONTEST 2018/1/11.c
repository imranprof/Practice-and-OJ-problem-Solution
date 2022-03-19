#include<stdio.h>

int main()
{
    int T, N, flag = 0, i, j;
    long long A[110];

    scanf("%d", &T);

    for(i = 1; i <= T; i++) {

        scanf("%d", &N);

        for(j = 0; j < N; j++) {
            scanf("%lld", &A[j]);
        }

        for(j = 0, flag = 0; j < N - 1; j++) {
            if(A[j+1] - A[j] == 1) {
                flag++;
            }
        }

        if(flag == 0) {
            printf("Case %d: No\n", i);
        }
        else {
            printf("Case %d: Yes\n", i);
        }
    }

    return 0;
}
