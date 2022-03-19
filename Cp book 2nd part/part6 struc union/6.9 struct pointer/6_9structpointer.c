#include<stdio.h>
#include<string.h>

typedef struct {        //here i create struct datatype called nametype
    char first[20];
    char last[20];
} nametype;

typedef struct {        //here i create struct datatype called studenttype
    int id;
    nametype name;
    char grade[3];
} studenttype;

//this function is for calculate the grade for student
void calculate_grade(studenttype* s, int mark)      //call by reference by using pointer
{
    if (mark >= 80) {
        strcpy(s->grade, "A+");
    }
    else if (mark >= 70) {
        strcpy(s->grade, "A");
    }
    else if (mark >= 60) {
        strcpy(s->grade, "A-");
    }
    else if (mark >= 50) {
        strcpy(s->grade, "B");
    }
    else if (mark >= 40) {
        strcpy(s->grade, "C");
    }
    else {
        strcpy(s->grade, "F");
    }
}


//here is the main function
int main()
{
    studenttype student[5];
    int i, n = 5;
    int marks[] = {72, 82, 60, 20, 50};

    for (i = 0; i < n; i++) {           //this loop is use for input student id , name & and copy grade
        printf("Enter the ID for student %d: ", i+1);
        scanf("%d", &student[i].id);

        printf("Enter the first name for student %d: ", i+1);
        scanf("%s", student[i].name.first);

        printf("Enter the last name for student %d: ", i+1);
        scanf("%s", student[i].name.last);

        strcpy(student[i].grade, "");       //use strcpy function copy a string

        printf("\n");
    }

    for (i = 0; i < n; i++) {       //this loop is use for call the calculate_grade function and calculate the grade for student
        calculate_grade(&student[i], marks[i]);
    }

    printf("Output: \n\n");

    for (i = 0; i < n; i++) {               //this loop is for output the student id, name, and grade
        printf("ID: %d\n", student[i].id);

        printf("Name: %s %s\n", student[i].name.first, student[i].name.last);

        printf("Grade: %s\n", student[i].grade);
    }

    return 0;
}
