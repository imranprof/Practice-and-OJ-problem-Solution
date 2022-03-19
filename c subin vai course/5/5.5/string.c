#include<stdio.h>

int main()
{
    char a[30]="Bangla",b[30]="desh";     ///string concatnate ( string+string )

    int i,j,length;
    length=6;

    for(i=length,j=0; b[j]!='\0';i++,j++){      ///b[j] te null character na paowa porjonto loop cholbe

        a[i]=b[j];
    }

    a[i]='\0';

    printf("%s\n",a);


    return 0;
}
