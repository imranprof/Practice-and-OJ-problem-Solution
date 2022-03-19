#include<stdio.h>

int main()
{
    int i, N, day;


    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        scanf("%d", &day);

        if(day == 0) {
            printf("Sure na Dost, Ashar try korbo!!\n");
        }
        if(day == 1) {
            printf("No\n");
        }
    }

    return 0;
}
