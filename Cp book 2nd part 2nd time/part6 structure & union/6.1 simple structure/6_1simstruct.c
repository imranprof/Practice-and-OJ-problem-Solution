#include<stdio.h>

int main()
{
    struct student {        //here i create a structure
        int id;
        char name[40];
    };

    struct student one;     //here i declare the struct variable

    one.id = 1;                     //here i use struct variable
    one.name = "Imran hossen";          //here assignment is not possible in character array , this is wrong

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}
