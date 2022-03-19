#include<stdio.h>

int main()
{
    int i, t_case, a, b;

    scanf("%d", &t_case);

    for (i = 1; i <= t_case; i++) {
        scanf("%d%d", &a, &b);

        if (b % a == 0) {
            printf("%d %d\n", a, b);
        }
        else {
            printf("-1\n");
        }
    }

    return 0;
}
