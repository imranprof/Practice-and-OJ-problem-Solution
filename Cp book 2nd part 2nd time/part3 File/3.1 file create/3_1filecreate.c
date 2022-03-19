#include<stdio.h>

int main()
{
    FILE *fp;      //here FILE is file handler and fp is a file type pointer

    char filename[] = "my_file.txt";        //here i create a txt file name my_file.txt

    fp = fopen(filename, "w");      //here i open the txt file by fopen function and open it write mode "w"

    fprintf(fp, "This is a file created by my program! ");      //here i printf a string
    fprintf(fp, "I am so happy.");

    fclose(fp);     //here i close the file by use fclose function

    return 0;
}
