#include <stdio.h>
#include <stdlib.h>

int main()
{
    int imr[6]={1,2,3,4,5,6};

    // int imr[] = {1, 2, 3, 4, 5, 6};

    int ort;

    for(ort=5; ort>=0; ort--){

        printf("%d\n", imr[ort]);

    }
    return 0;

}
