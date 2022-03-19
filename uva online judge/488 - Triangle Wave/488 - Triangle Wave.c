#include<stdio.h>

int main()
{
    int i, j, k, l, m, n, t_case, amp, fre;

    scanf("%d", &t_case);

    for (i = 1; i <= t_case; i++) {

        scanf("%d", &amp);
        scanf("%d", &fre);

            for (n = 1; n <= fre; n++) {

                for (j = 1; j <= amp; j++) {
                    for (k = 1; k <= j; k++) {
                        printf("%d", j);
                    }
                    printf("\n");
                }

                for (l = j-2; l >= 1; l--) {
                    for(m = 1; m <= l; m++) {
                        printf("%d", l);
                    }
                        printf("\n");

                }

                if(n != fre) {
                    printf("\n");
                }
            }
        if(i != t_case) {
            printf("\n");
        }

    }

    return 0;
}
