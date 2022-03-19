#include<stdio.h>

int main()
{
    int i, j, N, num[1001], count_flip, temp;

    while(scanf("%d", &N) != EOF)
    {
        for (i = 0; i < N; i++) {
            scanf("%d", &num[i]);
        }
        count_flip = 0;

        for (i = 0; i < N; i++) {

            for (j = 0; j < N-1; j++) {

                if(num[j + 1] < num[j]){
                    count_flip++;

                    temp = num[j];
                    num[j] = num[j+1];
                    num[j+1] = temp;
                }
            }
        }

        printf("Minimum exchange operations : %d\n", count_flip);

    }

    return 0;
}
