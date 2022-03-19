#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int count=0;
    while(i<100)
    {
        i=i+2;
        printf("%d\n",i);
        count++;

    }
     printf("\n%d",count);

     for(i=0;i<=100;i=i+1)
     {
         printf("\n%d",i);
     }
     i=1;
     do
     {
         printf("\n%d\n\n",i);
         i++;
     }while(i<100);
     printf("Finding odd even number between 1 to 100\n\n\n\n");
     printf("___________________________________________________");
     i=1;
     while(i<100)
     {
         if(i%2==0)
            printf("%d is even number\n\n",i);
         else
            printf("\n\n%d Is odd number",i);
         i++;
     }
     for(i=1;i<100;i++)
     {
         if(i%2==0)
            printf("%d is even number\n\n",i);
         else
            printf("\n\n%d Is odd number",i);
     }

}
