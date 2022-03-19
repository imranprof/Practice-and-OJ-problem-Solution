#include<stdio.h>

int add(int n1, int n2)
{
    return n1 + n2;
}

int sub(int n1, int n2)
{
    return n1 - n2;
}

//here is the main function
int main()
{
    int (*fnc)(int, int);       //here i declare a function pointer *fnc

    int n1 = 10, n2 = 5;

    fnc = &add;     // here assign add function address to fnc pointer

    printf("Result : %d\n", fnc(n1, n2));

    fnc = &sub;     //here assign sub function address to fnc pointer

    printf("Result : %d\n", fnc(n1, n2));

    return 0;
}
