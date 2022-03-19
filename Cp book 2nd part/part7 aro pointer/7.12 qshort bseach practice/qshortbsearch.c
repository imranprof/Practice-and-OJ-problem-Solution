#include<stdio.h>
#include<stdlib.h>

int comparefunc (const void * a, const void * b)
{
    return (*(int *)a - *(int *)b );        //for ascending
}

int main()
{
    int i, n = 5, key, *item;
    int values[] = { 65, 6, 100, 1, 250};

    qsort(values, 5, sizeof(int), comparefunc);  //here i sort values array to ascending order by qsort function

    while(1) {

        printf("Enter the value of the key (0 to exit): ");
        scanf("%d", &key);
        if (key == 0){
            break;
        }

        item = (int *) bsearch(&key, values, n, sizeof(int), comparefunc);  //here use bsearch function for search item in this array

        if (item != NULL){
            printf("Item found: %d\n", *item);  //here print found item
        }
        else {
            printf("Item not found in array\n");
        }
    }

    return 0;
}
