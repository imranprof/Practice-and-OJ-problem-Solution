#include<stdio.h>

int main()
{
    int num1, num2, gunfol, temp, gcd, lcm;

    scanf("%d %d", &num1, &num2);

//gunfol for lcm

    gunfol = num1 * num2;

    if(num1 == 0){
        gcd = num1;
    }

    else if(num2 == 0){
        gcd = num2;
    }

    else{

        while(num2 != 0){

            temp = num2;

            num2 = num1 % num2;

            num1 = temp;
        }
        gcd = num1;
    }

    lcm = gunfol / gcd;

    printf("LCM is %d\n", lcm);

    return 0;
}
