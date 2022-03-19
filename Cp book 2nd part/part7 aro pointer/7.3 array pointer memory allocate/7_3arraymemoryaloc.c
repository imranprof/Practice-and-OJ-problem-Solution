#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ara[5], num[5];        //here i declare a pointer array *ara[]
    int i, j, n;

//this loop is for locate memory and input all class and student marks

    for (i = 0; i < 5; i++) {

        printf("Enter the number of student for class %d : ", i + 1);

        scanf("%d", &n);
        num[i] = n;
        ara[i] = (int *) malloc(sizeof(int) * n);   //this is for locate the memory for array

        if (ara[i] == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        for (j = 0; j < n; j++) {       //this loop is for input the every student marks

            printf("Enter marks for student %d: ", j + 1);
            scanf("%d", &ara[i][j]);

        }
    }

    //now print the results

    printf("Output\n");

    for (i = 0; i < 5; i++) {        //this is for output the class
        printf("Class %d: ", i + 1);

        for (j = 0; j < num[i]; j++) {
            printf("%4d", ara[i][j]);       // here output all student marks //here 4d means output after 4 character
        }

        printf("\n");
    }

    return 0;
}
