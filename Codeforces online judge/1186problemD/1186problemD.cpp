#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, sum, B[50005], j, cnt, C[50005], k;

    double A[100005];

    while(scanf("%d",&n) == 1) {
        sum = 0;
        cnt = 0;
        for(i = 0, j = 0, k = 0; i < n; i++) {
            scanf("%lf", &A[i]);

            if(round(A[i])>A[i]){
                B[j] = i;
                j++;
                cnt++;
            }
            if(round(A[i])<A[i] && (A[i] < 0)){
                C[k] = i;
                k++;
            }

            sum +=int(round(A[i]));
            A[i] = round(A[i]);
        }

        //printf("sum = %d, cnt = %d\n", sum, cnt);
        if(sum != 0){
            if(sum > 0){
                for(j = 0;;j++){
                    if(sum == 0) break;
                    A[B[j]] = A[B[j]]-1;
                    sum = sum - 1;

                }
            }
            else if(sum<0){
                for(k = 0; ;k++){
                    if(sum==0)break;
                    A[C[k]] = A[C[k]] + 1;
                    sum = sum + 1;
                }
            }
        }


        for(i = 0; i < n; i++) {
            printf("%d\n", int(A[i]));
        }

    }


    return 0;
}
