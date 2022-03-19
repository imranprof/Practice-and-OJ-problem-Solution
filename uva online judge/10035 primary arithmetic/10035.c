#include<stdio.h>

int main()
{
    long long num1, num2, N1, N2;
    int count, x, y, sum, n;


    while(1)
    {
        scanf("%lld %lld", &num1, &num2);

        if(num1 == 0 && num2 == 0) break;

        count = 0;
        n = 0;
        N1 = num1;
        N2 = num2;
        while(1)
        {
            x = N1 % 10;
            N1 = N1 /10;
            y = N2 % 10;
            N2 = N2 /10;

            sum = x + y + n;

            if(sum >= 10) {
                count++;
                n = 1;
            }
            else {
                n = 0;
            }

            if (N1 == 0 && N2 == 0) break;
        }

        if(count == 0){
            printf("No carry operation.\n");
        }

        if (count == 1) {
            printf("%d carry operation.\n", count);

        }

        if(count > 1) {
            printf("%d carry operations.\n", count);
        }

    }

    return 0;
}
