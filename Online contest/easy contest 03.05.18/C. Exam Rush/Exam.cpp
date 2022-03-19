#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, *tm, cnt;
    long long int t, sum;

    cin >> n >> t;

    tm = (int *) malloc(n * sizeof(int));

    for(i = 0; i < n; i++) {
        scanf("%d", &tm[i]);
    }

    sort(tm, tm+n);

    for(i = 0, cnt =0, sum = 0; i < n; i++) {
        if(sum + tm[i] <= t) {
            sum = sum + tm[i];
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
