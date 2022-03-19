#include<stdio.h>

int main()
{
    int i, num[100], n, pos, mn_num;

    printf("How many number you want to input: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    mn_num = num[0];
    pos = 0;

    for(i = 1; i < n; i++) {
        if(mn_num > num[i]) {
            mn_num = num[i];
            pos = i;
        }
    }

    printf("Smallest number is %d and index is %d position is %d\n", mn_num, pos, pos+1);

    return 0;
}
