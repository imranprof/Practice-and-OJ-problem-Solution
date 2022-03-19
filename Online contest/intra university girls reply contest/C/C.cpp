#include<bits/stdc++.h>

using namespace std;

int main()
{
    double A, B, C, D, total, cost[5], ncost[5];

    int i, N, x;

    cin >> A >> B >> C >> D >> N;

    cost[0] = A * 4;
    cost[1] = B * 2;
    cost[2] = C * 1;
    cost[3] = D * 1 /2;

    for(i = 0; i < 4; i++) {
        ncost[i] = cost[i];
    }
    //cout << cost[3] << endl;

    sort(ncost, ncost + 4);

    if(ncost[0] == cost[3]) {
        if(N % 2 == 0) {
            total = (N / 2) * D;
        }

        else {
            x = N / 2;
            total = (x * D) + ncost[1];
        }
    }

    else {
        total = N * ncost[0];
    }

    printf("%.0lf\n", total);



    return 0;
}
