#include<stdio.h>

int main()
{
    char c = 'A';

    char *p, **q;

    p = &c;     //here i assign a address into pointer p

    q = &p;     //here i assign pointer p address int pointer q

    **q = 'B';

    printf("Value of c : %c\n", c);

    printf("Value of c : %c\n", *p);

    printf("Value of c : %c\n", **q);

    return 0;
}
