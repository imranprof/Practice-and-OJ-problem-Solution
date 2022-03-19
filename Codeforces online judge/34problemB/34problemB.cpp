#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int i, m, n, A[1005], sum;

    scanf("%d%d", &n, &m);

    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    sort(A, A+n);

    for(i = 0, sum = 0; i < m; i++) {
        if(A[i] < 0) sum = sum - A[i];
    }

    printf("%d\n", sum);

    return 0;
}
