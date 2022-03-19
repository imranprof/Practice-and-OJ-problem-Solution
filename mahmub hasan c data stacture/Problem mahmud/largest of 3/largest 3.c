#include<stdio.h>

int main()
{
    int num1, num2, num3;

    int first, second, third;

    scanf("%d%d%d", &num1, &num2, &num3);


//first number
    if(num1 < num2 && num1 < num3){
        first = num1;
    }
    else if(num2 < num1 && num2 < num3){
        first = num2;
    }
    else {
        first = num3;
    }

//second number

    if(num1 > num2 && num1 < num3){
        second = num1;
    }
    else if(num2 > num1 && num2 < num3){
        second = num2;
    }
    else {
        second = num3;
    }

//third number
    if(num1 > num2 && num1 > num3){
        third = num1;
    }
    else if(num2 > num1 && num2 > num3){
        third = num2;
    }
    else {
        third = num3;
    }

    printf("%d,%d,%d\n", first, second, third);

    return 0;
}
