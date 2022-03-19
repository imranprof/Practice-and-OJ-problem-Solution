#include<stdio.h>

int main()
{
    int N, i, type[1001], A[1001], flag, temp;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {

                scanf("%d%d", &type[i], &A[i]);


    }
    for (i = 1, flag = 0; i < N; i++) {
        if (type[i] == 2 && (A[0] == A[i])) {
                flag++;
                temp = type[i];
            }
    }
            if (flag != 0) {
                printf("%d\n%d\n", temp, flag);
            }

            else {
                printf("Sorry\n");
            }


    return 0;
}
