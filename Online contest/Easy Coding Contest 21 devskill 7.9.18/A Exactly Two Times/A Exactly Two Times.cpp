#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i, j, t, N, A[10002], dis, num[10002];



    scanf("%d", &t);

    for(i = 1; i <= t; i++) {


        scanf("%d", &N);

        for(j= 0; j < 10002; j++) {
            num[j] = 0;
        }

        for(j = 0; j < N; j++) {
            scanf("%d", &A[j]);
            num[A[j]]++;
        }

        for(j = 0; j < N; j++) {
            if(num[j]==2) {
                dis = j;
            }
        }

        cout << dis << endl;
    }

    return 0;
}
