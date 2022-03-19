#include<stdio.h>

int main()
{
    struct student {
        int id;
        char name[40];
    };

    struct student one;

    one.id = 1;
    one.name = "Imran hossen";  //here the problem is : assignment operation can n't apply in char type array

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}
