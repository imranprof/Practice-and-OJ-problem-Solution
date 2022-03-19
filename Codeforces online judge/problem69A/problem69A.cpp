#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, N, x, y, z, sum_x, sum_y, sum_z;

    scanf("%d", &N);
    sum_x = sum_y = sum_z = 0;
    for (i = 1; i <= N; i++) {
        scanf("%d %d %d", &x, &y, &z);
        sum_x = sum_x + x;
        sum_y = sum_y + y;
        sum_z = sum_z + z;
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        printf("YES\n");
    }

    else {
        printf("NO\n");
    }

    return 0;
}
