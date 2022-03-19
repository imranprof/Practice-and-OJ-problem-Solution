#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, j, T, money, num, num_item[101], total_cost;

    scanf("%d", &T);

    if(T <= 100){

        for(i = 1; i <= T; i++){

            scanf("%d", &money);

            scanf("%d", &num);

            if(1 <= money && money <= 31000 && num >= 1 && num <= 100){

                for(j = 0; j < num; j++){
                    scanf("%d", &num_item[j]);
                }
                for(j = 0, total_cost = 0; j < num; j++){
                    total_cost = total_cost + num_item[j];
                }

                if(money >= total_cost){
                    printf("Go for shopping\n");
                }

                else{
                    printf("You don't have enough money\n");
                }

            }
        }
    }

    return 0;
}
