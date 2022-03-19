#include<stdio.h>

int x = 1;

void myfnc(int y){

    y = y * 2;

    x = x + 10; // here x is global variable so x + 10 means 10 + 10 = 20 i declare x = 10 in main functionS

    printf("my fnc, x = %d, y = %d\n", x, y);
}

int main()
{
    int y = 5;

    x = 10;     //here i set the global variable x = 1 to x = 10 so now x = 10 for all

    myfnc(y);

    printf("main, x = %d, y = %d\n", x, y);  // i increase the global variable value in myfnc so here print x = 20 and by myfnc() y = 10;

    return 0;
}
