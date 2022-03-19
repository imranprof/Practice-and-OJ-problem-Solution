#include<stdio.h>

int main()
{
    char s[] = "Bangladesh";

    char *p;

    p = s;

    printf("Name of our country: %s\n", p);  // here i print pointer value where i put the string

    return 0;
}
