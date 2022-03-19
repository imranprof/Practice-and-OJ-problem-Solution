#include<stdio.h>

int find_max(int ara[], int n){

    int max = ara[0];

    int i;

    for(i = 0; i < n; i++){

        if(ara[i] > max){

            max = ara[i];
        }
    }

    return max;

}

int main()
{
    int n = 11;

    int ara[] = {-133, 23, 42, 97, 234, 0, 83, 79, 87, 24, -13};

    int max = find_max(ara, n); // aray er name diye e function call kora jai

    printf("%d\n", max);

    return 0;
}


