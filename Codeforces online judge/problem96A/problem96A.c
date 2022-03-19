#include<stdio.h>
#include<string.h>

int main()
{
    int i, j;

    char str[110], str2[105], str_0[]= "0000000", str_1[]= "1111111";
    char *sub_1, *sub_0;

    scanf(" %[^\n]", str);

    sub_1 = strstr(str, str_1);
    sub_0 = strstr(str, str_0);

    if(sub_0 != NULL || sub_1 != NULL) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
