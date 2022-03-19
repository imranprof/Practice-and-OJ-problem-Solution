#include<stdio.h>

int main()
{
    int i, j, k, N, T, temp, dust[1001], total_dust;

    scanf("%d", &T);



        for(i = 1; i <= T; i++){

            scanf("%d", &N);


                for(j = 0,  total_dust = 0; j < N; j++){

                    scanf("%d", &dust[j]);

                    if(dust[j] >= 0) {
                        total_dust = total_dust + dust[j];
                    }

                }

                printf("Case %d: %d\n", i, total_dust);
        }


    return 0;
}
