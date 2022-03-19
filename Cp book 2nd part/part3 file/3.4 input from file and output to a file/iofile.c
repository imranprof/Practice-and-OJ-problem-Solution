#include<stdio.h>

int main()
{
    FILE *fp_in, *fp_out;  // here i declare file handler fp_in for take input and fp_out for get output

    char *input_file = "in.txt";        // declare char pointer input_file for  in.txt file
    char *output_file = "out.txt";      // declare char pointer out_file for out.txt file

    int num1, num2, sum;

    fp_in = fopen(input_file, "r");     // here i open the input_file by read mode
    fp_out = fopen(output_file, "w");   // here i open the output_file by write mode

    fscanf(fp_in, "%d", &num1);         // here i use fscanf() function for input 1st number from in.txt file
    fscanf(fp_in, "%d", &num2);         // here use fscanf() function for input 2nd number from in.txt file

    // here i use fscanf 2 time because fscanf can only one string as a input at a time

    sum = num1 + num2;

    printf("%d %d %d \n", num1, num2, sum);  // print in console

    fprintf(fp_out, "sum is = %d\n", sum);  // print the value of sum in out.txt file

    fclose(fp_in);      // close in.txt file
    fclose(fp_out);     // close out.txt file


    return 0;
}
