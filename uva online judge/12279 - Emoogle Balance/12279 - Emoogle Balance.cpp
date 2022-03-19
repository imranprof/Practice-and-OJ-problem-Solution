#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n, A[1005], zero, pos, num, i, j, ans;
    j = 1;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0) break;
        zero = pos = 0;
        for(i = 0; i < n; i++){
            cin >> A[i];
            if(A[i] > 0) num = A[i];
            if(A[i] == 0) zero++;
            else pos++;
        }
        ans = pos - zero;

        printf("Case %d: %d\n", j, ans);
        j++;
    }
    return 0;
}
