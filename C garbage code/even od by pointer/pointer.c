#include<stdio.h>

int main()
{
    int a;
    int *p;

    scanf("%d", &a);

    p = &a;

    if(*p % 2 == 0){
        printf("%d is even\n", *p);
    }

    else {
        printf("%d is odd\n", *p);
    }

    return 0;
}
