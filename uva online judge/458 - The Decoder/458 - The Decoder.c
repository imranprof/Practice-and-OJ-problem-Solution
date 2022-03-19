#include<stdio.h>

int main()
{
    int i;
    char str[10000];

    while(scanf(" %[^\n]", str) != EOF)
    {
        for (i = 0; str[i] != '\0'; i++) {
            str[i] = str[i] - 7;
        }

        printf("%s\n", str);
    }
    return 0;
}
