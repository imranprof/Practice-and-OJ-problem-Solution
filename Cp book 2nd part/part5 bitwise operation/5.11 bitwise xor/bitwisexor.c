#include<stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    if (n ^ m) {        // here i use xor (^) operator to find equal numbers

        puts("Numbers are not equal\n");  // if xor true then numbers are not equal
    }

    else {
        puts("Numbers are equal\n");
    }

    return 0;
}
