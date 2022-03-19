#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = fopen("in.txt", "r");  // here i open the txt file

    if(fp == NULL){
        perror("can't open file");
        return EXIT_FAILURE;
    }

    int ch;

    ch = fgetc(fp);  // here get input from file and put it in ch

    printf("%c\n", (char)ch);   // print the first char from ch

    ch = fgetc(fp);     // input 2nd char from input file

    printf("%c\n", (char)ch);   // print the 2nd char from input file

    fseek(fp, 0, 0);        // here i use fseek(FILE *stream, long int offset, int whence) function for change the file position

    ch = fgetc(fp);     // input  char from input file

    printf("%c\n", (char)ch); // print a char from input file

    fclose(fp);     // close the file


    return 0;
}
