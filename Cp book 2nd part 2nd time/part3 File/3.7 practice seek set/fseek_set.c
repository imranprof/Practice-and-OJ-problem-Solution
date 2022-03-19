#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = fopen("in.txt", "r");
    if (fp == NULL) {
        perror("Can't open file");
        return EXIT_FAILURE;
    }

    int ch;

    ch = fgetc(fp);

    printf("%c\n", (char)ch);
    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    fseek(fp, 0, SEEK_SET);     //seek_set for indicate the start place of file

    //fseek(fp, 0, SEEK_END);

    //fseek(fp, 0, SEEK_CUR);       //seek_cur for current place indicate

    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    fclose(fp);

    return 0;
}
