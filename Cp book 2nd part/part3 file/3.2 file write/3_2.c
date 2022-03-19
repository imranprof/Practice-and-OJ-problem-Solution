#include<stdio.h>

int main()
{
    FILE *fp;  // i declare a file type pointer *fp

    char filename[] = "my_file.txt";  // here i declare a string what i use as file name

    fp = fopen(filename, "w");  //here i use fopen() function for open a file and write this

    fprintf(fp, "This is a file created by my program! ");
    fprintf(fp, "I am so happy.\n");

    fclose(fp);  // here i close this file by fclose() function

    fprintf(fp, "Second line. \n"); //the file close after this print, so this is not print in file

    return 0;
}
