#include<stdio.h>

int main()
{
    int i, j;
    long long sides[3], large, small_1, small_2;

    while(1)
    {
        scanf("%lld%lld%lld", &sides[0], &sides[1], &sides[2]);

        if (sides[0] == 0 && sides[1] == 0 && sides[2] == 0) break;


        for (i = 1, large = sides[0]; i < 3; i++) {
            if (large < sides[i]) {
                large = sides[i];
            }
        }

        if (large == sides[0]) {
            small_1 = sides[1];
            small_2 = sides[2];
        }

        else if (large == sides[1]) {
            small_1 = sides[0];
            small_2 = sides[2];
        }
        else {
            small_1 = sides[0];
            small_2 = sides[1];
        }

        if ((large * large) == ( (small_1 * small_1) + (small_2 * small_2) ) ) {
            printf("right\n");
        }
        else {
            printf("wrong\n");
        }


    }

    return 0;
}
