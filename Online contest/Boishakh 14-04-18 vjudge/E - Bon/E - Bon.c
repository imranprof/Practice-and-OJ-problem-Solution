#include<stdio.h>

int main()
{
    int i,  items, n_eat, over_charged;
    double b_actual, b_charged, bill[100002] , total_cost;


    scanf("%d %d", &items, &n_eat);

    for (i = 0, total_cost = 0; i < items; i++) {

        scanf("%lf", &bill[i]);
        if (i != n_eat) {
            total_cost = total_cost + bill[i];
        }
    }
    scanf("%lf", &b_charged);

    b_actual = total_cost / 2.0;

    if(b_charged <= b_actual) {
        printf("Bon Appetit\n");
    }

    else {
        over_charged = b_charged - b_actual;

        printf("%d\n", over_charged);
    }

    return 0;
}
