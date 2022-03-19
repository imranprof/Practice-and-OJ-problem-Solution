#include<iostream>
#include<math.h>
#include<cstdio>

using namespace std;

const double pi = acos(-1);

int main()
{
    double L, W, r, red, green;
    int i, T;

    cin >> T;

    for(i = 1; i <= T; i++) {

        cin >> L;

        r = (L * (1/5.0));
        W = (L * (6/10.0));

        red = pi * (r * r);
        green = (L * W) - red;

        printf("%.2lf %.2lf\n", red, green);

    }

    return 0;
}
