#include<stdio.h>

int main()
{
    int i, t_case, a, b, c;

    scanf("%d", &t_case);

    for(i = 1; i <= t_case; i++) {
        scanf("%d%d%d", &a, &b, &c);

        if((a + b) > c && (b+c) > a && (a+c) > b) {
            printf("OK\n");
        }
        else {
            printf("Wrong!!\n");
        }
    }

    return 0;
}
