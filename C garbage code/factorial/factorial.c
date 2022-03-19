#include<stdio.h>

int main()

{

    int fac,i,j,n;   //here variable j & n for run the main loop

    double sum;

    printf("Enter how many time you want to run this program:");

    scanf("%d",&n);

    for(j=1;j<=n;j++){

        printf("\nEnter the number:");
        scanf("%d",&fac);

        if(fac==0){
            printf("The factorial of 0 is: 1\n");
        }

        else{

            for(sum=1,i=fac;i>=1;i--){

                sum=i*sum;
            }
            printf("The factorial of %d is:\n%0.2lf\n",fac,sum);
        }

    }


    return 0;

}
