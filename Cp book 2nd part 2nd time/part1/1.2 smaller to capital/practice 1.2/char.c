#include<stdio.h>

int test(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        return 0;
    }
    else
        return 1;
}

int main()
{
    char a;
    int result;

    scanf("%c", &a);

    result = test(a);

    printf("Result = %d\n", result);

    return 0;
}
