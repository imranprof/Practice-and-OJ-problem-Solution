#include<stdio.h>

int main()
{
    int i, test;

    int D, H, j, k;

    scanf("%d", &test);

    if(test <= 10){

        for(i = 1; i <= test; i++){

            scanf("%d %d", &D, &H);

            printf("Case %d:\n", i);

            if(D >= 0 && D <= 9 && H >= 1 && H <= 20){

                for(j = 1; j <= H; j++){

                    for(k = 1; k <= j; k++){

                        printf("%d", D);    //here i print the tribuj shape
                    }

                    printf("\n");       //here print new line
                }
            }

        }
    }
    return 0;
}
