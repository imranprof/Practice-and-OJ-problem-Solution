#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, A[200010], con, cnt, i;

    while(scanf("%d", &n) == 1) {
        for(i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }

        sort(A, A+n);

        cnt = 0;
        con = 1;

        for(i = 0; i < n; i++) {
            if(A[i] >= con) {
                cnt++;
                con++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
