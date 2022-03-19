#include<stdio.h>

int main()
{
    struct student {
        int id;
        char *name;  //char type pointer
    };

    struct student one;

    one.id = 1;
    one.name = "Imran hossen"; //here the solution by using char pointer in struct

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}
