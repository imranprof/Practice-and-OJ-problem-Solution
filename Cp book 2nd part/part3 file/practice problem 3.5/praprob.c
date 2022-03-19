#include<stdio.h>

int main()
{
    FILE *fp_inm, *fp_inb, *fp_ine, *fp_outav;

        // here declare file handler *fp_inm for math in, *fp_inb for bangla in, *fp_ine for english in, *fp_outav for output

    char *math_in = "math.txt";     // here char pointer *math_in for math.txt file
    char *bangla_in = "bangla.txt";     // here char pointer *bangla_in for bangla.txt file
    char *english_in = "english.txt";   // here char pointer *english_in for english.txt file
    char *avg_out = "out.txt";         // here char pointer *avg_out for out.txt file

    char math_s[80], bangla_s[80], english_s[80];       // here i declare 3 string for read from the file as string

    int roll[10], math[10], bangla[10], english[10], i, j;  // here

    double marks_avg[10];

    fp_inm = fopen(math_in, "r");       // here open math_in (math.txt) file in fp_inm handler

    fp_inb = fopen(bangla_in, "r");     // here open bangla_in (bangla.txt) file in fp_inb handler

    fp_ine = fopen(english_in, "r");    // here open english_in (english.txt) file in fp_ine handler

    fp_outav = fopen(avg_out, "w");     // here open avg_out (out.txt) file in fp_outav handler

    for(i = 0; i < 10; i++){

        fgets(math_s, 80, fp_inm);  // input the string from math.txt file and put it math_s

        fgets(bangla_s, 80, fp_inb);    // input the string from bangla.txt file and put it bangla_s

        fgets(english_s, 80, fp_ine);   // input the string from english.txt file and put it english_s

        sscanf(math_s, "%d %d", &roll[i], &math[i]);    // here get input from math_s and put it roll[] & math[] variable
        sscanf(bangla_s, "%d %d", &roll[i], &bangla[i]);    //here get input from bangla_s and put it roll[] & bangla[] variable
        sscanf(english_s, "%d %d", &roll[i],  &english[i]);    // here get input from english_s and put it roll[] & english[] variable
    }

    for(i = 0; i < 10; i++){

        marks_avg[i] = (math[i] + bangla[i] + english[i]) / 3.0;  // here calculation the average marks of every studenttttt
    }

    for(j = 0; j < 10; j++){

        printf("%d %.2lf\n", roll[j], marks_avg[j]);   // here print the average in console
    }

    for(j = 0; j < 10; j++){

        fprintf(fp_outav, "%d %.2lf\n", roll[j], marks_avg[j]);     // here print all student average in output (out.txt) file
    }

    fclose(fp_inm);     // close math.txt file
    fclose(fp_inb);     // close bangla.txt file
    fclose(fp_ine);     // close english.txt file
    fclose(fp_outav);   // close out.txt file

    return 0;
}
