#include<stdio.h>

void recurse(int count)
{
    if(count > 5){
        return;
    }

    printf("Count = %d\n", count);

    recurse(count+1);  // here call recurse function in recurse funtion
}

int main()
{
    recurse(1);  // call recurse funtion and send value 1

    return 0;
}
