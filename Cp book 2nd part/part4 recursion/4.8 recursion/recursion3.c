#include<stdio.h>

void recurse(int count)
{
    if(count > 5){
        return;
    }

    recurse(count+1);  // here call recurse function by its own

    printf("Count = %d\n", count);

}

int main()
{
    recurse(1);  // here call recurse function and send value 1;

    return 0;
}
