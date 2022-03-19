#include<stdio.h>

int main()
{

    //string declare

/*    char str[20]={'B','A','N','G','L','A','D','E','S','H'};   //declare a string

  //style of declare        // null character is "\0" this is the last character in a string

    char st[20]="Programer";       /// i can put a string in " string "

   char sr[20]="i am a c programer";

    printf("%s\n\n",str);

    printf("%s\n\n",st);

    printf("%s\n\n",sr);

*/


    char str[30];
    char st[30];

 /// scanf("%s",str);     //scanf find a space it stop  get input/

     //so i use scanf("[%^\n]") that means it input before new line

  /// scanf("%[^\n]",str);

 //gets(); function use for input string

    gets(st);

  /// printf("%s\n",str);

    printf("\n%s\n",st);


    return 0;
}
