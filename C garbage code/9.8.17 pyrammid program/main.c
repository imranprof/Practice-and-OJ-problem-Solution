#include <stdio.h>

int main()
{

    int n=20,row,temp,c;
    char ch,en;


    printf("Enter how many line you want to show in pyramid :");
    scanf("%d",&n);

// this scanf() fucntion use for input the enter key and use variable is "en"
    scanf("%c",&en);

    printf("What character you want to show in pyramid: ");
    scanf("%c",&ch);



    temp=n;

        for(row=1;row<=n;row++){


            for(c=1;c<=temp;c++){

                printf(" ");

            }
             temp--;


         for(c=1;c<=2*row-1;c++){

                printf("%c",ch);

         }


            printf("\n");



    }



return 0;

}
