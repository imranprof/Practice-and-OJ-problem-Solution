#include <stdio.h>


int main()
{
    int imran[5];
    int r[6];
    int i=0;
    i=0;
    while(i<5)
    {
        scanf("%d",&imran[i]);
        i=i+1;
    }
    i=0;
    while(i<5)
        {
         printf("%d\n",imran[i]);
         i++;
        }
        printf("Enter the r number:\n");
    for(i=0;i<6;i++)
        scanf("%d",&r[i]);
    for(i=0;i<6;i++){
        printf("%d\n",r[i]);
    }
    return 0;


}
