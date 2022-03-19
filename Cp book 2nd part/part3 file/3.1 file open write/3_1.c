#include<stdio.h>

int main()
{
    FILE *fp;  // FILE *fp mane fp namer ekta File type pointer .
                //file is not a data type its a file handle , its use for input/output in a file

    char filename[] = "my_file.txt";

    fp = fopen(filename, "w");   //fopen(filename, "mode") is function  use "w" for write by program
                                //here i open the file by fopen function

    fprintf(fp, "This is a created by my program! "); //here i print a string in the file
    fprintf(fp, "i am so exited");                  //here also print a string

    fclose(fp); //fclose(pointer) for close this file

    return 0;
}
