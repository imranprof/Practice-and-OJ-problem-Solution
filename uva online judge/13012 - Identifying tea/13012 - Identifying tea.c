#include<stdio.h>

int main()
{
    int i, type, contesttant, count_gues;


    while(scanf("%d", &type) != EOF)
    {


        for (i = 1, count_gues = 0; i <= 5; i++) {
            scanf("%d", &contesttant);
            if (contesttant == type) {
                count_gues++;
            }
        }
        printf("%d\n", count_gues);
    }

    return 0;
}
