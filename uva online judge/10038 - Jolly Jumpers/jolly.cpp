#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int num[3002], sub[3002], i, j, flag, N, K, l;

    while(scanf("%d", &N) != EOF)
    {

        K = N;

        for (i = 0; i < K; i++) {
            scanf("%d", &num[i]);
        }



        if (K == 1) {
            printf("Jolly\n");
        }

        else if(K == 2 && abs(num[0] - num[1]) == 1) {
            printf("Jolly\n");
        }
        else if(K == 2 && abs(num[0] - num[1]) != 1) {
            printf("Not jolly\n");
        }

        else {
            for(i = 0; i < K - 1; i++) {
                sub[i] = abs(num[i] - num[i + 1]);

            }

            sort(sub, sub+(K-1));

            if(sub[0] = 1) {
                for (j = 0, flag = 0; j < K - 2; j++) {

                    if (sub[j] != sub[j+1] - 1) {

                        flag++;
                    }
                }


                if (flag == 0) {
                    printf("Jolly\n");

                }
                else {
                    printf("Not jolly\n");
                }
            }

            else {
                printf("Not jolly\n");
            }
        }

    }

    return 0;
}
