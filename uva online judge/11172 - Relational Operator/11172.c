#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t_case, i;
    long long a, b;


    scanf("%d", &t_case);

    for (i = 1; i <= t_case; i++) {

        scanf("%lld%lld", &a, &b);

        if(a == b) {

            printf("=\n");
        }

        else if(a < b) {

            printf("<\n");
        }

        else if(a > b) {

            printf(">\n");
        }
    }

    return 0;
}
