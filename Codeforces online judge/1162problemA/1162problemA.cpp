#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int n, h, m, l, r, x, A[100], i, j;
    long long ans;

    scanf("%d%d%d", &n, &h, &m);

    for(i = 1; i <= n; i++) {
        A[i] = -1;
    }

    for(j = 1; j <= m; j++) {
        scanf("%d%d%d", &l, &r, &x);

        for(i = l; i <= r; i++) {
            if(A[i] < x && A[i] != -1) {
                A[i] = A[i];
            }
            else {

                A[i] = x;

            }
        }
    }
    ans = 0;


    for(i = 1; i <= n; i++) {
        if(A[i] == -1) {
            ans = ans + (h * h);
        }
        else {
            ans = ans + (A[i] * A[i]);
        }
    }
    printf("%I64d\n", ans);
    return 0;
}
