#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i;
    time_t t;

    srand((unsigned) time(&t));  //here t is present time in computer

    for(i = 0; i < 5; i++) {
        printf("%d\n", rand() % 100);  //here i use "rand() % 100" for print random number between 0-100
    }

    return 0;
}
