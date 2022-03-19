#include<stdio.h>

int main()
{
    int T, x, N, i, j, count;

    scanf("%d", &T);

    if( T <= 100){

        for(i = 1; i <= T; i++){

            scanf("%d%d", &x, &N);

            if(x >= 1 && x <= N && N <= 1000000){

                printf("Case %d:\n", i);

                for(j = 1, count = 0; j <= N; j++){

                    count = x * j;

                    if(count < N){

                        printf("%d\n", count);

                    }
                }
            }
        }
    }

    return 0;

}
