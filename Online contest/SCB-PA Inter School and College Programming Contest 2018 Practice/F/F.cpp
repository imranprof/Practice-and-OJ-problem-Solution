#include<iostream>
#include<math.h>
#include<cstdio>

const double pi = acos(-1);

using namespace std;

int main()
{
    int i, T;

    double C, r, ans;

    cin >> T;

    for(i = 1; i <= T; i++) {
        cin >> C;

        r = C / (2*pi);
        ans = 2 * r;

        printf("Case %d: %.3lf\n", i, ans);
    }

    return 0;
}
