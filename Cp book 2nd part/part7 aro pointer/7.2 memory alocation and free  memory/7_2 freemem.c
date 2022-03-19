#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *marks;
    int i, n;

    printf("Please enter the number of students: ");
    scanf("%d", &n);

    //allocate memory
    marks = (int *) malloc(sizeof(int) * n); //here i typecast by (int *) and use malloc function for allocate size

    if (marks == NULL) {            //check is malloc function work properly?
        printf("Memory allocation failed for marks\n");
        return 1;
    }

    printf("Enter the marks for each student: \n");

    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("Now here you can see the values: \n");

    for (i = 0; i < n; i++) {
        printf("%d\n", marks[i]);
    }

    /// now free the memory

    free(marks);        //here free the memory by using free() function

    return 0;
}
