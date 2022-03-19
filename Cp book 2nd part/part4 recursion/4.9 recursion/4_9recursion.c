#include<stdio.h>

void recurse(int count)
{
    if (count > 5){
        return;
    }

    printf("Count : %d\n", count);

    recurse(count+1);  // call recurse into recurse

    printf("Count = %d\n", count); // here print from stack 5 to 1
}

int main()
{
    recurse(1);  // here call the recurse function

    return 0;
}
