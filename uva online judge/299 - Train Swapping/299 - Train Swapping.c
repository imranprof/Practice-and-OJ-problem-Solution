#include<stdio.h>

int main()
{
    int num[51], i, t_case, n, j, k, l, temp, count;

    scanf("%d", &t_case);

    for (l = 1; l <= t_case; l++) {

        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%d", &num[i]);
        }

        for (i = 0, count = 0; i < n - 1; i++) {

            for (j = 0; j < n - i - 1; j++) {

                if (num[j + 1] < num[j])  {

                    temp = num[j];

                    num[j] = num[j + 1];

                    num[j + 1] = temp;

                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
    }



    return 0;
}
