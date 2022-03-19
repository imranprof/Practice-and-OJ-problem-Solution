#include<stdio.h>

double pi = 3.14;

void my_func(){

   pi = 3.1416;

   return;
}

// main function

int main()

{

    printf("%lf\n", pi);  // here pi is 3.14

    my_func();

    printf("%lf\n", pi);    // here pi is 3.1416

    return 0;
}
