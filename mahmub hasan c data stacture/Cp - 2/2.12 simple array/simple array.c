#include<stdio.h>

int main()
{
    int i, id, maximum_score, a[10];

    for(i = 0; i < 10; i++)
        a[i] = 0;

    for(i = 0; i < 100; i++){

        scanf("%d", &id);

        a[id - 1]++;
    }
    maximum_score = 0;

    for(i = 0; i < 10; i++){

        if(maximum_score < a[i])
            maximum_score = a[i];
    }

    printf("Winners are: \n");

    for(i = 0; i < 10; i++){

        if(maximum_score == a[i])
            printf("%d\n", i + 1);
    }

    return 0;
}
