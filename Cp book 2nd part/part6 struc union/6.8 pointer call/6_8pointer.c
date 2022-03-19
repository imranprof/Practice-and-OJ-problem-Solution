#include<stdio.h>

//here call by value for this function

void plus_ten1(int a)
{
    a = a + 10;
}

//here call by reference for this function

void plus_ten2(int* a)
{
    *a = (*a) + 10;
}

int main()
{
    int a;

    a = 5;

    plus_ten1(a);

    printf("a = %d\n", a);

    plus_ten2(&a);  //call by reference

    printf("a = %d\n", a);

    return 0;
}
