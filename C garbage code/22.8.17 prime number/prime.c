#include<stdio.h>

//Prime Function

int prime(int n){

    int i,temp;

     if(n<2){
        return 0;
    }

    for(i=2;i<n;i++){

     temp=n%i;

        if(temp==0){

            return 0;
        }

    }

    return 1;

}

//Main Function

int main()
{

    int p,t,i,run;           //i,run veriable use only for running the main loop

    printf("How many time you want to run this program:");

    scanf("%d",&run);

    for(i=1;i<=run;i++){

        scanf("%d",&p);

        t=prime(p);

        if(t==1){
            printf("%d is prime number \n",p);
        }

        else {

            printf("%d is not prime number \n",p);
        }

    }


}
