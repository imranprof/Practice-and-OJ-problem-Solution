#include<stdio.h>


//call by value function
void plus_ten1(int a)
{
    a = a + 10;
}

//call by reference function
void plus_ten2(int* a)
{
    *a = (*a) + 10;
}

//main function
int main()
{
    int a;

    a = 5;

    plus_ten1(a);       //call by value

    printf("a = %d\n", a);

    plus_ten2(&a);      //call by reference

    printf("a = %d\n", a);

    return 0;
}
