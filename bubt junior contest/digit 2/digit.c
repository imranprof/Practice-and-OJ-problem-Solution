#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int i, t_case, j, count;

    char digit[6], c;

    scanf("%d", &t_case);

        for(i = 1; i <= t_case; i++){

            scanf("%s", digit);

            scanf("%c", &c);        // this for input the new line

            for(j = 0, count = 0; digit[j] != '\0'; j++){
                count++;
            }
            printf("Case %d:\n", i);

            if(count == 1){

                printf("%c is a unit digit\n", digit[0]);
            }

            else if(count == 2){
                printf("%c is the unit digit\n", digit[1]);

                printf("%c is the tens digit\n", digit[0]);
            }

            else if(count == 3){

                printf("%c is the unit digit\n", digit[2]);
                printf("%c is the tens digit\n", digit[1]);
                printf("%c is the hundreds digit\n", digit[0]);

            }

            else if(count == 4){

                printf("%c is the unit digit\n", digit[3]);
                printf("%c is the tens digit\n", digit[2]);
                printf("%c is the hundreds digit\n", digit[1]);
                printf("%c is the thousands digit\n", digit[0]);
            }

            else if(count == 5){

                printf("%c is the unit digit\n", digit[4]);
                printf("%c is the tens digit\n", digit[3]);
                printf("%c is the hundreds digit\n", digit[2]);
                printf("%c is the thousands digit\n", digit[1]);
                printf("%c is the ten-thousands digit\n", digit[0]);
            }

        }

    return 0;
}
