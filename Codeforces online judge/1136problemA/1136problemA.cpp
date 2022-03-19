#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i, n, k, A[110], B[110], cnt, ans;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d%d", &A[i], &B[i]);
    }
    scanf("%d", &k);

    for(i = 0; i < n; i++) {
        if(k >= A[i] && k <= B[i]) {
            cnt = i;
            break;
        }
    }
    ans = n - cnt;

    printf("%d\n", ans);

    return 0;
}
