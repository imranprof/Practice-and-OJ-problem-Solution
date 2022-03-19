#include<stdio.h>

int main()
{
    int i , j = 1, n, h[101], sum, same_h, count_mov;

    while(1) {

        scanf("%d", &n);

        if (n == 0) break;

        for (i = 0, sum = 0; i < n; i++) {
            scanf("%d", &h[i]);
            sum = sum + h[i];
        }

        same_h = sum / n;

        for (i = 0, count_mov = 0; i < n; i++) {
            if (h[i] > same_h) {
                count_mov = count_mov + (h[i] - same_h);
            }
        }

        printf("Set #%d\n", j);
        printf("The minimum number of moves is %d.\n\n", count_mov);
        j++;

    }

    return 0;
}
