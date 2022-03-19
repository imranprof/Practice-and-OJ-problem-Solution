#include<stdio.h>

int main()
{
    int n, i, j, max, count, a, b, swap;

    while(scanf("%d%d", &i, &j) != EOF)
        {

        a = i;
        b = j;
        max = 0;

        if ( i > j) {
            swap = i;
            i = j;
            j = swap;
        }

        while(i <= j){

            count = 1;
            n = i;

            while(n != 1){

                if(n % 2 == 0){
                    n = n / 2;
                }
                else{
                    n = 3 * n + 1;
                }

                count++;

            }

            if(count>max){

                max = count;
            }

            i++;
        }

        printf("%d %d %d\n", a, b, max);
    }
    return 0;
}
