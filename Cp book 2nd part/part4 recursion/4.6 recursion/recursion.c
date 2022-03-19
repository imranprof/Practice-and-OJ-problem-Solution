#include<stdio.h>

void recurse(int count)
{
    if(count == 5){
        return;
    }

    printf("I am learning recursion.\n");

    recurse(count+1);  // here call the recurse function in recurse function

    return;
}

int main()
{
    recurse(1);   // call the recurse function from main function and send value 1

    return 0;
}
