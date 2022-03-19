#include<stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    if (num & 1){
        printf("%d is odd\n", num);  //if num & 1 then this is odd
    }

    else {
        printf("%d is even\n", num);
    }

    return 0;
}
