#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[1004];

    scanf(" %[^\n]", str);
    str[0] = toupper(str[0]);
    printf("%s\n", str);

    return 0;
}
