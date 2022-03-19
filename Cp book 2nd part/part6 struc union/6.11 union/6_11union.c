#include<stdio.h>

union u {
    char ch;
    int x;
    int y;
} uv;       //union use same location for all variable in the union

int main()
{
    uv.ch = 'Á';
    printf("uv.ch = %c\n", uv.ch);

    uv.x = 17;
    printf("uv.x = %d\n", uv.x);
    printf("uv.ch = %c\n", uv.ch);

    uv.y = 18;
    printf("uv.y = %d\n", uv.y);

    printf("uv.ch = %c\n", uv.ch);
    printf("uv.x = %d\n", uv.x);



    return 0;
}
