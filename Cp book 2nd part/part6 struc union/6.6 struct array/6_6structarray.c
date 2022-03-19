#include<stdio.h>
#include<string.h>

struct nametype {
    char first[20];
    char last[20];
};

struct studenttype {
    int id;
    struct nametype name;   //i call a struct into a struct
};

int main()
{
    struct studenttype student[5];

    int i, n = 5;

    for (i = 0; i < n; i++) {       // by this loop input student id and name

        printf("Enter the ID for student %d: ", i+1);
        scanf("%d", &student[i].id);                        //input the student id here

        printf("Enter the first name for student %d: ", i+1);
        scanf("%s", student[i].name.first);                     //input student first name

        printf("Enter the last name for student %d: ", i+1);
        scanf("%s", student[i].name.last);                      //input student last name

        printf("\n");
    }


    printf("Output: \n\n");

    for (i = 0; i < n; i++) {               //by this loop print student id and name

        printf("ID: %d\n", student[i].id);      //print student id

        printf("Name: %s %s\n", student[i].name.first, student[i].name.last);       //print student first and last name
    }

    return 0;
}
