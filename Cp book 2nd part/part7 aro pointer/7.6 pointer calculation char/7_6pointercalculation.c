#include<stdio.h>

int main()
{
    char *str = "Bangladesh";

    printf("%c, %c, %c, %c\n", *str, *(str + 1), *(str + 2), *(str + 3));  // here *(str + 1) means next location of this string character

    printf("%c, %c, %c, %c\n", *str, *str + 1, *str + 2, *str + 3); //here *str + 1 means str er ascii e sathe 1 add kora

    return 0;
}
