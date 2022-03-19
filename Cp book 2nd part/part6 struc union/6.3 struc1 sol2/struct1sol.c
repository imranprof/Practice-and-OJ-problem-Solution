#include<stdio.h>

int main()
{
    struct student {
        int id;
        char name[40];
    };

    //this solution using strcpy() function

    struct student one;

    one.id = 1;
    strcpy(one.name, "Imran hossen"); //here i use strcpy() function

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);



    return 0;
}
