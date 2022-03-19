#include <stdio.h>
#include <stdlib.h>

void main()
{
   char ch;
   scanf("%c",&ch);

   if(ch>='0'&&ch<='9')
   {
       printf("This is Digit\n");
   }
   else
   {
       printf("This is Not digit\n");
   }
}
