#include<stdio.h>

int main()
{

    int i, j, test_case, a, b, sum;

    scanf("%d", &test_case);

    for(i = 1; i <= test_case; i++) {

        scanf("%d %d", &a, &b);

        for (j = a, sum = 0; j <= b; j++) {

            if(j % 2 != 0) {
                sum = sum + j;
            }
        }
        printf("Case %d: %d\n", i, sum);
    }


    return 0;
}
