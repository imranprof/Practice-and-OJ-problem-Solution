#include<stdio.h>
#include<algorithm>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int i, N, *ages, m;

    while(scanf("%d", &N))
    {
        if (N == 0) break;

        ages = (int *) malloc(N * sizeof (int));  /*this is dynamic memory allocation by malloc() function. */
        for(i = 0; i < N; i++) {
            scanf("%d", &ages[i]);
        }
        sort(ages, ages+N);     /* this is c++ STL sorting function */

        for (i = 0; i < N; i++) {
            printf("%d", ages[i]);
            if (i != N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
