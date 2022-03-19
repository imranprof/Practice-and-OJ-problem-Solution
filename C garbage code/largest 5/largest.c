#include<stdio.h>

int main()
{
    int a, b, c, d, e;

    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if(a > b && a > c && a > d && a > e){
        printf("%d is largest number\n", a);
    }

    else if(b > a && b > c && b > d && b > e ){
        printf("%d is largest number\n", b);
    }
    else if(c > a && c > b && c > d && c > e){
        printf("%d is largest number\n", c);
    }
    else if(d > a && d > b && d > c && d > e){
        printf("%d is largest number\n", d);
    }
    else{
        printf("%d is largest number\n", c);
    }
    return 0;
}
