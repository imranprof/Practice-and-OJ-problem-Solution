#include<stdio.h>

int main()
{
    int i, count = 0;

    char name[100];

    gets(name);

    for(i = 0; name[i] != '\0'; i++){

        count++;

    }

    printf("%d\n", count);

    return 0;
}
