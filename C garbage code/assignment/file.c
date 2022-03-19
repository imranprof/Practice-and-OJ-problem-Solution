#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;

    int c;

    fp = fopen("file.txt", "r");

    while(1)
    {
        c = fgetc(fp);
        if(c == EOF) break;
        printf("%c", c);
    }

    return 0;
}
