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

    fseek(fp, sizeof(char) * 3 , SEEK_CUR); // here i use sizeof(char) * 3 for count e char and avoid this

    ch = fgetc(fp);

    printf("%c\n", (char)ch);

    return 0;
}
