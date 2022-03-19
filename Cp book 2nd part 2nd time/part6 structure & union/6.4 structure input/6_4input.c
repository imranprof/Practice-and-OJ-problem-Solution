#include<stdio.h>
#include<string.h>

struct student {        //create a structure name student
    int id;
    char name[40];
};

int main()
{
    struct student one;

    scanf("%d", &one.id);           //input i structure variable
    scanf(" %[^\n]", one.name);

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}
