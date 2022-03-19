#include<stdio.h>

void func()
{
    int a = 10; // here a is local variable

    static int s = 10; // here s i function static variable which can only access by call this function

    a = a + 2;

    s = s + 2;

    printf("a = %d, s = %d\n", a, s);
}

int main()
{
    func();

    func();

    func();


    return 0;
}
