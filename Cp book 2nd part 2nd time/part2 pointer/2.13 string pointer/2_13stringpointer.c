#include<stdio.h>

int main()
{
    char s[] = "Bangladesh";

    char *p;

    p = s;

    printf("Name of our country: %s\n", p);     // for full string pointer there does not need * after pointer variable

    return 0;
}
