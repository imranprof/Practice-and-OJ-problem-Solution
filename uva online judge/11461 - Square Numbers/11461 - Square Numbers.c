#include<stdio.h>
#include<math.h>

int main()
{
    int i, a, b, x, count_sqr;

    while(1)
    {
        scanf("%d %d", &a, &b);

        if(a == 0 && b == 0) break;

        for(i = a, count_sqr = 0; i <= b; i++) {
            x = sqrt(i);

            if(i == x*x) {
                count_sqr++;
            }
        }
        printf("%d\n", count_sqr);
    }

    return 0;
}
