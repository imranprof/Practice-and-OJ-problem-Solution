#include<stdio.h>

//leaf year function

int leaf_year(int year){

    if(year % 400 == 0 ||
       (year % 100 != 0 && year % 4 == 0)){

        return 1;
       }
       return 0;
}

// main function

int main()
{
    int i, j, line, psnt_year, psnt_month, psnt_day, birth_year, birth_month, birth_day;

    int month_31 = 0, total_month, total_day, leaf_day;

    scanf("%d%d%d", &psnt_year, &psnt_month, &psnt_day);

    scanf("%d", &line);


    for(i = 1; i <= line; i++){


        scanf("%d%d%d", &birth_year, &birth_month, &birth_day);

        total_month = psnt_month - birth_month;

        if(birth_month <= 5){

            month_31 = 5 - birth_month;

        }

/*
        if(psnt_month <= 5){

            month_31 = month_31 + psnt_month;

        }
*/


        for(j = birth_year, leaf_day = 0; j <= psnt_year; j++){

            if(leaf_year(j) == 1){

                leaf_day++;
            }
        }

        printf("leaf day = %d\n", leaf_day);

        total_day = ((psnt_year - birth_year)*365) + ((month_31 * 31) + ((total_month - month_31)*30)) + (psnt_day - birth_day);

        total_day = total_day + leaf_day;

        printf("%d\n", total_day);


    }




    return 0;


}
