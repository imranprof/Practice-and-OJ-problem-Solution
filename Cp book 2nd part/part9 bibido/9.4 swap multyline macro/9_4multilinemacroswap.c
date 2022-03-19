#include<stdio.h>

#define SWAP(a, b) {    \
                a ^= b; \
                b ^= a; \
                a ^= b; \
        }                       //here i create multi line macro using \ and create a swap macro

int main()
{
    int a = 83, b = 323;

    printf("a = %d, b = %d\n", a, b);

    SWAP(a, b);     //here use swap macro

    printf("a = %d,  b = %d\n", a, b);  //after swap

    return 0;
}
