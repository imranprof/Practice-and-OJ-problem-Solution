#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i, n, m, j, k;
    double B[30], A[30], f[30], S[30], ans;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%d", &m);

        for(j = 0; j < m; j++) {
            scanf("%lf %lf %lf", &S[j], &A[j], &f[j]);

            B[j] = (((S[j]/ A[j]) * f[j]) * A[j]);

        }
        for(j = 0, ans = 0; j < m; j++) {
            ans = ans + B[j];
        }
        printf("%.0lf\n", ans);
    }

    return 0;
}
