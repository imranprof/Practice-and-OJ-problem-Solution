#include<stdio.h>

//This is a Function , i use this function in my main function "grade(int g)" //
//I create grade() function for use  main() function in this program//

int grade(int g)
{




    if(g<=100 && g>=80){

        printf("Your grade is A+ \n");
    }

    else if(g<=79 && g>=70){

        printf("Your grade is A \n");
    }

    else if(g<=69 && g>=60){

        printf("Your grade is A- \n");
    }

    else if(g<=59 && g>=50){

        printf("Your grade is B \n");
    }

    else if(g<=49 && g>=40){

        printf("Your grade is C \n");
    }

    else if(g>=33 && g<=39){

        printf("Your grade is D \n");
    }

    else if(g>=0 && g<33){

        printf("Your grade is F \n");
    }

    else {

        printf("You do not Input Between 1-100. you Input %d \n",g);
    }

    return g;


}

// This is the start of main Function//

int main()
{

    int b,e,m,bangla,english,math,tc,i;

    printf("Enter how many time you want to run: ");
    scanf("%d",&tc);

//tc & i variable use only for looping the main function
//THIS LOOP use for how many time i want to run this program to input this

    for(i=1;i<=tc;i++){


    printf("\nEnter your number in Bangla: ");
    scanf("%d",&b);

    printf("Enter your Number in English: ");
    scanf("%d",&e);

    printf("Enter your Number in Math: ");
    scanf("%d",&m);

    printf("\n\nIn Bangla: ");
    bangla=grade(b);

    printf("In English: ");
    english =grade(e);

    printf("In Math: ");
    math =grade(m);

    printf("\nYour Total Number Is:%d",e+b+m);

    printf("\n\n=====================DONE======================\n\n");



    }


    return 0;


}



