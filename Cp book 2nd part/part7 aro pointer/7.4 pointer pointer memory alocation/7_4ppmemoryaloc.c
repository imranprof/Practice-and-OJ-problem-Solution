#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **ara, num[12];     //here i declare pointer pointer **ara
    int i, j, total_classes, n;

    printf("Enter the total number of classes: ");

    scanf("%d", &total_classes);        //this is for input the classes
        ara = (int **) malloc(sizeof(int *) * total_classes);       //here i allocate memory for classes

    if (ara == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

// this loop is for input student and students marks
    for (i = 0; i < total_classes; i++) {

        printf("Enter the number of students for class %d : ", i + 1);
        scanf("%d", &n);    //here i input how many student in every class
        num[i] = n;
        ara[i] = (int *)malloc(sizeof(int) * n);    //here i allocate the memory for student

        if (ara[i] == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        for (j = 0; j < n; j++) {
            printf("Enter marks for student %d: ", j + 1);
            scanf("%d", &ara[i][j]);        //here input the marks for every students
        }

    }

    // now print the results

    printf("Output\n");

    for (i = 0; i < total_classes; i++) {
        printf("Class %d : ", i + 1);   //here output every class

        for (j = 0; j < num[i]; j++) {
            printf("%4d", ara[i][j]);   //here output every class student marks
        }
        printf("\n");
    }

    return 0;
}
