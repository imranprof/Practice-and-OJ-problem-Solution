#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp_in, *fp_out;

    char *input_file = "photo.jpg";  // here i assign photo.jpg in pointer input_file
    char *output_file = "cphoto.jpg"; // here i declare copy photo at pointer output_file

    int ch;         /// here i declare the int ch for store character

    fp_in = fopen(input_file, "rb");    // here open the input_file as rb (read binary) mode

    if(fp_in == NULL){                  // here check is this input file NULL
        perror("File opening failed");      // if input file are NULL then print this message by perror() fucntion
        return EXIT_FAILURE;            // here return EXIT_FAILURE for confirm that this file is not input successful
    }

    fp_out =   fopen(output_file, "wb");       // here open the output file as wb (write binary) mode for copy input file

    while(1) {

        ch = fgetc(fp_in);   // in int ch get all binary as integer by fgetc() function

        if (ch == EOF){     // if that get the EOF then break this loop
            break;
        }

        fputc(ch, fp_out);      // output this binary as a image by fputc() function
    }

    fclose(fp_in);      // close the input file
    fclose(fp_out);     // close the output file

    return 0;
}
