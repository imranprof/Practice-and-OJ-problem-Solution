#include<stdio.h>

int main()
{
    int i, j, t_case;

    long long sides[3], large, small_1, small_2, lar_t, sml_t;

    scanf("%d", &t_case);

    for (j = 1; j <= t_case; j++) {

        scanf("%lld%lld%lld", &sides[0], &sides[1], &sides[2]);

        if (sides[0] == 0 || sides[1] == 0 || sides[2] == 0 || sides[0] < 0 || sides[1] < 0 || sides[2] < 0) {
            printf("Case %d: Invalid\n", j);
        }

        else {

            if ((sides[0] == sides[1]) && (sides[0] == sides[2])) {
                    printf("Case %d: Equilateral\n", j);
                }

            else if (((sides[0] + sides[1]) > sides[2]) &&
                    ((sides[1] + sides[2]) > sides[0]) &&
                    ((sides[0] + sides[2] ) > sides[1])) {

                if (( (sides[0] == sides[1]) && (sides[1] != sides[2]) ) ||
                         ( (sides[1] == sides[2]) && (sides[2] != sides[0]) ) ||
                         ( (sides[0] == sides[2]) && (sides[2] != sides[1]))  )  {

                            printf("Case %d: Isosceles\n", j);
                         }
                else {
                    printf("Case %d: Scalene\n", j);
                }
            }

            else {
                printf("Case %d: Invalid\n", j);
            }

        }

    }

    return 0;
}
