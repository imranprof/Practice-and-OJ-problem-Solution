#include<stdio.h>

struct s1 {
    int n;
    double d;
    char c;
};
//should be declare variable by size .
struct s2 {
    char c;
    int n;
    double d;
};

int main()
{
    printf("char size : %lu bytes\n", sizeof(char));
    printf("int size : %lu bytes\n", sizeof(int));
    printf("double size : %lu bytes\n", sizeof(double));

    printf("s1 size : %lu\n", sizeof(struct s1));   //here s1 structure size is 24 bytes
    printf("s2 size : %lu\n", sizeof(struct s2));   //here s2 structure size is 16 bytes


    return 0;
}
