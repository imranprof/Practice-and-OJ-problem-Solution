#include<stdio.h>

int main()
{
    struct student {        //create structure name student
        int id;
        char name[40];
    };

    struct student one;     //declare a variable

    one.id = 1;

    strcpy(one.name, "Imran hossen");       //copy a string into one.name by strcpy() function

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}
