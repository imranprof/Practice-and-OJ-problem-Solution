#include<stdio.h>

int main()
{
    char c = 'A';
    char *p;

    p = &c;

    printf("Address of c : %p\n", p);   //here print the address of c by print p

    printf("Address of p : %p\n", &p);      //here print the pointer address by print &p

    return 0;
}
