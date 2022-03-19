#include<stdio.h>
#include"imran.h"       //here i include my own create header file "imran.h"

int main()
{
    int n1 = 10, n2 = 5;

    printf("%d + %d = %d\n", n1, n2, add(n1, n2)); // here add() & mul() is imran.h header file function
    printf("%d x %d = %d\n", n1, n2, mul(n1, n2));

    return 0;
}
