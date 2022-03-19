#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int i, j, k, T, P, Q, count;

    scanf("%d", &T);

    if(T >= 1 && T <= 1000000){

        for(i = 1; i <= T; i++){

            scanf("%d %d", &P, &Q);

            if(1 <= P && P <= Q && Q <= 1000000){

                for(j = P, count = 0; j <= Q; j++){

                    for(k = 1; k <= j/2; k++){

                        if(j % k == 0){
                            count++;
                        }
                    }
                }

                printf("Case %d: %d\n", i, count);
           }
        }
    }

    return 0;
}

