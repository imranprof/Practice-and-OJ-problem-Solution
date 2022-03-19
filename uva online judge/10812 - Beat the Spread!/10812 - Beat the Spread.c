#include<stdio.h>

int main()
{
    int i,t_case;
    long long a, b, sum, sub;

    scanf("%d", &t_case);

    for (i = 1; i <= t_case; i++) {
        scanf("%lld %lld", &sum, &sub);

        a = (sum + sub) / 2;

        b = abs(a - sub);


        if ((2 * a == sum + sub) && (2*b == sum - sub)) {
            printf("%lld %lld\n", a, b);
        }
        else {
            printf("impossible\n");
        }
    }

    return 0;
}
