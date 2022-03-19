#include<stdio.h>

int main()
{
    int i, n, arr[20], cnt, j, k, temp;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        for(j = 0; j < 10; j++) {
            scanf("%d", &arr[j]);
        }

        if(i == 1) {
            printf("Lumberjacks:\n");
        }

        if(arr[0] > arr[1]) {
           for(j = 0, cnt = 0; j < 10; j++) {
                for(k = 1; k < 10 - 1; k++) {
                    if(arr[k + 1] > arr[k]) {
                        temp = arr[k];
                        arr[k] = arr[k+1];
                        arr[k+1] = temp;
                        cnt++;
                    }
                }
           }
        }
        else if(arr[0] < arr[1]) {
            for(j = 0, cnt = 0; j < 10; j++) {
                for(k = 1; k < 10 - 1; k++) {
                    if(arr[k + 1] < arr[k]) {
                        temp = arr[k];
                        arr[k] = arr[k+1];
                        arr[k+1] = temp;
                        cnt++;
                    }
                }
           }
        }

        if(cnt == 0) {
            printf("Ordered\n");
        }
        else {
            printf("Unordered\n");
        }

    }
    return 0;
}
