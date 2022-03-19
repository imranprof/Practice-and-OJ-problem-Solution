#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
    int i, j, hi[100010], wid[100010], flag, tm, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d%d", &hi[i], &wid[i]);
    }

    if(n == 1){
        printf("YES\n");
    }
    else{
        tm = max(hi[0], wid[0]);

        for(i = 1, flag = 0; i < n; i++){
            if(tm >= hi[i] && tm >= wid[i]){
                flag += 1;
                tm = max(hi[i], wid[i]);
            }
            else if(tm >= hi[i] || tm >= wid[i]){
                flag += 1;
                if(hi[i] <= tm) tm = hi[i];
                else tm = wid[i];
            }
        }

        if(flag == n - 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}

