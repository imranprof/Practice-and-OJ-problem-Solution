#include<stdio.h>

int main()
{
    long long n, book, ex;
    scanf("%lld", &n);

        if (n % 3 == 0) {
            book = n / 3;
        }
        else {
            ex = n / 3;
            book = ex + 1;
        }

        printf("%lld\n", book);
    return 0;
}
