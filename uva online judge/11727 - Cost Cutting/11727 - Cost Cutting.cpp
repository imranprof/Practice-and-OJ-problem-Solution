#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, N, num[10], j;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {

        for (j = 0; j < 3; j++){
            scanf("%d", &num[j]);
        }
        sort(num, num + 3);     /*this is c++ stl sorting function */

        printf("Case %d: %d\n", i, num[1]);

    }



    return 0;
}
