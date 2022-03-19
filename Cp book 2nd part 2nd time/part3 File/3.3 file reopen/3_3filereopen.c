#include<stdio.h>

int main()
{
    FILE *fp;

    char filename[] = "my_file.txt";

    fp = fopen(filename, "w");      //open this file by write mode

    fprintf(fp, "This is a file created by my program! ");
    fprintf(fp, "I am so happy. \n");

    fclose(fp);

    fp = fopen(filename, "a");  //here i reopen this file by append mode "a"

    fprintf(fp, "Second line.\n");
    fclose(fp);



    return 0;
}
