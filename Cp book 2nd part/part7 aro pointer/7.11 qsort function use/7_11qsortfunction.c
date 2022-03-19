#include<stdio.h>
#include<stdlib.h>

int comparefunc (const void * a, const void * b)    //here i write comparefunc function for compare
{
    return (*(int*)a - *(int*)b );      // here a - b means this sort is low to high
}

int main()
{
    int i, n = 5;

    int values[] = { 65, 6, 100, 1, 250 };

    qsort(values, 5, sizeof(int), comparefunc);     //here is the qsort() function

    for(i = 0; i < n; i++) {
        printf("%d ", values[i]);
    }

    printf("\n");

    return 0;
}
