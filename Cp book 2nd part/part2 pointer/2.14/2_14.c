#include<stdio.h>

int main()
{
    char c1 = 'A', c2 = 'B', c3 = 'C';

    char *p1, *p2, *p3;

    p1 = &c1;
    p2 = &c2;
    p3 = &c3;

    printf("%c, %c, %c\n", *p1, *p2, *p3);   // here i print the value of pointer *p1, *p2, *p3 where i put c1, c2, c3

    return 0;
}
