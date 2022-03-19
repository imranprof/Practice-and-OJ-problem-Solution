#include <stdio.h>
#include <stdlib.h>

void main()
{
   char chr;
   printf("Enter the word:\n");
   scanf ("%c",&chr);

   if(chr=='a'||chr=='e'||chr=='i'||chr=='o'||chr=='u'||chr=='A'||chr=='E'||chr=='I'||chr=='O'||chr=='U')
    {
      printf("This is vowel\n");
    }
   else
    printf("This is consonant\n");
}
