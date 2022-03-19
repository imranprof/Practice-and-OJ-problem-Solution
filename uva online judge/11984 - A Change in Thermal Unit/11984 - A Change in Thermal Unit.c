#include<stdio.h>

int main()
{
    int t_case, i;
    double  C, F, temper;

    scanf("%d", &t_case);

    for(i = 1; i <= t_case; i++) {
        scanf("%lf%lf", &C, &F);

        temper = C + (F / 1.8);

        printf("Case %d: %.2lf\n", i, temper);
    }

    return 0;
}
