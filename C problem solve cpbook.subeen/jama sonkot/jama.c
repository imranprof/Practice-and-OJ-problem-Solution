#include<stdio.h>

int main()
{
    int i, run_time, n;

    scanf("%d", &run_time);

    for(i = 1; i <= run_time; i++){

        scanf("%d", &n);

        if(n % 2 == 0){
            printf("red\n");
        }
        else{
            printf("blue\n");
        }
    }

    return 0;
}
