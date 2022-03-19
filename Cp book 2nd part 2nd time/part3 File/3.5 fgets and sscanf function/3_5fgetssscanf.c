#include<stdio.h>

int main()
{
    FILE *fp_in, *fp_out;
    char *input_file = "in.txt";
    char *output_file = "output.txt";

    char line[80];      //this is for read the string

    int num1, num2, sum;

    fp_in = fopen(input_file, "r");
    fp_out = fopen(output_file, "w");

    fgets(line, 80, fp_in);
    printf("Line: %s\n", line);     //this is for check the full string

    sscanf(line, "%d %d", &num1, &num2);        //use sscanf() for input integer from string

    sum = num1 + num2;

    printf("%d %d %d\n", num1, num2, sum);

    fprintf(fp_out, "%d\n", sum);

    fclose(fp_in);
    fclose(fp_out);         // here use fclose() is for close input and output file



    return 0;

}
