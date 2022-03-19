#include<stdio.h>

int main()
{
    int i, test;

    int bumi, high, khetrofol;

    scanf("%d", &test);

    if(test <= 50){

        for(i = 1; i <= test; i++){

            scanf("%d", &bumi);
            scanf("%d", &high);

            if(bumi >= 1 && high <= 1000){

                khetrofol = (bumi * high) * 2;

                printf("Case %d: %d\n", i, khetrofol);

            }
        }
    }

    return 0;
}
