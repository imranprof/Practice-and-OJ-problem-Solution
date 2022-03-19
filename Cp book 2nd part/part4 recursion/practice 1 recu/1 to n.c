#include<stdio.h>

int sum(int n){

    if(n == 1){
        return;
    }

    return n + sum(n-1);  // for sum 1 to n

}

int main()
{
    int n;

    scanf("%d", &n);

    printf("sum is %d\n", sum(n));

    return 0;
}
