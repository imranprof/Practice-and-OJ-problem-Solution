#include <stdio.h>


int main ()

{

/*
    char str[20];

    printf("\n Enter a string: ");

    scanf("%s",str);

    printf("\n You input: %s \n",str);
*/

    //another

    /*
    char str[] = {'B','A','N','G','L','A','D','E','S','H','\0'};


    printf("\n %s \n",str);


   */

// enter the length of the string in "[ ]" if you enter length as 10, you can input 9 character in the string and last is null "\0" \\



   char st[]="Imran";

   printf(" %s \n",st);




   //input a string by keyboard  using scanf("[%^\n]")

/*
   char str[30];

   scanf("%[^\n]",str);

   printf("%s\n",str);

*/

//input and output a string by gets() and puts() function

    char str[30];

    gets(str);

    //puts(str);

    printf("You input: %s \n\n",str);



    return 0;



}
