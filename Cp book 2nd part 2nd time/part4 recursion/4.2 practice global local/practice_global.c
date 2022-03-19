#include<stdio.h>

int x = 1;      //global variable

void myfnc(int y)
{
    int x = 10;     //local variable

    y = y * 4;

    printf("myfnc, x = %d, y = %d\n", x, y);
}

int main()
{
    int y = 5;      //local variable

    x = 15;     //global variable

    myfnc(y);

    printf("main, x = %d, y = %d\n", x, y);

    return 0;
}
