#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char a;
    printf("Enter a 1 or 2 or 3 or any:\n");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        printf("It is one\n");
        break;
    case 2:
        printf("it is two\n");
        break;
    case 3:
        printf("it is three\n");
        break;
    default:
        printf("it is default");

    }
    printf("input a word n or i or j or any:\n\n");
    scanf("%c",&a);
    scanf("%c",&a);
    switch(a){

    case 'n':
        printf("NoP");
        break;
    case 'i':
        printf("imran");
        break;
    case 'j':
        printf("job");
        break;
    default:
        printf("Bangladesh");
        break;
             }
      printf("\n Select your choice\n Input 1 To show your result\n INPUT 2 FOR SHOWING YOUR ADDRESS\n INPUT 3 TO SHOW YOUR STATUS\n");

      scanf("%d",&i);
      switch(i)
      {
        case 1:
            goto lebel_1;
            break;

        case 2:
            goto lebel_2;
            break;

        case 3:
            goto lebel_3;
            break;

      }
      lebel_1:
          {
              printf("\nYour CGPA is 3.45\n");

          }
     lebel_2:
         {
             printf("\nBangladeshi\n");

         }
     lebel_3:
         {
             printf("\nSINGLE\n");

         }


}
