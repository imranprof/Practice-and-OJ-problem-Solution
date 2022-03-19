#include<stdio.h>

int main()
{
    int num;
    char ch;
    double d_num;
    float f_num;

    printf("%lu\n", sizeof(int));

    printf("Size of int: %d byte\n", sizeof(num));

    printf("Size of char: %d byte\n", sizeof(ch));

    printf("Size of double: %d byte\n", sizeof(d_num));

    printf("Size of float: %d byte\n", sizeof(f_num));

    return 0;
}
