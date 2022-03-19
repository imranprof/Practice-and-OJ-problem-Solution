#include<stdio.h>

int main()
{

    double a1,b1,c1,a2,b2,c2,d,x,y;

    printf("a1= ");
    scanf("%lf",&a1); //input a1  first line

    printf("b1= ");
    scanf("%lf",&b1);  //input b1  first line

    printf("c1= ");
    scanf("%lf",&c1);   //input c1  first line

    printf("a2: ");
    scanf("%lf",&a2);   //input a2 second line

    printf("b2: ");
    scanf("%lf",&b2);   //input b2  second line

    printf("c2: ");
    scanf("%lf",&c2);  //input c2  second line

    d=a1*b2-a2*b1;  //calculation

    if (d==0){

        printf("The value of x and y can not be determined. \n");
    }

    else{

    x=(b2*c1-b1*c2)/d;   //main calculation

    y=(a1*c2-a2*c1)/d;  //main calculation


    printf("X= %0.2lf ,Y= %0.2lf \n",x,y);  //print the output

    }

    return 0;

}
