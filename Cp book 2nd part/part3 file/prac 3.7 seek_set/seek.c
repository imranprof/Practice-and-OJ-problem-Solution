#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = fopen("in.txt", "r");

    if(fp == NULL){
        perror("Can't open file");
        return EXIT_FAILURE;
    }

    int ch;

    ch = fgetc(fp);

    printf("%c\n", (char)ch);

    ch = fgetc(fp);

    printf("%c\n", (char)ch);

    fseek(fp, 0, SEEK_SET);     // seek_set means get in file first position

    ch = fgetc(fp);

    printf("%c\n", (char)ch);

    fclose(fp);

    return 0;
}
