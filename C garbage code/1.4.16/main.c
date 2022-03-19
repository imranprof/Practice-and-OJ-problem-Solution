#include <stdio.h>
#include <stdlib.h>

void main()
{
   char ch;
   scanf("%c",&ch);

   if(ch>='a' && ch<='z'){
     printf("%c is lower case\n",ch);
   }

   else if(ch>='A' && ch<='Z'){

        printf("%c is Upper case\n",ch);

   }

   return 0;
}
