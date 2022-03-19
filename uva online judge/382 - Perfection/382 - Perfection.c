#include<stdio.h>

int main()
{
    int num, sum, i;
    printf("PERFECTION OUTPUT\n");
    while(1)
    {
        scanf("%d", &num);

        if (num == 0) {
            printf("END OF OUTPUT\n");
            break;
        }

        for (i = 1, sum = 0; i <= num/2; i++) {
            if (num % i == 0) {
                sum = sum + i;
            }
        }

        if (sum == num) {
            printf("%5d  PERFECT\n", num);
        }
        else if (sum < num) {
            printf("%5d  DEFICIENT\n", num);
        }
        else {
            printf("%5d  ABUNDANT\n", num);
        }
    }

    return 0;
}
