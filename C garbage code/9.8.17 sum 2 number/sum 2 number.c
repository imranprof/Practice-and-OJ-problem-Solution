#include <stdio.h>

int main()
{

    int tc;
    printf("How many time you want to run this program:");
    scanf("%d",&tc);
    int i,a,b;
    for(i=1;i<=tc;i++){
        printf("Enter two integer number: \n");
        scanf("%d%d",&a,&b);
        printf("\n%d.Sum is: %d\n\n",i,a+b);

    }



}
