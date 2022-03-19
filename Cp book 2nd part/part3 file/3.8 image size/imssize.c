#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp_in;

    char *input_file = "photo.jpg";

    fp_in = fopen(input_file, "rb");

    if(fp_in == NULL){
        perror("Can't open file");
        return EXIT_FAILURE;
    }

    fseek(fp_in, 0, SEEK_END);

    printf("File size: %ld bytes\n", ftell(fp_in));   // ftell function for count the file size

    printf("File size (KiloByte): %ld KB\n", ftell(fp_in)/ 1024);

    fclose(fp_in);

    return 0;
}
