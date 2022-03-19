#include<stdio.h>

int a;      //here a is global variable

static int b; // here b is static global variable i access this in this file any function

void func(){
    a = a + 1;
    b = b +1;
}

int main()
{
    func();     // here i call function func()

    printf("a = %d\n", a);

    printf("b = %d\n", b);

    return 0;
}
