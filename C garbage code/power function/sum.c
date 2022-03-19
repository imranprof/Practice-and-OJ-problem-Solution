#include<stdio.h>

//power function

int pow(int n){

    int temp;

    temp=n*n;

    return temp;

}

//main function

int main()
{
    int i,n,num,p=2,sum;

    scanf("%d",&n);

    for(i=1;i<=n;i++){

        scanf("%d",&num);

       sum=pow(num);

       printf("power of %d =%d\n",num,sum);
    }

    return 0;
}
