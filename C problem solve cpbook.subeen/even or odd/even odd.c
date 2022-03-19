#include<stdio.h>

int main()
{
    long int eo;
    int i,n;

    scanf("%d",&n);
    for(i=1;i<=n;i++){

            scanf("%d",&eo);
            if(eo%2==0){
                printf("even\n");
            }
            else
            printf("odd\n");


    }
    return 0;

}
