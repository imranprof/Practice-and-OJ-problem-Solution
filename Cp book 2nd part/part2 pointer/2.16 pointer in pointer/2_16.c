#include<stdio.h>

int main()
{
    char c = 'A';

    char *p, **q;

    p = &c;
    q = &p;

    printf("Value of c: %c\n", c);

    printf("Value of c: %c\n", *p);  //here i print the value of pointer *p where i put c

    printf("Value of c: %c\n", **q);  // here i print the value of pointer of pointer **q where i put the *p

    return 0;
}
