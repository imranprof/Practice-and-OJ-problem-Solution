#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

    time_t t;
    int i;

    srand(0);  //srand() function is a library function which in stdlib.h header file

    for (i = 0; i < 5; i++) {
        printf("%d\n", rand());
    }

    return 0;
}
