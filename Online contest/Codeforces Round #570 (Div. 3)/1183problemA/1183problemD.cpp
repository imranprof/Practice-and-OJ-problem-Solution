#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, q, n, A[200001], B[200005], sum, j, l;

    scanf("%d", &q);

    for(j = 1; j <= q; j++) {


        scanf("%d", &n);

        for(i = 0;i < n; i++) {
            scanf("%d", &A[i]);
        }

         for(i = 0; i <= n; i++) {
            B[i] = 0;
        }



        for(i = 0; i < n; i++) {
            B[A[i]]++;
        }


        sort(B, B+n+1);
        sum = 0;
        for(i = n; i > 0; i--) {
            if(B[i] == 0 || B[i] == -1) break;
            if(B[i] == B[i-1]) {
                sum = sum + B[i];

                for(l = i-1; l > 0; l--) {
                    if(B[l] == B[i]) B[l] = B[l] - 1;
                    else break;
                }
            }
            else {
                sum = sum + B[i];
            }

        }

        printf("%d\n", sum);
    }


    return 0;
}
