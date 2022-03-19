#include<stdio.h>

void recurse()
{
    static int count = 1;

    if (count > 5){
        return;
    }

    printf("Count = %d\n", count);

    count = count + 1;

    recurse();  // call recurse in recurse function
}

int main()
{
    recurse(); // here call the recurse function

    return 0;
}
