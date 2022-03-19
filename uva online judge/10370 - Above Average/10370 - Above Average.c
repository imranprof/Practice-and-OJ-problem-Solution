#include<stdio.h>

int main()
{
    int i, j, t_case, N, count_ab;


    double m_average, num[1001], ab_average, sum;

    scanf("%d", &t_case);

    for (i = 1; i <= t_case; i++) {

        scanf("%d", &N);

        for (j = 0, sum = 0; j < N; j++) {

            scanf("%lf", &num[j]);
            sum = sum + num[j];
        }

        m_average = sum / N;

        for(j = 0, count_ab = 0; j < N; j++) {
            if(m_average < num[j]){
                count_ab++;
            }
        }


        ab_average = ((double)count_ab / (double)N) * 100;

        printf("%0.3lf%%\n", ab_average);


    }

    return 0;
}
