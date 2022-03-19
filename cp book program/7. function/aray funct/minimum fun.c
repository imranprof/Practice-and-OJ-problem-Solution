#include<stdio.h>

int find_minimum(int ara[], int j){

    int i;
    int min = ara[0];

    for(i = 0; i < j; i++){

        if(ara[i] < min){

            min = ara[i];
        }
    }

    return min;
}

int main()
{
    int n = 6;

    int aram[] = { 23, 33, 54, 21, 30, 45};

    int min = find_minimum(aram, n);

    printf("%d\n", min);

    return 0;
}
