#include<stdio.h>

//Prime Function

int prime(int n){

    int i;

    if(n<2){
        return 0;
    }
    if(n==2){
        return 1;
    }

    if(n%2==0){
        return 0;
    }


    for(i=3;i<n;i=i+2){

        n%i;

        if(n%i==0){

            return 0;
        }
    }


    return 1;

}



//Main Function

int main()
{
    int p,test,i,run;

    printf("How many time you want to run this program:");

    scanf("%d",&run);

    for(i=1;i<=run;i++){
        scanf("%d",&p);

        test=prime(p);

        if(test==1){
            printf("%d is prime number\n",p);
        }

        else{
            printf("%d is not prime number\n",p);
        }

    }

    return 0;
}
