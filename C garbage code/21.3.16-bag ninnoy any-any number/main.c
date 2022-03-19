#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,start,end,digit;
   printf("Enter The Start and End number:\n");

   scanf("%d%d",&start,&end);
   printf("Enter the bag digit:");
   scanf("%d",&digit);


        for(i=start;i<=end;i++)

            if(i%digit==0){
                printf("%d\n",i);
                }


}
