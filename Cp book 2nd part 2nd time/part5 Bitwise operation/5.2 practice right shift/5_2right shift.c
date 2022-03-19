#include<stdio.h>

int main()
{
    int n, x, m;

    while(1)
    {
        printf("Please enter your number (0 to exit) ");
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        printf("How many bits you want to shift right? ");
        scanf("%d", &x);

        m = n >> x;         //here i used right shift operator >> to shift bits right

        printf("Result is : %d\n", m);

    }

    return 0;
}
