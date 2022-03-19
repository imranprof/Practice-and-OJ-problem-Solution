#include<stdio.h>

int main()
{
    FILE *fp;

    char filename[] = "my_file.txt";

    fp = fopen(filename, "w");  //here i open the text file in write mode

    fprintf(fp, "This is a file created by my program! ");  //i write in the text file
    fprintf(fp, " I am so happy.\n");

    fclose(fp);   // here i close the file by close pointer

    fp = fopen(filename, "a");   // here i reopen the file in append mode

    fprintf(fp, "Second line.\n");  // append new line

    fclose(fp);                 //here re close the file

    fp = fopen(filename, "a");   // i reopen this in append mode

    fprintf(fp, "This is third line. \n");  // append new line

    fclose(fp);                 //here close the file

    return 0;
}
