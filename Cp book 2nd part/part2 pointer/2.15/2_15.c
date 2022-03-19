#include<stdio.h>

int main()
{
    char c = 'A';
    char *p;

    p = &c;

    printf("Address of c : %p\n", p);   //here i print the address of c

    printf("Address of p : %p\n", &p);  // here i print the address of pointer p

    return 0;
}
