#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i, j, t, n, A[100], hijump, lojump, x;

    cin >> t;

    for(j = 1; j <= t; j++){
        cin >>n;

        for(i = 0;i < n; i++){
            cin >> A[i];
        }
        hijump = 0;
        lojump = 0;
        for(i = 0; i < n-1; i++){
            if(A[i] < A[i+1]) hijump++;
            if(A[i] > A[i+1]) lojump++;
        }

        printf("Case %d: %d %d\n", j, hijump, lojump);

    }

    return 0;
}
