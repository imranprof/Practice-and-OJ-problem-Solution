#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, *a, sum, solve_day, i, n, cnt, sum2;

    cin >> N;
    a = (int*) malloc(N * sizeof(int));
    for(i = 0, sum = 0; i < N; i++) {
        cin >> a[i];
        sum = sum + a[i];
    }
    n = sum / 2;
    if(n * 2 != sum) {
        n = n + 1;
    }

    if(N == 1 ) {
            solve_day = 1;
        }


    else {
            for(i = 0, sum2 = 0, cnt = 0; i < N; i++) {
            sum2 = sum2 + a[i];
            if(sum2 >= n) {
                cnt++;
                if(cnt <= 1) {
                solve_day = i + 1;
                }
            }
        }
    }

    cout << solve_day <<endl;

    return 0;
}
