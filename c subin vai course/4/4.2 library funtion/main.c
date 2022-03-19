#include <stdio.h>
#include<math.h>

void main()
{
    double x,borgomul,a,b,power;
    printf("Enter the number you want to show sqrt:");
    scanf("%lf",&x);
    borgomul=sqrt(x);//library function math.h
    printf("The Answer is :%lf\n",borgomul);

        printf("Enter the number and power number:\n");
        scanf("%lf%lf",&a,&b);
        power=pow(a,b);//library function in c math.h
        printf("The Answer is:%lf\n",power);

    printf("\n         $Thanks to complete$    \n");

}
