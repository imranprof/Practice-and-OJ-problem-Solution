#include<stdio.h>

int main()
{
    FILE *fp_in, *fp_out;           //here declare two file handler for handle input and output file
    char *input_file = "in.txt";
    char *output_file = "output.txt";

    int num1, num2, sum;

    fp_in = fopen(input_file, "r");         //here open input file by read mode
    fp_out = fopen(output_file, "w");       // here open output file by write mode

    fscanf(fp_in, "%d", &num1);
    fscanf(fp_in, "%d", &num2);

    sum = num1 + num2;

    printf("%d %d %d", num1, num2, sum);

    fprintf(fp_out, "%d\n", sum);       //this is for save output in output.txt file

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
