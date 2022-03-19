#include<stdio.h>

int main()
{
    int arr[10], arr2[10], i, dis, x;

    for(i = 0; i < 10; i++) {
        arr2[i] = 0;
    }

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        x = arr[i];
        arr2[x]++;
    }

    for(i = 1; i < 10; i++) {
        if(arr2[i] > 1) {
            dis = i;
        }
    }

    printf("You entered %d\n", dis);

    return 0;
}
