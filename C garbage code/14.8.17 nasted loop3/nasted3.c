#include <stdio.h>

void main()
{

    int a,b,c;

    for (a=1;a<=3;a=a+1){

        for (b=1;b<=3;b=b+1){

            for(c=1;c<=3;c=c+1){

                if(b!=a && c!=b && c!=a){


                    printf("%d , %d , %d \n",a,b,c);

                }

            }
        }

    }


    return 0;
}
