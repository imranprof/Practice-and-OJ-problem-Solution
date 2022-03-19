#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n[5]={2,3,5,7,11};
   int i;

   for(i=4;i>=0;i--){
    printf("%d\n",n[i]);
   }

   return 0;
}
