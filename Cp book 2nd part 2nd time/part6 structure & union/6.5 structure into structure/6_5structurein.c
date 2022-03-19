#include<stdio.h>
#include<string.h>

struct nametype {   //a structure name nametype
    char first[20];
    char last[20];
};

struct student {        //a structure name student
    int id;
    struct nametype name;       //here i used a structure into structure
};

int main()
{
    struct student one;

    scanf("%d", &one.id);
    scanf("%s", one.name.first);        //access a structure into another structure
    scanf("%s", one.name.last);

    printf("ID: %d\n", one.id);
    printf("Name: %s %s\n", one.name.first, one.name.last);

    return 0;
}
