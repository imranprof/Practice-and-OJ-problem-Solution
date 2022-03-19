#include<stdio.h>

int main()
{
    char c = 'A';
    char *p, **q;

    p = &c;
    q = &p;

    **q = 'B';

    printf("Value of c : %c\n", c);  // here print the value of c where i put the pointer **q

    printf("Value of c : %c\n", *p);  // here print the value of c

    printf("Value of c : %c\n", **q);  // here print the value of c and pointer of pointer **q

    return 0;
}
