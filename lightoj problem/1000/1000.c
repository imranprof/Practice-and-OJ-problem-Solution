#include<stdio.h>

int main()
{
    int T, a, b, i;

    scanf("%d", &T);

    if(T <= 125){

        for(i = 1; i <= T; i++){

            scanf("%d%d", &a, &b);

            if(a >=0 && a <= 10 && b >= 0 && b <= 10){

                printf("Case %d: %d\n", i, a+b);
            }
        }
    }

    return 0;
}
