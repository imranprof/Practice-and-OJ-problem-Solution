#include<stdio.h>

char to_upper(char ch)      //here to upper function by bitwise AND
{
    return ch & 95;
}

char to_lower(char ch)      //here to lower function by bitwise OR
{
    return ch | 32;
}

int main()
{
    int i;
    char *str = "AbCdEfGhIjKlMnOpQrStUvWxYz";

    for (i = 0; i < 26; i++) {
        printf("Uppercase : %c, ", to_upper(str[i]));
        printf("Lowercase : %c, ", to_lower(str[i]));
    }

    return 0;
}
