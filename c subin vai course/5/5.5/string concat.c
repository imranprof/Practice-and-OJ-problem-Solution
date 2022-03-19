#include<stdio.h>

int main()
{
    char a[30]="Imran",b[30]="hossen";

    int i,j;

    for(i=5,j=0;b[j]!='\0';i++,j++){      // b[j]!='\0' means b[j] te null pele loop sesh hobe

        a[i]=b[j];                    //   a[i] te b[j] copy hocche
    }

    a[i]='\0';

    printf("%s\n",a);


    return 0;
}
