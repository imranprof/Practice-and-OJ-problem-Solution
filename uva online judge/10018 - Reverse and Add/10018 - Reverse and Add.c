#include<stdio.h>

long long revnum(long long n)
{
    long long temp, reverse = 0;

    while(n != 0) {
        temp = n % 10;
        reverse = reverse * 10 + temp;
        n = n / 10;
    }
    return reverse;
}

int main()
{
    int i, j, t_case, count;
    long long num, r_num, sum, revsum;

    scanf("%d", &t_case);

    for (i = 1; i <= t_case; i++) {

        scanf("%lld", &num);

        count = 0;

        while(1)
        {
            r_num = revnum(num);

            sum = num + r_num;

            revsum = revnum(sum);

            count++;

            if (sum == revsum) {
                break;
            }



            num = sum;
        }

        printf("%d %lld\n", count, sum);

    }

    return 0;
}
