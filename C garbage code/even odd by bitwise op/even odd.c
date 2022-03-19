#include<stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    if(num & 1 == 1)            //check the binary first bit is 1   // here bitwise operator (num & 1)

        printf("%d is odd\n", num);

    else
        printf("%d is even\n", num);

    return 0;
}
