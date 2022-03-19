#include<stdio.h>

void recurse()
{
    char *s = "Hurrey, i am learning recursion!";

    printf("%s\n", s);

    recurse();
}

int main()
{
    recurse();

    return 0;
}
