#include<stdio.h>

int main()
{
    int polidrom, count = 0;

    for(polidrom = 1; polidrom <= 100; polidrom = polidrom + 1){

        if ((polidrom >= 1 && polidrom <= 9) ||
            (polidrom % 11 == 0)){

                count ++;         ///for count all polidrom number between 1 to 100

                printf("%d\n", polidrom);  //polidrom of 1 to 100
            }


    }

    printf("Total polidrom is between 1 to 100 is = %d\n", count);

    return 0;
}
