#include<stdio.h>

int main()
{
    struct student {        //here create a structure
        int id;
        char *name;
    };

    struct student one;     //here i declare structure variable

    one.id = 1;
    one.name = "Imran hossen";

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}
