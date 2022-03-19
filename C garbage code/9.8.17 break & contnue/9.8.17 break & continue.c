#include<stdio.h>

int main()
{

    int i=1;

    for (;i<=10;i++){

     //continue statement

         /*
             if(i<=5){

        continue;

        }

        */

        printf("%d\n",i);

        // break statement

        if (i>=5){
            break;
        }



    }


    return 0;

}
