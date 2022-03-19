#include<stdio.h>

int main()
{
    int n, x, m;

    while(1) {
        printf("Please enter your number(0 to exit):");

        scanf("%d", &n);

        if (n == 0){
            break;
        }

        printf("How many bits you want to shift left? ");

        scanf("%d", &x);

        m = n << x;  // here i use left shift operator "<<"

        printf("Result is %d\n\n", m);
    }

    return 0;
}
