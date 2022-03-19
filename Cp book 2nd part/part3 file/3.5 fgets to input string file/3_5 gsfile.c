#include<stdio.h>

int main()
{
    FILE *fp_in, *fp_out;

    char *input_file = "in.txt";    // char pointer input_file for  in.txt file
    char *output_file = "out.txt";  // char pointer output_file for out.txt file

    char line[80];      // line for get the string from in.txt

    int num1, num2, sum;

    fp_in = fopen(input_file, "r");     // here open the input_file  (in.txt) as read mode in fp_in handler
    fp_out = fopen(output_file, "w");   // here open the out_file (out.txt) as write mode in fp_out handler

    fgets(line, 80, fp_in);         // here input the string from input file (in.txt) and put it string line
    printf("Line: %s\n", line);         // print the line in console

    sscanf(line, "%d %d", &num1, &num2);       //input to integer from the string line

    sum = num1 + num2;

    printf("%d %d %d\n", num1, num2, sum);      // print the output in console

    fprintf(fp_out, "Sum is = %d\n", sum);      // print the output of sum in fp_out / out.txt file

    fclose(fp_in);      // here close the fp_in file in.txt file
    fclose(fp_out);     // here close the fp_out / out.txt file

    return 0;
}
