#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, T, X, Y;

    double mul;

    scanf("%d", &T);

    if(1 <= T && T <= 1000){

        for(i = 1; i <= T; i++){

            scanf("%d %d", &X, &Y);

            if(X >= 0 && Y <= 1000000000000000000){

                mul = X * Y;

                printf("%.0lf\n", sqrt(mul));
            }
        }
    }
    return 0;
}
